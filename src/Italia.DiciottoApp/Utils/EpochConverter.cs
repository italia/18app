using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;
using System.Diagnostics;

namespace Italia.DiciottoApp.Utils
{
    public class EpochConverter : DateTimeConverterBase
    {
        private static readonly DateTime epochDateTime = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
        private static readonly TimeSpan localBaseUtcOffset = new TimeSpan(2, 0, 0);

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
            Debug.WriteLine($"### Backend  ### --> Epoch value: {(long)reader.Value}");
            Debug.WriteLine($"### Frontend ### --> Date value : {epochDateTime.AddMilliseconds((long)reader.Value).Add(localBaseUtcOffset).ToString("dd MMMM yyyy hh:mm")}");
            return epochDateTime.AddMilliseconds((long)reader.Value).Add(localBaseUtcOffset);
        }
    }
}