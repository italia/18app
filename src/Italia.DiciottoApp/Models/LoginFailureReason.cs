using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public enum LoginFailureReason
    {
        UnsuccessfulHttpStatusCode,
        RegistrationTimeEnded,
        NonOperatingBeneficiary,
        RegistrationCheckFailed,
        UnavailableBeneficiary,
        UnavailableWallet,
        Unknown
    }
}
