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