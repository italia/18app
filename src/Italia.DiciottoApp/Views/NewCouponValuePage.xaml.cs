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
    public partial class NewCouponValuePage : BasePage
    {
        private NewCouponValueViewModel vm;

        public NewCouponValuePage(Categoria categoria, Prodotto prodotto)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NewCouponValueViewModel;
            vm.Categoria = categoria;
            vm.Prodotto = prodotto;
        }

        private void OnEntryTextChanged(object sender, TextChangedEventArgs e)
        {
            vm.ValidateEntry(e.NewTextValue);
        }

        private async void OnCreaButtonClicked(object sender, EventArgs e)
        {
            Coupon coupon = await vm.CreateCouponAsync();
            if (coupon != null)
            {
                await Navigation.PushAsync(new CouponPage(coupon));
            }
        }
    }
}