using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using Xamarin.Forms;
using Xamarin.Forms.Xaml;

namespace Italia.DiciottoApp.Views
{
	[XamlCompilation(XamlCompilationOptions.Compile)]
	public partial class SpidLoginPage : BasePage
    {
        SpidLoginViewModel vm;

		public SpidLoginPage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as SpidLoginViewModel;
        }

        private async void OnIdpArubaTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = true;
            Settings.SetUserSpidIdPIndex(IdP.Aruba);
            await Navigation.PushAsync(new LoginWebPage(IdP.Aruba));
        }

        private async void OnIdpInfoCertTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = true;
            Settings.SetUserSpidIdPIndex(IdP.InfoCert);
            await Navigation.PushAsync(new LoginWebPage(IdP.InfoCert));
        }

        private async void OnIdpIntesaTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = true;
            Settings.SetUserSpidIdPIndex(IdP.Aruba);
            await Navigation.PushAsync(new LoginWebPage(IdP.Intesa));
        }

        private async void OnIdpLepidaTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = true;
            Settings.SetUserSpidIdPIndex(IdP.Lepida);
            await Navigation.PushAsync(new LoginWebPage(IdP.Lepida));
        }

        private async void OnIdpNamirialTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = true;
            Settings.SetUserSpidIdPIndex(IdP.Namirial);
            await Navigation.PushAsync(new LoginWebPage(IdP.Namirial));
        }

        private async void OnIdpPosteTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = true;
            Settings.SetUserSpidIdPIndex(IdP.Poste);
            await Navigation.PushAsync(new LoginWebPage(IdP.Poste));
        }

        private async void OnIdpRegisterTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = true;
            Settings.SetUserSpidIdPIndex(IdP.Register);
            await Navigation.PushAsync(new LoginWebPage(IdP.Register));
        }

        private async void OnIdpSielteTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = true;
            Settings.SetUserSpidIdPIndex(IdP.Sielte);
            await Navigation.PushAsync(new LoginWebPage(IdP.Sielte));
        }

        private async void OnIdpTimTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = true;
            Settings.SetUserSpidIdPIndex(IdP.Tim);
            await Navigation.PushAsync(new LoginWebPage(IdP.Tim));
        }

        private async void OnIdpTestTapped(object sender, EventArgs e)
        {
            Settings.IsProductionEnvironment = false;
            Settings.SetUserSpidIdPIndex(IdP.Test);
            await Navigation.PushAsync(new LoginWebPage(IdP.Test));
        }
    }
}