using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.Utils
{
    public static class InstabugHelper
    {
        public static void Login(string email, string name, string codFisc)
        {
            IInstabug instabug = DependencyService.Get<IInstabug>();
            instabug.IdentifyUser(email ?? "unknown@email.com", name ?? "Unknown");
            instabug.SetUserAttribute("fiscalcode", codFisc ?? "Codice Fiscale non disponibile");
        }

        public static void Logout()
        {
            IInstabug instabug = DependencyService.Get<IInstabug>();
            instabug.Logout();
        }
    }
}
