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
	public partial class WalletPage : BasePage
    {
        private WalletViewModel vm;
        private bool isBusy = false;

        public WalletPage()
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as WalletViewModel;
        }

        protected override async void OnAppearing()
        {
            base.OnAppearing();
            if(!isBusy)
            {
                isBusy = true;
                await vm.SetTab(WalletKind.All);
                isBusy = false;
            }
            
        }

        private async void OnAllTabTapped(object sender, EventArgs e)
        {
            if (vm.WalletKind != WalletKind.All)
            {
                await vm.SetTab(WalletKind.All);
            }
        }

        private async void OnAvailableTabTapped(object sender, EventArgs e)
        {
            if (vm.WalletKind != WalletKind.Available)
            {
                await vm.SetTab(WalletKind.Available);
            }
        }

        private async void OnSpentTabTapped(object sender, EventArgs e)
        {
            if (vm.WalletKind != WalletKind.Spent)
            {
                await vm.SetTab(WalletKind.Spent);
            }
        }

        private async void OnListViewItemTapped(object sender, ItemTappedEventArgs e)
        {
            if (e.Item is Voucher Voucher)
            {
                // Clear the item selection
                if (sender is ListView listView)
                {
                    listView.SelectedItem = null;
                }

                await Navigation.PushAsync(new VoucherPage(Voucher, justCreated: false));
            }
        }
    }
}