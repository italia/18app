using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.Utils
{
    public static class InstabugHelper
    {
        static readonly bool InstabugEnabled = true;

        public static void Login(string email, string name, string codFisc)
        {
            IInstabug instabug = DependencyService.Get<IInstabug>();
            instabug.IdentifyUser(email, name);
            instabug.SetUserAttribute("fiscalcode", codFisc);
        }

        public static void Logout()
        {
            IInstabug instabug = DependencyService.Get<IInstabug>();
            instabug.Logout();
        }
    }
}
