using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class ShopsMapViewModel: BaseViewModel
    {
        #region Properties

        public string PageTitle { get; set; } = "Mappa dei negozi";

        public AppArea AppArea { get; set; } = AppArea.Stores;

        #endregion

        public ShopsMapViewModel(): base()
        {
        }
    }
}
