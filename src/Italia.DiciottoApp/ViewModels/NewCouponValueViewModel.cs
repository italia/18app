using Italia.DiciottoApp.Models;
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

        public bool EntryValueIsValid => string.IsNullOrWhiteSpace(ErrorMessage);
        public bool EntryValueIsNotValid => !string.IsNullOrWhiteSpace(ErrorMessage);

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

        public void ValidateEntry(TextChangedEventArgs e)
        {
            double.TryParse(entryValue, out valore);
            EntryValue = valore.ToString("###.##");
            ErrorMessage = valore > ActualCredit ? "Il valore non può essere superiore al credito disponibile." : string.Empty;
        }

        public async Task CreateCouponAsync()
        {

        }

    }
}