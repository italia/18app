using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Threading;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    public class FakeVouchersService: IVouchersService
    {
        private static readonly int simulatedDelay = 1000;

        public async Task<IEnumerable<Voucher>> GetUserVouchersAsync(Cookie fedSecureToken, bool spent, int page = 0, int pageItems = 100, CancellationToken ct = default(CancellationToken))
        {
            // simulate delay
            await Task.Delay(simulatedDelay);

            IShopsService shopsService = Service.Resolve<IShopsService>();

            var fakeVoucherList = FakeVouchers.GetList().Where(c => c.Spent == spent);

            if (page > 0 && pageItems > 0)
            {
                fakeVoucherList = fakeVoucherList.Skip((page - 1) * pageItems).Take(pageItems);
            }

            foreach (var fakeVoucher in fakeVoucherList)
            {
                fakeVoucher.Shop = null; // await shopsService.GetShopByIdAsync(fakeVoucher.ShopId);
            }
            return fakeVoucherList;
        }

        public async Task<ServiceResult<VoucherBean>> CreateVoucherAsync(Cookie fedSecureToken, Categoria categoria, Prodotto prodotto, double valore, bool online)
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

            // simulate delay
            await Task.Delay(simulatedDelay);

            return new ServiceResult<VoucherBean>()
            {
                Success = true,
                Result = new VoucherBean
                {
                    IdVoucher = 12345,
                    AmbitoBean = new AmbitoBean { IdAmbito = categoria.Id },
                    BeneBean = new BeneBean { IdBene = prodotto.Id},
                    ImportoRichiesto = valore
                }
            };
        }

        public Task<DeleteVoucherResult> DeleteVoucher(Cookie fedSecureToken, long voucherId)
        {
            throw new NotImplementedException();
        }

        public static class FakeVouchers
        {
            public static IEnumerable<Voucher> GetList()
            {
                return new List<Voucher>
                {
                    new Voucher
                    {
                        Id = "DF69A8D5",
                        Spent = false,
                        Category = CategoriaFromTipoCategoria(TipoCategoria.Cinema),
                        Product = CategoriaFromTipoCategoria(TipoCategoria.Cinema).Prodotti[0],
                        ShopId = "2375F804-5744-48C0-813C-0B87F2E0750E",
                        RequestedValue = 12.0,
                        ValidatedValue = 12.0
                    },
                    new Voucher
                    {
                        Id = "F1EB2A75",
                        Spent = false,
                        Category = CategoriaFromTipoCategoria(TipoCategoria.Concerti),
                        Product = CategoriaFromTipoCategoria(TipoCategoria.Concerti).Prodotti[1],
                        ShopId = "16D55D17-BD46-48CE-94FF-BB4F28971A21",
                        RequestedValue = 28.0,
                        ValidatedValue = 27.50
                    },
                    new Voucher
                    {
                        Id = "3702DA97",
                        Spent = true,
                        SpentDateTime = new DateTime(2017,3,12,23,12,0),
                        Category = CategoriaFromTipoCategoria(TipoCategoria.Libri),
                        Product = CategoriaFromTipoCategoria(TipoCategoria.Libri).Prodotti[0],
                        ShopId = "7E0C6AA6-ADF0-4710-A6EF-C7E24B2FFDFF",
                        RequestedValue = 9.0,
                        ValidatedValue = 9.0
                    },
                    new Voucher
                    {
                        Id = "DFA13EC3",
                        Spent = true,
                        SpentDateTime = new DateTime(2018,2,21,11,37,0),
                        Category = CategoriaFromTipoCategoria(TipoCategoria.Libri),
                        Product = CategoriaFromTipoCategoria(TipoCategoria.Libri).Prodotti[1],
                        ShopId = "7E0C6AA6-ADF0-4710-A6EF-C7E24B2FFDFF",
                        RequestedValue = 14.0,
                        ValidatedValue = 14.0
                    },
                    new Voucher
                    {
                        Id = "6D7CA172",
                        Spent = false,
                        Category = CategoriaFromTipoCategoria(TipoCategoria.TeatroDanza),
                        Product = CategoriaFromTipoCategoria(TipoCategoria.TeatroDanza).Prodotti[0],
                        ShopId = "2375F804-5744-48C0-813C-0B87F2E0750E",
                        RequestedValue = 15.0,
                        ValidatedValue = 15.0
                    },
                    new Voucher
                    {
                        Id = "8333856A",
                        Spent = false,
                        Category = CategoriaFromTipoCategoria(TipoCategoria.TeatroDanza),
                        Product = CategoriaFromTipoCategoria(TipoCategoria.TeatroDanza).Prodotti[1],
                        ShopId = "27E7A6D6-3C76-4CC4-81E5-4AD3B6211D0A",
                        RequestedValue = 70.0,
                        ValidatedValue = 68.0
                    }
                };
            }
        }

        private static Categoria CategoriaFromTipoCategoria(TipoCategoria tipoCategoria)
        {
            return Categoria.List.SingleOrDefault(c => c.Tipo == tipoCategoria);
        }

    }
}