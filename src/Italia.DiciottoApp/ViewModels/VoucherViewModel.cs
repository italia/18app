using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
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

        public bool ShopHasGeolocation => Voucher.Shop.Location != null && Voucher.Shop.Location.Latitude != 0 && Voucher.Shop.Location.Longitude != 0;

        public bool ShopRouteButtonIsVisible => (!Voucher?.Spent ?? false) && (!Voucher?.Shop?.IsOnline ?? false) && ShopHasGeolocation;

        public bool VoucherNotSpent => !Voucher?.Spent ?? false;

        public bool VoucherSpent => Voucher?.Spent ?? false;

        public double VoucherValue => (Voucher?.Spent ?? false) ? Voucher.ValidatedValue : Voucher.RequestedValue;

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
                OnPropertyChanged(nameof(VoucherValue));
                OnPropertyChanged(nameof(QRcodeImageSource));
                OnPropertyChanged(nameof(BarcodeImageSource));
            });
        }

        #endregion

        public VoucherViewModel() : base()
        {
            IsBusy = false;
        }

        public async Task<DeleteVoucherResult> DeleteVoucherAsync()
        {
            DeleteVoucherResult deleteVoucherResult = new DeleteVoucherResult
            {
                Success = false,
                StillUnableToDeleteMuseumVoucher = false,
                DeleteMuseumVoucherStartDate = null
            };

            Cookie fedSecureToken = new Cookie
            {
                Name = Constants.COOKIES_SECURE_TOKEN,
                Value = Settings.FEDSecureTokenValue
            };

            IVouchersService vouchersService = Service.Resolve<IVouchersService>();
            var deleteVoucherServiceResult = await vouchersService.DeleteVoucherAsync(fedSecureToken, Voucher);

            deleteVoucherResult.Success = deleteVoucherServiceResult.Success;

            deleteVoucherResult.StillUnableToDeleteMuseumVoucher = !(deleteVoucherServiceResult.Result?.Risultato ?? false)
                                                                   && deleteVoucherServiceResult.Result?.ErrorCode == 1;

            deleteVoucherResult.DeleteMuseumVoucherStartDate = deleteVoucherServiceResult.Result?.DataStartAnnullaMuseo;

            return deleteVoucherResult;
        }

        private static Categoria CategoriaFromTipoCategoria(TipoCategoria tipoCategoria)
        {
            return Categoria.List.SingleOrDefault(c => c.Tipo == tipoCategoria);
        }

    }
} 