using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Views;
using System;
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

            ThisPageTitle = "Pippo";

            Navigation = Settings.UserLogged ? new NavigationPage(new MainPage()) : new NavigationPage(new WelcomePage());

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

    }
}
