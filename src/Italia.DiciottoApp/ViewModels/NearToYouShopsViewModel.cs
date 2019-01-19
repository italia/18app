using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Threading;
using System.Threading.Tasks;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.ViewModels
{
    class NearToYouShopsViewModel: BaseViewModel
    {
        private Exception gpsException;
        private IEnumerable<Shop> shops;
        private CancellationTokenSource gpsCts;
        private CancellationTokenSource getShopListCts;

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
            IsBusy = false;
        }

        public async Task GetShopListAsync()
        {
            Debug.WriteLine($"°°°°°°°°°°°°°°°°° [GetShopListAsync] started");

            if (IsBusy)
            {
                await DisplayAlertAsync("Sto già cercando i negozi vicino a te...");
                return;
            }

            IsBusy = true;
            OnPropertyChanged("ShopListIsVisible");

            ContentHeader = "Lettura posizione GPS...";

            UserLocation = null;
            gpsException = null;

            try
            {
                gpsCts = new CancellationTokenSource();
                // var request = new GeolocationRequest(Constants.GPS_ACCURACY);
                // var location = await Geolocation.GetLocationAsync(request, cts.Token);
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

//#if DEBUG
//          // When debugging just set the center of Rome position
//          UserLocation = new Location(41.8919300, 12.5113300); // Center of Rome, Italy
//#endif

            if (UserLocation == null)
            {
                ContentHeader = "Impossibile recuperare la tua posizione dal GPS.";
            }
            else
            {
                ContentHeader = "Ricerca dei negozi vicini a te...";

                if (App.LastLocation == null ||
                    Location.CalculateDistance(App.LastLocation.Latitude,
                                               UserLocation.Latitude,
                                               App.LastLocation.Longitude,
                                               UserLocation.Longitude,
                                               DistanceUnits.Kilometers) > Constants.NEW_LOCATION_MINIMUM_KM)
                {
                    try
                    {
                        getShopListCts = new CancellationTokenSource();
                        var shopService = Service.Resolve<IShopsService>();
                        shops = await shopService.NearToLocationShopsAsync(UserLocation, maxItems: Constants.NEAR_TO_YOU_SHOP_MAX_ITEMS, ct: getShopListCts.Token);
                        App.Shops = shops;
                        App.LastLocation = UserLocation;
                    }
                    catch (AggregateException e)
                    {
                        foreach (var ie in e.InnerExceptions)
                            Debug.WriteLine($"[GetShopListAsync] (Aggregate) TaskCanceledException: " + ie.Message);
                    }
                    catch (Exception ex)
                    {
                        Debug.WriteLine($"[GetShopListAsync] TaskCanceledException: " + ex.Message);
                    }
                    finally
                    {
                        if (getShopListCts != null)
                        {
                            getShopListCts.Dispose();
                            getShopListCts = null;
                        }
                        else
                        {
                            Debug.WriteLine("++++++++ [GetShopListAsync] getShopListCts == null !!!");
                        }
                    }
                }
                else
                {
                    shops = App.Shops;
                }

                if (shops != null)
                {
                    Shops.Clear();
                    foreach (var shop in shops)
                    {
                        Shops.Add(shop);
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
