using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class CheckBeneficiarioOperativoBean
    {
        [JsonProperty("flagOperativo", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public bool? FlagOperativo { get; set; } = false;
    }
}
