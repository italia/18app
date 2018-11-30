using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Http;
using System.Text;

namespace Italia.DiciottoApp.Utils
{
    public static class HttpClientFactory
    {
        public static HttpClient Builder(string clientId, string clientSecret, Cookie fedSecureToken = null, Cookie usernameToken = null)
        {
            HttpClient httpClient;

            if (fedSecureToken == null && usernameToken == null)
            {
                httpClient = new HttpClient();
            }
            else
            {
                Uri cookieUri = new Uri(Constants.SERVICE_HOST);
                HttpClientHandler httpClientHandler = new HttpClientHandler
                {
                    CookieContainer = new CookieContainer()
                };
                if (fedSecureToken != null)
                {
                    httpClientHandler.CookieContainer.Add(cookieUri, new Cookie { Name = fedSecureToken.Name, Value = fedSecureToken.Value });
                }
                if (usernameToken != null)
                {
                    httpClientHandler.CookieContainer.Add(cookieUri, new Cookie { Name = usernameToken.Name, Value = usernameToken.Value });
                }
                httpClient = new HttpClient(httpClientHandler);
            }

            httpClient.DefaultRequestHeaders.Add("X-IBM-Client-Id", clientId);
            httpClient.DefaultRequestHeaders.Add("X-IBM-Client-Secret", clientSecret);

            httpClient.MaxResponseContentBufferSize = 256000;

            return httpClient;
        }

        public static HttpClient Builder(string clientId, string clientSecret, string fedSecureTokenValue)
        {
            return Builder(clientId, clientSecret, new Cookie { Name = Constants.COOKIES_SECURE_TOKEN, Value = fedSecureTokenValue });
        }
    }
}
