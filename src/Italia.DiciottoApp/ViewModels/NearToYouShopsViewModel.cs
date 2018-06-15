using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;
using Xamarin.Forms;
using Xamarin.Essentials;
using System.Collections.ObjectModel;
using Italia.DiciottoApp.Services;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.ViewModels
{
    class NearToYouShopsViewModel: BaseViewModel
    {
        private Location geoLocation;
        private Exception gpsException;

        #region Properties

        public string PageTitle { get; set; } = "Negozi";

        public AppArea AppArea { get; set; } = AppArea.Stores;

        public bool GoToMapMessageIsVisible => (Shops != null && Shops.Count > 0);

        private string contentHeader;
        public string ContentHeader
        {
            get
            {
                return contentHeader;
            }

            set
            {
                if (value != contentHeader)
                {
                    contentHeader = value;
                    OnNotifyPropertyChanged();
                }
            }
        }

        public ObservableCollection<Shop> Shops { get; set; } = new ObservableCollection<Shop>();

        #endregion

        public NearToYouShopsViewModel() : base()
        {
            ContentHeader = "Lettura posizione GPS...";
        }

        public async Task GetShopListAsync()
        {
            geoLocation = null;
            gpsException = null;
            Shops.Clear();
            OnNotifyPropertyChanged("GoToMapMessageIsVisible");
            ContentHeader = "Lettura posizione GPS...";

            try
            {
                geoLocation = await Geolocation.GetLastKnownLocationAsync();
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

            // TODO: Remove next line when GeoLoacation Service returns a location also on emulated devices
            if (geoLocation == null) { geoLocation = new Location(41.8919300, 12.5113300); }

            if (geoLocation == null)
            {
                ContentHeader = "Impossibile recuperare la tua posizione dal GPS.";
            }
            else
            {
                ContentHeader = "Ricerca dei negozi vicini a te...";

                var shopService = Service.Resolve<IShopsService>();
                IEnumerable<Shop> shops = await shopService.NearToLocationShopsAsync(geoLocation);
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

            OnNotifyPropertyChanged("GoToMapMessageIsVisible");
        }

    }
}
