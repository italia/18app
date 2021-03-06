﻿using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    public class InfoViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Informazioni";

        public AppArea AppArea => AppArea.Info;

        public bool FindIsVisible => !SpidOnly;

        private bool spidOnly;
        public bool SpidOnly
        {
            get => spidOnly;
            set => SetProperty(ref spidOnly, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(FindIsVisible));
            });
        }

        private string findText = String.Empty;
        public string FindText
        {
            get => findText;
            set => SetProperty(ref findText, value);
        }

        public bool InfoListIsVisible => (InfoList != null && InfoList.Count > 0 && !IsBusy);

        private InfoContent selectedInfoContent;
        public InfoContent SelectedInfoContent
        {
            get => selectedInfoContent;
            set
            {
                SetProperty(ref selectedInfoContent, value);
                if (value != null)
                {
                    ToggleDetails(selectedInfoContent);
                    SelectedInfoContent = null;
                }
            }
        }

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

        public ObservableCollection<InfoContent> InfoList { get; set; } = new ObservableCollection<InfoContent>();

        #endregion

        public InfoViewModel() : base()
        {
        }

        public void GetInfoList()
        {
            if (IsBusy)
            {
                return;
            }

            IsBusy = true;
            OnPropertyChanged(nameof(InfoListIsVisible));
            ContentHeader = "Recupero informazioni in corso...";

            InfoList.Clear();

            IInfoService infoService = Service.Resolve<IInfoService>();
            IEnumerable<InfoContent> infoList = infoService.GetInfoList(FindText, SpidOnly);

            // Here we expect to receive an IEnumerable ordered by HeaderOrderIndex and then by TitleOrderIndex
            if (infoList != null)
            {
                string currentHeader = String.Empty;
                foreach (var infoContent in infoList)
                {
                    if (currentHeader != infoContent.Header)
                    {
                        currentHeader = infoContent.Header;
                        infoContent.IsHeaderVisible = String.IsNullOrWhiteSpace(currentHeader) ? false : true;
                    }
                    else
                    {
                        infoContent.IsHeaderVisible = false;
                    }
                    infoContent.IsOpen = false;

                    InfoList.Add(infoContent);
                }
            }

            IsBusy = false;
            OnPropertyChanged(nameof(InfoListIsVisible));
            ContentHeader = (infoList.Count() > 0) ? String.Empty : "Non ci sono informazioni che corrispondono al criterio di ricerca.";
        }

        public void ToggleDetails(InfoContent infoContent)
        {
            infoContent.IsOpen = !infoContent.IsOpen;
        }

    }
}