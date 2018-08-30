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
	public partial class UnloggedInfoPage : BasePage
    {
        private InfoViewModel vm;
        private string lastFindText = String.Empty;

        public UnloggedInfoPage (bool spidOnly = false)
		{
            InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as InfoViewModel;
            vm.SpidOnly = spidOnly;
        }
        protected override async void OnAppearing()
        {
            base.OnAppearing();
            await vm.GetInfoList();
        }

        private void OnFindFieldFocused(object sender, FocusEventArgs e)
        {
            lastFindText = vm.FindText;
        }

        private async void OnFindFieldUnfocused(object sender, FocusEventArgs e)
        {
            if (vm.FindText != lastFindText)
            {
                lastFindText = vm.FindText;
                await vm.GetInfoList();
            }
        }

    }
}