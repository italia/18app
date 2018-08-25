using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;
using Italia.DiciottoApp.Models;

namespace Italia.DiciottoApp.ViewModels
{
    public class SpidLoginViewModel : BaseViewModel
    {
        #region Properties

        public string PageTitle => "Login";

        #endregion

        public SpidLoginViewModel(): base()
        {
        }

        public void Login(IdP idp)
        {
            // TODO: call login service passing the idp parameter

            // TODO: remove fake succes code:
            Settings.UserLogged = true;
            Settings.UserId = Guid.NewGuid().ToString();
            Settings.UserName = "Nicolò";
            Settings.UserSurname = "Carandini";
        }
    }
}
