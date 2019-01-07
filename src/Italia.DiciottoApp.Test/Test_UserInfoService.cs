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
                Value = "yA9NFyc53ffzN1E4/aZRBDakNH6InSFCuADdRdO8lEDj2rmP5Kyir71CdcWfc6xOfIcF+Sj9HbSAAnM8wKTFfhUHaEJKfg8u5fmb28PU2ALOY5cdzT7lLCzIdrbIwkwFQOs39e+lnSWE0/aBAsrFnt1PyPwPc7/7JR49LWatKftJvLgkj/uN33ptzhrL31WkNaEZbj+eSZkNq2oEmTpNtG/Gzg4/LUrHFSvvr36bfD4fcUcfCbiWkDsNxeFeLKvhAZmrbZlZ8zWlOyrt74qTIhMJXeBxWXAUhM43Vzi7CNV72hwasXFzmTg8d8HshBVxUvrz2su1oOxqtcF/VAR2U3sECwpDePmr6FQb2gIqO3wfcQdU2c9a3xHKqo6rFeej"
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
            Settings.FEDSecureToken = fedSecureToken.Value;

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
            Settings.FEDSecureToken = fedSecureToken.Value;

            Settings.SetBeneficiario(new BeneficiarioBean
            {
                //IdBeneficiario = 245,
                //CodiceFiscale = "MRAVRD99A01H501M",
                //Nome = "Marco",
                //Cognome = "Rossi",
                //AnnoRif = "2017",
                //Email = "marcorossi@prova.it"
            });

            var result = await userInfoService.SetPresaVisioneAsync(confirmed: true);

            Assert.IsTrue(result.Success);
            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
        }

        #endregion

        #region SetPresaVisioneAsync

        [TestMethod]
        public async Task Test_GetPresaVisioneAsync_Success()
        {
            Settings.FEDSecureToken = fedSecureToken.Value;

            var result = await userInfoService.GetPresaVisioneAsync();

            Assert.IsTrue(result.Success);
            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
            Assert.IsTrue(result.Result == "0" || result.Result == "1");
        }

        #endregion

    }
}
