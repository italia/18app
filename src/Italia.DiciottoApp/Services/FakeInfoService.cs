using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Models;

namespace Italia.DiciottoApp.Services
{
    public class FakeInfoService : IInfoService
    {
        private static readonly int simulatedDelay = 1000;

        public async Task<IEnumerable<InfoContent>> GetInfoListAsync(string findText = null, bool spidOnly = false)
        {
            // simulate delay
            await Task.Delay(simulatedDelay);

            InfoDb infoDb = new InfoDb();

            var fakeInfoList = spidOnly ? infoDb.Data.Where(x => x.Header == "SPID") : infoDb.Data;

            if (!string.IsNullOrWhiteSpace(findText))
            {
                string upperFindText = findText.ToUpper();
                fakeInfoList = fakeInfoList.Where(x => x.Header.ToUpper().Contains(upperFindText) || x.Title.ToUpper().Contains(upperFindText) || x.Text.ToUpper().Contains(upperFindText));
            }

            fakeInfoList = fakeInfoList.OrderBy(x => x.HeaderOrderIndex).ThenBy(x => x.TitleOrderIndex);

            return fakeInfoList;
        }
    }

    public class InfoDb
    {
        private static readonly string CRLF = "\r\n";
        private static readonly string bonusYear = "2018";
        private static readonly string registrationDate = "31 gennaio 2019";
        private static readonly string endDate = "31 dicembre 2019";
        private static Random random = new Random();

