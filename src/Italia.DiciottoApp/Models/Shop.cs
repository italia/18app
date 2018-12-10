using Italia.DiciottoApp.DTOs;
using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Models
{
    public class Shop
    {
        public string Id { get; set; }

        // public string EsercenteId { get; set; }

        public bool IsOnline { get; set; }

        public string Title { get; set; }

        public Address Address { get; set; }

        public Location Location { get; set; }

        public string MunicipalityId { get; set; }

        public string DistanceFromUser { get; set; }

        public List<Categoria> Categorie { get; set; }

        public string Url { get; set; }

        private string elencoCategorie = null;
        public string ElencoCategorie
        {
            get
            {
                if (elencoCategorie == null)
                {
                    if (Categorie.Count == 0)
                    {
                        return String.Empty;
                    }
                    else
                    {
                        StringBuilder sb = new StringBuilder();
                        bool firstTime = true;
                        foreach (var categoria in Categorie)
                        {
                            if (firstTime)
                            {
                                firstTime = false;
                            }
                            else
                            {
                                sb.Append(" / ");
                            }
                            sb.Append(categoria.Titolo);
                        }
                        elencoCategorie = sb.ToString();
                    }
                }
                return elencoCategorie;
            }
        }

        #region Utils

        public static Shop FromPuntoVenditaBean(PuntoVenditaBean puntoVendita, bool online)
        {
            if (puntoVendita == null)
            {
                return null;
            }

            return new Shop
            {
                Id = puntoVendita.IdPuntoVendita.ToString() ?? string.Empty,
                Title = puntoVendita.Denominazione,
                Address = new Address
                {
                    Cap = puntoVendita.Cap,
                    Comune = puntoVendita.Comune,
                    Indirizzo = puntoVendita.Indirizzo,
                    SiglaProvincia = puntoVendita.CodProvincia
                },
                DistanceFromUser = string.Empty,
                IsOnline = online,
                Url = puntoVendita.UrlSito,
                Location = (puntoVendita.Latitudine == null || puntoVendita.Longitudine == null) ? null : new Location(puntoVendita.Latitudine.Value, puntoVendita.Longitudine.Value),
            };
        }

        #endregion

    }
}
