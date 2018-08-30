using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ViewModels
{
    class UserMenuPopupViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Comuni";

        public AppArea AppArea => AppArea.None;

        #endregion

        public UserMenuPopupViewModel() : base()
        {
        }
    }
}
