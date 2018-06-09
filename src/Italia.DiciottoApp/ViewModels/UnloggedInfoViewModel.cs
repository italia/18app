using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class UnloggedInfoViewModel
    {
        public event PropertyChangedEventHandler PropertyChanged;

        protected void NotifyPropertyChanged([CallerMemberName] String propertyName = "")
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
        }

        #region Properties

        public string PageTitle { get; set; } = "Informazioni";

        public string TodoText { get => $"TODO: Informazioni per utente non loggato{(spidOnlyInfo ? " (SPID only)" : "")}"; }

        private bool spidOnlyInfo;
        public bool SpidOnlyInfo
        {
            get
            {
                return spidOnlyInfo;
            }

            set
            {
                if (value != spidOnlyInfo)
                {
                    spidOnlyInfo = value;
                    NotifyPropertyChanged();
                    NotifyPropertyChanged("TodoText");
                }
            }
        }

        #endregion

        public UnloggedInfoViewModel()
        {

        }
    }
}
