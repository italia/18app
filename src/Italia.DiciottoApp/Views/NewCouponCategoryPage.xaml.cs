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
	public partial class NewCouponCategoryPage : BasePage
    {
        private NewCouponCategoryViewModel vm;

        public NewCouponCategoryPage()
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NewCouponCategoryViewModel;
        }

        private async void OnCategoryListItemTapped(object sender, ItemTappedEventArgs e)
        {
            if (e.Item is Categoria categoria)
            {
                // Clear the item selection
                if (sender is ListView listView)
                {
                    listView.SelectedItem = null;
                }

                await Navigation.PushAsync(new NewCouponProductPage(categoria));
            }

        }
    }
}