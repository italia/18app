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
            "prod_ticket",
            "prod_subscription",
            "prod_paperbook",
            "prod_audiobook"
        };

        public TipoProdotto Tipo { get; set; }

        public string Titolo => prodotti[(int)Tipo];

        public string ImageSource => imageSources[(int)Tipo];

        public string BlackImageSource => $"{imageSources[(int)Tipo]}_black";
    }
}
