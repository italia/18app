﻿using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Services
{
    class FakeShopService : IShopsService
    {
        public async Task<IEnumerable<Shop>> NearToLocationShopsAsync(Location location, int maxItems = 10)
        {
            if (location == null)
            {
                throw new ArgumentNullException("location");
            }

            // simulate delay
            await Task.Delay(4000);

            return FakeShops.List().Take(maxItems);
        }

    }

    public static class FakeShops
    {
        public static IEnumerable<Shop> List()
        {
            Location location = new Location(41.8919300, 12.5113300);
            return new List<Shop>
            {
                new Shop
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
                    Location = new Location(location.Latitude + 0.01, location.Longitude + 0.01),
                    DistanceFromUser = "500m"
                },
                new Shop
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
                    Location = new Location(location.Latitude + 0.015, location.Longitude + 0.015),
                    DistanceFromUser = "1,3km"
                },
                new Shop
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
                    Location = new Location(location.Latitude + 0.01, location.Longitude - 0.01),
                    DistanceFromUser = "3km"
                },
                new Shop
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
                    Location = new Location(location.Latitude - 0.01, location.Longitude - 0.01),
                    DistanceFromUser = "3km"
                },
                new Shop
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
                    Location = new Location(location.Latitude - 0.02, location.Longitude - 0.01),
                    DistanceFromUser = "3km"
                }
            };
        }
    }
}
