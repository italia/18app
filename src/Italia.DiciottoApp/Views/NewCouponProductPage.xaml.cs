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
	public partial class NewCouponProductPage : BasePage
    {
        private NewCouponProductViewModel vm;

        public NewCouponProductPage(Categoria categoria)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NewCouponProductViewModel;
            vm.Categoria = categoria;
        }

        private async void OnProductListItemTapped(object sender, ItemTappedEventArgs e)
        {

            if (e.Item is Categoria categoria)
            {
                await Navigation.PushAsync(new NewCouponProductPage(categoria));
            }

        }

    }
}