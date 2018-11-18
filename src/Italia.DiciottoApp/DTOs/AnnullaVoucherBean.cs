using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class AnnullaVoucherBean
    {
        [JsonProperty("risultato", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public bool? Risultato { get; set; } = false;

        [JsonProperty("errorCode", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? ErrorCode { get; set; }

        [JsonProperty("numGiorniAnnullaMuseo", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumGiorniAnnullaMuseo { get; set; }

        [JsonProperty("dataStartAnnullaMuseo", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string DataStartAnnullaMuseo { get; set; }
    }
}
