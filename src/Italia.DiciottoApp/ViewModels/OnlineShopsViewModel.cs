using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    class OnlineShopsViewModel : BaseViewModel, ISelectCategory
    {
        #region Properties

        public string PageTitle => "Negozi";

        public AppArea AppArea => AppArea.Stores;

        public bool IsCategorySelected => SelectedCategory != null && !AllCategoriesSelected;
        public bool IsCategoryNotSelected => SelectedCategory == null && !AllCategoriesSelected;

        private Categoria selectedCategory = null;
        public Categoria SelectedCategory
        {
            get => selectedCategory;
            set => SetProperty(ref selectedCategory, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(IsCategorySelected));
                OnPropertyChanged(nameof(IsCategoryNotSelected));
            });
        }

        private bool allCategoriesSelected;
        public bool AllCategoriesSelected
        {
            get => allCategoriesSelected;
            set => SetProperty(ref allCategoriesSelected, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(IsCategorySelected));
                OnPropertyChanged(nameof(IsCategoryNotSelected));
            });
        }

        public bool ShopListIsVisible => (Shops != null && Shops.Count > 0 && !IsBusy);

        public ObservableCollection<Shop> Shops { get; set; } = new ObservableCollection<Shop>();

        #endregion

        public OnlineShopsViewModel() : base()
        {
        }

        public async Task SelectCategoryAsync(Categoria categoria, bool allSelected)
        {

            if (IsBusy)
                return;

            IsBusy = true;
            OnPropertyChanged("ShopListIsVisible");

            SelectedCategory = categoria;
            AllCategoriesSelected = allSelected;

            var shopService = Service.Resolve<IShopsService>();
            var shops = await shopService.OnlineShopsAsync(categoria);

            if (shops != null)
            {
                Shops.Clear();
                foreach (var shop in shops)
                {
                    Shops.Add(shop);
                }
            }

            IsBusy = false;
            OnPropertyChanged("ShopListIsVisible");
        }

    }
}