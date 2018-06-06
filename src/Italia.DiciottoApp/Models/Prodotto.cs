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

        public TipoProdotto Tipo { get; set; }

        public string Titolo
        {
            get => prodotti[(int)Tipo];
        }
    }
}
