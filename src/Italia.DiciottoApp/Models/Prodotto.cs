using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Prodotto
    {
        private static readonly string[] prodotti = new string[]
        {
            "Biglietto d'ingresso",
            "Abbonamento/Card",
            "Libri cartacei",
            "AudioLibri"
        };

        private static readonly string[] imageSources = new string[]
        {
            "cat_movie",
            "cat_concert",
            "cat_event",
            "cat_book",
            "cat_museum",
            "cat_theatre"
        };

        public TipoProdotto Tipo { get; set; }

        public string Titolo => prodotti[(int)Tipo];

        public string ImageSource => Categories.ImageSources[(int)Tipo];

        public string BlackImageSource => $"{Categories.ImageSources[(int)Tipo]}_black";
    }
}
