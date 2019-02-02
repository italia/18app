using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using Italia.DiciottoApp.Utils;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

namespace Italia.DiciottoApp.ViewModels
{
    public class AcceptPrivacyViewModel: BaseViewModel
    {
        #region Properties

        public string PageTitle => "IdP Login";

        public AppArea AppArea => AppArea.None;

        public HtmlWebViewSource WebViewSource { get; private set; }

        #endregion

        public AcceptPrivacyViewModel(): base()
        {
            WebViewSource = new HtmlWebViewSource
            {
                Html = GetHtml()
            };
        }

        public async Task<bool> SetPresaVisioneAsync()
        {
            bool result = false;

            var userInfoService = Service.Resolve<IUserInfoService>();
            BeneficiarioBean beneficiarioBean = Settings.GetBeneficiario();
            Cookie fedSecureToken = new Cookie
            {
                Name = Constants.COOKIES_SECURE_TOKEN,
                Value = Settings.FEDSecureTokenValue
            };
            var acceptPrivacyResult = await userInfoService.SetPresaVisioneAsync(beneficiarioBean, fedSecureToken, confirmed: true);
            Debug.WriteLine($"++++ AcceptPrivacyViewModel - SetPresaVisioneAsync(confirmed: true): {acceptPrivacyResult.Success}");

            if (!acceptPrivacyResult.Success)
            {
                await DisplayAlertAsync("Siamo spiacenti ma non è stato possibile registrare l'accettazione delle condizioni di privacy dell'app.");
            }
            else
            {
                beneficiarioBean = acceptPrivacyResult.Result;
                int errorCode = beneficiarioBean.ErrorCode ?? 0;

                if (errorCode != 0)
                {
                    await DisplayAlertAsync(BeneficiarioBeanMessage.FromErrorCode(errorCode));
                }
                else
                {
                    Settings.SetBeneficiario(beneficiarioBean);
                    result = true;
                }
            }

            return result;
        }

        private string GetHtml()
        {
            StringBuilder sb = new StringBuilder();

            sb.Append("<h2>");
            sb.Append("Privacy policy");
            sb.Append("</h2>");

            sb.Append("<p>");
            sb.Append("Il titolare del trattamento dei dati raccolti nell’ambito del servizio 18app è il MIBACT (Ministero dei beni e delle attività culturali e del turismo) – Via del Collegio Romano, 27 – 00186 ROMA.");
            sb.Append("</p>");

            sb.Append("<h2>");
            sb.Append("Tipologia dei dati e finalità del trattamento");
            sb.Append("</h2>");

            sb.Append("<p>");
            sb.Append("Tutti i dati personali forniti direttamente e/o acquisiti attraverso l’identità digitale [SPID] nell’ambito del servizio saranno trattati in modo lecito e secondo correttezza al solo fine di consentire all’utente di utilizzare il servizio.");
            sb.Append("</p>");

            sb.Append("<p>");
            sb.Append("Il titolare del trattamento, inoltre – sempre al solo fine di consentire all’utente la fruizione del servizio - tratterà gli indirizzi IP utilizzati, gli indirizzi in notazione URI (Uniform Resource Identifier) delle risorse richieste, l'orario della richiesta ed altri parametri relativi al sistema operativo e all'ambiente informatico dell'utente.");
            sb.Append("</p>");

            sb.Append("<p>");
            sb.Append("Il conferimento di tutti i dati a tal fine richiesti è necessario per consentire all’utente di fruire del servizio in questione.");
            sb.Append("</p>");

            sb.Append("<h2>");
            sb.Append("Cookies");
            sb.Append("</h2>");

            sb.Append("<p>");
            sb.Append("Sul sito non sono utilizzati cookie.");
            sb.Append("</p>");

            sb.Append("<h2>");
            sb.Append("Diritti degli interessati");
            sb.Append("</h2>");

            sb.Append("<p>");
            sb.Append("Gli Utenti possono esercitare in qualsiasi momento i diritti previsti dall'art. 7 del Codice privacy, al fine di ottenere la conferma dell'esistenza o meno dei loro dati personali e di conoscerne il contenuto e l'origine, verificarne l'esattezza o chiederne l'integrazione o l'aggiornamento, oppure la rettificazione.");
            sb.Append("</p>");

            sb.Append("<p>");
            sb.Append("Ai sensi della medesima disposizione l’Utente potrà inoltre chiedere la cancellazione, la trasformazione in forma anonima o il blocco dei dati trattati in violazione di legge, nonché opporsi in ogni caso, per motivi legittimi, al loro trattamento.");
            sb.Append("</p>");

            sb.Append("<p>");
            sb.Append("Resta naturalmente inteso che, in caso di richiesta di cancellazione dei nati necessari all’erogazione del servizio, l’utente non potrà più usufruirne.");
            sb.Append("</p>");

            sb.Append("<p>");
            sb.Append("Le richieste vanno inviate al MIBACT (Ministero dei beni e delle attività culturali e del turismo) – Via del Collegio Romano, 27 – 00186 ROMA.");
            sb.Append("</p>");

            sb.Append("<p>");
            sb.Append("Attraverso i medesimi recapiti, l’Utente potrà chiedere inoltre la lista aggiornata di eventuali ulteriori Responsabili del trattamento nominati dal Titolare oltre a SOGEI S.p.A. (Società Generale d’Informatica) con sede in Via M. Carucci n. 99 - 00143 Roma ed a CONSAP (Concessionaria Servizi Assicurativi Pubblici s.p.a.) con sede in Via Yser, 14 - 00198 Roma (RM).");
            sb.Append("</p>");

            return sb.ToString();
        }

    }
}
