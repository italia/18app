# 18 App

##  hack.italia - team: Fusi - Luogo: BARI

## Video presentazione del progetto

[video 01 - Introduzione - perche' fuse](https://youtu.be/wQCZudhLNZM)

[video 02 - preview app e architettura del codice](https://youtu.be/HuwkO5OEEX8)


## Tecnologia scelta

Abbiamo scelto di usare [Fuse tools](www.fusetools.com) che e' uno strumento open source con licenza MIT per lo sviluppo di app native multipiattaforma ios e android.

##### Perchè Fuse?
Oggigiorno ci sono molti framework per la creazione di app mobile native cross-platform e allora perché un nuovo framework? Fuse porta con se nuovi concetti tecnici e nuovi flussi di lavoro al fine di garantire una visualizzazione regolare di *60* *fotogrammi* al secondo e migliorare l’efficienza di sviluppo e la collaborazione tra designer e developer. 

La filosofia di Fuse, rispetto ad altri framework competitor, è quella di focalizzare e semplificare il processo di sviluppo dell'User Experience nelle proprie app, mettendo in stretto contatto Designer e Sviluppatori. Il designer può quindi far parte del processo di sviluppo occupandosi di sviluppare le UI tramite un potente ma semplice linguaggio UI dichiarativo like XML, adatto anche a non sviluppatori e lo sviluppatore può invece focalizzare l'attenzione su tutte quelle che sono le logiche di business da realizzare dietro la parte ui tramite javascript.

Infine, la vera potenza è che il linguaggio  UI è compilato in codice puro nativo (Objective-C in iOS e C++ per android) ottenendo un'interfaccia fluida di 60 framerate al secondo, priva di 'blocchi' inattesi e garatendo un approccio  “write once, run everywhere” .


Per maggiori approfondimenti sul frameowork si lasciano alcune riferimenti utili:
- [Overview Fuse](https://www.facebook.com/fusetools/videos/1469174709856577/)
- [How Fuse differs from React Native and NativeScript](
https://blog.fusetools.com/how-fuse-differs-from-react-native-and-nativescript-525344f02aaf)


## Distribuzione dell'APP

Per facilitare il testing dell'app abbiamo creato una cartella _dist_ con all'interno la distruzione  per Android e per iOS:

APK ANDROID
E' sufficiente installare l'apk sul proprio dispositivo android.
```sh
/dist/android/app18.apk
```
PROGETTO XCODE 
Avrai bisogno di un MacOS, dell'IDE Xcode e un account developer per testare l'app IOS sul proprio dispositivo Apple.
```sh
/dist/ios/app18.xcodeproj
```


## PREVIEW SUL  PC
E' possibile avere una preview dell'app anche sul proprio  desktop installando il framework [Fuse](https://www.fusetools.com/downloads) e lanciando i seguenti comandi:

```sh
cd src
fuse preview
```

## Compilazione ed esecuzione sul  dispositivo

#### Android
```sh 
cd src
fuse install android
fuse build --target=ios --run
```
#### iOS
```sh 
cd src
fuse build --target=android --run
```

Si rimanda alla [documentazione ](https://www.fusetools.com/docs/basics/preview-and-export#android) per maggiori dettagli 

## Modificabilita' del codice

Il codice e' stato scritto per risultare di facile estendibilita' e modificabilita'

_StaticResources.ux_ contiene la definizione di tutti i colori, font, dimensioni, stili e icone seguendo il principo di SINGLE SOURCE OF TRUTH. In questo modo e' semplice cambiare in un colpo solo colori, icone, font e dimensioni.

_Modules_/_Backend.js_ e' il modulo responsabile della comunicazione con le RESTful API. Non essendo disponibile un'implementazione definita delle API, in questo momento il modulo backend simula le chiamate ad API. Restituisce dei dati di test in formato json, che sono definiti in strutture dati all'inizio del modulo.

_Modules_/_Context.js_ e' il modulo che descrive lo stato generale dell'applicazione, usa il modulo backend per recuperare i dati e trasforma i dati nel formato riconosciuto da tutta l'applicazione. In pratica Context e' il ponte tra l'applicazione e il backend.

_Entities_ contine le strutture dati che sono riconosciute dall'applicazione, vengono fornite dal Context che eventualmente rimappa i dati ricevuti dal Backend.

_Pages_ nella cartella pages ci sono le pagine dell'app. Ogni pagina ha il suo corrispondente file js con la sua business logic.

_Components_ contiene le componenti UI riutilizzate in tutta l'applicazione. Le componenti sono descritte in un linguaggio dichiarativo XML che include anche la definizione dei comportamenti, animazioni e transizioni.

_Libraries_ contiene librerie JS esterne. Nel dettaglio fuse.js la utilizziamo per le ricerche con logica fuzzy.

_Assets_ contiene tutte le risorse statiche come immagini, icone e font.
