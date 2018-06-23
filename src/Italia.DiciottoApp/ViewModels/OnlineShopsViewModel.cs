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

        #endregion

        public OnlineShopsViewModel() : base()
        {
        }

    }
}