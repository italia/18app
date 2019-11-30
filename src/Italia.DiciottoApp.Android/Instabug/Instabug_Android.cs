using Com.Instabug.Library;
using Italia.DiciottoApp.Droid;
using Xamarin.Forms;

[assembly: Dependency(typeof(Instabug_Android))]
namespace Italia.DiciottoApp.Droid
{
    public class Instabug_Android : IInstabug
    {
        public void IdentifyUser(string email, string name)
        {
            Instabug.IdentifyUser(name, email);
        }
        
        public void Logout()
        {
            Instabug.LogoutUser();
        }

        public void SetUserAttribute(string attributeName, string attributeValue)
        {
            Instabug.SetUserAttribute(attributeName, attributeValue);
        }
    }
}