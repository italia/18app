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
	public partial class NewVoucherProductPage : BasePage
    {
        private NewVoucherProductViewModel vm;

        public NewVoucherProductPage(Shop shop, Categoria categoria)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NewVoucherProductViewModel;
            vm.Shop = shop;
            vm.Categoria = categoria;
        }

        private async void OnProductListItemTapped(object sender, ItemTappedEventArgs e)
        {

            if (e.Item is Prodotto prodotto)
            {
                // Clear the item selection
                if (sender is ListView listView)
                {
                    listView.SelectedItem = null;
                }

                await Navigation.PushAsync(new NewVoucherValuePage(vm.Shop, vm.Categoria, prodotto));
            }

        }

    }
}