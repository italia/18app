using Italia.DiciottoApp.Models;
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
	public partial class SpidLoginPage : ContentPage
	{
		public SpidLoginPage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            Title = "SPID Login";
		}

        private async void ButtonFakeSpidLogin_Clicked(object sender, EventArgs e)
        {
            Settings.UserLogged = true;
            Settings.UserId = Guid.NewGuid().ToString();
            Settings.UserName = "Nicolò";
            Settings.UserSurname = "Carandini";

            // Get the root page
            IReadOnlyList<Page> navStack = Navigation.NavigationStack;
            Page welcomePage = navStack[0];

            // Insert page before WelcomePage
            Navigation.InsertPageBefore(new NearToYouShopsPage(), welcomePage);

            // Clear navigation stack
            await Navigation.PopToRootAsync();
        }
    }
}