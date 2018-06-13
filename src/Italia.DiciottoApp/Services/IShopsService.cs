using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Services
{
    interface IShopsService
    {
        IEnumerable<Shop> NearToLocationShops(Location location, int maxItems = 10);
    }
}
