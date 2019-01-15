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
	public partial class VoucherPage : BasePage
    {
        private VoucherViewModel vm;

        public VoucherPage(Voucher voucher, bool justCreated = false)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as VoucherViewModel;
            vm.JustCreated = justCreated;
            vm.Voucher = voucher;
        }

        private async void OnUseVoucherOnShopOnlineButtonTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
            await DisplayAlert("Suggerimento", "Per spendere il buono nel negozio online cerca il simbolo di 18App e utilizza il codice secondo le modalità previste dal sito del venditore.", "Ok");
        }

        //private void OnRouteToShopButtonTapped(object sender, EventArgs e)
        //{
        //    // STILL_NOT_IMPLEMENTED on 18App APIs
        //}

        private async void OnFindShopButtonTapped(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new NearToYouShopsPage());
        }

        private async void OnDeleteVoucherButtonTapped(object sender, EventArgs e)
        {
            if (!IsBusy)
            {
                IsBusy = true;

                // TODO remove delay !!!
                await Task.Delay(5000);

                bool result = await vm.DeleteVoucherAsync();

                if (result)
                {
                    await Navigation.PopAsync();
                }
                else
                {
                    await DisplayAlert("Annullamento buono non riuscito", "Si è verificato un errore nell'annullamento del buono, riprova più tardi.", "OK");
                }

                IsBusy = false;
            }
        }

        private async void OnShopDetailButtonTapped(object sender, EventArgs e)
        {
            // TODO: da fare!
            await DisplayAlert("Dettagli negozio non disponibili", "Al momento la  visualizzazione dei dettagli del negozio associato al buono non è stata ancora implementata, lo sarà in una prossima versione.", "Ok");
        }

    }
}