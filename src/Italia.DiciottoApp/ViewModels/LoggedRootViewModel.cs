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

        public AppArea AppArea { get; set; } = AppArea.None;

        public string Greetings { get => $"Benvenuto {Settings.UserName}, ti restano";  }

        #endregion

        public LoggedRootViewModel() : base()
        {
        }
    }
}
