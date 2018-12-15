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
	public partial class AcceptPrivacyPage : BasePage
	{
        private AcceptPrivacyViewModel vm;

        public AcceptPrivacyPage ()
		{
			InitializeComponent ();
            vm = this.BindingContext as AcceptPrivacyViewModel;
        }

        private void OnAcceptPrivacyButtonClicked(object sender, EventArgs e)
        {
            // TODO: registrare che l'utente ha accettato la privacy.
        }
    }
}