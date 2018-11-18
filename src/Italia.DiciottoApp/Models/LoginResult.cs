using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Http;
using System.Text;
using Italia.DiciottoApp.DTOs;

namespace Italia.DiciottoApp.Models
{
    public class LoginResult
    {
        public bool Success { get; set; } = true;

        public BeneficiarioBean Beneficiary { get; set; }

        public LoginFailureReason FailureReason { get; set; } = LoginFailureReason.Unknown;

        public List<HttpResponseMessage> Log { get; set; } = new List<HttpResponseMessage>();

        public void Process(HttpResponseMessage response, bool skipInternalError = false)
        {
            Log.Add(response);
            Success = response.IsSuccessStatusCode || (skipInternalError && response.StatusCode == HttpStatusCode.InternalServerError);

            if (!Success)
            {
                FailureReason = LoginFailureReason.UnsuccessfulHttpStatusCode;
                throw new Exception($"Http request failure: {response.StatusCode}");
            }
        }

        public void RegistrationTimeEnded()
        {
            Success = false;
            FailureReason = LoginFailureReason.RegistrationTimeEnded;
        }

        public void NonOperatingBeneficiary()
        {
            Success = false;
            FailureReason = LoginFailureReason.NonOperatingBeneficiary;
        }

        public void RegistrationCheckFailed()
        {
            Success = false;
            FailureReason = LoginFailureReason.RegistrationCheckFailed;
        }

        public void SetBeneficiary(BeneficiarioBean beneficiary)
        {
            Success = true;
            Beneficiary = beneficiary;
        }
    }
}
