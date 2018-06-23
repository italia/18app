using Italia.DiciottoApp.Models;
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
	public partial class SpidLoginPage : BasePage
    {
        SpidLoginViewModel vm;

		public SpidLoginPage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as SpidLoginViewModel;
        }

        private async void ButtonFakeSpidLogin_Clicked(object sender, EventArgs e)
        {
            Settings.UserLogged = true;
            Settings.UserId = Guid.NewGuid().ToString();
            Settings.UserName = "Nicolò";
            Settings.UserSurname = "Carandini";

            // Get the root page
            IReadOnlyList<Page> navStack = Navigation.NavigationStack;
            Page currentRootPage = navStack[0];

            // Insert page before WelcomePage
            Navigation.InsertPageBefore(new LoggedRootPage(), currentRootPage);

            // Clear navigation stack
            await Navigation.PopToRootAsync();
        }
    }
}