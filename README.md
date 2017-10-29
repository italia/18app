# 18 App

##  hack.italia - team: Fusi - Luogo: BARI

## Tecnologia

Abbiamo scelto di usare fuse tools che e' uno strumento open source con licenza MIT per lo sviluppo di app native multipiattaforma.

Oggigiorno ci sono molti framework per la creazione di app mobile native cross-platform e allora perché un nuovo framework? Fuse porta con se nuovi concetti tecnici e nuovi flussi di lavoro al fine di garantire una visualizzazione regolare di *60* *fotogrammi* al secondo e migliorare l’efficienza di sviluppo e la collaborazione tra designer e developer. 

Fuse tools produce codice UI compilato in Objective-C per iOS e C++ per Android.
La logica di business e' scritta in Javascript.

Fuse tools consente di definire transizioni grafiche di UI con un semplice linguaggio dichiarativo XML, che viene compilato in codice nativo, ottenendo un'interfaccia fluida e priva di 'blocchi' inattesi.

## Run in IOS / Android on Development PC

Dopo aver installato https://www.fusetools.com/downloads e' possibile lanciare la preview sul sistema operativo di sviluppo con il comando:

$> fuse preview

preview su iOS collegato al sistema di sviluppo:

$> fuse preview -tios

preview su Android collegato al sistema di sviluppo:

$> fuse preview -tandroid

## Compliazione iOS / Android

$> fuse build --target=ios

$> fuse build --target=android


## Modificabilita' del codice

Il codice e' stato scritto per risultare di facile estendibilita' e modificabilita'

_StaticResources.ux_ contiene la definizione di tutti i colori, font, dimensioni, stili e icone. Tutti i riferimenti nel codice delle schermate sono stati rifattorizzati ai valori qui definiti (SINGLE SOURCE OF TRUTH), in questo modo e' semplice cambiare in un colpo colori, icone, font e dimensioni.

_Modules_ / _Backend.js_ e' il modulo responsabile della comunicazione con le RESTful API. Non essendo disponibile un'implementazione definita delle API, in questo momento il modulo backend simula le chiamate ad API. Restituisce dei dati di test che sono definiti in strutture dati all'inizio del modulo.

_Modules_ / _Context.js_ e' il modulo che descrive lo stato generale dell'applicazione, usa il modulo backend per recuperare i dati e trasforma i dati nel formato riconosciuto da tutta l'applicazione. In pratica Context e' il ponte tra l'applicazione e il backend.

_Entities_ contine le strutture dati che sono riconosciute dall'applicazione, vengono fornite dal Context che eventualmente rimappa i dati ricevuti dal Backend

_Pages_ nella cartella pages ci sono le pagine principali dell'app, ogni pagina ha il suo corrispondente file js con la logica specifica della pagina.

_Components_ contiene le componenti risutilizzate in tutta l'applicazione. Le componenti sono descritte in un linguaggio dichiarativo XML che include anche la definizione dei comportamenti di animazioni e transizioni.

_Libraries_ contiene librerie JS esterne. Nel dettaglio fuse.js la utilizziamo per le ricerche con logica fuzzy.

