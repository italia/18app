# 18 App

##  hack.italia - team: Fusi - Luogo: BARI

## Tecnologia

Abbiamo scelto di usare fuse tools che e' uno strumento open source con licenza MIT per lo sviluppo di app native multipiattaforma.

Oggigiorno ci sono molti framework per la creazione di app mobile native cross-platform e allora perché un nuovo framework? Fuse porta con se nuovi concetti tecnici e nuovi flussi di lavoro al fine di garantire una visualizzazione regolare di *60* *fotogrammi* al secondo e migliorare l’efficienza di sviluppo e la collaborazione tra designer e developer. 

Fuse tools produce codice UI compilato in Objective-C per iOS e C++ per Android.
La logica di business e' scritta in Javascript.

Fuse tools consente di definire transizioni grafiche di UI con un semplice linguaggio dichiarativo XML, che viene compilato in codice nativo, ottenendo un'interfaccia fluida e priva di 'blocchi' inattesi.

## File apk per Android

Per facilitare il testing dell'app su Android abbiamo deciso di includere l'apk compilato nella cartella _dist/android_ del repository.

## Run in IOS / Android on Development PC

Dopo aver installato https://www.fusetools.com/downloads e' possibile lanciare la preview sul sistema operativo di sviluppo con il comando:

$> cd src
$> fuse preview

## Compliazione iOS / Android e preview sul dispositivo

$> fuse build --target=ios --run

$> fuse build --target=android --run

## Compliazione iOS / Android per deploy

documentazione [qui](https://www.fusetools.com/docs/basics/preview-and-export#android)

$> fuse install android
$> fuse build --target=Android --configuration=Release

documentazione [qui](https://www.fusetools.com/docs/basics/preview-and-export#ios)

$> fuse build --target=iOS --configuration=Release

## Modificabilita' del codice

Il codice e' stato scritto per risultare di facile estendibilita' e modificabilita'

_StaticResources.ux_ contiene la definizione di tutti i colori, font, dimensioni, stili e icone seguendo il principo di SINGLE SOURCE OF TRUTH. In questo modo e' semplice cambiare in un colpo solo colori, icone, font e dimensioni.

_Modules_ / _Backend.js_ e' il modulo responsabile della comunicazione con le RESTful API. Non essendo disponibile un'implementazione definita delle API, in questo momento il modulo backend simula le chiamate ad API. Restituisce dei dati di test in formato json, che sono definiti in strutture dati all'inizio del modulo.

_Modules_ / _Context.js_ e' il modulo che descrive lo stato generale dell'applicazione, usa il modulo backend per recuperare i dati e trasforma i dati nel formato riconosciuto da tutta l'applicazione. In pratica Context e' il ponte tra l'applicazione e il backend.

_Entities_ contine le strutture dati che sono riconosciute dall'applicazione, vengono fornite dal Context che eventualmente rimappa i dati ricevuti dal Backend.

_Pages_ nella cartella pages ci sono le pagine dell'app. Ogni pagina ha il suo corrispondente file js con la sua business logic.

_Components_ contiene le componenti UI riutilizzate in tutta l'applicazione. Le componenti sono descritte in un linguaggio dichiarativo XML che include anche la definizione dei comportamenti, animazioni e transizioni.

_Libraries_ contiene librerie JS esterne. Nel dettaglio fuse.js la utilizziamo per le ricerche con logica fuzzy.

_Assets_ contiene tutte le risorse statiche come immagini, icone e font.

