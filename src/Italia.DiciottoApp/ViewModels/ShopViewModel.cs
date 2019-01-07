using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.ViewModels
{
    class ShopViewModel : BaseViewModel
    {
        private Exception gpsException;
        private CancellationTokenSource gpsCts;

        #region Properties

        public Location UserLocation { get; private set; }

        public AppArea AppArea => AppArea.None;

        public string PageTitle => (Shop?.IsOnline ?? false) ? "Negozio online" : "Negozio";

        public string ShopBkgndImageSource => (Shop?.Categorie?.Count() > 0) ? Shop.Categorie[0].BkgndImageSource : null;

        public string ShopKindImageSource => (Shop?.IsOnline ?? false) ? "location_online_white" : "location_white";

        public string ShopAddress => $"{Shop?.Address?.Indirizzo}, {Shop?.Address?.NumeroCivico} {Shop?.Address?.Cap}  ";

        public string ShopAddress2 => (Shop == null) ? string.Empty : $"{Shop.Address?.Comune} ({Shop.Address?.SiglaProvincia})";

        public bool IsNotOnline => !(Shop?.IsOnline ?? false);

        public bool ShopHasGeolocation => Shop.Location != null && Shop.Location.Latitude != 0 && Shop.Location.Longitude != 0;

        private Shop shop;
        public Shop Shop
        {
            get => shop;
            set => SetProperty(ref shop, value, onChanged: () =>
            {
                OnPropertyChanged(nameof(PageTitle));
                OnPropertyChanged(nameof(ShopBkgndImageSource));
                OnPropertyChanged(nameof(ShopKindImageSource));
                OnPropertyChanged(nameof(ShopAddress));
                OnPropertyChanged(nameof(ShopAddress2));
                OnPropertyChanged(nameof(IsNotOnline));
            });
        }

        public IEnumerable<Shop> SingleShopList => new List<Shop> { Shop };

        #endregion

        public ShopViewModel() : base()
        {
        }

        public async Task<string> GetUserPositionAsync()
        {
            string msg = string.Empty;

            if (IsBusy)
            {
                msg = "Sto già cercando la tua posizione...";
            }
            else
            {
                IsBusy = true;
                UserLocation = null;
                gpsException = null;

                try
                {
                    // gpsCts = new CancellationTokenSource();
                    // var request = new GeolocationRequest(Constants.GPS_ACCURACY);
                    // var location = await Geolocation.GetLocationAsync(request, cts.Token);
                    UserLocation = await Geolocation.GetLastKnownLocationAsync();
                }
                catch (FeatureNotSupportedException fnsEx)
                {
                    // Handle not supported on device exception
                    gpsException = fnsEx;
                    msg = "GPS non disponibile in questo device.";
                }
                catch (PermissionException pEx)
                {
                    // Handle permission exception
                    gpsException = pEx;
                    msg = "Devi attivare il GPS per recuperare la tua posizione, necessaria per la visualizzazione della mappa.";
                }
                catch (Exception ex)
                {
                    // Unable to get location
                    gpsException = ex;
                    msg = $"Impossibile recuperare la tua posizione dal GPS. ({ex.Message})";
                }
                finally
                {
                    if (gpsCts != null)
                    {
                        gpsCts.Dispose();
                        gpsCts = null;
                    }
                    else
                    {
                        Debug.WriteLine("++++++++ [GetShopListAsync] gpsCts == null !!!");
                    }
                }
                IsBusy = false;
            }

            return msg;
        }
    }
}