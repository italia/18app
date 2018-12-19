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
	public partial class ShopPage : BasePage
    {
        private ShopViewModel vm;

        public ShopPage(Shop shop)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as ShopViewModel;
            vm.Shop = shop;
        }

        private void OnShowMapButtonTapped(object sender, EventArgs e)
        {
            // TODO
        }

        private void OnRouteToShopButtonTapped(object sender, EventArgs e)
        {
            // TODO
        }

        private void OnGotoOnlineButtonTapped(object sender, EventArgs e)
        {
            // TODO
        }

        private async void OnNewVoucherButtonTapped(object sender, EventArgs e)
        {
            if (vm.Shop.Categorie.Count() == 1)
            {
                await Navigation.PushAsync(new NewVoucherProductPage(vm.Shop, vm.Shop.Categorie[0]));
            }
            else
            {
                await Navigation.PushAsync(new NewVoucherCategoryPage(vm.Shop));
            }
        }
    }
}