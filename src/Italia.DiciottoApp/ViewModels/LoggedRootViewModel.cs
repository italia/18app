using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.ViewModels
{
    class LoggedRootViewModel: BaseViewModel
    {
        #region Properties

        public AppArea AppArea => AppArea.None;

        public string Greetings => $"Benvenuto {Settings.UserName}, ti restano";

        #endregion

        public LoggedRootViewModel() : base()
        {
        }
    }
}
