using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Essentials;

namespace Italia.DiciottoApp.Models
{
    public class Shop
    {
        public string Id { get; set; }

        public bool IsOnline { get; set; }

        public string Title { get; set; }

        public Address Address { get; set; }

        public Location Location { get; set; }

        public string DistanceFromUser { get; set; }

        public Categoria[] Categorie { get; set; }

        public string Url { get; set; }

        private string elencoCategorie = null;
        public string ElencoCategorie
        {
            get
            {
                if (elencoCategorie == null)
                {
                    if (Categorie.Length == 0)
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
                                sb.Append(", ");
                            }
                            sb.Append(categoria.Titolo);
                        }
                        elencoCategorie = sb.ToString();
                    }
                }
                return elencoCategorie;
            }
        }
    }
}
