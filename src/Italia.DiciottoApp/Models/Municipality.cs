using Italia.DiciottoApp.Data;
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public class Municipality
    {
        public string Id { get; set; }

        public string RegionId { get; set; }

        public string Province { get; set; }

        public string Name { get; set; }

        public string FullName => $"{Name} ({Province})";

        private static IEnumerable<Municipality> list = null;
        public static IEnumerable<Municipality> List
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

        private static IEnumerable<Municipality> CreateList()
        {
            var assembly = IntrospectionExtensions.GetTypeInfo(typeof(Constants)).Assembly;
            Stream stream = assembly.GetManifestResourceStream("Italia.DiciottoApp.Data.ElencoComuni.json");

            Municipality[] municipalities;
            using (var reader = new StreamReader(stream))
            {
                var json = reader.ReadToEnd();
                municipalities = JsonConvert.DeserializeObject<Municipality[]>(json);
            }

            return municipalities;
        }
    }
}
