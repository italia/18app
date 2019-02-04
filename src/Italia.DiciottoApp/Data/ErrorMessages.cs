using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Data
{
    public static class ErrorMessages
    {
        public static readonly string UNKNOWN = "Si è verificato un errore: il servizio non è disponibile.";
        public static readonly string FORBIDDEN = "Si è verificato un errore di accesso: il servizio non è disponibile.";
        public static readonly string JSON_CONVERTION_ERROR = "Si è verificato un errore di conversione dati: il servizio non è disponibile.";
        public static readonly string INTERNAL_SERVER_ERROR = "Si è verificato un errore sul server: il servizio non è disponibile.";

        public static readonly string ERROR_CODE_0 = "Operazione andata a buon fine.";
        public static readonly string ERROR_CODE_1 = "Ci dispiace ma quest'anno il bonus per i diciottenni è riservato solo ai nati nel 2000. Se pensi di averne diritto, e pensi ci sia stato un errore relativo ai tuoi dati anagrafici, puoi rivolgerti al tuo Comune di residenza.";
        public static readonly string ERROR_CODE_2 = "Ci dispiace, ma è esaurito il Plafond a disposizione.";
        public static readonly string ERROR_CODE_3 = "Attenzione, il tuo borsellino non è ancora attivo.";
        public static readonly string ERROR_CODE_4 = "Attenzione, se sei del 1998, il periodo per registrarti a 18app è scaduto il 30 giugno 2017. Se sei del 1999, il periodo per registrarti è terminato il 30 giugno 2018. Se sei del 2001, la procedura di registrazione non è ancora attiva.";
        public static readonly string ERROR_CODE_5 = "Ci dispiace, ma il periodo per poter accedere a 18app è terminato il 31 marzo 2018.";

        public static readonly string SET_PRIVACY_FAILURE = "Siamo spiacenti ma non è stato possibile registrare l'accettazione delle condizioni di privacy dell'app.";

        public static readonly string UNSUCCESSFUL_HTTP_STATUS_CODE = "Si è verificato un errore: il servizio non è disponibile.";
        public static readonly string REGISTRATION_TIME_ENDED = ERROR_CODE_5; // This is the same error of ErrorCode value equal to five.
        public static readonly string NON_OPERATING_BENEFICIARY = "Si è verificato un errore: il servizio non è disponibile.";
        public static readonly string REGISTRATION_CHECK_FAILED = "Si è verificato un errore: il servizio non è disponibile.";
        public static readonly string UNAVAILABLE_BENEFICIARY = "Si è verificato un errore: il servizio non è disponibile.";
        public static readonly string UNAVAILABLE_WALLET = "Si è verificato un errore: il servizio non è disponibile.";
        // Già definito più sopra
        // public static readonly string UNKNOWN = "Si è verificato un errore: il servizio non è disponibile.";

        public static readonly string IDP_LOGIN_FAILED = "Login non riuscito.";
        public static readonly string LOGIN_MISSING_SECURE_TOKEN = "Login non riuscito (Secure token non disponibile).";
        public static readonly string LOGIN_MISSING_CLIENT_TOKEN = "Login non riuscito (Client token non disponibile).";
    }
}