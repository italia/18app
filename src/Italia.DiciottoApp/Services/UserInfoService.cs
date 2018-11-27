using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
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
            Uri cookieUri = new Uri(Constants.SERVICE_HOST);
            HttpClientHandler httpClientHhandler = new HttpClientHandler
            {
                CookieContainer = new CookieContainer()
            };
            httpClientHhandler.CookieContainer.Add(cookieUri, new Cookie { Name = Constants.COOKIES_SECURE_TOKEN, Value = Settings.FEDSecureToken });
            httpClient = new HttpClient(httpClientHhandler)
            {
                MaxResponseContentBufferSize = 256000
            };
            httpClient.DefaultRequestHeaders.Add("X-IBM-Client-Id", ClientId);
            httpClient.DefaultRequestHeaders.Add("X-IBM-Client-Secret", ClientSecret);

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
    }
}