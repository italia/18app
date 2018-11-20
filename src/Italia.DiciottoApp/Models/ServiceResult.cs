using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Models
{
    public class ServiceResult
    {
        public bool Success { get; set; } = false;

        public ServiceFailureReason FailureReason { get; set; } = ServiceFailureReason.Unknown;

        public List<HttpResponseMessage> Log { get; set; } = new List<HttpResponseMessage>();
    }

    public class ServiceResult<T> : ServiceResult
    {
        public T Result { get; private set; } = default(T);

        public async Task ProcessAsync(HttpResponseMessage response)
        {
            Log.Add(response);

            if (response.IsSuccessStatusCode)
            {
                try
                {
                    Success = true;
                    var content = await response.Content.ReadAsStringAsync();
                    Result = JsonConvert.DeserializeObject<T>(content);
                }
                catch (Exception)
                {
                    Success = false;
                    FailureReason = ServiceFailureReason.JsonConvertionError;
                }
            }
            else if (response.StatusCode == HttpStatusCode.Forbidden)
            {
                Success = false;
                FailureReason = ServiceFailureReason.Forbidden;
            }
            else if (response.StatusCode == HttpStatusCode.InternalServerError)
            {
                Success = false;
                FailureReason = ServiceFailureReason.InternalServerError;
            }
            else
            {
                Success = false;
            }
        }
    }
}
