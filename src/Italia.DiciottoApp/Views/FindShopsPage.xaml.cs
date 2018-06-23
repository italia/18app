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
	public partial class FindShopsPage : BasePage
	{
        private FindShopsViewModel vm;

        public FindShopsPage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as FindShopsViewModel;
        }

        private async void OnNearToYouTabTapped(object sender, EventArgs e)
        {
            await NoPushNavigate(new NearToYouShopsPage());
        }

        private async void OnOnlineTabTapped(object sender, EventArgs e)
        {
            await NoPushNavigate(new OnlineShopsPage());
        }

        private async Task NoPushNavigate(ContentPage targetPage)
        {
            // Get actual page
            IReadOnlyList<Page> navStack = Navigation.NavigationStack;
            Page currentPage = navStack[navStack.Count-1];

            // Insert target page before actual page
            Navigation.InsertPageBefore(targetPage, currentPage);

            // Navigate to target
            await Navigation.PopAsync(false);
        }

    }
}