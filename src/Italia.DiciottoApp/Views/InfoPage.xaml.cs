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
	public partial class InfoPage : ContentPage
	{
        public string LabelText { get; set; } = "INFORMATION PAGE -TO BE DONE";

        public InfoPage (bool spidOnlyInfo = false)
		{
            InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            Title = $"Informazioni{(spidOnlyInfo ? " (SPID only)": "")}";
            BindingContext = this;
		}
	}
}