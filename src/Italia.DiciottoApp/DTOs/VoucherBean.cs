using Italia.DiciottoApp.Utils;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class VoucherBean
    {
        [JsonProperty("idVoucher", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public long? IdVoucher { get; set; }

        [JsonProperty("codiceVoucher", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodiceVoucher { get; set; }

        [JsonProperty("beneficiarioBean", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public BeneficiarioBean BeneficiarioBean { get; set; }

        [JsonProperty("esercenteBean", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public EsercenteBean EsercenteBean { get; set; }

        [JsonProperty("puntoVenditaBean", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public PuntoVenditaBean PuntoVenditaBean { get; set; }

        [JsonProperty("ambitoBean", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public AmbitoBean AmbitoBean { get; set; }

        [JsonProperty("beneBean", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public BeneBean BeneBean { get; set; }

        [JsonProperty("annoRif", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string AnnoRif { get; set; }

        [JsonProperty("annoUtilizzo", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string AnnoUtilizzo { get; set; }

        [JsonProperty("importoRichiesto", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoRichiesto { get; set; }

        [JsonProperty("importoValidato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoValidato { get; set; }

        [JsonProperty("qr", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string Qr { get; set; }

        [JsonProperty("codeLine", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string CodeLine { get; set; }

        [JsonProperty("idFattura", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string IdFattura { get; set; }

        [JsonProperty("flagScaricato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string FlagScaricato { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataEmissione", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataEmissione { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataScadenza", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataScadenza { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataConferma", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataConferma { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("datAnnullamento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DatAnnullamento { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("dataInserimento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DataInserimento { get; set; }

        [JsonConverter(typeof(EpochConverter))]
        [JsonProperty("datAggiornamento", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public DateTime? DatAggiornamento { get; set; }

        [JsonProperty("strDataEmissione", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string StrDataEmissione { get; set; }

        [JsonProperty("strDataConferma", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string StrDataConferma { get; set; }

        [JsonProperty("errorCode", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? ErrorCode { get; set; }

        [JsonProperty("messageError", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string MessageError { get; set; }
    }
}
