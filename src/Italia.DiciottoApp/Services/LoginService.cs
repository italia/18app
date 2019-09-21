﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;

namespace Italia.DiciottoApp.Services
{
    public class LoginService : ILoginService
    {
        HttpClient httpClient;

        public string ClientId { get; set; } = Settings.IsProductionEnvironment ? Keys.X_IBM_ClientId_ProdEnv : Keys.X_IBM_ClientId_TestEnv;

        public string ClientSecret { get; set; } = Settings.IsProductionEnvironment? Keys.X_IBM_ClientSecret_ProdEnv : Keys.X_IBM_ClientSecret_TestEnv;

        public async Task<LoginResult> LoginAsync(Cookie fedSecureToken, Cookie userToken)
        {
            String serviceEndpoint = Settings.IsProductionEnvironment ? Constants.SERVICE_ENDPOINT_ProdEnv : Constants.SERVICE_ENDPOINT_TestEnv;

            httpClient = HttpClientFactory.Builder(ClientId, ClientSecret, fedSecureToken, userToken);

            LoginResult loginResult = new LoginResult();

            try
            {
                var response = await httpClient.GetAsync($"{serviceEndpoint}/BONUSWS/rest/secured/18enne/aggiornaBeneficiarioBySPID");
                loginResult.Process(response); // loginResult.Process(response, skipInternalError: true);

                response = await httpClient.GetAsync($"{serviceEndpoint}/BonusLoginWEB/jaxrs/userData");
                loginResult.Process(response);

                response = await httpClient.GetAsync($"{serviceEndpoint}/BONUSWS/rest/secured/18enne/beneficiario");
                loginResult.Process(response);

                var content = await response.Content.ReadAsStringAsync();
                var beneficiarioBean = JsonConvert.DeserializeObject<BeneficiarioBean>(content);

                if (beneficiarioBean != null)
                {
                    // Procedo con il LOGIN
                    if (beneficiarioBean.ErrorCode == 5)
                    {
                        // Login failed: è scaduto il periodo di registrazione
                        loginResult.RegistrationTimeEnded();
                    }
                    else if (beneficiarioBean.IdBeneficiario == null)
                    {
                        // Unable to get beneficiario
                        loginResult.UnavailableBeneficiary();
                    }
                    else
                    {
                        // Proseguo col LOGIN
                        response = await httpClient.GetAsync($"{serviceEndpoint}/BONUSWS/rest/secured/18enne/beneficiarioOperativo");
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
                            response = await httpClient.GetAsync($"{serviceEndpoint}/BONUSWS/rest/secured/18enne/borsellino");
                            loginResult.Process(response);

                            content = await response.Content.ReadAsStringAsync();
                            var borsellinoBean = JsonConvert.DeserializeObject<BorsellinoBean>(content);

                            if (borsellinoBean == null)
                            {
                                loginResult.UnavailableWallet();
                            }
                            else
                            {
                                // Aggiorno il borsellino del beneficiario
                                beneficiarioBean.BorsellinoBean = borsellinoBean;
                                loginResult.SetBeneficiary(beneficiarioBean);
                            }
                        }
                    }
                }
                else
                {
                    // Procedo con la REGISTRAZIONE
                    response = await httpClient.GetAsync($"{serviceEndpoint}/BONUSWS/rest/secured/18enne/beneficiarioByWsAnagrafica");
                    loginResult.Process(response);

                    content = await response.Content.ReadAsStringAsync();
                    beneficiarioBean = JsonConvert.DeserializeObject<BeneficiarioBean>(content);

                    string body = JsonConvert.SerializeObject(beneficiarioBean);
                    var stringContent = new StringContent(body, UnicodeEncoding.UTF8, "application/json");

                    response = await httpClient.PostAsync($"{serviceEndpoint}/BONUSWS/rest/secured/18enne/verificaPeriodoRegistrazioneBeneficiario", stringContent);
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
            catch (LoginException loginException)
            {
                Debug.WriteLine($"+---- Login service result error: {loginException.Message}");
                foreach (var response in loginResult.Log)
                {
                    Debug.WriteLine($"  ++ Login operation: {response.RequestMessage.RequestUri} , result: {response.StatusCode}");
                }
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"+---- Login service error: {ex.Message}");
            }

            return loginResult;
        }

    }
}
