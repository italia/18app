using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using Rg.Plugins.Popup.Services;
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
	public partial class NewVoucherCategoryPage : BasePage
    {
        private NewVoucherCategoryViewModel vm;

        public NewVoucherCategoryPage(Shop shop = null)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NewVoucherCategoryViewModel;
            vm.Shop = shop;
        }

        protected async override void OnAppearing()
        {
            base.OnAppearing();
            var serviceResult = await vm?.GetBorsellinoAsync();
            await ManageServiceResult(serviceResult);
        }

        private async void OnCategoryListItemTapped(object sender, ItemTappedEventArgs e)
        {
            if (e.Item is Categoria categoria)
            {
                // Clear the item selection
                if (sender is ListView listView)
                {
                    listView.SelectedItem = null;
                }

                await Navigation.PushAsync(new NewVoucherProductPage(vm.Shop, categoria));
            }
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
                    // Get the root page
                    IReadOnlyList<Page> navStack = Navigation.NavigationStack;
                    Page currentRootPage = navStack[0];

                    if (navStack.Count != 1)
                    {
                        // Due to a bug of Xamarin Forms Navigation methods
                        // this code breaks if the navigation stack count == 1, i.e. currentRootPage == this
                        // so we use it only if navStack.Count != 1

                        // Set the root page
                        Navigation.InsertPageBefore(new SpidLoginPage(), currentRootPage);

                        // Clear navigation stack to go to the SpidLoginPage
                        await Navigation.PopToRootAsync();

                        // Add WelcomePage as root page
                        Navigation.InsertPageBefore(new WelcomePage(), navStack[0]);
                    }
                    else
                    {
                        // Here is the workaround of the Xamarin bug

                        var spidLoginPage = new SpidLoginPage();

                        // Set the root page
                        Navigation.InsertPageBefore(spidLoginPage, this);

                        // Add WelcomePage as root page
                        Navigation.InsertPageBefore(new WelcomePage(), navStack[0]);

                        // Clear navigation stack (only this page in this case) to go to the SpidLoginPage
                        await Navigation.PopAsync();
                    }
                }
            }
        }

    }
}