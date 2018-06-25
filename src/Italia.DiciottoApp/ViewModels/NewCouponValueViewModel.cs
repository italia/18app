using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewCouponValueViewModel : BaseViewModel
    {
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

        private string entryValore = null;
        public string EntryValore
        {
            get => entryValore;
            set => SetProperty(ref entryValore, value, onChanged: () => OnPropertyChanged(nameof(Valore)));
        }

        public decimal Valore => decimal.TryParse(entryValore, out decimal valore) ? valore: 0;

        #endregion

        public NewCouponValueViewModel() : base()
        {
        }

    }
}