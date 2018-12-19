using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Views;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Xamarin.Essentials;
using Xamarin.Forms;
using Xamarin.Forms.Xaml;
using Microsoft.AppCenter;
using Microsoft.AppCenter.Analytics;
using Microsoft.AppCenter.Crashes;
using Rg.Plugins.Popup.Services;

[assembly: XamlCompilation (XamlCompilationOptions.Compile)]
[assembly: System.Runtime.CompilerServices.InternalsVisibleTo("Italia.DiciottoApp.Test")]
namespace Italia.DiciottoApp
{
	public partial class App : Application
	{
        public static NavigationPage Navigation = null;
        public static Location LastLocation = null;
        public static IEnumerable<Shop> Shops = null;

        public App ()
		{
            // Initialize Live Reload.
#if DEBUG
            LiveReload.Init();
#endif
            InitializeComponent();

            if (!Settings.UserLogged)
            {
                Navigation = new NavigationPage(new WelcomePage());
            }
            else if (Settings.UserAcceptanceFlag == "0")
            {
                Navigation = new NavigationPage(new AcceptPrivacyPage());
            }
            else
            {
                Navigation = new NavigationPage(new LoggedRootPage());
            }

            MainPage = Navigation;
        }

		protected override void OnStart ()
		{
            // Handle when your app starts
            AppCenter.Start("ios=552ba3b6-8ebd-4680-a92d-dce13b3178a1;" + //"uwp={Your UWP App secret here};" +
                "android=89c56297-21e0-4784-8cbc-0e0225995c77",
                typeof(Analytics), typeof(Crashes));
        }

		protected override void OnSleep ()
		{
			// Handle when your app sleeps
		}

		protected override void OnResume ()
		{
			// Handle when your app resumes
		}

        public async void OnBackButtonPressed(object sender, EventArgs e)
        {
            await Navigation.PopAsync();
        }

        private async void ButtonLogin_Clicked(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new SpidLoginPage());
        }

        private async void AppLogoTapped(object sender, EventArgs e)
        {
            await NavigateToPage("Info");
        }

        private async void OnNewCouponIconTapped(object sender, EventArgs e)
        {
            await NavigateToPage("NewCoupon");
        }
        private async void OnWalletIconTapped(object sender, EventArgs e)
        {
            await NavigateToPage("Wallet");
        }
        private async void OnStoresIconTapped(object sender, EventArgs e)
        {
            await NavigateToPage("Stores");
        }
        private async void OnInfoIconTapped(object sender, EventArgs e)
        {
            await NavigateToPage("Info");
        }

        private async void OnUserIconTapped(object sender, EventArgs e)
        {
            await PopupNavigation.Instance.PushAsync(new UserMenuPopupPage(Navigation), animate: false);
        }

        private async void OnCreditTapped(object sender, EventArgs e)
        {
            await NavigateToPage("Credit");
        }
        private async Task NavigateToPage(string appAreaTarget)
        {
            // Get the current page
            IReadOnlyList<Page> navStack = Navigation.Navigation.NavigationStack;
            Type currentPageType = navStack[navStack.Count - 1].GetType();

            if (appAreaTarget == "NewCoupon" && currentPageType != typeof(NewCouponCategoryPage)
                                             && currentPageType != typeof(NewCouponProductPage)
                                             && currentPageType != typeof(NewCouponValuePage))
            {
                await Navigation.PushAsync(new NewCouponCategoryPage());
            }

            if (appAreaTarget == "Wallet" && currentPageType != typeof(WalletPage))
            {
                await Navigation.PushAsync(new WalletPage());
            }

            if (appAreaTarget == "Stores" && currentPageType != typeof(NearToYouShopsPage)
                                         && currentPageType != typeof(OnlineShopsPage)
                                         && currentPageType != typeof(FindShopsPage))
            {
                await Navigation.PushAsync(new NearToYouShopsPage());
            }

            if (appAreaTarget == "Info" && currentPageType != typeof(InfoPage))
            {
                await Navigation.PushAsync(new InfoPage());
            }

            if (appAreaTarget == "Credit" && currentPageType != typeof(LoggedRootPage))
            {
                await Navigation.PushAsync(new LoggedRootPage());
            }
        }

    }
}
