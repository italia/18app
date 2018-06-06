using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Shop
    {
        public bool IsOnline { get; set; }

        public string Title { get; set; }

        public Address Address { get; set; }

        public GpsPosition GpsPosition { get; set; }

        public Categoria[] Categorie { get; set; }

        public string Url { get; set; }
    }
}
