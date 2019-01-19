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

        public Shop Shop { get; set; }

        public string ShopId { get; set; }

        public double RequestedValue { get; set; }

        public double ValidatedValue { get; set; }

        public Categoria Category { get; set; }

        public Prodotto Product { get; set; }

        public string QrCodeValue { get; set; }

        public string BarCodeValue { get; set; }

        public bool Spent { get; set; }

        public DateTime? SpendEndDate { get; set; }

        public DateTime? SpentDateTime { get; set; }

        public bool HasShop => !string.IsNullOrWhiteSpace(ShopId) && Shop != null;

        #region Utils

        public static Voucher FromVoucherBean(VoucherBean voucherBean, bool online) // , bool? spent = null)
        {
            if (voucherBean == null)
            {
                return null;
            }

            long? idAmbito = voucherBean.AmbitoBean?.IdAmbito;
            long? idBene = voucherBean.BeneBean?.IdBene;
            Categoria categoria = Categoria.FromIdAmbito(idAmbito);
            Prodotto prodotto = (idBene != null) ? categoria.Prodotti.FirstOrDefault(p => p.Id == idBene) : null;

            return new Voucher
            {
                Id = voucherBean.IdVoucher.ToString() ?? string.Empty,
                Codice = voucherBean.CodiceVoucher,
                // Still not used: BeneficiarioBean
                // Still not used: EsercenteBean
                Shop = Shop.FromPuntoVenditaBean(voucherBean.PuntoVenditaBean, online),
                ShopId = voucherBean.PuntoVenditaBean?.IdPuntoVendita.ToString() ?? string.Empty,
                // Still not used: AmbitoBean (but AmbitoBean.IdAmbito used to find Category)
                Category = categoria,
                // Still not used: BeneBean (but BeneBean.IdBene used to find Product)
                Product = prodotto,
                // Still not used: AnnoRif
                // Still not used: AnnoUtilizzo
                RequestedValue = voucherBean.ImportoRichiesto ?? 0,
                ValidatedValue = voucherBean.ImportoValidato ?? 0,
                QrCodeValue = voucherBean.Qr,
                BarCodeValue = voucherBean.CodeLine,
                // Still not used: IdFattura
                Spent = voucherBean.FlagScaricato == "1", // spent ?? (voucherBean.FlagScaricato == "1"),
                // Still not used: DataEmissione
                SpendEndDate = voucherBean.DataScadenza,
                SpentDateTime = voucherBean.DataConferma,
                // Still not used: DatAnnullamento
                // Still not used: DataInserimento
                // Still not used: DatAggiornamento
                // Still not used: StrDataEmissione
                // Still not used: StrDataConferma
                // Still not used: ErrorCode
                // Still not used: MessageError
            };
        }

        #endregion

    }
}
