using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Text;
using Xamarin.Forms;
using Xamarin.Essentials;
using System.Collections.ObjectModel;

namespace Italia.DiciottoApp.ViewModels
{
    class NearToYouShopsViewModel: BaseViewModel
    {
        private readonly double movementMinDistKm = 1;
        private Location lastQueryLocation;

        #region Properties

        public string PageTitle { get; set; } = "Negozi";

        public AppArea AppArea { get; set; } = AppArea.Stores;

        private bool geoLocationActive;
        public bool GeoLocationActive
        {
            get
            {
                return geoLocationActive;
            }

            set
            {
                if (value != geoLocationActive)
                {
                    geoLocationActive = value;
                    NotifyPropertyChanged();
                }
            }
        }

        private Location geoLocation;
        public Location GeoLocation
        {
            get
            {
                return geoLocation;
            }

            set
            {
                if (value != null && !geoLocationActive)
                {
                    geoLocationActive = true;
                    NotifyPropertyChanged("GeoLocationActive");
                }
                if (value != geoLocation)
                {
                    geoLocation = value;
                    UpdateShopList(value);
                    NotifyPropertyChanged();
                }
            }
        }

        ObservableCollection<Shop> Shops { get; set; } = new ObservableCollection<Shop>();

        #endregion

        public NearToYouShopsViewModel() : base()
        {
           
        }

        private void UpdateShopList(Location location)
        {
            if (location != null && (Shops.Count == 0 ||
                                     lastQueryLocation == null ||
                                     Location.CalculateDistance(location, lastQueryLocation, DistanceUnits.Kilometers) >= movementMinDistKm))
            {
                lastQueryLocation = location;

                // TODO: implement tre service

                Shops.Clear();

                Shops.Add(new Shop
                {
                    Title = "Nuovo Cinema Paradiso",
                    Address = new Address
                    {
                        Indirizzo = "Via dei Cuscini",
                        NumeroCivico = "23",
                        Localita = String.Empty,
                        Cap = "00100",
                        Comune = "Roma",
                        SiglaProvincia = "RM"
                    },
                    Categorie = new Categoria[]
                    {
                        new Categoria(TipoCategoria.Cinema),
                        new Categoria(TipoCategoria.Libri)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude + 0.01, location.Longitude + 0.01)
                });

                Shops.Add(new Shop
                {
                    Title = "The Blues Brothers",
                    Address = new Address
                    {
                        Indirizzo = "Via dei Solfeggi",
                        NumeroCivico = "12",
                        Localita = String.Empty,
                        Cap = "00100",
                        Comune = "Roma",
                        SiglaProvincia = "RM"
                    },
                    Categorie = new Categoria[]
                    {
                        new Categoria(TipoCategoria.Concerti)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude + 0.015, location.Longitude + 0.015)
                });

                Shops.Add(new Shop
                {
                    Title = "Il libraio Magico",
                    Address = new Address
                    {
                        Indirizzo = "Piazza Gutemberg",
                        NumeroCivico = "8",
                        Localita = String.Empty,
                        Cap = "00100",
                        Comune = "Roma",
                        SiglaProvincia = "RM"
                    },
                    Categorie = new Categoria[]
                    {
                        new Categoria(TipoCategoria.Libri)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude + 0.01, location.Longitude - 0.01)
                });

                Shops.Add(new Shop
                {
                    Title = "Cats",
                    Address = new Address
                    {
                        Indirizzo = "Vicolo dei Naviganti",
                        NumeroCivico = "snc",
                        Localita = "Porticciolo",
                        Cap = "58022",
                        Comune = "Follonica",
                        SiglaProvincia = "GR"
                    },
                    Categorie = new Categoria[]
                    {
                        new Categoria(TipoCategoria.TeatroDanza)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude - 0.01, location.Longitude - 0.01)
                });

                Shops.Add(new Shop
                {
                    Title = "Granteatro dell'assurdo",
                    Address = new Address
                    {
                        Indirizzo = "Piazza Dante",
                        NumeroCivico = "123",
                        Localita = string.Empty,
                        Cap = "00100",
                        Comune = "Roma",
                        SiglaProvincia = "RM"
                    },
                    Categorie = new Categoria[]
                    {
                        new Categoria(TipoCategoria.TeatroDanza)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude - 0.01, location.Longitude - 0.01)
                });

            }
        }

    }
}
