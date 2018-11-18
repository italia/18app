using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class SpidBean
    {
        [JsonProperty("idTransazione", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string IdTransazione { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataTransazione", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataTransazione { get; set; }

        [JsonProperty("cfUtente", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CfUtente { get; set; }

        [JsonProperty("idP", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string IdP { get; set; }

        [JsonProperty("nome", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Nome { get; set; }

        [JsonProperty("cognome", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Cognome { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataNascita", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataNascita { get; set; }

        [JsonProperty("luogoNascita", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string LuogoNascita { get; set; }

        [JsonProperty("cellulare", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Cellulare { get; set; }

        [JsonProperty("mail", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Mail { get; set; }

        [JsonProperty("domicilioFisico", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string DomicilioFisico { get; set; }

        [JsonProperty("domicilioDigitale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string DomicilioDigitale { get; set; }

        [JsonProperty("ipClient", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string IpClient { get; set; }
    }
}
