using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    interface ICouponsService
    {
        Task<Coupon> GetCouponByIdAsync(string userId);

        Task<IEnumerable<Coupon>> GetUserCouponsAsync(string userId, WalletKind walletKind = WalletKind.All, int page = 0, int pageItems = 100);

        Task<Coupon> CreateCoupon(Categoria categoria, Prodotto prodotto, double valore, string shopId = null);
    }
}
