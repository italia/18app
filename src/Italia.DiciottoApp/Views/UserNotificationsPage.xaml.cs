using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Essentials;

using Xamarin.Forms;
using Xamarin.Forms.Xaml;

namespace Italia.DiciottoApp.Views
{
	[XamlCompilation(XamlCompilationOptions.Compile)]
	public partial class UserNotificationsPage : BasePage
    {
		private UserNotificationsViewModel vm;

        public UserNotificationsPage()
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as UserNotificationsViewModel;
        }

        protected override async void OnAppearing()
        {
            base.OnAppearing();
            await vm.GetUserNotificationsListAsync();
        }
    }
}