using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;

namespace Italia.DiciottoApp.DTOs
{
    public class BeneficiarioBean
    {
        [JsonProperty("idBeneficiario", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public long? IdBeneficiario { get; set; }

        [JsonProperty("codiceFiscale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodiceFiscale { get; set; }

        [JsonProperty("annoRif", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string AnnoRif { get; set; }

        [JsonProperty("cognome", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Cognome { get; set; }

        [JsonProperty("nome", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Nome { get; set; }

        [JsonProperty("sesso", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Sesso { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataNascita", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataNascita { get; set; }

        [JsonProperty("comuneNascita", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string ComuneNascita { get; set; }

        [JsonProperty("provinciaNascita", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string ProvinciaNascita { get; set; }

        [JsonProperty("comuneResidenza", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string ComuneResidenza { get; set; }

        [JsonProperty("provinciaResidenza", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string ProvinciaResidenza { get; set; }

        [JsonProperty("capResidenza", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CapResidenza { get; set; }

        [JsonProperty("indirizzoResidenza", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string IndirizzoResidenza { get; set; }

        [JsonProperty("cellulare", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Cellulare { get; set; }

        [JsonProperty("email", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Email { get; set; }

        [JsonProperty("rifPiattaformaSocial", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string RifPiattaformaSocial { get; set; }

        [JsonProperty("flagAccettazionePrivacy", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string FlagAccettazionePrivacy { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataInserimento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataInserimento { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataAggiornamento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataAggiornamento { get; set; }

        [JsonProperty("strDataNascita", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string StrDataNascita { get; set; }

        [JsonProperty("flagSinonimoRegistrato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public bool? FlagSinonimoRegistrato { get; set; } = false;

        [JsonProperty("borsellinoBean", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public BorsellinoBean BorsellinoBean { get; set; }

        [JsonProperty("spidBean", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public SpidBean SpidBean { get; set; }

        [JsonProperty("flagAppUfficiale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string FlagAppUfficiale { get; set; }

        [JsonProperty("errorCode", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? ErrorCode { get; set; }
    }
}