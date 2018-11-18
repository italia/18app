using Italia.DiciottoApp.Services;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using System.Net;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Test
{
    [TestClass]
    public class Test_LoginService
    {
        private readonly LoginService loginService;
        private Cookie cookie;

        public Test_LoginService()
        {
            loginService = new LoginService();
            cookie = new Cookie
            {
                Name = "FEDSecureToken",
                Value = "zFxwZnrLsGuSxeeXH83gokL59E+BNJogh4q6WsKj0W57yZp6AlSBSgzSBENmOayFezP4PbHL9J2nkeq7h7DxEMbSItB/bgK2fmFRN52jzGQWojL0i3j/zWlAw+qfmwySa4IgUnAHM1IRZOFprPJ9qsX0N5E0tXNo3Xlx9KMqgbD0O2GLa820L4oPS3K7N4k33eBD5x+FthxEmmB3TTGOx7P4Q5wdNKJcdieGPvAZYk9bzrf9fNkdFmEj06tl3eTX/6xNYogaoWtODL0PvPwFDnEdM47653NQGdoXuMHw8He05CMYpzD7N4miG4pGB9Fsfpn90oYJRBljmrmD58BaLWuC90y8GPK06PIVtm3TnillqN+3kkhqshhpL6IdHs1h"
            };
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongClientIdCredentials()
        {
            loginService.ClientId = "wrong_client_id";

            var result = await loginService.LoginAsync(cookie);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.Unauthorized, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongClientSecretCredentials()
        {
            loginService.ClientSecret = "wrong_client_secret";

            var result = await loginService.LoginAsync(cookie);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.Unauthorized, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongCookie()
        {
            // The cookie value purposely contains a timed out value, don't change it
            cookie = new Cookie
            {
                Name = "FEDSecureToken",
                Value = "zFxwZnrLsGuSxeeXH83gokL59E+BNJogh4q6WsKj0W57yZp6AlSBSgzSBENmOayFezP4PbHL9J2nkeq7h7DxEMbSItB/bgK2fmFRN52jzGQWojL0i3j/zWlAw+qfmwySa4IgUnAHM1IRZOFprPJ9qsX0N5E0tXNo3Xlx9KMqgbD0O2GLa820L4oPS3K7N4k33eBD5x+FthxEmmB3TTGOx7P4Q5wdNKJcdieGPvAZYk9bzrf9fNkdFmEj06tl3eTX/6xNYogaoWtODL0PvPwFDnEdM47653NQGdoXuMHw8He05CMYpzD7N4miG4pGB9Fsfpn90oYJRBljmrmD58BaLWuC90y8GPK06PIVtm3TnillqN+3kkhqshhpL6IdHs1h"
            };

            var result = await loginService.LoginAsync(cookie);
            Assert.IsFalse(result.Success);

            Assert.AreEqual(2, result.Log.Count);

            var actualStatusCode = result.Log[1].StatusCode;
            Assert.AreEqual(HttpStatusCode.InternalServerError, actualStatusCode);
        }
    }
}
