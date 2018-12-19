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
                Value = "6ojA3ymcbtNz4rkIc5ZpgmtQNiHOBKnhUfFapNa0E/QLuTi5Ic8gFJtgPnXlboBhzDaCX+00ndYNEEZUef6TVwj4sgM/fhwWaxXw9Q0k0jbHqSDWvNSTCMgtHyqdnPmSrvk3TeqAe7AZUHG+MpwtNa/GLfvMJCd9noAg4jyTlfhuO2UuTwpFDmoof3cDFWLZjUj150VjUCQNH62GRllEf0+9emx63ImazaWeAK7ikJXbGGjvlAmrhW926c9xv95wNN441GUOySeimsyHDBGC4eiqnDAYOtesDFw5lAMA/IsLOKXLiBblAprmak2uMdjostEuOAhjOCKv6gIs2QeNA7U/dxpQjaYd8+Ij6Fwd0EPhELQ2SRsy7dyWvZCmCCn8"
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
            Assert.AreEqual(HttpStatusCode.NotFound, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_GetBorsellinoAsync_FailOnWrongClientSecretCredentials()
        {
            userInfoService.ClientSecret = "wrong_client_secret";

            var result = await userInfoService.GetBorsellinoAsync();

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.NotFound, actualStatusCode);
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

    }
}
