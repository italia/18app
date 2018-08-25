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
                default:
                    return string.Empty;
            }
        }
    }
}
