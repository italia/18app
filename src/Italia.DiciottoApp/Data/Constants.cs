using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Data
{
    public static class Constants
    {
        public static readonly bool IS_TEST_IDP_VISIBLE = true;

        public static readonly double NEW_LOCATION_MINIMUM_KM = 0.5; // 500 meters
        public static readonly GeolocationAccuracy GPS_ACCURACY = GeolocationAccuracy.Medium;
        public static readonly int NEW_REQUEST_MINIMUM_SECONDS = 60;
        public static readonly int NEAR_TO_YOU_SHOP_MAX_ITEMS = 30;
        public static readonly int VOUCHER_ITEMS_PER_PAGE = 100;

        public static readonly string COOKIES_SECURE_TOKEN = "FEDSecureToken";
        public static readonly string COOKIES_USER_TOKEN = "cookieutente";

        public static string ESCAPE_WEB_LOGIN_URL => "https://www.18app.italia.it/";

        #region Evironment dependent constants

        public static string COOKIES_URL_ProdEnv => "https://18app.italia.it";
        public static string COOKIES_URL_TestEnv => "https://val.18app.italia.it";

        public static string IDP_LOGIN_SUCCESS_URL_ProdEnv => "https://www.18app.italia.it/BeneficiarioWeb/#/registrazione"; // "https://18app.italia.it/BeneficiarioWeb/#!/registrazione";
        
        public static string IDP_LOGIN_SUCCESS_URL_TestEnv => "https://val.18app.italia.it/BeneficiarioWeb/#!/registrazione";

        public static string SERVICE_HOST_ProdEnv => "https://www.18app.italia.it";
        public static string SERVICE_HOST_TestEnv => "https://18app-api-test.teamdigitale.it";

        public static string SERVICE_ENDPOINT_ProdEnv => "https://www.18app.italia.it";
        public static string SERVICE_ENDPOINT_TestEnv => "https://18app-api-test.teamdigitale.it/interop/18app";

        #endregion
    }
}
