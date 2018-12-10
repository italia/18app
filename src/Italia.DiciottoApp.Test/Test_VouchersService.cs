using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Test
{
    [TestClass]
    public class Test_VouchersService
    {
        private readonly VouchersService vouchersService;
        private Cookie fedSecureToken;

        public Test_VouchersService()
        {
            vouchersService = new VouchersService();

            fedSecureToken = new Cookie
            {
                Name = Constants.COOKIES_SECURE_TOKEN,
                Value = "W/NaKriBQRDQsyV1hG+m3Gs9EyIpojnatBt9YSKMaGyv5LmdfYLdOaZes6YJiR5ln9SWU6MITGhJHf3p55T/Xv+FDuqt2Ss6/fbynBn8Q0U4+aNtm6AhYKScjl8Y1cvLRgNvxeOwUmMePYA5p2+jN5wIX+CnYfLJ5Lvi6a/tHTgIiD8CDKZ0ojFhqTb5Obqoye+vv5WlkRPPQ2cc8LLlI4F16Jvz7O0yOQ9A8FEZsuV4qzmwM8EEpuVFPn5TWBZs0PGoSnbmMjRiFnnqI0gRwFy+sRuK3QNw6N3twlIOtB4TreTRcTPKChWWiQlJcXowM/z7qilgjZvicO8k5LCkVgo83JUOqXX9XWOU9KHn9iCjsc++ngq625oXnHmX01tT"
            };
        }

        #region CreateVouchersAsync

        [TestMethod]
        public async Task Test_CreateVoucherAsync_FailOnWrongClientIdCredentials()
        {
            vouchersService.ClientId = "wrong_client_id";

            Categoria categoria = Categoria.List[0];
            Prodotto prodotto = categoria.Prodotti[0];
            double valore = 12.0;
            bool online = false;

            var createVoucherServiceResult = await vouchersService.CreateVoucherAsync(fedSecureToken, categoria, prodotto, valore, online);

            Assert.IsFalse(createVoucherServiceResult.Success);
            Assert.AreEqual(1, createVoucherServiceResult.Log.Count);

            var actualStatusCode = createVoucherServiceResult.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.NotFound, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_CreateVoucherAsync_FailOnWrongClientSecretCredentials()
        {
            vouchersService.ClientSecret = "wrong_client_secret";

            Categoria categoria = Categoria.List[0];
            Prodotto prodotto = categoria.Prodotti[0];
            double valore = 12.0;
            bool online = false;

            var result = await vouchersService.CreateVoucherAsync(fedSecureToken, categoria, prodotto, valore, online);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.NotFound, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_CreateVoucherAsync_FailOnWrongFedSecureCookie()
        {
            // WARNING: The cookie value purposely contains a timed out value, don't change it
            fedSecureToken = new Cookie
            {
                Name = Constants.COOKIES_SECURE_TOKEN,
                Value = "zFxwZnrLsGuSxeeXH83gokL59E+BNJogh4q6WsKj0W57yZp6AlSBSgzSBENmOayFezP4PbHL9J2nkeq7h7DxEMbSItB/bgK2fmFRN52jzGQWojL0i3j/zWlAw+qfmwySa4IgUnAHM1IRZOFprPJ9qsX0N5E0tXNo3Xlx9KMqgbD0O2GLa820L4oPS3K7N4k33eBD5x+FthxEmmB3TTGOx7P4Q5wdNKJcdieGPvAZYk9bzrf9fNkdFmEj06tl3eTX/6xNYogaoWtODL0PvPwFDnEdM47653NQGdoXuMHw8He05CMYpzD7N4miG4pGB9Fsfpn90oYJRBljmrmD58BaLWuC90y8GPK06PIVtm3TnillqN+3kkhqshhpL6IdHs1h"
            };

            vouchersService.ClientSecret = "wrong_client_secret";

            Categoria categoria = Categoria.List[0];
            Prodotto prodotto = categoria.Prodotti[0];
            double valore = 12.0;
            bool online = false;

            var result = await vouchersService.CreateVoucherAsync(fedSecureToken, categoria, prodotto, valore, online);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.NotFound, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_CreateVoucherAsync_FailOnNullCategory()
        {
            Categoria categoria = null;
            Prodotto prodotto = Categoria.List[0].Prodotti[0];
            double valore = 12.0;
            bool online = false;

            await Assert.ThrowsExceptionAsync<ArgumentNullException>(async () =>
                await vouchersService.CreateVoucherAsync(fedSecureToken, categoria, prodotto, valore, online)
            );
        }

        [TestMethod]
        public async Task Test_CreateVoucherAsync_FailOnNullProduct()
        {
            Categoria categoria = Categoria.List[0];
            Prodotto prodotto = null;
            double valore = 12.0;
            bool online = false;

            await Assert.ThrowsExceptionAsync<ArgumentNullException>(async () =>
                await vouchersService.CreateVoucherAsync(fedSecureToken, categoria, prodotto, valore, online)
            );
        }

        [TestMethod]
        public async Task Test_CreateVoucherAsync_FailOnNegativeValue()
        {
            Categoria categoria = Categoria.List[0];
            Prodotto prodotto = categoria.Prodotti[0];
            double valore = -12.0;
            bool online = false;

            await Assert.ThrowsExceptionAsync<ArgumentOutOfRangeException>(async () =>
                await vouchersService.CreateVoucherAsync(fedSecureToken, categoria, prodotto, valore, online)
            );
        }

        [TestMethod]
        public async Task Test_CreateVoucherAsync_FailOnZeroValue()
        {
            Categoria categoria = Categoria.List[0];
            Prodotto prodotto = categoria.Prodotti[0];
            double valore = 0.0;
            bool online = false;

            await Assert.ThrowsExceptionAsync<ArgumentOutOfRangeException>(async () =>
                await vouchersService.CreateVoucherAsync(fedSecureToken, categoria, prodotto, valore, online)
            );
        }

        [TestMethod]
        public async Task Test_CreateVoucherAsync_FailOnOutOfRangeValue()
        {
            Categoria categoria = Categoria.List[0];
            Prodotto prodotto = categoria.Prodotti[0];
            double valore = 500.01;
            bool online = false;

            await Assert.ThrowsExceptionAsync<ArgumentOutOfRangeException>(async () =>
                await vouchersService.CreateVoucherAsync(fedSecureToken, categoria, prodotto, valore, online)
            );
        }

        [TestMethod]
        public async Task Test_CreateVoucherAsync_SucceedOnPhysicalVoucher()
        {
            Categoria categoria = Categoria.List[0];
            Prodotto prodotto = categoria.Prodotti[0];
            double valore = 12.0;
            bool online = false;

            var result = await vouchersService.CreateVoucherAsync(fedSecureToken, categoria, prodotto, valore, online);

            Assert.IsTrue(result.Success);
            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
        }

        #endregion

        #region GetUserVouchersAsync

        [TestMethod]
        public async Task Test_GetUserVouchersAsync_SucceedOnNotSpentVouchers()
        {
            bool spent = false;
            int page = 0;
            int pageItems = 100;

            var vouchers = await vouchersService.GetUserVouchersAsync(fedSecureToken, spent, page, pageItems);

            Assert.IsTrue(vouchers != null && vouchers.Count() > 0);
        }

        [TestMethod]
        public async Task Test_GetUserVouchersAsync_SucceedOnSpentVouchers()
        {
            bool spent = true;
            int page = 0;
            int pageItems = 100;

            var vouchers = await vouchersService.GetUserVouchersAsync(fedSecureToken, spent, page, pageItems);

            Assert.IsTrue(vouchers != null && vouchers.Count() > 0);
        }

        #endregion

    }
}
