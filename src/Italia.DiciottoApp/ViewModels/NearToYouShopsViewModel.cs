using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Threading;
using System.Threading.Tasks;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.ViewModels
{
    class NearToYouShopsViewModel: BaseViewModel
    {
        private Exception gpsException;
        private IEnumerable<Shop> shops;
        CancellationTokenSource cts;

        #region Properties

        public Location UserLocation { get; private set; }

        public string PageTitle => "Negozi";

        public AppArea AppArea => AppArea.Stores;

        public bool ShopListIsVisible => (Shops != null && Shops.Count > 0 && !IsBusy);

        private string contentHeader;
        public string ContentHeader
        {
            get => contentHeader;
            set => SetProperty(ref contentHeader, value);
        }

        public ObservableCollection<Shop> Shops { get; set; } = new ObservableCollection<Shop>();

        #endregion

        public NearToYouShopsViewModel() : base()
        {
            ContentHeader = "Lettura posizione GPS...";
        }

        public async Task GetShopListAsync()
        {
            if (IsBusy)
                return;

            IsBusy = true;
            OnPropertyChanged("ShopListIsVisible");
            UserLocation = null;
            gpsException = null;
            ContentHeader = "Lettura posizione GPS...";

            try
            {
                var request = new GeolocationRequest(Constants.GPS_ACCURACY);
                cts = new CancellationTokenSource();
                var location = await Geolocation.GetLocationAsync(request, cts.Token);
                UserLocation = await Geolocation.GetLastKnownLocationAsync();
            }
            catch (FeatureNotSupportedException fnsEx)
            {
                // Handle not supported on device exception
                gpsException = fnsEx;
                ContentHeader = "GPS non disponibile in questo device.";
            }
            catch (PermissionException pEx)
            {
                // Handle permission exception
                gpsException = pEx;
                ContentHeader = "Devi attivare il GPS per vedere la lista.";
            }
            catch (Exception ex)
            {
                // Unable to get location
                gpsException = ex;
                ContentHeader = $"Impossibile recuperare la tua posizione dal GPS. ({ex.Message})";
            }
            finally
            {
                cts.Dispose();
                cts = null;
            }

            // TODO: Remove!
            // When debugging just set the center of Rome position
#if DEBUG
            UserLocation = new Location(41.8919300, 12.5113300); // Center of Rome, Italy
#endif

            if (UserLocation == null)
            {
                ContentHeader = "Impossibile recuperare la tua posizione dal GPS.";
            }
            else
            {
                if (Shops.Count == 0 ||
                    App.LastLocation == null ||
                    UserLocation == null ||
                    Location.CalculateDistance(App.LastLocation.Latitude, 
                                               UserLocation.Latitude,
                                               App.LastLocation.Longitude,
                                               UserLocation.Longitude,
                                               DistanceUnits.Kilometers) > Constants.NEW_LOCATION_MINIMUM_KM)
                {
                    ContentHeader = "Ricerca dei negozi vicini a te...";
                    Shops.Clear();
                    var shopService = Service.Resolve<IShopsService>();
                    shops = await shopService.NearToLocationShopsAsync(UserLocation);
                    if (shops != null)
                    {
                        foreach (var shop in shops)
                        {
                            Shops.Add(shop);
                        }
                    }
                }

                switch (Shops.Count)
                {
                    case 0:
                        ContentHeader = $"La ricerca non ha restituito alcun negozio.";
                        break;
                    case 1:
                        ContentHeader = $"Questo è l'unico negozio vicino al punto in cui ti trovi.";
                        break;
                    default:
                        ContentHeader = $"Questa è la lista dei {Shops.Count} negozi più vicini al punto in cui ti trovi.";
                        break;
                }
            }

            IsBusy = false;
            OnPropertyChanged("ShopListIsVisible");
        }

    }
}
