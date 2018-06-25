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

        Task<IEnumerable<Coupon>> GetUserCouponsAsync(string userId, int page = 1, int pageItems = 10);
    }
}
