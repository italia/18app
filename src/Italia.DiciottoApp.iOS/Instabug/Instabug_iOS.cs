using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using Foundation;
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
            throw new NotImplementedException();
        }

        public void Logout()
        {
            throw new NotImplementedException();
        }

        public void SetUserAttribute(string attributeName, string attributeValue)
        {
            throw new NotImplementedException();
        }

        public void Show()
        {
            throw new NotImplementedException();
        }
    }
}