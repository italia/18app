using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using Italia.DiciottoApp.ViewModels.Interfaces;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    class OnlineShopsViewModel : BaseViewModel, ISelectCategory
    {
        private CancellationTokenSource cts;

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

        public bool ContentHeaderIsVisible => !String.IsNullOrWhiteSpace(ContentHeader);

        private string contentHeader;
        public string ContentHeader
        {
            get => contentHeader;
            set => SetProperty(ref contentHeader, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(ContentHeaderIsVisible));
            });
        }

        public ObservableCollection<Shop> Shops { get; set; } = new ObservableCollection<Shop>();

        #endregion

        public OnlineShopsViewModel() : base()
        {
            ContentHeader = string.Empty;
            IsBusy = false;
        }

        public async Task GetOnlineShopsAsync(Categoria categoria, bool allSelected)
        {
            Debug.WriteLine($"[GetOnlineShopsAsync] started");

            if (IsBusy)
            {
                await DisplayAlertAsync("Sto già cercando i negozi online...");
                return;
            }

            IsBusy = true;
            OnPropertyChanged("ShopListIsVisible");

            SelectedCategory = categoria;
            AllCategoriesSelected = allSelected;
            ContentHeader = "Ricerca negozi in corso...";


            try
            {
                Shops.Clear();

                cts = new CancellationTokenSource();
                var shopService = Service.Resolve<IShopsService>();
                var shops = await shopService.OnlineShopsAsync(categoria);

                if (shops != null)
                {
                    foreach (var shop in shops)
                    {
                        Shops.Add(shop);
                    }
                }

                ContentHeader = (Shops.Count() > 0) ? string.Empty : "Non ci sono negozi online che corrispondono al criterio di ricerca.";
            }
            catch (AggregateException e)
            {
                foreach (var ie in e.InnerExceptions)
                    Debug.WriteLine($"[GetOnlineShopsAsync] (Aggregate) TaskCanceledException: " + ie.Message);
            }
            catch (Exception ex)
            {
                Debug.WriteLine($"[GetOnlineShopsAsync] TaskCanceledException: " + ex.Message);
            }
            finally
            {
                cts.Dispose();
                cts = null;
            }


            IsBusy = false;
            OnPropertyChanged("ShopListIsVisible");
        }

    }
}