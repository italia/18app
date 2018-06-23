using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class UnloggedInfoViewModel: BaseViewModel
    {
        #region Properties

        public string PageTitle => "Informazioni";

        public string TodoText => $"TODO: Informazioni per utente non loggato{(spidOnlyInfo ? " (SPID only)" : "")}";

        private bool spidOnlyInfo;
        public bool SpidOnlyInfo
        {
            get => spidOnlyInfo;
            set => SetProperty(ref spidOnlyInfo, value, onChanged: () => OnPropertyChanged(nameof(TodoText)));
        }

        #endregion

        public UnloggedInfoViewModel()
        {
        }
    }
}
