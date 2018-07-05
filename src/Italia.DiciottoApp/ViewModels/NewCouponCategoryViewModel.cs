using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class NewCouponCategoryViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Nuovo buono: categoria";

        public AppArea AppArea => AppArea.NewCoupon;

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

        public string ListtHeader => "Scegli la categoria";

        public IEnumerable<Categoria> Categories => Models.Categories.List;

        #endregion

        public NewCouponCategoryViewModel() : base()
        {
        }

    }
}