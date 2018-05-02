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
	public partial class WelcomePage : ContentPage
	{
		public WelcomePage ()
		{
			InitializeComponent ();
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
                BackgroundImage = pageBackgrounds[actualPage];

                return true; // True = Repeat again, False = Stop the timer
            });
        }
    }
}