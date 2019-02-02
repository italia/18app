using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.DTOs;
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
        private Cookie userToken;

        public Test_LoginService()
        {
            loginService = new LoginService();
            fedSecureToken = new Cookie
            {
                Name = Constants.COOKIES_SECURE_TOKEN,
                Value = "MrC6QKBN2njW3EN4FpN+H2ZzvV1UxA3KFl6HbhQ7aD8VaPSuumGHpD4GKScGQGJ47dO/6dlFPj06HDSYlxBnSBCXVRP8aoN4SAumvsyI4Ss/Ph4jc1inBobxLbRFFSS30pwJMI41UOtC1SZiu+schMsmAb/WZ1PR+pXA2jyd7DEEJQCirdkiqCm1p0GzgBGbz6GpxNZLsyaC9n+gpZLMlCha4Wz4sCi8Zui80VwPkZvlqoTps9HPxBQv24b4WTj1G/5riggNpEQXMEuPicsJcTh8i08MWsLVqEj+cCI8jeB71SqGj1UxaiNFGeY/zI1mcVRnbcgSalDOKmYMFAUTrl1BOq1idEZa6yaGwxn8VX5KYOwjLmQk28m6j0AhXYIk"
            };
            userToken = new Cookie
            {
                Name = Constants.COOKIES_USER_TOKEN,
                Value = "Hx1RtH0Se9lFsgviC358dGMAbBVdUzUMQ48cDUlvaBOajM0BhnGdLj2bI7/MrNz73Ei5kEZi9R4G8Ob1BIqwHBqzn/NJhsIMXu3kiWX283jUexpFn8fLJk9q9TnXfhiiCcgYm0vVShHDCiTT3H2YSV44rqkdgzWvCrUGUpgeVZ93kNg9D0KTfXR/sHnpIcuEPWWT4lNB/zjNixsP+rfeGsy9Fri1OFpcEXo11fC0/XM/oDySO4REt4XSyiTQOqA1b1jcBOHs2QUkKDNzyqn9er8YA+r/C7L5kmBKN3VG5EGXHlnvXM5jqELo68uD/KYvcORP4lSRPmdbWbTqWwkU7CajcP7sYhk1QzdK5PjDTocJch7SDYkheUJzsXMKf6t3N4pjBk8/dHQgWr4acbmWJrWaoxGfSWWPoYre15ogKFtnbNKXYZ0KLt8cHOXw6Db8fVUGXJLqYJGsvxEBuRzXBdDloQoeGd8vvam/dK4gECcImjnGlCbVtiZVV1kOKeNeUYv1znnFIQJDJqEIMujSifQFZRqgA/eWB84SSdeeKYeq/UR6yghlybJdMtplKNLdkB8VEdFM346JQvo4TWmNVDYbJ0jYEaOerOAqzQI3wLc5pH3dYXx6yeR5i9thxPiDfd0U+wfyRFY="
            };
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongClientIdCredentials()
        {
            loginService.ClientId = "wrong_client_id";

            var result = await loginService.LoginAsync(fedSecureToken, userToken);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.Unauthorized, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongClientSecretCredentials()
        {
            loginService.ClientSecret = "wrong_client_secret";

            var result = await loginService.LoginAsync(fedSecureToken, userToken);

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

            var result = await loginService.LoginAsync(fedSecureToken, userToken);
            Assert.IsFalse(result.Success);

            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.InternalServerError, result.Log[0].StatusCode);
        }

        [TestMethod]
        public async Task Test_LoginAsync_FailOnWrongUsernameCookie()
        {
            // WARNING: The cookie value purposely contains a timed out value, don't change it
            userToken = new Cookie
            {
                Name = Constants.COOKIES_USER_TOKEN,
                Value = "zFxwZnrLsGuSxeeXH83gokL59E+BNJogh4q6WsKj0W57yZp6AlSBSgzSBENmOayFezP4PbHL9J2nkeq7h7DxEMbSItB/bgK2fmFRN52jzGQWojL0i3j/zWlAw+qfmwySa4IgUnAHM1IRZOFprPJ9qsX0N5E0tXNo3Xlx9KMqgbD0O2GLa820L4oPS3K7N4k33eBD5x+FthxEmmB3TTGOx7P4Q5wdNKJcdieGPvAZYk9bzrf9fNkdFmEj06tl3eTX/6xNYogaoWtODL0PvPwFDnEdM47653NQGdoXuMHw8He05CMYpzD7N4miG4pGB9Fsfpn90oYJRBljmrmD58BaLWuC90y8GPK06PIVtm3TnillqN+3kkhqshhpL6IdHs1h"
            };

            var result = await loginService.LoginAsync(fedSecureToken, userToken);
            Assert.IsFalse(result.Success);

            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.InternalServerError, result.Log[0].StatusCode);
        }

        [TestMethod]
        public async Task Test_LoginAsync_SucceedWithFreshCookieValues()
        {
            var result = await loginService.LoginAsync(fedSecureToken, userToken);

            Assert.IsTrue(result.Success);
            Assert.AreEqual(5, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[1].StatusCode);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[2].StatusCode);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[3].StatusCode);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[4].StatusCode);
        }

        [TestMethod]
        public async Task Test_NewUserRegistrationProcess_Succeed()
        {
            // Register new User
            var result = await loginService.LoginAsync(fedSecureToken, userToken);

            // Check result
            Assert.IsTrue(result.Success);
        }

    }
}