        public IEnumerable<InfoContent> Data = new List<InfoContent>
        {
            new InfoContent
            {
                HeaderOrderIndex = 0,
                Header = String.Empty,
                TitleOrderIndex = 0,
                Title = "Contatti e Assistenza",
                Text = "Puoi chiamare il numero verde 800.991.199 da lunedì a venerdì (esclusi festivi) dalle ore 09.00 alle 17.30"
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura ",
                TitleOrderIndex = 0,
                Title = "Che cos’è il Bonus Cultura?",
                Text = "E' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicata a promuovere la cultura." + CRLF +
                       $"Il programma, destinato a chi compie 18 anni nel {bonusYear}, permette di ottenere 500€ da spendere in cinema, musica e concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza, corsi di musica, di teatro o di lingua straniera." + CRLF +
                       $"I ragazzi hanno tempo fino al {registrationDate} per registrarsi a 18App e fino al {endDate} per spendere il Bonus Cultura."
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura ",
                TitleOrderIndex = 1,
                Title = "Che cos’è 18app",
                Text = $"18app per Android e iPhone è un'applicazione che permette di utilizzare il Bonus Cultura di 500€ riservato a tutti i cittadini residenti in Italia (in possesso, ove previsto, di permesso di soggiorno in corso di validità) che compiono i diciotto anni di età nell'anno {bonusYear}."
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura ",
                TitleOrderIndex = 2,
                Title = "Chi può beneficiare del Bonus Cultura di 500€?",
                Text = $"Tutti i cittadini residenti nel territorio nazionale (in possesso, ove previsto, di permesso di soggiorno in corso di validità) che compiono i diciotto anni di età nell’anno {bonusYear}."
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura ",
                TitleOrderIndex = 3,
                Title = "Come accedo a 18app?",
                Text = "Con le credenziali SPID (Sistema Pubblico di Identità Digitale) preventivamente richieste ad uno degli attuali identity provider. Nel sito spid.gov.it sono disponibili tutte le informazioni relative a SPID stabilite da AgID (Agenzia per l’Italia Digitale)."
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura ",
                TitleOrderIndex = 4,
                Title = "Come mi registro a 18app?",
                Text = $"Se sei nato nel {bonusYear}, puoi registrarti entro il {registrationDate}. Effettua il login scegliendo il tuo Identity Provider e usa le tue credenziali SPID per completare la procedura di registrazione a 18app, fino all’ultimo passaggio dell’accettazione della normativa. Una volta registrato potrai visualizzare il tuo portafoglio e spendere il Bonus Cultura."
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID ",
                TitleOrderIndex = 0,
                Title = "Cos'è SPID?",
                Text = "SPID (il Sistema Pubblico d’Identità Digitale) è la tua nuova identità digitale composta da credenziali (nome utente e password) che puoi richiedere dal giorno del tuo diciottesimo compleanno e che dovrai utilizzare tutte le volte che vorrai accedere a 18app. Maggiori informazioni nel sito spid.gov.it"
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID ",
                TitleOrderIndex = 1,
                Title = "Perché devo avere delle credenziali SPID per poter accedere a 18app?",
                Text = "Perché dobbiamo essere sicuri che sei proprio tu a chiedere l’accesso in modo da permetterti di spendere in totale sicurezza il tuo bonus cultura. Le credenziali SPID che riceverai una volta fatta la richiesta sono uniche e potrai usarle soltanto tu."
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID ",
                TitleOrderIndex = 2,
                Title = "A chi mi devo rivolgere e cosa devo fare per ottenere SPID?",
                Text = "Per ottenere le tue credenziali SPID devi rivolgerti ad Aruba, Infocert, Intesa, Namiral, Poste Italiane, Register, Sielte e Tim. Questi soggetti (che vengono chiamati Identity Provider) ti offrono diverse modalità per richiedere e ottenere SPID. Puoi scegliere quella più adatta alle tue esigenze. Tutte le informazioni su dove e come chiedere le tue credenziali sul sito spid.gov.it/richiedi-spid. Prima di cominciare a richiedere le tue credenziali SPID ricordati che hai bisogno di un documento di identità valido (carta di identità o passaporto) e del tuo codice fiscale. (vd. Quali documenti mi servono per poter richiedere SPID?)"
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID ",
                TitleOrderIndex = 3,
                Title = "Quali documenti mi servono per poter richiedere SPID?",
                Text = "Per richiedere e ottenere le tue credenziali SPID hai bisogno di: un documento di identità valido (carta di identità o passaporto) e del tuo codice fiscale. Ti servirà anche: un indirizzo e-mail  e il numero di telefono del cellulare che usi normalmente (anche se non sei tu l’intestatario del contratto).",
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID ",
                TitleOrderIndex = 4,
                Title = "Posso richiedere SPID se sono nel diciottesimo anno di età ma non ho ancora compiuto i 18 anni?",
                Text = "No, per richiedere SPID devi aver compiuto 18 anni, solo dal giorno del tuo diciottesimo compleanno potrai richiedere le tue credenziali SPID. Non perdere tempo, comincia a informarti su cosa devi fare e a chi ti devi rivolgere per ottenere le tue credenziali SPID! (vd. A chi mi devo rivolgere e cosa devo fare per ottenere SPID?)",
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID ",
                TitleOrderIndex = 5,
                Title = "Ho perso le mie credenziali SPID, cosa devo fare per farmele rimandare?",
                Text = "Non ti preoccupare, è sempre possibile recuperare le tue credenziali. Maggiori informazioni le puoi trovare sul sito www.spid.gov.it/domande-frequenti"
            },
            new InfoContent
            {
                HeaderOrderIndex = 3,
                Header = "Cosa acquistare ",
                TitleOrderIndex = 0,
                Title = "Cosa posso acquistare attraverso 18app con il Bonus Cultura?",
                Text = $"Se sei nato nel {bonusYear}, puoi acquistare (entro il {endDate}) beni per un totale di 500€, esclusivamente riconducibili ai seguenti ambiti:" + CRLF +
                "a. Cinema (abbonamento card/biglietto d’ingresso)" + CRLF +
                "b. Concerti (abbonamento card/biglietto d’ingresso)" + CRLF +
                "c. Eventi culturali (biglietto d’ingresso a festival, fiere culturali, circhi)" + CRLF +
                "d. Libri (audiolibro, ebook, libro)" + CRLF +
                "e. Musei, monumenti e parchi (abbonamento card/biglietto d’ingresso)" + CRLF +
                "f. Teatro e danza (abbonamento card/biglietto d’ingresso)" + CRLF +
                "g. Musica registrata (cd, dvd musicali, dischi in vinile, musica on line)" + CRLF +
                "h. Corsi di musica, di teatro o di lingua straniera."
            },
            new InfoContent
            {
                HeaderOrderIndex = 3,
                Header = "Cosa acquistare ",
                TitleOrderIndex = 1,
                Title = "Posso acquistare CD o DVD con 18app?",
                Text = "Solo i cd e dvd musicali, sono esclusi i dvd cinematografici.",
            },
            new InfoContent
            {
                HeaderOrderIndex = 3,
                Header = "Cosa acquistare ",
                TitleOrderIndex = 2,
                Title = "Quanto tempo ho per spendere il mio Bonus Cultura?",
                Text = $"I ragazzi nati {bonusYear} nel hanno tempo fino al {registrationDate} per registrarsi a 18App e fino al {endDate} per spendere il Bonus Cultura."
            },
            new InfoContent
            {
                HeaderOrderIndex = 3,
                Header = "Cosa acquistare ",
                TitleOrderIndex = 3,
                Title = "Il Bonus Cultura è spendibile per qualsiasi bene all’interno del negozio (anche virtuale) che ha aderito all’iniziativa?",
                Text = "No, il Bonus Cultura è spendibile solo per i beni indicati nella risposta alla domanda “Cosa posso acquistare attraverso 18app con il Bonus Cultura?”."
            },
            new InfoContent
            {
                HeaderOrderIndex = 3,
                Header = "Cosa acquistare ",
                TitleOrderIndex = 4,
                Title = "Ci sono dei limiti di spesa per ogni singolo acquisto?",
                Text = "No, ma è possibile comprare solo un’unità di ciascun bene"
            },
            new InfoContent
            {
                HeaderOrderIndex = 4,
                Header = "Come acquistare ",
                TitleOrderIndex = 0,
                Title = "Come viene generato un buono?",
                Text = "Vi sono due modi per generare un buono:" + CRLF +
                    "1. Creare un nuovo buono dal menu in basso scegliendo la categoria ed il tipo di bene da acquistare e indicare l’importo totale del tuo buono con il quale potrai acquistare il bene presso un esercente da scegliere a piacere tra quelli abilitati." +
                    "2. Trovare l'esercente (online o fisico) nel quale si vuol utilizzare il buono e dalla pagina dell'esercente premere il pulsante “NUOVO BUONO”" + CRLF +
                    "Spendi il buono presso l’esercente individuato: Se online, tramite il codice associato al buono creato, se fisico anche tramite il codice a barre mostrato nella pagina del buono." + CRLF +
                    "In caso di errore puoi selezionare la voce “ANNULLA BUONO” e ripetere l’operazione (tranne che per la categoria Musei, Monumenti e Parchi per la quale l'annullamento richiede qualche giorno)."
            },
            new InfoContent
            {
                HeaderOrderIndex = 4,
                Header = "Come acquistare ",
                TitleOrderIndex = 1,
                Title = "Come gestisco i buoni?",
                Text = "Gli importi dei buoni verranno scalati dal tuo “portafoglio” esclusivamente al momento della validazione da parte dell’esercente (sia fisici che online). In qualunque momento puoi decidere di annullare un buono non ancora validato e crearne un altro, sempre nel limite dei 500 €, ad eccezione dei buoni generati per Musei, Monumenti e Parchi. Puoi sempre controllare lo stato del tuo Bonus Cultura verificando l’importo residuo a disposizione per ulteriori acquisti e l’elenco dei buoni prenotati e validati."
            },
            new InfoContent
            {
                HeaderOrderIndex = 4,
                Header = "Come acquistare ",
                TitleOrderIndex = 2,
                Title = "Come mai non posso annullare i buoni che ho generato per visitare Musei, Monumenti o Parchi?",
                Text = "I Musei, i Monumenti e i Parchi seguono un processo differente di validazione dei buoni, pertanto non è possibile l’annullamento immediato ma solo dopo alcuni giorni dalla creazione del buono."
            },
            new InfoContent
            {
                HeaderOrderIndex = 4,
                Header = "Come acquistare ",
                TitleOrderIndex = 3,
                Title = "Cosa devo presentare alla cassa di un esercizio fisico per completare l’acquisto?",
                Text = "Presentando alla cassa il tuo dispositivo smartphone e visualizzando i dati identificativi del buono, corredati di codice alfanumerico di 8 cifre, QR code e barcode. Così facendo permetterai all’esercente di validare il tuo buono attraverso l’inserimento su 18app, nella sezione dedicata agli esercenti, del suo codice identificativo e del codice identificativo del buono, così da completare l’acquisto."
            },
            new InfoContent
            {
                HeaderOrderIndex = 4,
                Header = "Come acquistare ",
                TitleOrderIndex = 4,
                Title = "Come posso spendere il buono nei siti di vendita online?",
                Text = "Puoi completare l’acquisto online indicando, durante il processo di acquisto nel sito di vendita (personalizzato per ogni esercente registrato a 18app), il codice del buono che hai generato e che vuoi spendere per l’acquisto."
            },
        };

