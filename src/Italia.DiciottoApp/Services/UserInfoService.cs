using System;
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
            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, Settings.FEDSecureTokenValue);

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

        public async Task<ServiceResult<BeneficiarioBean>> SetPresaVisioneAsync(BeneficiarioBean beneficiarioBean, Cookie fedSecureToken, bool confirmed)
        {
            beneficiarioBean.FlagAccettazionePrivacy = confirmed ? "1" : "0";
            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, fedSecureToken);
            var acceptPrivacyResult = new ServiceResult<BeneficiarioBean>();

            try
            {
                // Creazione del body content
                string body = JsonConvert.SerializeObject(beneficiarioBean);
                StringContent httpContent = new StringContent(body, Encoding.UTF8, "application/json");

                // Recupero i dati della ricerca store
                var response = await httpClient.PostAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/insDatiConfigurazioneBeneficiario", httpContent);
                await acceptPrivacyResult.ProcessAsync(response);

                if (!acceptPrivacyResult.Success)
                {
                    Debug.WriteLine($"++++ SetPresaVisioneAsync result error: {acceptPrivacyResult.FailureReason}");
                    foreach (var httpResponseMessage in acceptPrivacyResult.Log)
                    {
                        Debug.WriteLine($"  ++ service operation: {httpResponseMessage.RequestMessage.RequestUri} , result: {httpResponseMessage.StatusCode}");
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"++++ SetPresaVisioneAsync error: {ex.Message}");
            }

            return acceptPrivacyResult;
        }

        public async Task<ServiceResult<string>> GetPresaVisioneAsync(Cookie fedSecureToken = null)
        {
            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, fedSecureToken);

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