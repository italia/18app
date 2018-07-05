using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Models;

namespace Italia.DiciottoApp.Services
{
    public class CouponsService : ICouponsService
    {
        public async Task<Coupon> GetCouponByIdAsync(string userId)
        {
            if (string.IsNullOrWhiteSpace(userId))
            {
                throw new ArgumentNullException("userId");
            }

            // TODO: Get shop from 18App SOAP Service
            var fakeCouponsService = new FakeCouponsService();
            return await fakeCouponsService.GetCouponByIdAsync(userId);
        }

        public async Task<IEnumerable<Coupon>> GetUserCouponsAsync(string userId, WalletKind walletKind = WalletKind.All, int page = 0, int pageItems = 100)
        {
            if (string.IsNullOrWhiteSpace(userId))
            {
                throw new ArgumentNullException("userId");
            }

            IEnumerable<Coupon> coupons;

            // TODO: Get shops from 18App SOAP Service
            var fakeCouponsService = new FakeCouponsService();
            coupons = await fakeCouponsService.GetUserCouponsAsync(userId, walletKind, page, pageItems);

            return coupons;
        }

        public async Task<Coupon> CreateCoupon(Categoria categoria, Prodotto prodotto, double valore, string shopId = null)
        {
            if (categoria == null)
            {
                throw new ArgumentNullException("categoria");
            }

            if (prodotto == null)
            {
                throw new ArgumentNullException("prodotto");
            }

            if (valore <= 0 || valore > 500)
            {
                throw new ArgumentOutOfRangeException("valore");
            }

            // TODO: Get shops from 18App SOAP Service
            var fakeCouponsService = new FakeCouponsService();
            return await fakeCouponsService.CreateCoupon(categoria, prodotto, valore, shopId);
        }

    }
}
