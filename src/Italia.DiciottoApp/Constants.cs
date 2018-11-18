using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Essentials;

namespace Italia.DiciottoApp
{
    public static class Constants
    {
        public static readonly double NEW_LOCATION_MINIMUM_KM = 0.5; // 500 meters
        public static readonly GeolocationAccuracy GPS_ACCURACY = GeolocationAccuracy.Medium;
        public static readonly int NEW_REQUEST_MINIMUM_SECONDS = 60;

        // Login
        public static readonly string COOKIES_URL = "https://val.18app.italia.it"; // In produzione utilizzare "https://18app.italia.it";
        public static readonly string COOKIES_NAME = "FEDSecureToken";
        public static readonly string SERVICE_HOST = "https://18app-api-test.teamdigitale.it";
        public static readonly string SERVICE_ENDPOINT = "https://18app-api-test.teamdigitale.it/interop/18app";

    }
}
