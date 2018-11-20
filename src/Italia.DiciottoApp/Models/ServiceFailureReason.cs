using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public enum ServiceFailureReason
    {
        Unknown,
        Forbidden,
        JsonConvertionError,
        InternalServerError
    }
}
