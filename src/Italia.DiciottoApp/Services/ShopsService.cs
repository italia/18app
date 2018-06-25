using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Models;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Services
{
    public class ShopsService : IShopsService
    {
        public async Task<Shop> GetShopByIdAsync(string shopId)
        {
            if (string.IsNullOrWhiteSpace(shopId))
            {
                throw new ArgumentNullException("shopId");
            }

            // TODO: Get shop from 18App SOAP Service
            var fakeShopsService = new FakeShopsService();
            return await fakeShopsService.GetShopByIdAsync(shopId);
        }

        public async Task<IEnumerable<Shop>> NearToLocationShopsAsync(Location location, int maxItems = 10)
        {
            if (location == null)
            {
                throw new ArgumentNullException("location");
            }

            IEnumerable<Shop> shops;

            // TODO: Get shops from 18App SOAP Service
            var fakeShopsService = new FakeShopsService();
            shops = await fakeShopsService.NearToLocationShopsAsync(location, maxItems);

            return shops;
        }
    }
}
