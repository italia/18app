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
        private List<CancellationTokenSource> ctsList = new List<CancellationTokenSource>();

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

        private string searchText = string.Empty;
        public string SearchText
        {
            get => searchText;
            set => SetProperty(ref searchText, value, onChanged: () =>
            {
                UpdateTextSearch();
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
            ContentHeader = "Scegli almeno un criterio di ricerca.";
        }

        private async void UpdateTextSearch()
        {
            await FindShopsAsync();
        }

        public async Task SelectCategoryAsync(Categoria categoria, bool allSelected)
        {
            SelectedCategory = categoria;
            AllCategoriesSelected = allSelected;
            await FindShopsAsync();
        }

        public async Task SelectMunicipalityAsync(Municipality municipality)
        {
            SelectedMunicipality = municipality;
            await FindShopsAsync();
        }

        private async Task FindShopsAsync()
        {
            IsBusy = true;
            OnPropertyChanged("ShopListIsVisible");

            if (isSearchingShops)
            {
                ctsList.Last().Cancel();
                await Task.Delay(3000);
                isSearchingShops = false;
            }

            if (SelectedCategory == null && !AllCategoriesSelected && SelectedMunicipality == null && string.IsNullOrWhiteSpace(SearchText))
            {
                Shops.Clear();
                ContentHeader = "Scegli almeno un criterio di ricerca.";
            }
            else
            {
                ContentHeader = "Ricerca negozi in corso...";
                isSearchingShops = true;

                var cts = new CancellationTokenSource();
                ctsList.Add(cts);
                try
                {
                    var shopService = Service.Resolve<IShopsService>();
                    var shops = await shopService.FindShopsAsync(SelectedCategory, SelectedMunicipality, SearchText, ct: cts.Token);

                    if (shops != null && !cts.Token.IsCancellationRequested)
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
            }

            IsBusy = false;
            OnPropertyChanged("ShopListIsVisible");
            ContentHeader = (Shops.Count() > 0) ? String.Empty : "Non ci sono negozi fisici che corrispondono al criterio di ricerca.";
        }

    }
}