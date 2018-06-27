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
	public partial class LoggedRootPage : BasePage
    {
        private LoggedRootViewModel vm;

        public LoggedRootPage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as LoggedRootViewModel;
        }

        private async void OnAlreadyInShopTapped(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new NearToYouShopsPage());
        }

        private async void OnNewCouponTapped(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new NewCouponCategoryPage());
        }
    }
}