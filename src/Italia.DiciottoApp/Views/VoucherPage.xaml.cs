using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
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
	public partial class VoucherPage : BasePage
    {
        private VoucherViewModel vm;

        public VoucherPage(Voucher voucher, bool justCreated = false)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as VoucherViewModel;
            vm.JustCreated = justCreated;
            vm.Voucher = voucher;
        }

        private void OnSaveImageTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
        }

        private void OnUseVoucherOnShopOnlineButtonTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
        }

        private void OnRouteToShopButtonTapped(object sender, EventArgs e)
        {
            // STILL_NOT_IMPLEMENTED on 18App APIs
        }

        private void OnFindAnotherShopButtonTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
        }

        private void OnFindShopButtonTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
        }

        private void OnDeleteVoucherButtonTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
        }

        private void OnShopDetailButtonTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
        }

    }
}