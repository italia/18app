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

        public CouponPage(Coupon coupon, string title = "Buono creato")
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as CouponViewModel;
            vm.PageTitle = title;
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
    }
}