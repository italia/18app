﻿using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Services
{
    class FakeShopsService : IShopsService
    {
        private static readonly int simulatedDelay = 3000;

        //public async Task<Shop> GetShopByIdAsync(string shopId)
        //{
        //    if (string.IsNullOrWhiteSpace(shopId))
        //    {
        //        throw new ArgumentNullException("shopId");
        //    }

        //    // simulate delay
        //    await Task.Delay(100);

        //    return FakeShops.GetList().Where(s => s.Id == shopId).FirstOrDefault();
        //}

        public async Task<IEnumerable<Shop>> NearToLocationShopsAsync(Location location, int maxItems = 10, CancellationToken ct = default(CancellationToken))
        {
            if (location == null)
            {
                throw new ArgumentNullException("location");
            }

            // simulate delay
            await Task.Delay(simulatedDelay);

            return FakeShops.GetList().Where(s => !s.IsOnline).Take(maxItems);
        }

        public async Task<IEnumerable<Shop>> OnlineShopsAsync(Categoria category, int maxItems = 10, CancellationToken ct = default(CancellationToken))
        {
            // simulate delay
            await Task.Delay(simulatedDelay);

            var shops = FakeShops.GetList().Where(s => s.IsOnline);
            
            if (category != null)
            {
                shops = shops.Where(s => s.Categorie.Any(c => c.Titolo == category.Titolo));
            }

            return shops.Take(maxItems);
        }

        public async Task<IEnumerable<Shop>> FindShopsAsync(Categoria category, Comune municipality, string text = null, int maxItems = 10, CancellationToken ct = default(CancellationToken))
        {
            // simulate delay
            await Task.Delay(simulatedDelay);

            // Check for cancellation
            if (ct.IsCancellationRequested)
            {
                Debug.WriteLine("[FindShopsAsync] Cancellation requested during task execution.");
                ct.ThrowIfCancellationRequested();
            }

            // Get Shops
            var shops = FakeShops.GetList().Where(s => !s.IsOnline);

            if (category != null)
            {
                shops = shops.Where(s => s.Categorie.Any(c => c.Titolo == category.Titolo));
            }

            if (municipality != null)
            {
                shops = shops.Where(s => s.MunicipalityId == municipality.Id);
            }

            if (!string.IsNullOrWhiteSpace(text))
            {
                shops = shops.Where(s => s.Title.ToUpper().Contains(text.ToUpper()));
            }

            return shops.Take(maxItems);
        }

        public IEnumerable<Comune> FindMunicipality(string partialName, int maxItems = 100)
        {
            return null;
        }
    }

    public static class FakeShops
    {
        public static IEnumerable<Shop> GetList()
        {
            Location location = new Location(41.8919300, 12.5113300);
            return new List<Shop>
            {
                new Shop
                {
                    Id = "2375F804-5744-48C0-813C-0B87F2E0750E",
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
                    Categorie = new List<Categoria>
                    {
                        CategoriaFromTipoCategoria(TipoCategoria.Cinema),
                        CategoriaFromTipoCategoria(TipoCategoria.Libri)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude + 0.01, location.Longitude + 0.01),
                    MunicipalityId = "058091",
                    DistanceFromUser = "500m"
                },
                new Shop
                {
                    Id = "16D55D17-BD46-48CE-94FF-BB4F28971A21",
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
                    Categorie = new List<Categoria>
                    {
                        CategoriaFromTipoCategoria(TipoCategoria.Concerti)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude + 0.015, location.Longitude + 0.015),
                    MunicipalityId = "058091",
                    DistanceFromUser = "1,3km"
                },
                new Shop
                {
                    Id = "7E0C6AA6-ADF0-4710-A6EF-C7E24B2FFDFF",
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
                    Categorie = new List<Categoria>
                    {
                        CategoriaFromTipoCategoria(TipoCategoria.Libri)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude + 0.01, location.Longitude - 0.01),
                    MunicipalityId = "058091",
                    DistanceFromUser = "3km"
                },
                new Shop
                {
                    Id = "27E7A6D6-3C76-4CC4-81E5-4AD3B6211D0A",
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
                    Categorie = new List<Categoria>
                    {
                        CategoriaFromTipoCategoria(TipoCategoria.TeatroDanza)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude - 0.01, location.Longitude - 0.01),
                    MunicipalityId = "058091",
                    DistanceFromUser = "3km"
                },
                new Shop
                {
                    Id = "5F6A3844-CAAB-43E6-A80C-5C21C7AC44F1",
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
                    Categorie = new List<Categoria>
                    {
                        CategoriaFromTipoCategoria(TipoCategoria.TeatroDanza)
                    },
                    IsOnline = false,
                    Url = string.Empty,
                    Location = new Location(location.Latitude - 0.02, location.Longitude - 0.01),
                    MunicipalityId = "058091",
                    DistanceFromUser = "3km"
                },
                new Shop
                {
                    Id = "62138162-7CC7-4F56-9247-1C7F04D09BC4",
                    Title = "Scuolabook",
                    Address = null,
                    Categorie = new List<Categoria>
                    {
                        CategoriaFromTipoCategoria(TipoCategoria.Libri)
                    },
                    IsOnline = true,
                    Url = "www.scuolabook.it",
                    Location = null,
                    MunicipalityId = "058091",
                    DistanceFromUser = string.Empty
                },
                new Shop
                {
                    Id = "84A6D7E3-4C6B-46F8-A75F-64DCD5B6ECF1",
                    Title = "Cineteatro Nuovo Arcore",
                    Address = null,
                    Categorie = new List<Categoria>
                    {
                        CategoriaFromTipoCategoria(TipoCategoria.Cinema),
                        CategoriaFromTipoCategoria(TipoCategoria.Concerti),
                        CategoriaFromTipoCategoria(TipoCategoria.TeatroDanza)
                    },
                    IsOnline = true,
                    Url = "www.cinemanuovoarcore.it",
                    Location = null,
                    MunicipalityId = "058091",
                    DistanceFromUser = string.Empty
                },
                new Shop
                {
                    Id = "3C202BA1-7511-4064-90AA-4492F5C9FB69",
                    Title = "TicketOne",
                    Address = null,
                    Categorie = new List<Categoria>
                    {
                        CategoriaFromTipoCategoria(TipoCategoria.Concerti),
                        CategoriaFromTipoCategoria(TipoCategoria.EventiCulturali),
                        CategoriaFromTipoCategoria(TipoCategoria.MuseiMonumentiParchiNaturali),
                        CategoriaFromTipoCategoria(TipoCategoria.TeatroDanza)
                    },
                    IsOnline = true,
                    Url = "www.ticketone.it/18App",
                    Location = null,
                    MunicipalityId = "058091",
                    DistanceFromUser = string.Empty
                }
            };
        }

        private static Categoria CategoriaFromTipoCategoria(TipoCategoria tipoCategoria)
        {
            return Categoria.List.SingleOrDefault(c => c.Tipo == tipoCategoria);
        }
    }
}
