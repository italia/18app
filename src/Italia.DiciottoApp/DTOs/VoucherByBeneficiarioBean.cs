using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class VoucherByBeneficiarioBean
    {
        [JsonProperty("listaVoucherFisico", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public List<VoucherBean> ListaVoucherFisico { get; set; }

        [JsonProperty("listaVoucherOnline", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public List<VoucherBean> ListaVoucherOnline { get; set; }

        [JsonProperty("numFisicoTotale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumFisicoTotale { get; set; }

        [JsonProperty("importoFisicoTotale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoFisicoTotale { get; set; }

        [JsonProperty("numOnlineTotale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumOnlineTotale { get; set; }

        [JsonProperty("importoOnlineTotale", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public double? ImportoOnlineTotale { get; set; }
    }
}
