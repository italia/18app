using Italia.DiciottoApp.Data;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Utils
{
    public static class Message
    {
        public static string FromErrorCode(int errorCode)
        {
            switch (errorCode)
            {
                case 0:
                    return ErrorMessages.ERROR_CODE_0;
                case -1:
                    return ErrorMessages.ERROR_CODE_1;
                case -2:
                    return ErrorMessages.ERROR_CODE_2;
                case -3:
                    return ErrorMessages.ERROR_CODE_3;
                case -4:
                    return ErrorMessages.ERROR_CODE_4;
                case -5:
                    return ErrorMessages.ERROR_CODE_0;
                default:
                    return $"Il servizio ha restituito un codice di errore sconosciuto, si prega di contattare l'assistenza (Codice di errore: {errorCode})";
            }
        }



    }
}
