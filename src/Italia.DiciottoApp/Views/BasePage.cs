using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

namespace Italia.DiciottoApp.Views
{
    public class BasePage : ContentPage
    {
        public BasePage()
        {
            NavigationPage.SetBackButtonTitle(this, "Back");
        }

        protected override void OnAppearing()
        {
            base.OnAppearing();

            if (BindingContext is BaseViewModel vm)
            {
                vm.DoDisplayAlert += OnDisplayAlert;
                vm.OnAppearing();
            }
        }

        protected override void OnDisappearing()
        {
            if (BindingContext is BaseViewModel vm)
            {
                vm.OnDisappearing();
                vm.DoDisplayAlert -= OnDisplayAlert;
            }

            base.OnDisappearing();
        }

        Task OnDisplayAlert(string message)
        {
            return DisplayAlert(Title, message, "OK");
        }

        private async Task ManageLoginServiceResult(ServiceResult serviceResult)
        {
            if (!serviceResult.Success)
            {
                string title;
                string msg;

                if (serviceResult.FailureReason == ServiceFailureReason.Forbidden)
                {
                    title = "Session timeout";
                    msg = "La sessione è scaduta, occorre effettuare nuovamente il login";
                    Settings.FEDSecureToken = string.Empty;
                    Settings.UserLogged = false;
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

                    // Insert SpidLoginPage before LoggedRootPage
                    Navigation.InsertPageBefore(new SpidLoginPage(), currentRootPage);

                    // Clear navigation stack to go to the SpidLoginPage
                    await Navigation.PopToRootAsync();

                    // Insert WelcomePage before SpidLoginPage 
                    Page spinLoginPage = navStack[0];
                    Navigation.InsertPageBefore(new WelcomePage(), spinLoginPage);

                    // Do not navigate any further, as now we have a navigation stack with a root WelcomePage and an actual SpidLoginPage
                }
            }
        }
    }
}
