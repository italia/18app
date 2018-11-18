using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class VoucherDaRiconvertireBean
    {
        [JsonProperty("idVoucherDaRiconvertire", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public long? IdVoucherDaRiconvertire { get; set; }

        [JsonProperty("codVoucher", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodVoucher { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataRiconversione", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataRiconversione { get; set; }

        [JsonProperty("strDataRiconversione", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string StrDataRiconversione { get; set; }

        [JsonProperty("importoVoucher", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoVoucher { get; set; }

        [JsonProperty("importoUsato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoUsato { get; set; }

        [JsonProperty("importoDaRiaccreditare", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoDaRiaccreditare { get; set; }

        [JsonProperty("codEsercente", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodEsercente { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataInserimento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataInserimento { get; set; }

        [JsonProperty("strDataInserimento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string StrDataInserimento { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataAggiornamento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataAggiornamento { get; set; }

        [JsonProperty("strDataAggiornamento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string StrDataAggiornamento { get; set; }

        [JsonProperty("codiceEsterno", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodiceEsterno { get; set; }

        [JsonProperty("stato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Stato { get; set; }

        [JsonProperty("ragioneSociale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string RagioneSociale { get; set; }

        [JsonProperty("strImportoDaRiaccreditare", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string StrImportoDaRiaccreditare { get; set; }

        [JsonProperty("strImportoUsato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string StrImportoUsato { get; set; }

        [JsonProperty("strImportoVoucher", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string StrImportoVoucher { get; set; }
    }
}