using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class BeneBean
    {
        [JsonProperty("idBene", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public long? IdBene { get; set; }

        [JsonProperty("idAmbito", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public long? IdAmbito { get; set; }

        [JsonProperty("nome", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Nome { get; set; }

        [JsonProperty("descrizione", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Descrizione { get; set; }

        [JsonProperty("flagApprovato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string FlagApprovato { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataInserimento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataInserimento { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataAggiornamento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataAggiornamento { get; set; }

        [JsonProperty("flagChecked", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public bool? FlagChecked { get; set; } = false;
    }
}