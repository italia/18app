using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.ApiModels
{
    public class PuntoVenditaBean
    {
        public int idPuntoVendita;
        public int idEsercente;
        public string denominazione;
        public string indirizzo;
        public string codProvincia;
        public string comune;
        public string cap;
        public string urlSito;
        public string telefonoPrincipale;
        public string telefonoSecondario;
        public string email;
        public string flagCancellato;
        public string dataInserimento;
        public string dataAggiornamento;
        public double latitudine;
        public double longitudine;
    }
}
