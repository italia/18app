using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.ViewModels
{
    public class VoucherViewModel : BaseViewModel
    {
        private readonly Color red = new Color(r: .82, g: .01, b: .11);
        private readonly Color green = new Color(r: 0.13, g: 0.69, b: 0.45);
        private readonly CultureInfo ci = new CultureInfo("it-IT");

        #region Properties

        private bool justCreated;
        public bool JustCreated
        {
            get => justCreated;
            set => SetProperty(ref justCreated, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(PageTitle));
            });
        }

        public string PageTitle => (Voucher?.Spent ?? false) ? "Buono utilizzato"
                                   : JustCreated ? "Buono creato"
                                   : "Dettagli del buono";

        public AppArea AppArea => AppArea.Wallet;

        public string VoucherOwner => $"{Settings.UserName} {Settings.UserSurname}";

        public string ShopBkgndImageSource => (Voucher?.Shop?.Categorie?.Count() > 0) ? Voucher.Shop.Categorie[0].BkgndImageSource : null;

        public string ShopKindImageSource => (Voucher?.Shop?.IsOnline ?? false) ? "location_online_white" : "location_white";

        public string ShopAddress => (Voucher?.Shop == null) ? string.Empty
                                     : Voucher.Shop.IsOnline ? Voucher.Shop.Url
                                     : $"{Voucher.Shop.Address?.Comune} ({Voucher.Shop.Address?.SiglaProvincia})";

        public string VoucherStatus =>
            Voucher == null ? string.Empty
                           : Voucher.Spent && Voucher.SpentDateTime != null ? $"Buono utilizzato il {Voucher.SpentDateTime.Value.ToString("dd MMMM yy", ci)} alle ore {Voucher.SpentDateTime.Value.ToString("hh.mm")}"
                           : JustCreated ? "Il nuovo buono è stato creato correttamente"
                           : "Buono ancora da spendere" ;

        public Color VoucherStatusTextColor => (Voucher?.Spent ?? false) ? red : green;

        public bool UseVoucherOnlineButtonIsVisible => (!Voucher?.Spent ?? false) && (Voucher?.Shop?.IsOnline ?? false);

        public bool ShopRouteButtonIsVisible => (!Voucher?.Spent ?? false) && (!Voucher?.Shop?.IsOnline ?? false);

        public bool VoucherNotSpent => !Voucher?.Spent ?? false;

        public bool VoucherSpent => Voucher?.Spent ?? false;

        public string QRcodeImageSource => "fake_qrcode";

        public string BarcodeImageSource => "fake_barcode";

        private Voucher voucher;
        public Voucher Voucher
        {
            get => voucher;
            set => SetProperty(ref voucher, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(PageTitle));
                OnPropertyChanged(nameof(ShopBkgndImageSource));
                OnPropertyChanged(nameof(ShopKindImageSource));
                OnPropertyChanged(nameof(ShopAddress));
                OnPropertyChanged(nameof(VoucherStatus));
                OnPropertyChanged(nameof(VoucherStatusTextColor));
                OnPropertyChanged(nameof(UseVoucherOnlineButtonIsVisible));
                OnPropertyChanged(nameof(ShopRouteButtonIsVisible));
                OnPropertyChanged(nameof(VoucherNotSpent));
                OnPropertyChanged(nameof(VoucherSpent));
                OnPropertyChanged(nameof(QRcodeImageSource));
                OnPropertyChanged(nameof(BarcodeImageSource));
            });
        }

        #endregion

        public VoucherViewModel() : base()
        {
            // TODO: remove!!!
            // FakeInitialize();
        }

        private void FakeInitialize()
        {
            // Title
            JustCreated = false;

            // Voucher
            string id = "DF69A8D5";
            Shop fakeShop = FakeShops.GetList().ToList()[2];
            Voucher Voucher = new Voucher
            {
                Id = id,
                Category = CategoriaFromTipoCategoria(TipoCategoria.Libri),
                Product = CategoriaFromTipoCategoria(TipoCategoria.Libri).Prodotti[0],
                RequestedValue = 12.34,
                ValidatedValue = 0.0,
                QrCodeValue = id,
                BarCodeValue = id,
                ShopId = fakeShop.Id,
                Shop = fakeShop,
                Spent = true
            };

            Voucher = Voucher;
        }

        private static Categoria CategoriaFromTipoCategoria(TipoCategoria tipoCategoria)
        {
            return Categoria.List.SingleOrDefault(c => c.Tipo == tipoCategoria);
        }

    }
} 