using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    class OnlineShopsViewModel : BaseViewModel
    {

        #region Properties

        public string PageTitle => "Negozi";

        public AppArea AppArea => AppArea.Stores;

        public bool IsCategorySelected => SelectedCategory != null;
        public bool IsCategoryNotSelected => SelectedCategory == null;

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

        #endregion

        public OnlineShopsViewModel() : base()
        {
        }

    }
}