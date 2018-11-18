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
    public class LoginService : ILoginService
    {
        HttpClient httpClient;

        public string ClientId { get; set; } = Keys.X_IBM_ClientId;

        public string ClientSecret { get; set; } = Keys.X_IBM_ClientSecret;

        public async Task<LoginResult> LoginAsync(Cookie cookie)
        {
            Uri cookieUri = new Uri(Constants.SERVICE_HOST);
            HttpClientHandler httpClientHhandler = new HttpClientHandler
            {
                CookieContainer = new CookieContainer()
            };
            httpClientHhandler.CookieContainer.Add(cookieUri, new Cookie { Name = cookie.Name, Value = cookie.Value });
            httpClient = new HttpClient(httpClientHhandler)
            {
                MaxResponseContentBufferSize = 256000
            };
            httpClient.DefaultRequestHeaders.Add("X-IBM-Client-Id", ClientId);
            httpClient.DefaultRequestHeaders.Add("X-IBM-Client-Secret", ClientSecret);

            LoginResult loginResult = new LoginResult();
            try
            {
                var response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/aggiornaBeneficiarioBySPID");
                loginResult.Process(response, skipInternalError: true);

                response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BonusLoginWEB/jaxrs/userData");
                loginResult.Process(response);

                response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/beneficiario");
                loginResult.Process(response);

                var content = await response.Content.ReadAsStringAsync();
                var beneficiarioBean = JsonConvert.DeserializeObject<BeneficiarioBean>(content);

                if (beneficiarioBean.ErrorCode == 5)
                {
                    // Login failed: è scaduto il periodo di registrazione
                    // TODO: c'è da fare qualche chiamata di logout?

                    loginResult.RegistrationTimeEnded();
                }
                else if (beneficiarioBean.IdBeneficiario != null)
                {
                    // Procedo col LOGIN
                    response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/beneficiarioOperativo");
                    loginResult.Process(response);

                    content = await response.Content.ReadAsStringAsync();
                    var checkBeneficiarioOperativoBean = JsonConvert.DeserializeObject<CheckBeneficiarioOperativoBean>(content);

                    if (checkBeneficiarioOperativoBean.FlagOperativo == false)
                    {
                        // Beneficiario non operativo
                        loginResult.NonOperatingBeneficiary();
                    }
                    else
                    {
                        // Recupero i dati del borsellino
                        response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/borsellino");
                        loginResult.Process(response);

                        content = await response.Content.ReadAsStringAsync();
                        var borsellinoBean = JsonConvert.DeserializeObject<BorsellinoBean>(content);

                        // Aggiorno il borsellino del beneficiario
                        if (beneficiarioBean != null)
                        {
                            beneficiarioBean.BorsellinoBean = borsellinoBean;
                        }

                        loginResult.SetBeneficiary(beneficiarioBean);
                    }
                }
                else
                {
                    // Procedo con la REGISTRAZIONE
                    response = await httpClient.GetAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/beneficiarioByWsAnagrafica");
                    loginResult.Process(response);

                    content = await response.Content.ReadAsStringAsync();
                    beneficiarioBean = JsonConvert.DeserializeObject<BeneficiarioBean>(content);

                    string body = JsonConvert.SerializeObject(beneficiarioBean);
                    var stringContent = new StringContent(body, UnicodeEncoding.UTF8, "application/json");

                    response = await httpClient.PostAsync($"{Constants.SERVICE_ENDPOINT}/BONUSWS/rest/secured/18enne/verificaPeriodoRegistrazioneBeneficiario", stringContent);
                    loginResult.Process(response);

                    content = await response.Content.ReadAsStringAsync();
                    var registrazioneIsOk = JsonConvert.DeserializeObject<bool>(content);

                    if (registrazioneIsOk)
                    {
                        loginResult.SetBeneficiary(beneficiarioBean);
                    }
                    else
                    {
                        loginResult.RegistrationCheckFailed();
                    }

                }
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"++++ Login error: {ex.Message}");
                foreach (var response in loginResult.Log)
                {
                    Debug.WriteLine($"  ++ Login operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }
            return loginResult;
        }

    }
}
