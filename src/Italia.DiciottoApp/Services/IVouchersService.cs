using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Net;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    interface IVouchersService
    {
        Task<IEnumerable<Voucher>> GetUserVouchersAsync(Cookie fedSecureToken, bool spent, int page = 0, int pageItems = 100, CancellationToken ct = default(CancellationToken));

        Task<ServiceResult<VoucherBean>> CreateVoucherAsync(Cookie fedSecureToken, Categoria categoria, Prodotto prodotto, double valore, bool online);

        Task<DeleteVoucherResult> DeleteVoucher(Cookie fedSecureToken, long voucherId);
    }
}
