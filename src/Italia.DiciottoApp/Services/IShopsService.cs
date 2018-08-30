using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Services
{
    interface IShopsService
    {
        Task<Shop> GetShopByIdAsync(string shopId);

        Task<IEnumerable<Shop>> NearToLocationShopsAsync(Location location, int maxItems = 10);

        Task<IEnumerable<Shop>> OnlineShopsAsync(Categoria category, int maxItems = 10);

        Task<IEnumerable<Shop>> FindShopsAsync(Categoria category, Municipality municipality, string text = null, int maxItems = 10, CancellationToken ct = default(CancellationToken));

        IEnumerable<Municipality> FindMunicipality(string partialName, int maxItems = 100);
    }
}