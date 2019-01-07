using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Services;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Test
{
    [TestClass]
    public class Test_ShopsService
    {
        private readonly ShopsService shopsService;

        public Test_ShopsService()
        {
            shopsService = new ShopsService();
        }

        [TestMethod]
        public async Task Test_RicercaStoreByFilterAsync_FailOnWrongClientIdCredentials()
        {
            shopsService.ClientId = "wrong_client_id";
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean();

            var result = await shopsService.RicercaStoreByFilterAsync(ricercaStoreBean);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.Unauthorized, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_RicercaStoreByFilterAsync_FailOnWrongClientSecretCredentials()
        {
            shopsService.ClientSecret = "wrong_client_secret";
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean();

            var result = await shopsService.RicercaStoreByFilterAsync(ricercaStoreBean);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.Unauthorized, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_RicercaStoreByFilterAsync_FailOnMissingStoreType()
        {
            // TipoStore is required!
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean();

            var result = await shopsService.RicercaStoreByFilterAsync(ricercaStoreBean);

            Assert.IsFalse(result.Success);
            Assert.AreEqual(1, result.Log.Count);

            var actualStatusCode = result.Log[0].StatusCode;
            Assert.AreEqual(HttpStatusCode.InternalServerError, actualStatusCode);
        }

        [TestMethod]
        public async Task Test_RicercaStoreByFilterAsync_SucceedOnGoodStoreType()
        {
            // TipoStore is required!
            // When using Limit, Start is required (0 starting)
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean
            {
                TipoStore = "F",
                Start = 0,
                Limit = 10
            };

            var result = await shopsService.RicercaStoreByFilterAsync(ricercaStoreBean);

            Assert.IsTrue(result.Success);
            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
        }

        [TestMethod]
        public async Task Test_RicercaStoreByFilterAsync_SucceedOnGoodIdAmbito()
        {
            // TipoStore is required!
            // When using Limit, Start is required (0 starting)
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean
            {
                TipoStore = "F",
                IdAmbito = 1,
                Start = 0,
                Limit = 10
            };

            var result = await shopsService.RicercaStoreByFilterAsync(ricercaStoreBean);

            Assert.IsTrue(result.Success);
            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
        }

        [TestMethod]
        public async Task Test_RicercaStoreByFilterAsync_SucceedOnExistentComune()
        {
            // TipoStore is required!
            // When using Limit, Start is required (0 starting)
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean
            {
                TipoStore = "F",
                Comune = "Roma",
                Start = 0,
                Limit = 10
            };

            var result = await shopsService.RicercaStoreByFilterAsync(ricercaStoreBean);

            Assert.IsTrue(result.Success);
            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
        }

        [TestMethod]
        public async Task Test_RicercaStoreByFilterAsync_SucceedOnGoodLocation()
        {
            Location UserLocation = new Location(41.8919300, 12.5113300); // Center of Rome, Italy

            // TipoStore is required!
            // When using Limit, Start is required (0 starting)
            RicercaStoreBean ricercaStoreBean = new RicercaStoreBean
            {
                TipoStore = "F",
                Start = 0,
                Limit = 10,
                //MinLatitudine = 30.0,
                Latitudine = UserLocation.Latitude,
                //MaxLatitudine = 48.0,
                //MinLongitudine = 0.0,
                Longitudine = UserLocation.Longitude,
                //MaxLongitudine = 20.0
            };

            var result = await shopsService.RicercaStoreByFilterAsync(ricercaStoreBean);

            Assert.IsTrue(result.Success);
            Assert.AreEqual(1, result.Log.Count);
            Assert.AreEqual(HttpStatusCode.OK, result.Log[0].StatusCode);
        }

    }
}