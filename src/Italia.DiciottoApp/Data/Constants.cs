using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Data
{
    public static class Constants
    {
        public static readonly double NEW_LOCATION_MINIMUM_KM = 0.5; // 500 meters
        public static readonly GeolocationAccuracy GPS_ACCURACY = GeolocationAccuracy.Medium;
        public static readonly int NEW_REQUEST_MINIMUM_SECONDS = 60;
        public static readonly int NEAR_TO_YOU_SHOP_MAX_ITEMS = 30;
        public static readonly int VOUCHER_ITEMS_PER_PAGE = 100;

        public static readonly string COOKIES_SECURE_TOKEN = "FEDSecureToken";
        public static readonly string COOKIES_USER_TOKEN = "cookieutente";

        #region Evironment dependent constants

        private static readonly bool prodEnv = false;
        
        public static string COOKIES_URL => prodEnv ? "https://18app.italia.it" : "https://val.18app.italia.it";

        public static string ESCAPE_WEB_LOGIN_URL => "https://www.18app.italia.it/";

        public static string IDP_LOGIN_SUCCESS_URL => prodEnv ? "https://18app.italia.it/BeneficiarioWeb/#/registrazione" : "https://val.18app.italia.it/BeneficiarioWeb/#/registrazione";

        public static string SERVICE_HOST => prodEnv ? "https://www.18app.italia.it" : "https://18app-api-test.teamdigitale.it";

        public static string SERVICE_ENDPOINT => prodEnv ? "https://www.18app.italia.it" : "https://18app-api-test.teamdigitale.it/interop/18app";

        #endregion
    }
}
