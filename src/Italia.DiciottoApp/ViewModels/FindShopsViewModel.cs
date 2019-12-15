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
    class FindShopsViewModel : BaseViewModel, ISelectCategory, ISelectMunicipality
    {
        // private bool isSearchingShops = false;
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

        private Comune selectedMunicipality;
        public Comune SelectedMunicipality
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

        public async Task GetOnlineShopsAsync(Categoria categoria, bool allSelected)
        {
            SelectedCategory = categoria;
            AllCategoriesSelected = allSelected;
            await FindShopsAsync();
        }

        public async Task SelectMunicipalityAsync(Comune municipality)
        {
            SelectedMunicipality = municipality;
            await FindShopsAsync();
        }

        private async Task FindShopsAsync()
        {
            Debug.WriteLine($"[FindShopsAsync({SearchText})] started, ctsList count = {ctsList.Count}");

            IsBusy = true;
            OnPropertyChanged("ShopListIsVisible");

            foreach (var ctsItem in ctsList.Where(c => !c.IsCancellationRequested))
            {
                ctsItem.Cancel();
                Debug.WriteLine($"[FindShopsAsync(...)] previous DoWorkAsync task cancelled");
            }

            var cts = new CancellationTokenSource();
            CancellationToken ct = cts.Token;
            ctsList.Add(cts);

            if (SelectedCategory == null && !AllCategoriesSelected && SelectedMunicipality == null && string.IsNullOrWhiteSpace(SearchText))
            {
                Shops.Clear();
                ContentHeader = "Scegli almeno un criterio di ricerca.";
            }
            else
            {
                ContentHeader = "Ricerca negozi in corso...";

                try
                {
                    Shops.Clear();

                    var shopService = Service.Resolve<IShopsService>();
                    var shops = await shopService.FindShopsAsync(SelectedCategory, SelectedMunicipality, SearchText, ct: ct);

                    if (shops != null)
                    {
                        foreach (var shop in shops)
                        {
                            Shops.Add(shop);
                        }
                    }

                    ContentHeader = (Shops.Count() > 0) ? string.Empty : "Non ci sono negozi fisici che corrispondono al criterio di ricerca.";
                }
                catch (AggregateException e)
                {
                    foreach (var ie in e.InnerExceptions)
                        Debug.WriteLine($"[FindShopsAsync({SearchText})] (Aggregate) TaskCanceledException: " + ie.Message);
                }
                catch (Exception ex)
                {
                    Debug.WriteLine($"[FindShopsAsync({SearchText})] TaskCanceledException: " + ex.Message);
                }
                finally
                {
                    ctsList.Remove(cts);
                    cts.Dispose();
                }
            }

            Debug.WriteLine($"[FindShopsAsync({SearchText})] ended, ctsList count = {ctsList.Count}");

            IsBusy = false;
            OnPropertyChanged("ShopListIsVisible");
        }

    }
}