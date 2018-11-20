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
	public partial class CouponPage : BasePage
    {
        private CouponViewModel vm;

        public CouponPage(Coupon coupon, bool justCreated = false)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as CouponViewModel;
            vm.JustCreated = justCreated;
            vm.Coupon = coupon;
        }

        private void OnSaveImageTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
        }

        private void OnUseCouponOnShopOnlineButtonTapped(object sender, EventArgs e)
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

        private void OnDeleteCouponButtonTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
        }

        private void OnShopDetailButtonTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
        }

    }
}