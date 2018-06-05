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
	public partial class SpidLoginPage : ContentPage
	{
		public SpidLoginPage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            Title = "SPID Login";
		}

        private async void ButtonFakeSpidLogin_Clicked(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new SpidLoginPage());
        }
    }
}