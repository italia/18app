using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Services
{
    public class ShopsService : IShopsService
    {
        HttpClient httpClient;

        public string ClientId { get; set; } = Keys.X_IBM_ClientId;

        public string ClientSecret { get; set; } = Keys.X_IBM_ClientSecret;

        public async Task<Shop> GetShopByIdAsync(string shopId)
        {
            if (string.IsNullOrWhiteSpace(shopId))
            {
                throw new ArgumentNullException("shopId");
            }

            // TODO: Get shop from 18App REST Service
            // httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, Settings.FEDSecureToken);

            var fakeShopsService = new FakeShopsService();
            return await fakeShopsService.GetShopByIdAsync(shopId);
        }

        public async Task<ServiceResult<RicercaStoreResultOutputBean>> RicercaStoreByFilterAsync(RicercaStoreBean ricercaStoreBean, CancellationToken ct = default(CancellationToken))
        {
            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret);
            var getRicercaStoreResultOutput = new ServiceResult<RicercaStoreResultOutputBean>();

            try
            {
                // Creazione del body content
                string ricercaStoreBeanJson = JsonConvert.SerializeObject(ricercaStoreBean);
                StringContent httpContent = new StringContent(ricercaStoreBeanJson, Encoding.UTF8, "application/json");

                // Recupero i dati della ricerca store
                var response = await httpClient.PostAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/unsecured/18enne/ricercaStoreByFilter", httpContent, ct);
                await getRicercaStoreResultOutput.ProcessAsync(response);
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"++++ RicercaStoreByFilterAsync error: {ex.Message}");
            }

            if (!getRicercaStoreResultOutput.Success)
            {
                Debug.WriteLine($"++++ GetBorsellino result error: {getRicercaStoreResultOutput.FailureReason}");
                foreach (var response in getRicercaStoreResultOutput.Log)
                {
                    Debug.WriteLine($"  ++ service operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }

            return getRicercaStoreResultOutput;
        }

        public async Task<IEnumerable<Shop>> NearToLocationShopsAsync(Location location, int maxItems = 10)
        {
            if (location == null)
            {
                throw new ArgumentNullException("location");
            }

            List<Shop> shops = new List<Shop>();

            //var fakeShopsService = new FakeShopsService();
            //shops = await fakeShopsService.NearToLocationShopsAsync(location, maxItems);

            // Get stores from 18App REST Service

            // TipoStore is required!
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean
            {
                TipoStore = "F",
                Latitudine = location.Latitude,
                Longitudine = location.Longitude,
                Limit = maxItems
            };

            var ricercaStoreByFilterResult = await RicercaStoreByFilterAsync(ricercaStoreBean);

            if (!ricercaStoreByFilterResult.Success)
            {
                shops = null; // or better return an empty list, i.e. shops ?
            }
            else
            {
                Shop lastShop = null;
                List<Categoria> categorie = null;
                foreach (var store in ricercaStoreByFilterResult.Result.ListaStoreResultBean)
                {
                    string storeId = store.Id.ToString();

                    if(lastShop != null && lastShop.Id != storeId)
                    {
                        // Update the category property of the shop
                        lastShop.Categorie = categorie;

                        // Add the last shop to the shop list because the actual has a different id
                        shops.Add(lastShop);

                        // Create a new category list
                        categorie = new List<Categoria>
                        {
                            CategoriaFromIdAmbito(store.IdAmbito)
                        };

                        // Create a new shop
                        lastShop = new Shop
                        {
                            Id = storeId,
                            Title = store.Nome,
                            Address = new Address
                            {
                                Cap = store.Cap,
                                Comune = store.Comune,
                                Indirizzo = store.Indirizzo,
                                SiglaProvincia = store.Provincia
                            },
                            DistanceFromUser = CalcDistanceFromUser(location, store.Latitudine, store.Longitudine),
                            IsOnline = false,
                            Url = store.UrlSito,
                            Location = (store.Latitudine != null && store.Longitudine != null) ? new Location(store.Latitudine.Value, store.Longitudine.Value) : null,
                        };
                    }
                    else
                    {
                        categorie.Add(CategoriaFromIdAmbito(store.IdAmbito));
                    }
                }

                // Add the last shop
                if (lastShop != null)
                {
                    // Update the category property of the shop
                    lastShop.Categorie = categorie;

                    // Add the last shop to the shop list because the actual has a different id
                    shops.Add(lastShop);
                }
            }

            return shops;
        }

        public static Categoria CategoriaFromIdAmbito(long? idAmbito)
        {
            return (idAmbito != null) ? Categoria.List.FirstOrDefault(c => c.Id == idAmbito) : null;
        }

        private static string CalcDistanceFromUser(Location location, double? latitudine, double? longitudine)
        {
            if (latitudine == null || longitudine == null)
            {
                return string.Empty;
            }

            var mt = 1000 * location.CalculateDistance(latitudine.Value, longitudine.Value, DistanceUnits.Kilometers);

            return (mt < 1000) ? $"{mt} m" : string.Format("{0:#.00} km", mt / 1000.0);
        }

        public async Task<IEnumerable<Shop>> OnlineShopsAsync(Categoria category, int maxItems = 10)
        {
            IEnumerable<Shop> shops;

            // TODO: Get shops from 18App REST Service
            // httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, Settings.FEDSecureToken);

            var fakeShopsService = new FakeShopsService();
            shops = await fakeShopsService.OnlineShopsAsync(category, maxItems);

            return shops;
        }

        public async Task<IEnumerable<Shop>> FindShopsAsync(Categoria category, Municipality municipality, string text = null, int maxItems = 10, CancellationToken ct = default(CancellationToken))
        {
            IEnumerable<Shop> shops;

            // TODO: Get shops from 18App REST Service
            // httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, Settings.FEDSecureToken);

            var fakeShopsService = new FakeShopsService();
            shops = await fakeShopsService.FindShopsAsync(category, municipality, text.Trim(), maxItems, ct);

            return shops;
        }

        public IEnumerable<Municipality> FindMunicipality(string partialName, int maxItems = 100)
        {
            var municipalities = Municipality.List;

            if (!string.IsNullOrWhiteSpace(partialName))
            {
                municipalities = municipalities.Where(m => m.Name.Contains(partialName.Trim()));
            }

            return municipalities.Take(maxItems);
        }

    }
}
