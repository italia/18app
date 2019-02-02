using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Utils;
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
	public partial class LoggedRootPage : BasePage
    {
        private LoggedRootViewModel vm;

        public LoggedRootPage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as LoggedRootViewModel;
        }

        protected async override void OnAppearing()
        {
            base.OnAppearing();
            var serviceResult = await vm?.GetBorsellinoAsync();
            await ManageServiceResult(serviceResult);
        }

        private async void OnAlreadyInShopTapped(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new NearToYouShopsPage());
        }

        private async void OnNewVoucherTapped(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new NewVoucherCategoryPage());
        }

        private async Task ManageServiceResult(ServiceResult serviceResult)
        {
            if (!serviceResult.Success)
            {
                string title;
                string msg;

                if (serviceResult.FailureReason == ServiceFailureReason.Forbidden || serviceResult.FailureReason == ServiceFailureReason.InternalServerError)
                {
                    title = "Session timeout";
                    msg = "La sessione è scaduta, occorre effettuare nuovamente il login";
                    Settings.FEDSecureTokenValue = string.Empty;
                    Settings.UserLogOut();
                }
                else
                {
                    title = "Service Error";
                    msg = "Servizio al momento non disponibile";
                }

                await DisplayAlert(title, msg, "OK");

                if (!Settings.UserLogged)
                {
                    var spidLoginPage = new SpidLoginPage();

                    // Set the root page
                    Navigation.InsertPageBefore(spidLoginPage, this);

                    // Get the root page
                    IReadOnlyList<Page> navStack = Navigation.NavigationStack;
                    Page currentRootPage = navStack[0];

                    // Add WelcomePage as root page
                    Navigation.InsertPageBefore(new WelcomePage(), navStack[0]);

                    // Clear navigation stack to go to the SpidLoginPage
                    await Navigation.PopAsync();

                }
            }
        }
    }
}