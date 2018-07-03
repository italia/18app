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
	public partial class OnlineShopsPage : BasePage
    {
        private OnlineShopsViewModel vm;

        public OnlineShopsPage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as OnlineShopsViewModel;
        }

        private async void OnNearToYouTabTapped(object sender, EventArgs e)
        {
            await NoPushNavigate(new NearToYouShopsPage());
        }

        private async void OnFindTabTapped(object sender, EventArgs e)
        {
            await NoPushNavigate(new FindShopsPage());
        }

        private async Task NoPushNavigate(ContentPage targetPage)
        {
            // Get actual page
            IReadOnlyList<Page> navStack = Navigation.NavigationStack;
            Page currentPage = navStack[navStack.Count - 1];

            // Insert target page before actual page
            Navigation.InsertPageBefore(targetPage, currentPage);

            // Navigate to target
            await Navigation.PopAsync(false);
        }

        private void OnCategoryButtonTapped(object sender, EventArgs e)
        {
            // TODO
        }
    }
}