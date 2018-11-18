using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class BorsellinoBean
    {
        [JsonProperty("idBorsellino", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public long? IdBorsellino { get; set; }

        [JsonProperty("idBeneficiario", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public long? IdBeneficiario { get; set; }

        [JsonProperty("annoRif", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string AnnoRif { get; set; }

        [JsonProperty("importoTot", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoTot { get; set; }

        [JsonProperty("importoRichNonValidFisico", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoRichNonValidFisico { get; set; }

        [JsonProperty("importoRichNonValidOnline", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoRichNonValidOnline { get; set; }

        [JsonProperty("importoValidato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoValidato { get; set; }

        [JsonProperty("importoResiduo", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoResiduo { get; set; }

        [JsonProperty("idStato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public long? IdStato { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataInserimento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataInserimento { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("datAggiornamento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DatAggiornamento { get; set; }

        [JsonProperty("numVoucherSpesiSFisici", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumVoucherSpesiSFisici { get; set; }

        [JsonProperty("numVoucherDaSpendereSFisici", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumVoucherDaSpendereSFisici { get; set; }

        [JsonProperty("numVoucherSpesiSOnline", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumVoucherSpesiSOnline { get; set; }

        [JsonProperty("numVoucherDaSpendereSOnline", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumVoucherDaSpendereSOnline { get; set; }

        [JsonProperty("numTotaleVoucherSpesi", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumTotaleVoucherSpesi { get; set; }

        [JsonProperty("numTotaleVoucherDaSpendere", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumTotaleVoucherDaSpendere { get; set; }
    }
}
