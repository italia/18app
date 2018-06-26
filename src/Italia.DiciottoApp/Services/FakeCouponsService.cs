using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    public class FakeCouponsService: ICouponsService
    {
        private static readonly int simulatedDelay = 3000;

        public async Task<Coupon> GetCouponByIdAsync(string userId)
        {
            if (string.IsNullOrWhiteSpace(userId))
            {
                throw new ArgumentNullException("userId");
            }

            // simulate delay
            await Task.Delay(simulatedDelay);

            return FakeCoupons.List().Where(s => s.Id == userId).FirstOrDefault();
        }

        public async Task<IEnumerable<Coupon>> GetUserCouponsAsync(string userId, int page = 1, int pageItems = 10)
        {
            if (string.IsNullOrWhiteSpace(userId))
            {
                throw new ArgumentNullException("userId");
            }

            // simulate delay
            await Task.Delay(simulatedDelay);

            var fakeCouponList = FakeCoupons.List().Take(pageItems);
            IShopsService shopsService = Service.Resolve<IShopsService>();
            foreach (var fakeCoupon in fakeCouponList)
            {
                fakeCoupon.Shop = await shopsService.GetShopByIdAsync(fakeCoupon.ShopId);
            }
            return fakeCouponList;
        }

        public async Task CreateCoupon(Categoria categoria, Prodotto prodotto, double valore, string shopId = null)
        {
            // simulate delay
            await Task.Delay(simulatedDelay);
        }

        public static class FakeCoupons
        {
            public static IEnumerable<Coupon> List()
            {
                return new List<Coupon>
                {
                    new Coupon
                    {
                        Id = "DF69A8D5",
                        Spent = false,
                        Category = Categories.Cinema,
                        Product = Categories.Cinema.Prodotti[0],
                        ShopId = "2375F804-5744-48C0-813C-0B87F2E0750E",
                        Value = 12.0
                    },
                    new Coupon
                    {
                        Id = "F1EB2A75",
                        Spent = false,
                        Category = Categories.Concerti,
                        Product = Categories.Concerti.Prodotti[1],
                        ShopId = "16D55D17-BD46-48CE-94FF-BB4F28971A21",
                        Value = 28.0
                    },
                    new Coupon
                    {
                        Id = "3702DA97",
                        Spent = true,
                        SpentDateTime = new DateTime(2017,3,12,23,12,0),
                        Category = Categories.Libri,
                        Product = Categories.Libri.Prodotti[0],
                        ShopId = "7E0C6AA6-ADF0-4710-A6EF-C7E24B2FFDFF",
                        Value = 9.0
                    },
                    new Coupon
                    {
                        Id = "DFA13EC3",
                        Spent = true,
                        SpentDateTime = new DateTime(2018,2,21,11,37,0),
                        Category = Categories.Libri,
                        Product = Categories.Libri.Prodotti[1],
                        ShopId = "7E0C6AA6-ADF0-4710-A6EF-C7E24B2FFDFF",
                        Value = 14.0
                    },
                    new Coupon
                    {
                        Id = "6D7CA172",
                        Spent = false,
                        Category = Categories.TeatroDanza,
                        Product = Categories.TeatroDanza.Prodotti[0],
                        ShopId = "2375F804-5744-48C0-813C-0B87F2E0750E",
                        Value = 15.0
                    },
                    new Coupon
                    {
                        Id = "8333856A",
                        Spent = false,
                        Category = Categories.TeatroDanza,
                        Product = Categories.TeatroDanza.Prodotti[1],
                        ShopId = "27E7A6D6-3C76-4CC4-81E5-4AD3B6211D0A",
                        Value = 70.0
                    }
                };
            }
        }
    }
}