using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    class LoginWebPageViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "IdP Login";

        public AppArea AppArea => AppArea.None;

        #endregion
    }
}
