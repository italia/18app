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
            Settings.UserName = "Franco";
            Settings.UserSurname = "Rossi";
            Settings.UserCodFisc = "RSSFNC00H22H501G";
            Settings.UserEmail = "franco.rossi@testdomain.it";
            Settings.UserResidenceAddress = "Via della Repubblica, 171";
            Settings.UserResidenceZip = "31100";
            Settings.UserResidenceCity = "Treviso";
            Settings.UserResidenceProvince = "TV";
            Settings.UserBirthDate = "22/06/2000";
            Settings.UserBirthCity = "Roma";
            Settings.UserBirthProvince = "RM";
            Settings.UserPhoneNumber = "333 1234567";
            Settings.UserSpidIdPIndex = (int)idp;
        }
    }
}