        private static string LoremIpsum(int maxNumOfParagraphs = 5)
        {
            string[] loremIpsumParagraps = new string[]
            {
                "Sed id quam quis purus vestibulum malesuada.",
                "Cras rhoncus venenatis lacus, nec faucibus justo tincidunt sit amet." + CRLF +
                "Nulla vel ligula eget nisl vulputate ullamcorper at ac erat.",
                "Phasellus luctus nibh ut metus bibendum vehicula.",
                "Aliquam et semper urna.",
                "Nullam elementum efficitur tincidunt.",
                "Quisque ut purus nisl.",
                "Nullam viverra lacinia dui vitae lacinia.",
                "Donec vehicula purus justo.",
                "Aenean luctus ipsum ipsum, eget feugiat est ullamcorper eu.",
                "Donec in vulputate tellus, nec pretium ligula.",
                "Fusce vitae sapien feugiat, euismod lectus ac, ultrices ante.",
                "Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.",
                "Phasellus interdum pulvinar sem.",
                "Curabitur tristique dapibus lorem, non faucibus turpis aliquet eget.",
                "Suspendisse id malesuada risus.",
                "Praesent lobortis mauris ut libero tincidunt, sit amet consectetur eros interdum.",
                "Curabitur in magna quis ante convallis condimentum.",
                "Lorem ipsum dolor sit amet, consectetur adipiscing elit.",
                "Integer non dolor tincidunt, congue elit feugiat, vulputate quam.",
                "Maecenas ultricies nisi non turpis commodo, ut faucibus velit blandit.",
                "Cras sed nisl ut nulla consequat aliquet.",
                "Donec non semper lacus, a tincidunt lorem.",
                "Sed tempor odio nibh, at posuere nulla imperdiet nec.",
                "Donec nec dolor dignissim, mollis nisi non, pharetra nulla.",
                "Mauris commodo odio a imperdiet finibus.",
                "Quisque justo lectus, blandit sit amet rutrum sed, vulputate ut libero.",
                "Donec placerat, metus sit amet mattis ultrices, dolor felis luctus mauris, porta ultrices risus magna vel urna.",
                "Maecenas commodo orci sit amet ligula hendrerit consectetur.",
                "Maecenas fringilla iaculis mollis.",
                "Mauris lobortis leo sed ipsum sollicitudin, quis pretium purus malesuada.",
                "Fusce non tellus ornare, efficitur orci quis, tristique sem.",
                "Ut sed iaculis erat.",
                "Interdum et malesuada fames ac ante ipsum primis in faucibus.",
                "Mauris nec interdum mi, id vehicula arcu.",
                "Nullam sed dolor feugiat, dapibus metus eu, tincidunt leo.",
                "In mollis vulputate elit vitae porttitor.",
                "Nullam lacinia, massa eleifend feugiat posuere, odio turpis accumsan augue, nec mattis lacus mi eget lectus.",
                "Nullam et diam dui.",
                "Aenean rhoncus vulputate neque varius venenatis.",
                "Nulla id imperdiet lorem.",
                "Vivamus mauris velit, elementum in lectus in, mollis tempor augue.",
                "Etiam vestibulum luctus quam, eu varius dolor fringilla quis.",
                "Pellentesque condimentum ex tempor risus venenatis aliquet.",
                "Maecenas sit amet consectetur orci.",
                "In blandit felis non nibh porttitor, vel dapibus mauris luctus.",
                "Suspendisse a vehicula nunc.",
                "Cras tincidunt vestibulum vulputate.",
                "Morbi accumsan sem nisl, ac mollis arcu aliquet non.",
                "Etiam placerat massa lacus, dictum malesuada erat condimentum vel.",
                "Nunc ullamcorper molestie pulvinar.",
                "Mauris mollis elementum lacus, nec pharetra nisi mattis a.",
                "Cras dapibus ligula lectus.",
                "Suspendisse luctus metus eget leo pellentesque sagittis vulputate a ex.",
                "Maecenas dignissim neque sed ipsum faucibus, sit amet feugiat lacus hendrerit.",
                "Fusce luctus, risus sed condimentum suscipit, sem felis commodo lacus, quis vulputate orci eros sit amet mi.",
                "Nunc tempor mollis placerat.",
                "Proin diam libero, hendrerit in ante in, volutpat ullamcorper orci.",
                "Donec nec consequat ante.",
                "Ut scelerisque et massa et laoreet.",
                "Mauris dictum porttitor arcu et interdum.",
                "Pellentesque commodo nibh id tortor molestie pretium nec quis nisi.",
                "Pellentesque gravida nisi sed tortor vulputate laoreet."
            };

            int loremIpsumParagrapsCount = loremIpsumParagraps.Count();

            int numOfParagraphs = random.Next(1, maxNumOfParagraphs);

            StringBuilder sb = new StringBuilder(loremIpsumParagraps[random.Next(loremIpsumParagrapsCount)]);

            if (numOfParagraphs > 1)
            {
                for (int i = 0; i < numOfParagraphs - 1; i++)
                {
                    sb.Append("\r\n");
                    sb.Append(loremIpsumParagraps[random.Next(loremIpsumParagrapsCount)]);
                }
            }

            return sb.ToString();
        }

    }
}