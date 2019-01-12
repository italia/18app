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
	public partial class AcceptPrivacyPage : BasePage
	{
        private AcceptPrivacyViewModel vm;
        private bool accepted = false;

        public AcceptPrivacyPage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = this.BindingContext as AcceptPrivacyViewModel;
        }

        protected override void OnDisappearing()
        {
            if (!accepted)
            {
                Settings.UserLogOut();
            }

            base.OnDisappearing();
        }

        private async void OnAcceptPrivacyButtonClicked(object sender, EventArgs e)
        {
            accepted = await vm.SetPresaVisioneAsync();

            // Get the root page
            IReadOnlyList<Page> navStack = Navigation.NavigationStack;
            Page currentRootPage = navStack[0];

            // Set the root page
            Navigation.InsertPageBefore(new LoggedRootPage(), currentRootPage);

            // Clear navigation stack
            await Navigation.PopToRootAsync();
        }
    }
}