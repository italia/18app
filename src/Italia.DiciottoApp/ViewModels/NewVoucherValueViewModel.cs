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
    public class NewVoucherValueViewModel : BaseViewModel
    {
        private double valore;
        private readonly CultureInfo ci = new CultureInfo("it-IT");

        #region Properties

        public string PageTitle => "Nuovo buono: valore";

        public AppArea AppArea => AppArea.NewVoucher;

        public bool HasShop => (Shop != null);

        public string ShopBkgndImageSource => (Shop?.Categorie?.Count() > 0) ? Shop.Categorie[0].BkgndImageSource : null;

        public string ShopKindImageSource => (Shop?.IsOnline ?? false) ? "location_online_white" : "location_white";

        public string ShopAddress => (Shop == null) ? string.Empty
                                     : Shop.IsOnline ? Shop.Url
                                     : $"{Shop.Address?.Comune} ({Shop.Address?.SiglaProvincia})";

        public bool IsNotOnline => !(Shop?.IsOnline ?? false);

        private Shop shop;
        public Shop Shop
        {
            get => shop;
            set => SetProperty(ref shop, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(HasShop));
                OnPropertyChanged(nameof(ShopBkgndImageSource));
                OnPropertyChanged(nameof(ShopKindImageSource));
                OnPropertyChanged(nameof(ShopAddress));
                OnPropertyChanged(nameof(IsNotOnline));
            });
        }

        public string ValueMessage => "Inserisci il valore del buono";

        private Categoria categoria;
        public Categoria Categoria
        {
            get => categoria;
            set => SetProperty(ref categoria, value);
        }

        private Prodotto prodotto;
        public Prodotto Prodotto
        {
            get => prodotto;
            set => SetProperty(ref prodotto, value);
        }

        public string EntryValuePlaceholder => 499.99.ToString("###.##", ci);

        private string entryValue = null;
        public string EntryValue
        {
            get => entryValue;
            set => SetProperty(ref entryValue, value);
        }

        private bool entryValueIsValid;
        public bool EntryValueIsValid
        {
            get => entryValueIsValid;
            set => SetProperty(ref entryValueIsValid, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(CreateVoucherButtonEnabled));
            });
        }

        private bool createVoucherActionInProgress;
        public bool CreateVoucherActionInProgress
        {
            get => createVoucherActionInProgress;
            set => SetProperty(ref createVoucherActionInProgress, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(CreateVoucherButtonEnabled));
            });
        }

        public bool CreateVoucherButtonEnabled
        {
            get => !CreateVoucherActionInProgress && EntryValueIsValid;
        }

        private string errorMessage = null;
        public string ErrorMessage
        {
            get => errorMessage;
            set => SetProperty(ref errorMessage, value);
        }

        #endregion

        public NewVoucherValueViewModel() : base()
        {
        }

        public bool ValidateEntry(string valueText)
        {
            bool isValid = true;
            if (string.IsNullOrWhiteSpace(valueText))
            {
                isValid = false;
                ErrorMessage = string.Empty;
            }
            else
            {
                if (!double.TryParse(valueText, NumberStyles.Any, ci, out valore))
                {
                    isValid = false;
                    ErrorMessage = "Il valore inserito non è un numero.";
                }
                else if (valore <= 0 || valore > Settings.BorsellinoImportoResiduo) // ActualCredit
                {
                    isValid = false;
                    ErrorMessage = "Il valore dev'essere maggiore di zero e non superiore al credito disponibile.";
                }
                else if (Math.Abs(valore - Math.Round(valore, 2)) > 0)
                {
                    isValid = false;
                    ErrorMessage = "Il valore non deve avere più di due cifre decimali.";
                }
                else
                {
                    ErrorMessage = string.Empty;
                }
            }

            EntryValueIsValid = isValid;
            return isValid;
        }

        public async Task<Voucher> CreateVoucherAsync()
        {
            Voucher voucher = null;

            if (ValidateEntry(EntryValue))
            {
                Cookie fedSecureToken = new Cookie
                {
                    Name = Constants.COOKIES_SECURE_TOKEN,
                    Value = Settings.FEDSecureTokenValue
                };

                IVouchersService vouchersService = Service.Resolve<IVouchersService>();
                var createVoucherServiceResult = await vouchersService.CreateVoucherAsync(fedSecureToken, Categoria, Prodotto, valore, online: false);
                if (createVoucherServiceResult.Success)
                {
                    voucher = Voucher.FromVoucherBean(createVoucherServiceResult.Result, online: false);
                }
                else
                {
                    await DisplayAlertAsync("Creazione buono non riuscita");
                }
            }

            return voucher;
        }

        public async Task<ServiceResult> GetBorsellinoAsync()
        {
            var userInfoService = Service.Resolve<IUserInfoService>();
            var getBorsellinoResult = await userInfoService.GetBorsellinoAsync();
            Debug.WriteLine($"++++ NewVoucherValue - GetBorsellinoAsync: {getBorsellinoResult.Success}");

            if (getBorsellinoResult.Success && getBorsellinoResult.Result != null)
            {
                Settings.SetBorsellino(getBorsellinoResult.Result);
                OnPropertyChanged(nameof(UserCredit));
            }

            return getBorsellinoResult;
        }

    }
}