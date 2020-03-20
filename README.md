![](src/Italia.DiciottoApp.iOS/Assets.xcassets/AppIcon.appiconset/Icon120.png)

# 18app

[![Join the #18app channel](https://img.shields.io/badge/Slack%20channel-%2318app-blue.svg?logo=slack)](https://developersitalia.slack.com/messages/C7AAA10PN)
[![Get invited](https://slack.developers.italia.it/badge.svg)](https://slack.developers.italia.it/)
[![18app on forum.italia.it](https://img.shields.io/badge/Forum-18app-blue.svg)](https://forum.italia.it/c/18app-carta-docente)

> ⚠️ **WORK IN PROGRESS** ⚠️

Questo è il repository della app ufficiale per [18app](https://www.18app.italia.it/), sviluppata con il framework Xamarin.Forms per iOS e Android.

Lo sviluppo della app è stato completato ed è in corso di pubblicazione negli app store. Segui la [pagina Facebook ufficiale](https://www.facebook.com/18app/) per ricevere aggiornamenti!

![](screenshots/cover.png) ![](screenshots/home.png)

## Informazioni per sviluppatori

Il codice è contenuto in una singola soluzione Visual Studio all'interno della directory `src/`. Dopo aver clonato il progetto, puoi aprirlo con Visual Studio.

Consulta la [documentazione di Xamarin.Forms](https://docs.microsoft.com/en-us/xamarin/xamarin-forms/get-started/installation?tabs=windows#windows-system-requirements) per installare tutti gli strumenti di sviluppo necessari.

Potrai quindi compilare e testare la app localmente usando emulatori o dispositivi fisici.

## Informazioni aggiuntive per la compilazione

Per ovvi motivi nel repository GitHub non è presente un file che contiene le chiavi di connessione ai servizi di backend, quindi la compilazione non va a buon fine. Per risolvere basta creare nella cartella `src/Italia.DiciottoApp` il file `Keys.cs` col seguente contenuto:

```cs
namespace Italia.DiciottoApp
{
    public static class Keys
    {
        public static readonly bool IsInstabugEnabled = false;
        public static readonly string InstabugToken = "<InstabugToken>";

        public static string X_IBM_ClientId_ProdEnv => "<ProdClientIdGuid>";
        public static string X_IBM_ClientId_TestEnv => "<TestClientIdGuid>";

        public static string X_IBM_ClientSecret_ProdEnv => "<ProdClientSecretGuid>";
        public static string X_IBM_ClientSecret_TestEnv => "<TestClientSecretGuid>";
    }
}
```

## Configurazione del servizio Google Maps

A partire dal 16 luglio 2018 i servizi Google Maps possono essere gratuitamente utilizzati solo da applicazioni Mobile, come riportato nella pagina [Google Map service Price](https://cloud.google.com/maps-platform/pricing). Al fine di evitare un uso improprio Google richiede la registrazione dell'app, da effettuare come descritto nella documentazione Xamarin Forms [Obtaining a Google Maps API Key](https://docs.microsoft.com/en-us/xamarin/android/platform/maps-and-location/maps/obtaining-a-google-maps-api-key). Poiché il servizio riconosce l'app chiamante mediante la chiave SHA-1 con la quale è stata compilata, non è necessario impostare alcun altro parametro (AppId o AppSecret) di sorta. In modo automatico, l'applicazione Android utilizzerà il servizio Google Maps, come sopra impostato, e l'applicazione iOS utilizzerà il servizio di mappe della Apple, che non richiede alcuna impostazione.

## Come contribuire

I contributi sono benvenuti! Al momento siamo impegnati per il primo rilascio, quindi il codice cambia velocemente. Dopo il primo rilascio potremo valutare i contributi inviati sottoforma di Pull Request. Ti consigliamo di iniziare aprendo una issue in modo da discutere insieme il modo migliore per implementare la modifica, e di non includere troppe modifiche eterogenee nella stessa Pull Request.

## Autori

Questa app è stata sviluppata dal [Team per la Trasformazione Digitale](https://teamdigitale.governo.it/) in collaborazione con il [Ministero per i Beni e le Attività Culturali](http://www.beniculturali.it/) e [Sogei](http://www.sogei.it/).

* _Progetto UX/UI:_ [Matteo De Santi](https://teamdigitale.governo.it/it/people/34-profile.htm)
* _Sviluppo Xamarin:_ [Nicolò Carandini](https://www.linkedin.com/in/ncarandini/)
* _Coordinamento:_ [Alessandro Ranellucci](https://teamdigitale.governo.it/it/people/alessandro-ranellucci.html)

## Licenza

Il codice sorgente è rilasciato sotto licenza GPL-3.0.

