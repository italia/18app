using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;

namespace Italia.DiciottoApp.Services
{
    public class UserInfoService : IUserInfoService
    {
        HttpClient httpClient;

        public string ClientId { get; set; } = Keys.X_IBM_ClientId;

        public string ClientSecret { get; set; } = Keys.X_IBM_ClientSecret;

        public async Task<ServiceResult<BorsellinoBean>> GetBorsellinoAsync()
        {
            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, Settings.FEDSecureToken);

            var getBorsellinoResult = new ServiceResult<BorsellinoBean>();
            try
            {
                // Recupero i dati del borsellino
                var response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/borsellino");
                await getBorsellinoResult.ProcessAsync(response);
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"++++ GetBorsellino error: {ex.Message}");
            }

            if (!getBorsellinoResult.Success)
            {
                Debug.WriteLine($"++++ GetBorsellino result error: {getBorsellinoResult.FailureReason}");
                foreach (var response in getBorsellinoResult.Log)
                {
                    Debug.WriteLine($"  ++ service operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }

            return getBorsellinoResult;
        }

        public async Task<ServiceResult<BeneficiarioBean>> SetPresaVisioneAsync(bool confirmed)
        {
            BeneficiarioBean beneficiarioBean = Settings.GetBeneficiario();
            beneficiarioBean.FlagAccettazionePrivacy = confirmed ? "1" : "0";

            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, Settings.FEDSecureToken);
            var serviceResult = new ServiceResult<BeneficiarioBean>();

            try
            {
                // Creazione del body content
                string ricercaStoreBeanJson = JsonConvert.SerializeObject(beneficiarioBean);
                StringContent httpContent = new StringContent(ricercaStoreBeanJson, Encoding.UTF8, "application/json");

                // Recupero i dati della ricerca store
                var response = await httpClient.PostAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/insDatiConfigurazioneBeneficiario", httpContent);
                await serviceResult.ProcessAsync(response);
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"++++ SetPresaVisioneAsync error: {ex.Message}");
            }

            if (!serviceResult.Success)
            {
                Debug.WriteLine($"++++ SetPresaVisioneAsync result error: {serviceResult.FailureReason}");
                foreach (var response in serviceResult.Log)
                {
                    Debug.WriteLine($"  ++ service operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }

            return serviceResult;
        }

        public async Task<ServiceResult<string>> GetPresaVisioneAsync()
        {
            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, Settings.FEDSecureToken);

            var getPresaVisioneResult = new ServiceResult<string>();
            try
            {
                // Recupero i dati del borsellino
                var response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/presaVisioneAppUfficiale");
                await getPresaVisioneResult.ProcessAsync(response);
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"++++ GetPresaVisione error: {ex.Message}");
            }

            if (!getPresaVisioneResult.Success)
            {
                Debug.WriteLine($"++++ GetPresaVisione result error: {getPresaVisioneResult.FailureReason}");
                foreach (var response in getPresaVisioneResult.Log)
                {
                    Debug.WriteLine($"  ++ service operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }

            return getPresaVisioneResult;
        }
    }
}