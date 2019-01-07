using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net;
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
    public class VouchersService : IVouchersService
    {
        HttpClient httpClient;

        public string ClientId { get; set; } = Keys.X_IBM_ClientId;

        public string ClientSecret { get; set; } = Keys.X_IBM_ClientSecret;

        public async Task<IEnumerable<Voucher>> GetUserVouchersAsync(Cookie fedSecureToken, bool spent, int page = 0, int pageItems = 100, CancellationToken ct = default(CancellationToken))
        {
            List<Voucher> vouchers = new List<Voucher>();

            // Check for cancellation
            if (ct.IsCancellationRequested)
            {
                Debug.WriteLine("[RicercaStoreByFilterAsync] Cancellation requested during task execution.");
                ct.ThrowIfCancellationRequested();
            }

            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, fedSecureToken);
            var serviceResult = new ServiceResult<VoucherByBeneficiarioBean>();

            try
            {
                string servicePath = spent ? "listaVoucherSpesi" : "listaVoucherDaSpendere";
                var response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/{servicePath}", ct);
                await serviceResult.ProcessAsync(response);
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"++++ RicercaStoreByFilterAsync error: {ex.Message}");
            }

            if (!serviceResult.Success)
            {
                Debug.WriteLine($"++++ RicercaStoreByFilterAsync result error: {serviceResult.FailureReason}");
                foreach (var response in serviceResult.Log)
                {
                    Debug.WriteLine($"  ++ service operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }

            // Check for cancellation
            if (ct.IsCancellationRequested)
            {
                Debug.WriteLine("[FindShopsAsync] Cancellation requested during task execution.");
                ct.ThrowIfCancellationRequested();
            }

            if (serviceResult.Success)
            {
                if (serviceResult.Result?.ListaVoucherFisico != null)
                {
                    foreach (var voucherBean in serviceResult.Result.ListaVoucherFisico)
                    {
                        vouchers.Add(Voucher.FromVoucherBean(voucherBean, online: false, spent: spent));
                    }
                }

                if (serviceResult.Result?.ListaVoucherOnline != null)
                {
                    foreach (var voucherBean in serviceResult.Result.ListaVoucherOnline)
                    {
                        vouchers.Add(Voucher.FromVoucherBean(voucherBean, online: true, spent: spent));
                    }
                }
            }

            return vouchers;
        }

        public async Task<ServiceResult<VoucherBean>> CreateVoucherAsync(Cookie fedSecureToken, Categoria categoria, Prodotto prodotto, double valore, bool online)
        {
            if (categoria == null)
            {
                throw new ArgumentNullException("categoria");
            }

            if (prodotto == null)
            {
                throw new ArgumentNullException("prodotto");
            }

            if (valore <= 0 || valore > 500)
            {
                throw new ArgumentOutOfRangeException("valore");
            }

            VoucherBean voucherBean = new VoucherBean
            {
                AmbitoBean = AmbitoBeanFromCategoria(categoria),
                BeneBean = BeneBeanFromProdotto(prodotto),
                BeneficiarioBean = Settings.GetBeneficiario(),
                ImportoRichiesto = valore
            };

            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, fedSecureToken);
            var createVoucherServiceResult = new ServiceResult<VoucherBean>();

            try
            {
                // Creazione del body content
                string ricercaStoreBeanJson = JsonConvert.SerializeObject(voucherBean);
                StringContent httpContent = new StringContent(ricercaStoreBeanJson, Encoding.UTF8, "application/json");

                // Recupero i dati della ricerca store
                var response = await httpClient.PostAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/insVoucher{(online ? "Online" : "Fisico")}", httpContent);
                await createVoucherServiceResult.ProcessAsync(response);
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"++++ CreateVoucherAsync error: {ex.Message}");
            }

            if (!createVoucherServiceResult.Success)
            {
                Debug.WriteLine($"++++ CreateVoucherAsync result error: {createVoucherServiceResult.FailureReason}");
                foreach (var response in createVoucherServiceResult.Log)
                {
                    Debug.WriteLine($"  ++ service operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }

            return createVoucherServiceResult;
        }

        public async Task<ServiceResult<AnnullaVoucherBean>> DeleteVoucherAsync(Cookie fedSecureToken, Voucher voucher)
        {
            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, fedSecureToken);
            var deleteVoucherServiceResult = new ServiceResult<AnnullaVoucherBean>();

            try
            {
                // Recupero i dati della ricerca store
                var response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/gestioneVoucher/annullaVoucherFisico/{voucher.Id}");
                await deleteVoucherServiceResult.ProcessAsync(response);
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"++++ DeleteVoucherAsync error: {ex.Message}");
            }

            if (!deleteVoucherServiceResult.Success)
            {
                Debug.WriteLine($"++++ DeleteVoucherAsync result error: {deleteVoucherServiceResult.FailureReason}");
                foreach (var response in deleteVoucherServiceResult.Log)
                {
                    Debug.WriteLine($"  ++ service operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }

            return deleteVoucherServiceResult;
        }

        #region Utils

        public AmbitoBean AmbitoBeanFromCategoria(Categoria categoria)
        {
            return new AmbitoBean
            {
                IdAmbito = categoria?.Id ?? null
            };
        }

        private BeneBean BeneBeanFromProdotto(Prodotto prodotto)
        {
            return new BeneBean
            {
                IdBene = prodotto?.Id ?? null
            };
        }

        #endregion
    }
}
