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
    }
}
