using Italia.DiciottoApp.Droid;
using System;
using Xamarin.Forms;

[assembly: Dependency(typeof(Instabug_Android))]
namespace Italia.DiciottoApp.Droid
{
    public class Instabug_Android : IInstabug
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