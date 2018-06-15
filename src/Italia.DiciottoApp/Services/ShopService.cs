using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Models;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Services
{
    public class ShopService : IShopsService
    {
        public async Task<IEnumerable<Shop>> NearToLocationShopsAsync(Location location, int maxItems = 10)
        {
            if (location == null)
            {
                throw new ArgumentNullException("location");
            }

            IEnumerable<Shop> shops;

            // TODO: Get shops from 18App SOAP Service
            var fakeShopsService = new FakeShopService();
            shops = await fakeShopsService.NearToLocationShopsAsync(location, maxItems);

            return shops;
        }
    }
}
