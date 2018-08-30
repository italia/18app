using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewCouponProductViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Nuovo buono: prodotto";

        public AppArea AppArea => AppArea.NewCoupon;

        public string ListHeader => "Scegli il prodotto";

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