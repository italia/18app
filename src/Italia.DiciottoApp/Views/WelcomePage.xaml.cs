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
	public partial class WelcomePage : BasePage
    {
		public WelcomePage ()
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            SetCarousel();
        }

        private void SetCarousel()
        {
            int actualPage = 0;
            String[] pageTitles = new string[] { "libri ", "concerti ", "cinema " };
            String[] pageBackgrounds = new string[] { "bkgnd_libri.png", "bkgnd_concerti.png", "bkgnd_cinema.png" };

            Device.StartTimer(TimeSpan.FromSeconds(4), () =>
            {
                actualPage++;
                if (actualPage >= pageTitles.Count())
                {
                    actualPage = 0;
                }

                ExpenceTitle.Text = pageTitles[actualPage];
				BackImage.Source = pageBackgrounds[actualPage];

                return true; // True = Repeat again, False = Stop the timer
            });
        }

        private async void ButtonInfo_Clicked(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new UnloggedInfoPage());
        }

        private async void ButtonSpidInfo_Clicked(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new UnloggedInfoPage(spidOnly: true));
        }

        private async void ButtonLogin_Clicked(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new SpidLoginPage());
        }
    }
}