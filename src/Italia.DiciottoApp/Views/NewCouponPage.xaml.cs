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
	public partial class NewCouponPage : ContentPage
	{
        private NewCouponViewModel vm;

        public NewCouponPage()
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as NewCouponViewModel;
        }

	}
}