using Italia.DiciottoApp.DTOs;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Voucher
    {
        public string Id { get; set; }

        public string Codice { get; set; }

        public bool Spent { get; set; }

        public DateTime? SpentDateTime { get; set; }

        public string ShopId { get; set; }

        public Shop Shop { get; set; }

        public Categoria Category { get; set; }

        public Prodotto Product { get; set; }

        public double RequestedValue { get; set; }

        public double ValidatedValue { get; set; }

        public string QrCodeValue { get; set; }

        public string BarCodeValue { get; set; }

        public bool HasShop => !string.IsNullOrWhiteSpace(ShopId) && Shop != null;

        #region Utils

        public static Voucher FromVoucherBean(VoucherBean voucherBean, bool online, bool spent)
        {
            if (voucherBean == null)
            {
                return null;
            }

            long? idAmbito = voucherBean.AmbitoBean?.IdAmbito;
            long? idBene = voucherBean.BeneBean?.IdBene;
            Categoria categoria = Categoria.FromIdAmbito(idAmbito);
            Prodotto prodotto = (idBene != null) ? categoria.Prodotti.FirstOrDefault(p => p.Id == idBene) : null;

            // TODO: add many field to Voucher to include all VoucherBean info;
            return new Voucher
            {
                Id = voucherBean.IdVoucher.ToString() ?? string.Empty,
                Codice = voucherBean.CodiceVoucher,
                BarCodeValue = string.Empty,
                Category = categoria,
                Product = prodotto,
                QrCodeValue = voucherBean.Qr.ToString(), //TODO
                Shop = Shop.FromPuntoVenditaBean(voucherBean.PuntoVenditaBean, online),
                ShopId = voucherBean.PuntoVenditaBean?.IdPuntoVendita.ToString() ?? string.Empty,
                Spent = spent,
                SpentDateTime = null,
                RequestedValue = voucherBean.ImportoRichiesto ?? 0,
                ValidatedValue = voucherBean.ImportoValidato ?? 0
            };
        }


        #endregion

    }
}
