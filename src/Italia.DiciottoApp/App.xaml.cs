using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using Italia.DiciottoApp.Views;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Xamarin.Forms;
using Xamarin.Forms.Xaml;

[assembly: XamlCompilation (XamlCompilationOptions.Compile)]
namespace Italia.DiciottoApp
{
	public partial class App : Application
	{
        public static NavigationPage Navigation = null;

        public string ThisPageTitle { get; set; }

        public App ()
		{
            // Initialize Live Reload.
            LiveReload.Init();

            InitializeComponent();

            Navigation = Settings.UserLogged ? new NavigationPage(new NearToYouShopsPage()) : new NavigationPage(new WelcomePage());

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

        private async Task NavigateToPage(string appAreaTitle)
        {
            // Get the current page
            IReadOnlyList<Page> navStack = Navigation.Navigation.NavigationStack;
            Type currentPageType = navStack[navStack.Count - 1].GetType();

            if (appAreaTitle == "NewCoupon" && currentPageType != typeof(NewCouponPage))
            {
                await Navigation.PushAsync(new NewCouponPage());
            }

            if (appAreaTitle == "Wallet" && currentPageType != typeof(WalletPage))
            {
                await Navigation.PushAsync(new WalletPage());
            }

            if (appAreaTitle == "Stores" && currentPageType != typeof(NearToYouShopsPage)
                                         && currentPageType != typeof(OnlineShopsPage)
                                         && currentPageType != typeof(FindShopsPage))
            {
                await Navigation.PushAsync(new NearToYouShopsPage());
            }
        }
    }
}
