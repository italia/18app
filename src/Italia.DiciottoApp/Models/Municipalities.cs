using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public static class Municipalities
    {
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
            Stream stream = assembly.GetManifestResourceStream("Italia.DiciottoApp.ElencoComuni.json");

            Municipality[] municipalities;
            using (var reader = new System.IO.StreamReader(stream))
            {

                var json = reader.ReadToEnd();
                municipalities = JsonConvert.DeserializeObject<Municipality[]>(json);
            }

            return municipalities;
        }
    }
}