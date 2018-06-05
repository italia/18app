using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class ProfiloUtente
    {
        public string Id { get; set; }

        public string Nome { get; set; }

        public string Cognome { get; set; }

        public string CodiceFiscale { get; set; }

        public DateTime DataNascita { get; set; }

        public Address LuogoNascita { get; set; }

        public Address Residenza { get; set; }

        public string RecapitoTelefonico { get; set; }

        public string Email { get; set; }
    }
}