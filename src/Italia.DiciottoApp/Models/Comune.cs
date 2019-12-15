using Italia.DiciottoApp.Data;
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Comune
    {
        public string Id { get; set; }

        public string CodiceCatastale { get; set; }

        public string Nome { get; set; }

        public string NomeAlternativo { get; set; }

        public string NomeCompleto => $"{Nome}{(!String.IsNullOrWhiteSpace(NomeAlternativo) ? "/" : "")}{NomeAlternativo}";

        public string CodiceProvincia { get; set; }

        public string Provincia { get; set; }

        public string CodiceRegione { get; set; }

        public string Regione { get; set; }

        private static IEnumerable<Comune> list = null;
        public static IEnumerable<Comune> List
        {
            get
            {
                if (list == null)
                {
                    list = CreateList();
                }
                return list;
            }
        }

        private static IEnumerable<Comune> CreateList()
        {
            var assembly = IntrospectionExtensions.GetTypeInfo(typeof(Constants)).Assembly;
            Stream stream = assembly.GetManifestResourceStream("Italia.DiciottoApp.Data.ElencoComuni.json");

            Comune[] comuni;
            using (var reader = new StreamReader(stream))
            {
                var json = reader.ReadToEnd();
                comuni = JsonConvert.DeserializeObject<Comune[]>(json);
            }

            return comuni;
        }
    }
}
