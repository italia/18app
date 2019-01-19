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
	public partial class InfoPage : BasePage
	{
        private InfoViewModel vm;
        private string lastFindText = String.Empty;

        public InfoPage()
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as InfoViewModel;
            vm.SpidOnly = false;
        }

        protected override void OnAppearing()
        {
            base.OnAppearing();
            vm.GetInfoList();
        }

        private void OnFindFieldFocused(object sender, FocusEventArgs e)
        {
            lastFindText = vm.FindText;
        }

        private void OnFindFieldUnfocused(object sender, FocusEventArgs e)
        {
            if (vm.FindText != lastFindText)
            {
                lastFindText = vm.FindText;
                vm.GetInfoList();
            }
        }

    }
}