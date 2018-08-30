using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Address
    {
        public string Indirizzo { get; set; }

        public string NumeroCivico { get; set; }

        public string Localita { get; set; }

        public string Comune { get; set; }

        public string Cap { get; set; }

        public string SiglaProvincia { get; set; }
    }
}
