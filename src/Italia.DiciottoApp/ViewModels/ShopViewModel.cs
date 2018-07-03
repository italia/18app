using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    class ShopViewModel : BaseViewModel
    {
        #region Properties

        public AppArea AppArea => AppArea.None;

        public string PageTitle => (Shop?.IsOnline ?? false) ? "Negozio online" : "Negozio";

        public string ShopBkgndImageSource => (Shop?.Categorie?.Count() > 0) ? Shop.Categorie[0].BkgndImageSource : null;

        public string ShopKindImageSource => (Shop?.IsOnline ?? false) ? "location_online_white" : "location_white";

        public string ShopAddress => $"{Shop?.Address?.Indirizzo}, {Shop?.Address?.NumeroCivico} {Shop?.Address?.Cap}  ";

        public string ShopAddress2 => (Shop == null) ? string.Empty : $"{Shop.Address?.Comune} ({Shop.Address?.SiglaProvincia})";

        public bool IsNotOnline => !(Shop?.IsOnline ?? false);

        private Shop shop;
        public Shop Shop
        {
            get => shop;
            set => SetProperty(ref shop, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(PageTitle));
                OnPropertyChanged(nameof(ShopBkgndImageSource));
                OnPropertyChanged(nameof(ShopKindImageSource));
                OnPropertyChanged(nameof(ShopAddress));
                OnPropertyChanged(nameof(ShopAddress2));
                OnPropertyChanged(nameof(IsNotOnline));
            });
        }

        #endregion

        public ShopViewModel() : base()
        {
            // TODO: remove!!!
            FakeInitialize();
        }

        private void FakeInitialize()
        {
            // Coupon
            Shop = FakeShops.GetList().ToList()[2];
        }

    }
}