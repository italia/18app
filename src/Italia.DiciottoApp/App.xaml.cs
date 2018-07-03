using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using Italia.DiciottoApp.Views;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Xamarin.Essentials;
using Xamarin.Forms;
using Xamarin.Forms.Xaml;

[assembly: XamlCompilation (XamlCompilationOptions.Compile)]
namespace Italia.DiciottoApp
{
	public partial class App : Application
	{
        public static NavigationPage Navigation = null;

        public static Location LastLocation = null;
        public static IEnumerable<Shop> Shops = null;

        public string ThisPageTitle { get; set; }

        public App ()
		{
            // Initialize Live Reload.
#if DEBUG
            LiveReload.Init();
#endif
            InitializeComponent();

            Navigation = Settings.UserLogged ? new NavigationPage(new LoggedRootPage()) : new NavigationPage(new WelcomePage());

            MainPage = Navigation;
        }

		protected override void OnStart ()
		{
			// Handle when your app starts
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
            Settings.UserLogged = false;
            await Navigation.PushAsync(new WelcomePage());
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
