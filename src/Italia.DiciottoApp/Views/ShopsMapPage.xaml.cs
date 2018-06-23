using Italia.DiciottoApp.CustomRenderers;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.ViewModels;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Essentials;
using Xamarin.Forms;
using Xamarin.Forms.Maps;
using Xamarin.Forms.Xaml;

namespace Italia.DiciottoApp.Views
{
	[XamlCompilation(XamlCompilationOptions.Compile)]
	public partial class ShopsMapPage : BasePage
    {
        private ShopsMapViewModel vm;
        private IEnumerable<Shop> shops;
        private Location userLocation;
        private Position userPosition;
        private static readonly double mapMarginMeters = 500;
        private List<CustomPin> pins;

        public ShopsMapPage (IEnumerable<Shop> shops, Location userLocation)
		{
			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = BindingContext as ShopsMapViewModel;
            this.shops = shops;
            this.userLocation = userLocation;
            userPosition = new Position(userLocation.Latitude, userLocation.Longitude);
        }

        protected override void OnAppearing()
        {
            base.OnAppearing();
            if (vm != null)
            {
                vm.PinSelected = false;
            }
            Distance dMax = MaxShopDistance();
            MyMap.MoveToRegion(MapSpan.FromCenterAndRadius(userPosition, dMax));
            SetPins(MyMap);
        }

        private Distance MaxShopDistance()
        {
            //double maxDistance = 0;
            //foreach (var shop in shops)
            //{
            //    double distance = Location.CalculateDistance(shop.Location.Latitude, userLocation.Latitude, shop.Location.Longitude, userLocation.Longitude, DistanceUnits.Kilometers);
            //    maxDistance = Math.Max(maxDistance, distance);
            //}
            //return new Distance(mapMarginMeters + maxDistance * 1000.0);

            var km = shops.Max(shop => Location.CalculateDistance(shop.Location.Latitude, userLocation.Latitude, shop.Location.Longitude, userLocation.Longitude, DistanceUnits.Kilometers));
            return new Distance(1000.0 * km + mapMarginMeters);
        }

        private void SetPins(Map map)
        {
            pins = shops?.Select(s => new CustomPin
            {
                Type = PinType.SearchResult,
                Position = new Position(s.Location.Latitude, s.Location.Longitude),
                Label = s.Title,
                Address = s.ElencoCategorie
            }).ToList();

            pins.Add(new CustomPin
            {
                Type = PinType.Place,
                Position = userPosition,
                Label = "La mia posizione"
            });

            if (pins != null && pins.Count() > 0)
            {
                map.Pins.Clear();
                foreach (var pin in pins)
                {
                    pin.Clicked += PinClicked;
                    map.Pins.Add(pin);
                }
            }
        }

        private void PinClicked(object sender, EventArgs e)
        {
            Shop shop = GetShopFromPin(sender as Pin);
            if (shop != null)
            {
                vm.PinSelected = true;
                vm.SelectedShop = shop;
            }
        }

        private Shop GetShopFromPin(Pin pin)
        {
            Shop shop = null;
            if (pin.Label != "La mia posizione")
            {
                shop = shops.FirstOrDefault(s => s.Title == pin.Label && s.Location.Latitude == pin.Position.Latitude && s.Location.Longitude == pin.Position.Longitude);
            }
            return shop;
        }

        private async void OnSelectedShopTapped(object sender, EventArgs e)
        {
            // TODO: go to shop
            // await Navigation.PushAsync(new ShopPage(vm.SelectedShop));
        }
    }
}