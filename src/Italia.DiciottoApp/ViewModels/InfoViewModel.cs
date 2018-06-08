using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    public class InfoViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle { get; set; } = "Informazioni";

        public AppArea AppArea { get; set; } = AppArea.Info;

        #endregion

        public InfoViewModel() : base()
        {

        }

    }
}