using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewCouponProductViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Nuovo buono: prodotto";

        public AppArea AppArea => AppArea.NewCoupon;

        public string ListHeader => "Scegli il prodotto";

        private Categoria categoria;
        public Categoria Categoria
        {
            get => categoria;
            set => SetProperty(ref categoria, value, onChanged: () => OnPropertyChanged(nameof(Products)));
        }

        public IEnumerable<Prodotto> Products => Categoria?.Prodotti;

        #endregion

        public NewCouponProductViewModel() : base()
        {
        }

    }
}