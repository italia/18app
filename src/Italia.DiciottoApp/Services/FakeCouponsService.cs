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

            return FakeCoupons.GetList().Where(s => s.Id == userId).FirstOrDefault();
        }

        public async Task<IEnumerable<Coupon>> GetUserCouponsAsync(string userId, WalletKind walletKind = WalletKind.All, int page = 0, int pageItems = 100)
        {
            if (string.IsNullOrWhiteSpace(userId))
            {
                throw new ArgumentNullException(nameof(userId));
            }

            // simulate delay
            await Task.Delay(simulatedDelay);

            IShopsService shopsService = Service.Resolve<IShopsService>();

            var fakeCouponList = (walletKind == WalletKind.All) ? FakeCoupons.GetList() :
                                 (walletKind == WalletKind.Available) ? FakeCoupons.GetList().Where(c => !c.Spent) :
                                 FakeCoupons.GetList().Where(c => c.Spent);

            if (page > 0 && pageItems > 0)
            {
                fakeCouponList = fakeCouponList.Skip((page - 1) * pageItems).Take(pageItems);
            }

            foreach (var fakeCoupon in fakeCouponList)
            {
                fakeCoupon.Shop = await shopsService.GetShopByIdAsync(fakeCoupon.ShopId);
            }
            return fakeCouponList;
        }

        public async Task<Coupon> CreateCoupon(Categoria categoria, Prodotto prodotto, double valore, string shopId = null)
        {
            // simulate delay
            await Task.Delay(simulatedDelay);

            string id = "DF69A8D5";
            Coupon coupon = new Coupon
            {
                Id = id,
                Category = categoria,
                Product = prodotto,
                Value = valore,
                QrCodeValue = id,
                BarCodeValue = id,
                ShopId = shopId
            };

            if (!string.IsNullOrWhiteSpace(shopId))
            {
                IShopsService shopService = Service.Resolve<IShopsService>();
                coupon.Shop = await shopService.GetShopByIdAsync(shopId);
            }

            return coupon;
        }

        public static class FakeCoupons
        {
            public static IEnumerable<Coupon> GetList()
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