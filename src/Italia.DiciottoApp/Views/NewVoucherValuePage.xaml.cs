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
    public partial class NewVoucherValuePage : BasePage
    {
        private NewVoucherValueViewModel vm;

        public NewVoucherValuePage(Shop shop, Categoria categoria, Prodotto prodotto)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NewVoucherValueViewModel;
            vm.Shop = shop;
            vm.Categoria = categoria;
            vm.Prodotto = prodotto;
        }

        protected override void OnAppearing()
        {
            base.OnAppearing();
            VoucherValueEntry.Focus();
        }

        private void OnEntryTextChanged(object sender, TextChangedEventArgs e)
        {
            vm.ValidateEntry(e.NewTextValue);
        }

        private async void OnCreaButtonClicked(object sender, EventArgs e)
        {
            Voucher Voucher = await vm.CreateVoucherAsync();
            if (Voucher != null)
            {
                // Update borsellino
                var serviceResult = await vm?.GetBorsellinoAsync();

                if (!serviceResult.Success)
                {
                    // Ignore the error, we need to show voucher creation
                    // even if at the moment is no more possible to connect and update the Borsellino infos.
                }

                Page newVoucherCategoryPage = Navigation.NavigationStack.LastOrDefault(p => p is NewVoucherCategoryPage);
                if (newVoucherCategoryPage != null)
                {
                    Navigation.RemovePage(newVoucherCategoryPage);
                }

                Page newVoucherProductPage = Navigation.NavigationStack.LastOrDefault(p => p is NewVoucherProductPage);
                if (newVoucherProductPage != null)
                {
                    Navigation.RemovePage(newVoucherProductPage);
                }

                await Navigation.PushAsync(new VoucherPage(Voucher, justCreated: true));

                // remove all Voucher creation pages from the stack but the first one
                Navigation.RemovePage(this);
            }
        }

    }
}