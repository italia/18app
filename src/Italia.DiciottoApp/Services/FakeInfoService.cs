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
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura",
                TitleOrderIndex = 0,
                Title = "Che cos’è 18app",
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura",
                TitleOrderIndex = 1,
                Title = "Che cos’è il Bonus Cultura?",
                Text = "E' una iniziativa a cura del Ministero dei Beni e delle Attività Culturali e del Turismo e della Presidenza del Consiglio dei Ministri dedicato a promuovere la cultura." + CRLF +
                       $"Il programma, destinato a chi compie 18 anni nel {bonusYear}, permette loro di ottenere 500€ da spendere in cinema, concerti, eventi culturali, libri, musei, monumenti e parchi, teatro e danza." + CRLF +
                       $"I ragazzi hanno tempo fino al {registrationDate} per registrarsi al Bonus Cultura e fino al {endDate} per spendere il bonus."
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura",
                TitleOrderIndex = 2,
                Title = "Chi può beneficiare del Bonus Cultura di 500€?",
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura",
                TitleOrderIndex = 3,
                Title = "Come spendo il Bonus Cultura?",
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura",
                TitleOrderIndex = 4,
                Title = "Come accedo a 18app?",
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 1,
                Header = "18app e il Bonus Cultura",
                TitleOrderIndex = 5,
                Title = "Come mi registro a 18app?",
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID",
                TitleOrderIndex = 0,
                Title = "Che cos'è SPID?",
                Text = "Per ottenere le tue credenziali SPID devi rivolgerti a Infocert, Poste Italiane, Sielte o Tim. I quattro soggetti (che vengono chiamati Identity Provider), ti offrono diverse modalità di richiesta, scegli quella più adatta alle tue esigenze!" + CRLF +
                    "Ecco in breve cosa devi fare:" + CRLF +
                    "• Con Infocert: devi inserire i dati che ti vengono richiesti sul sito, una volta terminato potrai recarti in uno degli uffici presenti in tutta Italia per concludere la registrazione. (verifica dove si trova l’ufficio più vicino a te ) Se hai una webcam collegata al tuo computer puoi scegliere la modalità di riconoscimento completamente online. Seguendo le istruzioni che ti indicheranno gli operatori di Infocert potrai completare la registrazione senza doverti recare di persona in un ufficio. Questa modalità è a pagamento (9,90€ + iva), prima di cominciare dovrai quindi munirti di una carta di credito o una carta prepagata (non necessariamente intestata a te) da poter utilizzare per il pagamento online. (comincia la registrazione)" + CRLF +
                    "• Con Poste Italiane: devi inserire i dati che ti vengono richiesti sul sito; una volta terminato potrai recarti in uno degli uffici presenti in tutta Italia per concludere la registrazione. (Verifica dove si trova l’ufficio postale più vicino a te) Se sei un cliente online Bancoposta puoi eseguire la procedura totalmente online dal sito di Poste utilizzando: il tuo numero di cellulare certificato o il lettore di carte Postamat. (comincia la registrazione)" + CRLF +
                    "• Con Sielte: se hai un pc, tablet o uno smartphone dotati di webcam puoi scegliere la modalità di riconoscimento online gratuita.Dopo aver inserito i dati sul sito di Sielte, seguendo le istruzioni che ti indicheranno gli operatori puoi completare la registrazione attraverso web cam, anche tramite videochiamata su facebook (comincia la registrazione). Altrimenti puoi inserire i dati che ti vengono richiesti sul sito di Sielte e una volta terminato potrai recarti in uno degli uffici per concludere la registrazione" + CRLF +
                    "• Con Tim: online con firma qualificata o digitale, la carta nazionale dei servizi(CNS) o la carta di identità elettronica abilitate(gratuito). Presto potrai scegliere tra altre modalità, rimani aggiornato su http://www.spid.gov.it/richiedi-spid#tim) Vai su Spid.gov.it per trovare tutte le informazioni aggiornate su dove e come richiedere le tue credenziali SPID. Tutte le informazioni su dove e come richiedere le tue credenziali SPID sul sito spid.gov.it/richiedi-spid."
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID",
                TitleOrderIndex = 1,
                Title = "A chi mi devo rivolgere e cosa devo fare per ottenere SPID?",
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID",
                TitleOrderIndex = 2,
                Title = "Posso richiedere SPID se sono nel diciottesimo anno di età ma non ho ancora compiuto i 18 anni?",
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 2,
                Header = "SPID",
                TitleOrderIndex = 3,
                Title = "Ho perso le mie credenziali SPID, cosa devo fare per farmele rimandare?",
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 3,
                Header = "Cosa acquistare",
                TitleOrderIndex = 0,
                Title = "Cosa posso acquistare attraverso 18app con il Bonus Cultura?",
                Text = LoremIpsum(),
            },
            new InfoContent
            {
                HeaderOrderIndex = 3,
                Header = "Cosa acquistare",
                TitleOrderIndex = 1,
                Title = "Posso acquistare CD o DVD con 18app?",
                Text = LoremIpsum(),
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