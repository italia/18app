using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Models
{
    public static class IdPs
    {
        public static int Id(IdP idp)
        {
            return (int)idp;
        }

        public static string ImageName(int idpIndex)
        {
            return ImageName((IdP)idpIndex);
        }

        private static string ImageName(IdP idp)
        {
            switch (idp)
            {
                case IdP.None:
                    return string.Empty;
                case IdP.Aruba:
                    return "idp_aruba";
                case IdP.InfoCert:
                    return "idp_infocert";
                case IdP.Intesa:
                    return "idp_intesa";
                case IdP.Lepida:
                    return "idp_lepida";
                case IdP.Namirial:
                    return "idp_namirial";
                case IdP.Poste:
                    return "idp_poste";
                case IdP.Register:
                    return "idp_register";
                case IdP.Sielte:
                    return "idp_sielte";
                case IdP.Tim:
                    return "idp_tim";
                case IdP.Test:
                    return "idp_test";
                default:
                    return string.Empty;
            }
        }

        public static string UrlString(IdP idp)
        {
            string urlSegment;
            switch (idp)
            {
                case IdP.None:
                    urlSegment = String.Empty;
                    break;
                case IdP.Aruba:
                    urlSegment = "aruba";
                    break;
                case IdP.InfoCert:
                    urlSegment = "infocert";
                    break;
                case IdP.Intesa:
                    urlSegment ="intesa";
                    break;
                case IdP.Lepida:
                    urlSegment = "lepida";
                    break;
                case IdP.Namirial:
                    urlSegment = "namirial";
                    break;
                case IdP.Poste:
                    urlSegment = "poste";
                    break;
                case IdP.Register:
                    urlSegment ="register";
                    break;
                case IdP.Sielte:
                    urlSegment = "sielte";
                    break;
                case IdP.Tim:
                    urlSegment = "titt";
                    break;
                case IdP.Test:
                    urlSegment = "agid";
                    break;
                default:
                    urlSegment = String.Empty;
                    break;
            }

            // return (string.IsNullOrWhiteSpace(urlSegment)) ? string.Empty : $"https://sso{(idp == IdP.Test ? "test" : "")}.18app.italia.it/rp/{urlSegment}/s5mobile";
            return (string.IsNullOrWhiteSpace(urlSegment)) ? string.Empty : $"https://sso{(idp == IdP.Test ? "test" : "")}.18app.italia.it/rp/{urlSegment}/s5";
        }

    }
}
