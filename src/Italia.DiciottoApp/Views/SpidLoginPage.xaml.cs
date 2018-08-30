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

        private async Task NavigateToWelcomePage()
        {
            // Get the root page
            IReadOnlyList<Page> navStack = Navigation.NavigationStack;
            Page currentRootPage = navStack[0];

            // Insert page before WelcomePage
            Navigation.InsertPageBefore(new WelcomePage(), currentRootPage);

            // Clear navigation stack
            await Navigation.PopToRootAsync();
        }

        private async Task Login(IdP idp)
        {
            // TODO: Fix this when fake login will be removed
            vm.Login(idp);

            if (Settings.UserLogged)
            {
                // Get the root page
                IReadOnlyList<Page> navStack = Navigation.NavigationStack;
                Page currentRootPage = navStack[0];

                // Insert page before WelcomePage
                Navigation.InsertPageBefore(new LoggedRootPage(), currentRootPage);
            }
            else
            {
                // Don't do anything, we'll go to the root page that is already the Welcome page
            }

            // Clear navigation stack
            await Navigation.PopToRootAsync();
        }

        private async void OnIdpArubaTapped(object sender, EventArgs e)
        {
            await Login(IdP.Aruba);
        }

        private async void OnIdpInfoCertTapped(object sender, EventArgs e)
        {
            await Login(IdP.InfoCert);
        }

        private async void OnIdpIntesaTapped(object sender, EventArgs e)
        {
            await Login(IdP.Intesa);
        }

        private async void OnIdpNamirialTapped(object sender, EventArgs e)
        {
            await Login(IdP.Namirial);
        }

        private async void OnIdpPosteTapped(object sender, EventArgs e)
        {
            await Login(IdP.Poste);
        }

        private async void OnIdpRegisterTapped(object sender, EventArgs e)
        {
            await Login(IdP.Register);
        }

        private async void OnIdpSielteTapped(object sender, EventArgs e)
        {
            await Login(IdP.Sielte);
        }

        private async void OnIdpTimTapped(object sender, EventArgs e)
        {
            await Login(IdP.Tim);
        }

    }
}