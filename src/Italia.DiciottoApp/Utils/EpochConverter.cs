using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;

namespace Italia.DiciottoApp.Utils
{
    public class EpochConverter : DateTimeConverterBase
    {
        private static readonly DateTime epochDateTime = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);

        public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
        {
            writer.WriteRawValue(Math.Truncate(((DateTime)value - epochDateTime).TotalMilliseconds).ToString());
        }

        public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
        {
            if (reader.Value == null)
            {
                return null;
            }
            return epochDateTime.AddMilliseconds((long)reader.Value);
        }
    }
}