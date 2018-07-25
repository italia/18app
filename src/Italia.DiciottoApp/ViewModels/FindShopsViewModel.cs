using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    class FindShopsViewModel : BaseViewModel, ISelectCategory, ISelectMunicipality
    {
        private bool isSearchingShops = false;
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

        public bool IsMunicipalitySelected => SelectedMunicipality != null;
        public bool IsMunicipalityNotSelected => SelectedMunicipality == null;

        private Municipality selectedMunicipality;
        public Municipality SelectedMunicipality
        {
            get => selectedMunicipality;
            set => SetProperty(ref selectedMunicipality, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(IsMunicipalitySelected));
                OnPropertyChanged(nameof(IsMunicipalityNotSelected));
            });
        }

        private string searchText;
        public string SearchText
        {
            get => searchText;
            set => SetProperty(ref searchText, value, onChanged: () =>
            {
                if (!string.IsNullOrWhiteSpace(searchText) && searchText.Length > 3) UpdateTextSearch();
            });
        }

        public bool ShopListIsVisible => (Shops != null && Shops.Count > 0 && !IsBusy);

        public bool ContentHeaderIsVisible => !string.IsNullOrWhiteSpace(ContentHeader);

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

        public FindShopsViewModel() : base()
        {
        }

        private async void UpdateTextSearch()
        {
            await FindShopsAsync();
        }

        public async Task SelectCategoryAsync(Categoria categoria, bool allSelected)
        {
            await FindShopsAsync(() =>
            {
                SelectedCategory = categoria;
                AllCategoriesSelected = allSelected;
            });
        }

        public async Task SelectMunicipalityAsync(Municipality municipality)
        {
            await FindShopsAsync(() => SelectedMunicipality = municipality);
        }

        private async Task FindShopsAsync(Action setSearchValues = null)
        {
            IsBusy = true;
            OnPropertyChanged("ShopListIsVisible");
            ContentHeader = "Ricerca negozi in corso...";

            setSearchValues?.Invoke();

            if (isSearchingShops)
            {
                cts.Cancel();

                // TODO: Find a better way to wait until cancellation has compleeted
                await Task.Delay(300);
            }

            isSearchingShops = true;

            try
            {
                cts = new CancellationTokenSource();
                var shopService = Service.Resolve<IShopsService>();
                var shops = await shopService.FindShopsAsync(SelectedCategory, SelectedMunicipality, SearchText, ct: cts.Token);

                if (shops != null)
                {
                    Shops.Clear();
                    foreach (var shop in shops)
                    {
                        if (cts.Token.IsCancellationRequested)
                        {
                            Shops.Clear();
                            break;
                        }

                        Shops.Add(shop);
                    }
                }
            }
            catch (Exception ex)
            {
                // Do nothing
            }
            finally
            {
                cts.Dispose();
            }

            isSearchingShops = false;
            IsBusy = false;
            OnPropertyChanged("ShopListIsVisible");
            ContentHeader = (Shops.Count() > 0) ? String.Empty : "Non ci sono negozi fisici che corrispondono al criterio di ricerca.";
        }

    }
}