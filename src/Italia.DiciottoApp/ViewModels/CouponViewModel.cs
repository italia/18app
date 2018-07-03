using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.ViewModels
{
    public class CouponViewModel : BaseViewModel
    {
        private readonly Color red = new Color(r: .82, g: .01, b: .11);
        private readonly Color green = new Color(r: 0.13, g: 0.69, b: 0.45);

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

        public string PageTitle => (Coupon?.Spent ?? false) ? "Buono utilizzato"
                                   : JustCreated ? "Buono creato"
                                   : "Dettagli del buono";

        public AppArea AppArea => AppArea.NewCoupon;

        public string CouponOwner => $"{Settings.UserName} {Settings.UserSurname}";

        public string ShopBkgndImageSource => (Coupon?.Shop?.Categorie?.Count() > 0) ? Coupon.Shop.Categorie[0].BkgndImageSource : null;

        public string ShopKindImageSource => (Coupon?.Shop?.IsOnline ?? false) ? "location_online_white" : "location_white";

        public string ShopAddress => (Coupon?.Shop == null) ? string.Empty
                                     : Coupon.Shop.IsOnline ? Coupon.Shop.Url
                                     : $"{Coupon.Shop.Address?.Comune} ({Coupon.Shop.Address?.SiglaProvincia})";

        public string CouponStatus =>
            Coupon == null ? string.Empty
                           : Coupon.Spent ? $"Buono utilizzato il {Coupon.SpentDateTime.ToString("dd MMMM yy")} alle ore {Coupon.SpentDateTime.ToString("hh.mm")}"
                           : $"Il nuovo buono è stato creato correttamente";

        public Color CouponStatusTextColor => (Coupon?.Spent ?? false) ? red : green;

        public bool UseCouponOnlineButtonIsVisible => (!Coupon?.Spent ?? false) && (Coupon?.Shop?.IsOnline ?? false);

        public bool ShopRouteButtonIsVisible => (!Coupon?.Spent ?? false) && (!Coupon?.Shop?.IsOnline ?? false);

        public bool CouponNotSpent => !Coupon?.Spent ?? false;

        public bool CouponSpent => Coupon?.Spent ?? false;

        public string QRcodeImageSource => "fake_qrcode";

        public string BarcodeImageSource => "fake_barcode";

        private Coupon coupon;
        public Coupon Coupon
        {
            get => coupon;
            set => SetProperty(ref coupon, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(PageTitle));
                OnPropertyChanged(nameof(ShopBkgndImageSource));
                OnPropertyChanged(nameof(ShopKindImageSource));
                OnPropertyChanged(nameof(ShopAddress));
                OnPropertyChanged(nameof(CouponStatus));
                OnPropertyChanged(nameof(CouponStatusTextColor));
                OnPropertyChanged(nameof(UseCouponOnlineButtonIsVisible));
                OnPropertyChanged(nameof(ShopRouteButtonIsVisible));
                OnPropertyChanged(nameof(CouponNotSpent));
                OnPropertyChanged(nameof(CouponSpent));
                OnPropertyChanged(nameof(QRcodeImageSource));
                OnPropertyChanged(nameof(BarcodeImageSource));
            });
        }

        #endregion

        public CouponViewModel() : base()
        {
            // TODO: remove!!!
            FakeInitialize();
        }

        private void FakeInitialize()
        {
            // Title
            JustCreated = false;

            // Coupon
            string id = "DF69A8D5";
            Shop fakeShop = FakeShops.GetList().ToList()[2];
            Coupon coupon = new Coupon
            {
                Id = id,
                Category = Categories.Libri,
                Product = Categories.Libri.Prodotti[0],
                Value = 12.34,
                QrCodeValue = id,
                BarCodeValue = id,
                ShopId = fakeShop.Id,
                Shop = fakeShop,
                Spent = true
            };

            Coupon = coupon;
        }

    }
} 