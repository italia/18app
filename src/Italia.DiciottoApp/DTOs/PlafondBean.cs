using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class PlafondBean
    {
        [JsonProperty("dataScadenzaBuoni", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public string DataScadenzaBuoni { get; set; }
    }
}
