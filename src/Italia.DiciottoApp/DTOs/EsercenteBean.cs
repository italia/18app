using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class EsercenteBean
    {
        [JsonProperty("idEsercente", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public long? IdEsercente { get; set; }

        [JsonProperty("codStato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? CodStato { get; set; }

        [JsonProperty("codStato2", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? CodStato2 { get; set; }

        [JsonProperty("codFiscaleGiuridico", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodFiscaleGiuridico { get; set; }

        [JsonProperty("codFiscaleTitolare", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodFiscaleTitolare { get; set; }

        [JsonProperty("codAtecoUtente", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodAtecoUtente { get; set; }

        [JsonProperty("codAtecoAna", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodAtecoAna { get; set; }

        [JsonProperty("capDomicilioFiscale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CapDomicilioFiscale { get; set; }

        [JsonProperty("codProvDomicilioFiscale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodProvDomicilioFiscale { get; set; }

        [JsonProperty("comuneDomicilioFiscale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string ComuneDomicilioFiscale { get; set; }

        [JsonProperty("indirizzoDomicilioFiscale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string IndirizzoDomicilioFiscale { get; set; }

        [JsonProperty("email", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Email { get; set; }

        [JsonProperty("flagAccettazioneNormativa", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string FlagAccettazioneNormativa { get; set; }

        [JsonProperty("flagStoreFisico", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string FlagStoreFisico { get; set; }

        [JsonProperty("flagStoreOnline", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string FlagStoreOnline { get; set; }

        [JsonProperty("partitaIVA", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string PartitaIVA { get; set; }

        [JsonProperty("codEsercente", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodEsercente { get; set; }

        [JsonProperty("ragioneSociale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string RagioneSociale { get; set; }

        [JsonProperty("capSedeLegale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CapSedeLegale { get; set; }

        [JsonProperty("codProvSedeLegale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodProvSedeLegale { get; set; }

        [JsonProperty("comuneSedeLegale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string ComuneSedeLegale { get; set; }

        [JsonProperty("indirizzoSedeLegale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string IndirizzoSedeLegale { get; set; }

        [JsonProperty("telefonoPrincipale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string TelefonoPrincipale { get; set; }

        [JsonProperty("telefonoSecondario", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string TelefonoSecondario { get; set; }

        [JsonProperty("urlSito", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string UrlSito { get; set; }

        [JsonProperty("flagApi", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string FlagApi { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataInserimento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataInserimento { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataAggiornamento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataAggiornamento { get; set; }

        [JsonProperty("descStato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string DescStato { get; set; }

        [JsonProperty("ispIvaCessata", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public bool? IspIvaCessata { get; set; } = false;
    }
}
