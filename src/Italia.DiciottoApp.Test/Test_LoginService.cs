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
        private Cookie fedSecureToken;
        private Cookie usernameToken;

        public Test_LoginService()
        {
            loginService = new LoginService();
            fedSecureToken = new Cookie
            {
                Name = Constants.COOKIES_SECURE_TOKEN,
                Value = "/lMEov+23DoAvtEg0C1IcB9frRWRfNRSy1rR7tePOLERQwMMOdfi7fF8P5PJYhLqp5qWiDqyw4GGhk6di9Gv0rt4+Xi8kC6KKka32txnl7luDLXyk2OLjvEJmCKXKl6q4gG+YhPoEuEmaBkIr9WSUGq167cgqlBSREfCRIpJXy79jDGOUU2r+Et0A6UF9TYxNMzSVzZGmzq4rY6h1y/YqHcWKl4/x/u+2hLoS9mVDOJATzUK2i1r78yZXLTyUUOotYWIfk4RSuclcSxGGZ+FaNYPNMA+aWBxIzAsi2atssYg51mWgMMjSJwEushx2kExv6UlXA/ev40+1UF2UOjXhIePcHgBXNd1IR1Np5gRJHRkiuzYAWKoIpYhrAuQd5f9"
            };
            usernameToken = new Cookie
            {
                Name = Constants.COOKIES_USER_TOKEN,
                Value = "q390Lb5wfjSPbSBH3cOIi5nzCnKMRdCppSqVreztWbERhTISnyMnZ2BbtmTpxNK74WQSmjlGNcsA2C/38PFLtH8y7GrtP1u4EMq59mchQdKeDiQziOj6ly2s+EtScmpwvLGOIpSzrJmlRapqqJd6YhXe6pDbNXIyY4FVRn4Tu7NAfxrS98fQgn3ugfutGHrS05xseZrHyr91WN16uDfQQCzn5TPhHr3RDzIdgmt0EQSD5T7BM0tDvmZi/o8NbUOGl2u1AHQnALU/caqc8HgMs53ziWmT2Vi6mKLLKjUzU7QyqKcGCcZ5w5tPsIFYBuB/FWCPm/7zKEz9+IcEwmgoVBxJMmaP+0/MWjtbr5B7gF4hfHXljzNQz2uM3S4IkG2M7KytSa7sVCfAqxcKGbMmVdx1GrEJf+DF8yOvseXv6m8ZbxFz74eF1/priqS+N4N7ewbg9t/dZycQt+gCWhfZd3xO2J4MbFagmF/3XHImAqiZfhvJsUp5byszOflIS0sYnnCP89K6BDXQytTi98KHwj1JYMfahqzhTnYLTxexCrRO7slqcypHe5ZiXzK+77X+Y1Ub0ZuK73OZ4euu1jYC7OIqM2Q00tuqksGlqNqrydFSP6FPfxKzZ5dpCFoMfDz2"
            };
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongClientIdCredentials()
        {
            loginService.ClientId = "wrong_client_id";

            var result = await loginService.LoginAsync(fedSecureToken, usernameToken);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.Unauthorized, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongClientSecretCredentials()
        {
            loginService.ClientSecret = "wrong_client_secret";

            var result = await loginService.LoginAsync(fedSecureToken, usernameToken);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.Unauthorized, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongFedSecureCookie()
        {
            // WARNING: The cookie value purposely contains a timed out value, don't change it
            fedSecureToken = new Cookie
            {
                Name = Constants.COOKIES_SECURE_TOKEN,
                Value = "zFxwZnrLsGuSxeeXH83gokL59E+BNJogh4q6WsKj0W57yZp6AlSBSgzSBENmOayFezP4PbHL9J2nkeq7h7DxEMbSItB/bgK2fmFRN52jzGQWojL0i3j/zWlAw+qfmwySa4IgUnAHM1IRZOFprPJ9qsX0N5E0tXNo3Xlx9KMqgbD0O2GLa820L4oPS3K7N4k33eBD5x+FthxEmmB3TTGOx7P4Q5wdNKJcdieGPvAZYk9bzrf9fNkdFmEj06tl3eTX/6xNYogaoWtODL0PvPwFDnEdM47653NQGdoXuMHw8He05CMYpzD7N4miG4pGB9Fsfpn90oYJRBljmrmD58BaLWuC90y8GPK06PIVtm3TnillqN+3kkhqshhpL6IdHs1h"
            };

            var result = await loginService.LoginAsync(fedSecureToken, usernameToken);
            Assert.IsFalse(result.Success);

            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.InternalServerError, result.Log[0].StatusCode);
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongUsernameCookie()
        {
            // WARNING: The cookie value purposely contains a timed out value, don't change it
            usernameToken = new Cookie
            {
                Name = Constants.COOKIES_USER_TOKEN,
                Value = "zFxwZnrLsGuSxeeXH83gokL59E+BNJogh4q6WsKj0W57yZp6AlSBSgzSBENmOayFezP4PbHL9J2nkeq7h7DxEMbSItB/bgK2fmFRN52jzGQWojL0i3j/zWlAw+qfmwySa4IgUnAHM1IRZOFprPJ9qsX0N5E0tXNo3Xlx9KMqgbD0O2GLa820L4oPS3K7N4k33eBD5x+FthxEmmB3TTGOx7P4Q5wdNKJcdieGPvAZYk9bzrf9fNkdFmEj06tl3eTX/6xNYogaoWtODL0PvPwFDnEdM47653NQGdoXuMHw8He05CMYpzD7N4miG4pGB9Fsfpn90oYJRBljmrmD58BaLWuC90y8GPK06PIVtm3TnillqN+3kkhqshhpL6IdHs1h"
            };

            var result = await loginService.LoginAsync(fedSecureToken, usernameToken);
            Assert.IsFalse(result.Success);

            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.InternalServerError, result.Log[0].StatusCode);
        }

        [TestMethod]
        public async Task Test_LoginAsync_SucceedWithFreshCookieValues()
        {
            var result = await loginService.LoginAsync(fedSecureToken, usernameToken);

            Assert.IsTrue(result.Success);
            Assert.AreEqual(5, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[1].StatusCode);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[2].StatusCode);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[3].StatusCode);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[4].StatusCode);
        }

    }
}
