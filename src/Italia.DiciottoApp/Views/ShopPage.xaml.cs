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
	public partial class ShopPage : BasePage
    {
        private ShopViewModel vm;
        private bool isBusy = false;

        public ShopPage(Shop shop)
        {
            InitializeComponent();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as ShopViewModel;
            vm.Shop = shop;
        }

        private async void OnShowMapButtonTapped(object sender, EventArgs e)
        {
            string msg = string.Empty;
            if (!isBusy)
            {
                isBusy = true;

                if (vm.ShopHasGeolocation)
                {
                    if (vm.UserLocation == null)
                    {
                        msg = await vm.GetUserPositionAsync();
                    }

                    if (vm.UserLocation != null)
                    {
                        await Navigation.PushAsync(new ShopsMapPage(vm.SingleShopList, vm.UserLocation));
                    }
                    else if (!string.IsNullOrWhiteSpace(msg))
                    {
                        await DisplayAlert("GPS", msg, "Ok");
                    }
                }
                else
                {
                    await DisplayAlert("Posizione ignota", "Purtroppo questo negozio non ha i dati di georeferenziazione quindi non è possibile mostrare la sua posizione nella mappa", "Ok");
                }
                isBusy = false;
            }
        }

        private async void OnRouteToShopButtonTapped(object sender, EventArgs e)
        {
            // TODO
            await DisplayAlert("Percorso non disponibile", "Al momento la funzione di ricerca percorso non è stata ancora implementata, lo sarà in una prossima versione." , "Ok");
        }

        private async void OnGotoOnlineButtonTapped(object sender, EventArgs e)
        {
            // TODO
            await DisplayAlert("Azione non disponibile", "Al momento la navigazione verso la pagina web del negozio non è stata ancora implementata, lo sarà in una prossima versione.", "Ok");
        }

        private async void OnNewVoucherButtonTapped(object sender, EventArgs e)
        {
            if (vm.Shop.Categorie.Count() == 1)
            {
                await Navigation.PushAsync(new NewVoucherProductPage(vm.Shop, vm.Shop.Categorie[0]));
            }
            else
            {
                await Navigation.PushAsync(new NewVoucherCategoryPage(vm.Shop));
            }
        }
    }
}