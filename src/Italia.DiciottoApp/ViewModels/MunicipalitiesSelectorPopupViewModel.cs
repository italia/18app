﻿using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    public class MunicipalitiesSelectorPopupViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Comuni";

        public AppArea AppArea => AppArea.None;

        public ObservableCollection<Comune> Municipalities { get; set; } = new ObservableCollection<Comune>();

        private string searchText = string.Empty;
        public string SearchText
        {
            get => searchText;
            set => SetProperty(ref searchText, value, onChanged: () =>
            {
                FindMunicipalities();
            });
        }

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

        #endregion

        public MunicipalitiesSelectorPopupViewModel(): base()
        {
        }

        public void FindMunicipalities()
        {
            if (IsBusy)
            {
                return;
            }

            IsBusy = true;
            if (string.IsNullOrWhiteSpace(searchText))
            {
                Municipalities.Clear();
                ContentHeader = "Inserisci almeno un carattere...";
            }
            else
            {
                ContentHeader = "Ricerca Comuni in corso...";
                var municipalities = Comune.List.Where(m => m.NomeCompleto.ToUpper().Contains(searchText.ToUpper())).OrderBy(m => m.Nome.Length).ThenBy(m => m.Nome).Take(20);
                Municipalities.Clear();
                foreach (var municipality in municipalities)
                {
                    Municipalities.Add(municipality);
                }
                ContentHeader = "";
            }
            IsBusy = false;
        }
    }
}
