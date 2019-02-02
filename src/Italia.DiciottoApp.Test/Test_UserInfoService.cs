using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using System.Collections.Generic;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Test
{
    [TestClass]
    public class Test_UserInfoService
    {
        private readonly UserInfoService userInfoService;
        private Cookie fedSecureToken;

        public Test_UserInfoService()
        {
            userInfoService = new UserInfoService();

            fedSecureToken = new Cookie
            {
                Name = Constants.COOKIES_SECURE_TOKEN,
                Value = "UVpwdjbkficd7BD62wTFE8ROPBpCNdLjeiTS1opOsrYSrZwEy+zYbimu5r581OJvlvWYmTSUvFw69QGy3uaR/slac+27qwhDUx/Ep3dN1V/91M3Qd/0Gt9AySgQmRbvUaf2pQY8cHyLGR/qp4kQ/2dauQF//Sko4QpbS94Sv7yosLCIa0bZFdgJ4i4UPZd77x3kFIhjYFE2CR+Y/NwnxTa/svO89UuA27b+wCvdgp6K/eoW7qGTqhMCHioHl6j/gEuiYRIQ9tUOxmRhv9p/wTacWokatA0uJFriXJBsuP1iQvug+UZxtd9YJmwBdKoanYzwElaDovFFyhYna0XAIoXXrCEaO6NtFEPW8hReVO/9o9Ne++yP7xhp0DCDpmVZ7"
            };
        }

        #region GetBorsellinoAsync

        [TestMethod]
        public async Task Test_GetBorsellinoAsync_FailOnWrongClientIdCredentials()
        {
            userInfoService.ClientId = "wrong_client_id";

            var getBorsellinoServiceResult = await userInfoService.GetBorsellinoAsync();

            Assert.IsFalse(getBorsellinoServiceResult.Success);
            Assert.AreEqual(1, getBorsellinoServiceResult.Log.Count);

            var actualStatusCode = getBorsellinoServiceResult.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.Unauthorized, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_GetBorsellinoAsync_FailOnWrongClientSecretCredentials()
        {
            userInfoService.ClientSecret = "wrong_client_secret";

            var result = await userInfoService.GetBorsellinoAsync();

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.Unauthorized, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_GetBorsellinoAsync_Success()
        {
            Settings.FEDSecureTokenValue = fedSecureToken.Value;

            var result = await userInfoService.GetBorsellinoAsync();

            Assert.IsTrue(result.Success);
            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
        }

        #endregion

        #region SetPresaVisioneAsync

        [TestMethod]
        public async Task Test_SetPresaVisioneAsync_Success()
        {
            var beneficiarioBean = new BeneficiarioBean
            {
                IdBeneficiario = null,
                CodiceFiscale = "RSSMRA00A01H501C",
                AnnoRif = "2018",
                Cognome = "Rossi",
                Nome = "Mario",
                Sesso = null,
                DataNascita = new DateTime(2000, 1, 1),
                ComuneNascita = null,
                ProvinciaNascita = null,
                ComuneResidenza = null,
                ProvinciaResidenza = null,
                CapResidenza = null,
                IndirizzoResidenza = null,
                Cellulare = "33312312312",
                Email = "nick@prova.it",
                RifPiattaformaSocial = null,
                FlagAccettazionePrivacy = "1",
                DataInserimento = null,
                DataAggiornamento = null,
                StrDataNascita = "01/01/2000",
                FlagSinonimoRegistrato = false,
                BorsellinoBean = null,
                SpidBean = null,
                ErrorCode = 0
            };

            //"idBeneficiario":null,
            //"codiceFiscale":"RSSMRA00A01H501C",
            //"annoRif":"2018",
            //"cognome":"Rossi",
            //"nome":"Mario",
            //"sesso":null,
            //"dataNascita":946681200000,
            //"comuneNascita":"Roma",
            //"provinciaNascita":null,
            //"comuneResidenza":null,
            //"provinciaResidenza":null,
            //"capResidenza":null,
            //"indirizzoResidenza":null,
            //"cellulare":"3331231231",
            //"email":"nick@prova.it",
            //"rifPiattaformaSocial":null,
            //"flagAccettazionePrivacy":null,
            //"dataInserimento":null,
            //"dataAggiornamento":null,
            //"strDataNascita":"01/01/2000",
            //"flagSinonimoRegistrato":false,
            //"borsellinoBean":null,
            //"spidBean":null
            //"errorCode":0,

            var result = await userInfoService.SetPresaVisioneAsync(beneficiarioBean, fedSecureToken, confirmed: true);

            Assert.IsTrue(result.Success);
            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
        }

        #endregion

    }
}
