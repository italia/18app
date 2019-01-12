using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Utils
{
    public static class BeneficiarioBeanMessage
    {
        public static string FromErrorCode(int errorCode)
        {
            switch (errorCode)
            {
                case 0:
                    return "Operazione andata a buon fine.";
                case -1:
                    return $"Ci dispiace ma quest'anno il bonus per i diciottenni è riservato solo ai nati nel 2000. Se pensi di averne diritto, e pensi ci sia stato un errore relativo ai tuoi dati anagrafici, puoi rivolgerti al tuo Comune di residenza.";
                case -2:
                    return "Ci dispiace, ma è esaurito il Plafond a disposizione";
                case -3:
                    return "Attenzione, il tuo borsellino non è ancora attivo.";
                case -4:
                    return "Attenzione, se sei del 1998, il periodo per registrarti a 18app è scaduto il 30 giugno 2017. Se sei del 1999, il periodo per registrarti è terminato il 30 giugno 2018. Se sei del 2001, la procedura di registrazione non è ancora attiva.";
                //case -5:
                //    return "Ci dispiace, ma il periodo per poter accedere a 18app è terminato il 31 marzo 2018.";
                default:
                    return "Codice di errore sconosciuto";
            }
        }



    }
}
