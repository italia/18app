using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using Italia.DiciottoApp.ViewModels;
using Rg.Plugins.Popup.Pages;
using Rg.Plugins.Popup.Services;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using Xamarin.Forms;
using Xamarin.Forms.Xaml;

namespace Italia.DiciottoApp.Views
{
    [XamlCompilation(XamlCompilationOptions.Compile)]
    public partial class UserMenuPopupPage : PopupPage
    {
        private UserMenuPopupViewModel vm;
        private NavigationPage appNavigationPage;

        public UserMenuPopupPage(NavigationPage navigationPage)
        {
            InitializeComponent();
            appNavigationPage = navigationPage;
            vm = BindingContext as UserMenuPopupViewModel;
        }

        protected async override void OnAppearing()
        {
            base.OnAppearing();
            var serviceResult = await vm?.GetBorsellinoAsync();
            await ManageServiceResult(serviceResult);
        }

        protected override void OnDisappearing()
        {
            base.OnDisappearing();
        }

        // ### Methods for supporting animations in your popup page ###

        // Invoked before an animation appearing
        protected override void OnAppearingAnimationBegin()
        {
            base.OnAppearingAnimationBegin();
        }

        // Invoked after an animation appearing
        protected override void OnAppearingAnimationEnd()
        {
            base.OnAppearingAnimationEnd();
        }

        // Invoked before an animation disappearing
        protected override void OnDisappearingAnimationBegin()
        {
            base.OnDisappearingAnimationBegin();
        }

        // Invoked after an animation disappearing
        protected override void OnDisappearingAnimationEnd()
        {
            base.OnDisappearingAnimationEnd();
        }

        protected override Task OnAppearingAnimationBeginAsync()
        {
            return base.OnAppearingAnimationBeginAsync();
        }

        protected override Task OnAppearingAnimationEndAsync()
        {
            return base.OnAppearingAnimationEndAsync();
        }

        protected override Task OnDisappearingAnimationBeginAsync()
        {
            return base.OnDisappearingAnimationBeginAsync();
        }

        protected override Task OnDisappearingAnimationEndAsync()
        {
            return base.OnDisappearingAnimationEndAsync();
        }

        // ### Overrided methods which can prevent closing a popup page ###

        // Invoked when a hardware back button is pressed
        protected override bool OnBackButtonPressed()
        {
            // Return true if you don't want to close this popup page when a back button is pressed
            return base.OnBackButtonPressed();
        }

        // Invoked when background is clicked
        protected override bool OnBackgroundClicked()
        {
            // Return false if you don't want to close this popup page when a background of the popup page is clicked
            return base.OnBackgroundClicked();
        }

        private async void OnCancelTapped(object sender, EventArgs e)
        {
            await PopupNavigation.Instance.PopAllAsync();
        }

        private async void OnUserProfileTapped(object sender, EventArgs e)
        {
            await PopupNavigation.Instance.PopAllAsync();

            // Get the current page
            IReadOnlyList<Page> navStack = appNavigationPage.Navigation.NavigationStack;
            Type currentPageType = navStack[navStack.Count - 1].GetType();

            if (currentPageType != typeof(UserProfilePage))
            {
                await appNavigationPage.PushAsync(new UserProfilePage());
            }
        }

        private async void OnNotificationsTapped(object sender, EventArgs e)
        {
            await PopupNavigation.Instance.PopAllAsync();

            // Get the current page
            IReadOnlyList<Page> navStack = appNavigationPage.Navigation.NavigationStack;
            Type currentPageType = navStack[navStack.Count - 1].GetType();

            if (currentPageType != typeof(UserNotificationsPage))
            {
                await appNavigationPage.PushAsync(new UserNotificationsPage());
            }
        }

        private async void OnLogoutTapped(object sender, EventArgs e)
        {
            // TODO Remove this code is for testing only
            // --------------------------------------------------------
            //var userInfoService = Service.Resolve<IUserInfoService>();
            //var setPresaVisioneResult = await userInfoService.SetPresaVisioneAsync(confirmed: false);
            //Debug.WriteLine($"++++ UserMenuPopupPage - SetPresaVisioneAsync(confirmed: false): {setPresaVisioneResult.Success}");
            // --------------------------------------------------------

            Settings.UserLogOut();
            await PopupNavigation.Instance.PopAllAsync();
            await appNavigationPage.PushAsync(new WelcomePage());
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

                await PopupNavigation.Instance.PopAllAsync();

                if (!Settings.UserLogged)
                {
                    // Get the root page
                    IReadOnlyList<Page> navStack = appNavigationPage.Navigation.NavigationStack;
                    Page currentRootPage = navStack[0];

                    // Insert SpidLoginPage before LoggedRootPage
                    appNavigationPage.Navigation.InsertPageBefore(new SpidLoginPage(), currentRootPage);

                    // Clear navigation stack to go to the SpidLoginPage
                    await appNavigationPage.PopToRootAsync();

                    // Add WelcomePage as root page
                    appNavigationPage.Navigation.InsertPageBefore(new WelcomePage(), navStack[0]);
                }
            }
        }

    }
}