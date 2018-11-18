using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.DTOs
{
    public class RicercaStoreResultOutputBean
    {
        [JsonProperty("listaStoreResultBean", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public List<RicercaStoreResultBean> ListaStoreResultBean { get; set; }

        [JsonProperty("numTotaleElementi", Required = Newtonsoft.Json.Required.Default, NullValueHandling = Newtonsoft.Json.NullValueHandling.Ignore)]
        public int? NumTotaleElementi { get; set; }
    }
}
