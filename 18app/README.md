# Sommario

Introduzione

Istruzioni per lo sviluppo

Manuale per gli utenti

Chi siamo

Informazioni sulla società



# Introduzione

## La Challenge

La Challenge proposta prevede la realizzazione di un&#39;app nativa Android-Only per il progetto 18app. La scelta della sfida non è stata casuale. Il nostro team è formato da neo-diciottenni, e 18app è un servizio che stiamo utilizzando tutt&#39;ora. Il nostro obiettivo è quello di creare un&#39;applicazione user-friendly che possa semplificare l&#39;utilizzo della piattaforma attraverso la creazione di buoni usufruibili sia online che nei negozi fisici.

## Come è stato svolto lo sviluppo

Il nostro team di sviluppo è formato da quattro membri, due Graphic Designers che si sono occupati della parte front-end e due Software Developers che si sono preoccupati di sviluppare il lato back-end del progetto. L&#39;IDE utilizzato è Android Studio e la versione 21 delle API (Android 5.0+) è quella utilizzata per la creazione dell&#39;app nativa.

La grafica è stata leggermente modificata da quella richiesta, senza però stravolgere il mockup rilasciato su InVision per non snatutare 18app. I colori e i font sono fedeli a quelli della webapplication, così come le icone, per avere maggiore continuità con la piattaforma utilizzata da noi giovani.

# Istruzioni per lo sviluppo

## Descrizione delle classi

La schermata principale è composta da un ViewPager che comprende al suo interno cinque Fragment i quali compongono le varie schermate dell&#39;applicazione. Essi sono contenuti nella cartella &quot;fragment&quot; e ognuno di essi ha un layout associato (xml).

Inoltre vi sono altre Activity che dipendono dalla principale, come quella che descrive l&#39;emissione del Voucher (VoucherActivity) o quella che permette di creare un nuovo Voucher (NuovoBuonoActivity)

Per trovare gli esercenti nelle vicinanze abbiamo utilizzato le API di Google Places in modo da restituire all&#39;utente i musei/teatri/bookshop vicini.

## Sviluppi futuri

Il nostro prodotto è più di un semplice mockup, ma non abbastanza da renderlo ancora un&#39;applicazione vera e propria. Nonostante aggiunte interessanti, alla nostra app manca il lato back-end che corrisponde principalmente all&#39;accesso con le credenziali SPID (e di conseguenza un accesso totale al database delle Identità Virtuali) e alla creazione dei buoni da poter utilizzare negli shop aderenti. Non siamo in possesso di un elenco che cita tutti i negozi, eventi, musei e molto altro disponibile su 18app, di conseguenza non siamo in grado di filtrare i negozi convenzionati con la piattaforma.

# Manuale per gli utenti

## Login

La schermata di login permette all&#39;utente di poter accedere all&#39;applicazione utilizzando le sue credenziali SPID.

In caso in cui l&#39;utente non sia in possesso della propria identità virtuale, invitiamo a seguire la guida presente nella sezione &quot;Non hai SPID?&quot;.

## Home

La home è composta da cinque schermate.

-
La view di benvenuto mostra il credito residuo sull&#39;account, il pulsante che permette la creazione del buono diviso per categorie e il pulsante che avvia la geo localizzazione per identificare il negozio in cui ci si trova. È risaputo che la tecnologia GPS dei nostri device potrebbe non essere così precisa da identificare al primo colpo i negozi in cui ci troviamo. Per evitare di esser geo localizzati in negozi limitrofi, abbiamo previsto un controllo che notifica il negozio in cui ci si trova; se non dovesse essere quello corretto, verrete reindirizzati a una lista di negozi nel raggio di 800m.
- Partendo da sinistra, la prima sezione che può esser trovata è quella dei buoni che il cliente ha già utilizzato o che deve ancora utilizzare. I buoni ancora da utilizzare sono evidenziati di colore blu, mentre quelli già utilizzati sono invece di colore grigio.
- Subito dopo possiamo trovare la sezione &quot;Negozi&quot;, dove è possibile visualizzare i negozi limitrofi nel raggio di 800m.
- Sul lato destro troviamo invece la sezione info, che risponde ad alcune FAQ su 18app.
- Infine, all&#39;estrema destra della bottom bar troviamo la sezione &quot;Profilo&quot; che raccoglie tutti i dati dell&#39;utente e contiene il pulsante &quot;Logout&quot;.

## Creazione buono

Esistono tre modi per creare i buoni.

- Il primo, il più semplice, permette di creare il buono utilizzando il bottone sulla home &quot;Nuovo buono&quot;.
- Il secondo permette di creare il buono premendo sul bottone nella home &quot;Negozi vicino a me. Questo, oltre a geo localizzare l&#39;utente, permette di visionare informazioni sul negozio e eventualmente raggiungerlo attraverso l&#39;opzione &quot;percorso&quot;.
- Per il terzo modo bisogna spostarsi nella view &quot;Negozi&quot;. Qui, cliccando su qualsiasi negozio, è possibile visionarne le informazioni, creare un buono specifico per quel negozio e eventualmente utilizzare la funzione &quot;percorso&quot; per raggiungerlo.

# Chi siamo


 **Bergadano Lorenzo** Software Developer **Tel.** +39 346 336 8423 lorenzobergadano@gmail.com

 **Cernusco Gionatan** Graphic Designer **Tel.** +39 327 853 4504 gionatan99@gmail.com

 **Galante Andrea** Software Developer **Tel.** +39 338 177 7969andrea.galante10@gmail.com

 **Montanaro Simone** Graphic Designer **Tel.** +39 370 328 5557 simo.mo99@hotmail.it