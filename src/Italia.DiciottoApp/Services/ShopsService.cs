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

        internal async Task<ServiceResult<RicercaStoreResultOutputBean>> RicercaStoreByFilterAsync(RicercaStoreBean ricercaStoreBean, CancellationToken ct = default(CancellationToken))
        {
            Debug.WriteLine($"°°°°°°°°°°°°°°°°° [RicercaStoreByFilterAsync] started");

            // Check for cancellation
            if (ct.IsCancellationRequested)
            {
                Debug.WriteLine("[RicercaStoreByFilterAsync] Cancellation requested during task execution.");
                ct.ThrowIfCancellationRequested();
            }

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
                Debug.WriteLine($"++++ RicercaStoreByFilterAsync result error: {getRicercaStoreResultOutput.FailureReason}");
                foreach (var response in getRicercaStoreResultOutput.Log)
                {
                    Debug.WriteLine($"  ++ service operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }

            return getRicercaStoreResultOutput;
        }

        public async Task<IEnumerable<Shop>> NearToLocationShopsAsync(Location location, int maxItems = 10, CancellationToken ct = default(CancellationToken))
        {
            Debug.WriteLine($"°°°°°°°°°°°°°°°°° [NearToLocationShopsAsync] started");

            // var fakeShopsService = new FakeShopsService();
            // shops = await fakeShopsService.NearToLocationShopsAsync(location, maxItems);
            // return shops;

            List<Shop> shops = new List<Shop>();

            if (location == null)
            {
                return shops;
            }

            // Check for cancellation
            if (ct.IsCancellationRequested)
            {
                Debug.WriteLine("[FindShopsAsync] Cancellation requested during task execution.");
                ct.ThrowIfCancellationRequested();
            }

            // Get stores from 18App REST Service
            // TipoStore is required! ("F" for physical store | "O" for online store)
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean
            {
                TipoStore = "F",
                Latitudine = location.Latitude,
                Longitudine = location.Longitude,
                Limit = maxItems
            };

            var ricercaStoreByFilterResult = await RicercaStoreByFilterAsync(ricercaStoreBean, ct);

            if (ricercaStoreByFilterResult.Success && ricercaStoreByFilterResult?.Result?.ListaStoreResultBean != null)
            {
                // Check for cancellation
                if (ct.IsCancellationRequested)
                {
                    Debug.WriteLine("[FindShopsAsync] Cancellation requested during task execution.");
                    ct.ThrowIfCancellationRequested();
                }

                Shop lastShop = null;
                List<Categoria> categorie = null;
                foreach (var store in ricercaStoreByFilterResult.Result.ListaStoreResultBean)
                {
                    string storeId = store.Id.ToString();

                    if (lastShop == null)
                    {
                        // Create a new category list
                        categorie = new List<Categoria> { Categoria.FromIdAmbito(store.IdAmbito) };

                        // Create a new shop
                        lastShop = ShopBuilder(store, location, online: false);
                    }
                    else if(lastShop != null && lastShop.Id != storeId)
                    {
                        // Update the category property of the shop
                        lastShop.Categorie = categorie;

                        // Add the last shop to the shop list because the actual has a different id
                        shops.Add(lastShop);

                        // Create a new category list
                        categorie = new List<Categoria> { Categoria.FromIdAmbito(store.IdAmbito) };

                        // Create a new shop
                        lastShop = ShopBuilder(store, location, online: false);
                    }
                    else
                    {
                        categorie.Add(Categoria.FromIdAmbito(store.IdAmbito));
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

        public async Task<IEnumerable<Shop>> OnlineShopsAsync(Categoria category, int maxItems = 10, CancellationToken ct = default(CancellationToken))
        {
            // var fakeShopsService = new FakeShopsService();
            // shops = await fakeShopsService.OnlineShopsAsync(category, maxItems);
            // return shops;

            List<Shop> shops = new List<Shop>();

            // Check for cancellation
            if (ct.IsCancellationRequested)
            {
                Debug.WriteLine("[FindShopsAsync] Cancellation requested during task execution.");
                ct.ThrowIfCancellationRequested();
            }

            // Get stores from 18App REST Service
            // TipoStore is required! ("F" for physical store | "O" for online store)
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean
            {
                TipoStore = "O",
                IdAmbito = category?.Id ?? null,
                Start = 0,
                Limit = maxItems
            };

            var ricercaStoreByFilterResult = await RicercaStoreByFilterAsync(ricercaStoreBean);

            if (ricercaStoreByFilterResult.Success && ricercaStoreByFilterResult.Result != null)
            {
                // Check for cancellation
                if (ct.IsCancellationRequested)
                {
                    Debug.WriteLine("[FindShopsAsync] Cancellation requested during task execution.");
                    ct.ThrowIfCancellationRequested();
                }

                Shop lastShop = null;
                List<Categoria> categorie = null;
                foreach (var store in ricercaStoreByFilterResult.Result.ListaStoreResultBean)
                {
                    string storeId = store.Id.ToString();

                    if (lastShop == null)
                    {
                        // Create a new category list
                        categorie = new List<Categoria> { Categoria.FromIdAmbito(store.IdAmbito) };

                        // Create a new shop
                        lastShop = ShopBuilder(store, online: true);
                    }
                    else if (lastShop != null && lastShop.Id != storeId)
                    {
                        // Update the category property of the shop
                        lastShop.Categorie = categorie;

                        // Add the last shop to the shop list because the actual has a different id
                        shops.Add(lastShop);

                        // Create a new category list
                        categorie = new List<Categoria> { Categoria.FromIdAmbito(store.IdAmbito) };

                        // Create a new shop
                        lastShop = ShopBuilder(store, online: true);
                    }
                    else
                    {
                        categorie.Add(Categoria.FromIdAmbito(store.IdAmbito));
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

        public async Task<IEnumerable<Shop>> FindShopsAsync(Categoria category, Municipality municipality, string text = null, int maxItems = 10, CancellationToken ct = default(CancellationToken))
        {
            //var fakeShopsService = new FakeShopsService();
            //shops = await fakeShopsService.FindShopsAsync(category, municipality, text.Trim(), maxItems, ct);
            //return shops;

            // Check for cancellation
            if (ct.IsCancellationRequested)
            {
                Debug.WriteLine("[FindShopsAsync] Cancellation requested during task execution.");
                ct.ThrowIfCancellationRequested();
            }

            List<Shop> shops = new List<Shop>();

            // Get stores from 18App REST Service

            // TipoStore is required! ("F" for physical store | "O" for online store)
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean
            {
                TipoStore = "F",
                IdAmbito = category?.Id ?? null,
                Comune = municipality?.Name ?? null,
                NomeEsercenteOIndirizzo = string.IsNullOrEmpty(text) ? null : text,
                Start = 0,
                Limit = maxItems
            };

            var ricercaStoreByFilterResult = await RicercaStoreByFilterAsync(ricercaStoreBean, ct);

            if (ricercaStoreByFilterResult.Success && ricercaStoreByFilterResult?.Result?.ListaStoreResultBean != null)
            {
                // Check for cancellation
                if (ct.IsCancellationRequested)
                {
                    Debug.WriteLine("[FindShopsAsync] Cancellation requested during task execution.");
                    ct.ThrowIfCancellationRequested();
                }

                Shop lastShop = null;
                List<Categoria> categorie = null;
                foreach (var store in ricercaStoreByFilterResult.Result.ListaStoreResultBean)
                {
                    string storeId = store.Id.ToString();

                    if (lastShop == null)
                    {
                        // Create a new category list
                        categorie = new List<Categoria> { Categoria.FromIdAmbito(store.IdAmbito) };

                        // Create a new shop
                        lastShop = ShopBuilder(store, online: false);
                    }
                    else if (lastShop != null && lastShop.Id != storeId)
                    {
                        // Update the category property of the shop
                        lastShop.Categorie = categorie;

                        // Add the last shop to the shop list because the actual has a different id
                        shops.Add(lastShop);

                        // Create a new category list
                        categorie = new List<Categoria> { Categoria.FromIdAmbito(store.IdAmbito) };

                        // Create a new shop
                        lastShop = ShopBuilder(store, online: false);
                    }
                    else
                    {
                        categorie.Add(Categoria.FromIdAmbito(store.IdAmbito));
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

        public IEnumerable<Municipality> FindMunicipality(string partialName, int maxItems = 100)
        {
            var municipalities = Municipality.List;

            if (!string.IsNullOrWhiteSpace(partialName))
            {
                municipalities = municipalities.Where(m => m.Name.Contains(partialName.Trim()));
            }

            return municipalities.Take(maxItems);
        }

        #region Utilities

        private Shop ShopBuilder(RicercaStoreResultBean store, Location location = null, bool online = false)
        {
            return new Shop
            {
                Id = store.Id.ToString(),
                Title = store.Nome,
                Address = new Address
                {
                    Cap = store.Cap,
                    Comune = store.Comune,
                    Indirizzo = store.Indirizzo,
                    SiglaProvincia = store.Provincia
                },
                DistanceFromUser = CalcDistanceFromUser(location, store.Latitudine, store.Longitudine),
                IsOnline = online,
                Url = store.UrlSito,
                Location = (store.Latitudine == null || store.Longitudine == null) ? null : new Location(store.Latitudine.Value, store.Longitudine.Value)
            };
        }

        private string CalcDistanceFromUser(Location location, double? latitudine, double? longitudine)
        {
            if (location == null || latitudine == null || longitudine == null)
            {
                return string.Empty;
            }

            var mt = 1000 * location.CalculateDistance(latitudine.Value, longitudine.Value, DistanceUnits.Kilometers);

            return (mt < 1000) ? $"{mt} m" : string.Format("{0:#.00} km", mt / 1000.0);
        }

        #endregion

    }
}
