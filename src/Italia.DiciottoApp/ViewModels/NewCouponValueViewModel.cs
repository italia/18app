using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewCouponValueViewModel : BaseViewModel
    {
        private double valore;

        #region Properties

        public string PageTitle => "Nuovo buono: valore";

        public AppArea AppArea => AppArea.NewCoupon;

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

        public string EntryValuePlaceholder => 499.99.ToString("###.##");

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
            set => SetProperty(ref entryValueIsValid, value);
        }

        private string errorMessage = null;
        public string ErrorMessage
        {
            get => errorMessage;
            set => SetProperty(ref errorMessage, value);
        }

        #endregion

        public NewCouponValueViewModel() : base()
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
                if (!double.TryParse(valueText, out valore))
                {
                    isValid = false;
                    ErrorMessage = "Il valore inserito non è un numero.";
                }
                else if (valore <= 0 || valore > ActualCredit)
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
        public async Task<Coupon> CreateCouponAsync()
        {
            Coupon coupon = null;

            if (ValidateEntry(EntryValue))
            {
                ICouponsService couponsService = Service.Resolve<ICouponsService>();
                coupon = await couponsService.CreateCoupon(Categoria, Prodotto, valore);
            }

            return coupon;
        }

    }
}