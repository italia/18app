using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using Foundation;
using InstabugLib;
using Italia.DiciottoApp.iOS;
using UIKit;
using Xamarin.Forms;

[assembly: Dependency(typeof(Instabug_iOS))]
namespace Italia.DiciottoApp.iOS
{
    public class Instabug_iOS : IInstabug
    {
        public void IdentifyUser(string email, string name)
        {
            Instabug.IdentifyUserWithEmail(email, name);
        }

        public void Logout()
        {
            Instabug.LogOut();
        }

        public void SetUserAttribute(string attributeName, string attributeValue)
        {
            Instabug.SetUserAttribute(attributeName, attributeValue);
        }
    }
}