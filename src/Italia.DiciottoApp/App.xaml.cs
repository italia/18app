using Italia.DiciottoApp.Interfaces;
using Italia.DiciottoApp.Models;
using System;
using Xamarin.Forms;
using Xamarin.Forms.Xaml;

[assembly: XamlCompilation (XamlCompilationOptions.Compile)]
namespace Italia.DiciottoApp
{
	public partial class App : Application
	{
        IAppSettings appSettings = new AppSettings();

        public App ()
		{
			InitializeComponent();

            if (appSettings.UserLogged)
            {
                MainPage = new NavigationPage(new MainPage());
            }
            else
            {
                MainPage = new MainPage();
            }
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
	}
}
