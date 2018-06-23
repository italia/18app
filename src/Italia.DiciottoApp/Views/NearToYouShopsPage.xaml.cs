using Italia.DiciottoApp.ViewModels;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Essentials;

using Xamarin.Forms;
using Xamarin.Forms.Maps;
using Xamarin.Forms.Xaml;

namespace Italia.DiciottoApp.Views
{
	[XamlCompilation(XamlCompilationOptions.Compile)]
	public partial class NearToYouShopsPage : BasePage
    {
        private NearToYouShopsViewModel vm;

        public NearToYouShopsPage()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NearToYouShopsViewModel;
        }

        protected override async void OnAppearing()
        {
            base.OnAppearing();
            await vm.GetShopListAsync();
        }

        private async void OnOnlineTabTapped(object sender, EventArgs e)
        {
            await NoPushNavigate(new OnlineShopsPage());
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

        private async void OnGoToMapTapped(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new ShopsMapPage(vm.Shops, vm.UserLocation));
        }
    }
}