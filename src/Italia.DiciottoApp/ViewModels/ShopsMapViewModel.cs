using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class ShopsMapViewModel: BaseViewModel
    {
        #region Properties

        public string PageTitle => "Mappa dei negozi";

        public AppArea AppArea => AppArea.Stores;

        public bool TouchPinNoteIsVisible => !PinSelected;

        private bool pinSelected;
        public bool PinSelected
        {
            get => pinSelected;
            set => SetProperty(ref pinSelected, value, onChanged: () => OnPropertyChanged(nameof(TouchPinNoteIsVisible)));
        }

        private Shop selectedShop;
        public Shop SelectedShop
        {
            get => selectedShop;
            set => SetProperty(ref selectedShop, value);
        }

        #endregion

        public ShopsMapViewModel(): base()
        {
        }
    }
}
