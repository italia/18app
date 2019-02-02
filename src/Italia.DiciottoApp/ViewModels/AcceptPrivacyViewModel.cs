using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using Italia.DiciottoApp.Utils;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Net;
using System.Reflection;
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
                await DisplayAlertAsync(ErrorMessages.SET_PRIVACY_FAILURE);
            }
            else
            {
                beneficiarioBean = acceptPrivacyResult.Result;
                int errorCode = beneficiarioBean.ErrorCode ?? 0;

                if (errorCode != 0)
                {
                    await DisplayAlertAsync(Message.FromErrorCode(errorCode));
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
            var assembly = IntrospectionExtensions.GetTypeInfo(typeof(Constants)).Assembly;
            Stream stream = assembly.GetManifestResourceStream("Italia.DiciottoApp.Data.PrivacyHtmlContent.txt");

            string content;
            using (var reader = new StreamReader(stream))
            {
                content = reader.ReadToEnd();
            }

            return content;
        }

    }
}
