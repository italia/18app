using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using Rg.Plugins.Popup.Services;
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
            if (!vm.IsBusy)
            {
                PopupNavigation.Instance.PushAsync(new CategoriesSelectorPopupPage(vm), animate: false);
            }
        }

        private async void OnListViewItemTapped(object sender, ItemTappedEventArgs e)
        {
            if (e.Item is Shop shop)
            {
                // Clear the item selection
                if (sender is ListView listView)
                {
                    listView.SelectedItem = null;
                }

                await Navigation.PushAsync(new ShopPage(shop));
            }
        }
    }
}