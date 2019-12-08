using Italia.DiciottoApp.CookieStore;
using Italia.DiciottoApp.CustomRenderers;
using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.Models;
using Italia.DiciottoApp.Services;
using Italia.DiciottoApp.ViewModels;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

using Xamarin.Forms;
using Xamarin.Forms.Xaml;

namespace Italia.DiciottoApp.Views
{
	[XamlCompilation(XamlCompilationOptions.Compile)]
	public partial class LoginWebPage : BasePage
	{
        private LoginWebPageViewModel vm;
        private IdP idp;
        private readonly string escapeWebLoginUrl = Constants.ESCAPE_WEB_LOGIN_URL;
        private readonly string loginSuccessUrl = Settings.IsProductionEnvironment ? Constants.IDP_LOGIN_SUCCESS_URL_ProdEnv : Constants.IDP_LOGIN_SUCCESS_URL_TestEnv;

        public LoginWebPage (IdP idp)
		{
            this.idp = idp;

			InitializeComponent ();
            NavigationPage.SetHasNavigationBar(this, false);
            vm = this.BindingContext as LoginWebPageViewModel;

            InitializeWebView();
        }

        private void InitializeWebView()
        {
            LoginBrowser.IsVisible = true;
            LoginBrowser.Source = IdPs.UrlString(idp) ?? "https://www.18App.it";
        }

        private void OnBrowserNavigating(object sender, WebNavigatingEventArgs e)
        {
            Debug.WriteLine($"##---> Navigating to: {e.Url}");

            if (!string.IsNullOrWhiteSpace(e.Url)
                && (e.Url == loginSuccessUrl || e.Url == escapeWebLoginUrl))
            {
                e.Cancel = true;
                LoginBrowser.OnUrlReturned(new UrlReturnedEventArgs(e.Url));
            }
        }

        private async void OnBrowserNavigated(object sender, WebNavigatedEventArgs e)
        {
            Debug.WriteLine($"##---> Navigated to {e.Url}, Result: {e.Result.ToString()}");
            string loginFailDetail = String.Empty;
            switch (e.Result)
            {
                case WebNavigationResult.Success:
                    break;
                case WebNavigationResult.Cancel:
                    loginFailDetail = "La navigazione è stata cancellata";
                    break;
                case WebNavigationResult.Timeout:
                    loginFailDetail = "Il servizio di login non risponde";
                    break;
                case WebNavigationResult.Failure:
                    loginFailDetail = "Il servizio di login ha restituito un errore";
                    break;
                default:
                    loginFailDetail = "Il servizio di login ha restituito un errore";
                    break;
            }
            if (e.Result != WebNavigationResult.Success)
            {
                await DisplayAlert("Login error", loginFailDetail, "OK");
            }
        }

        private async void OnUrlReturned(object sender, UrlReturnedEventArgs e)
        {
            Debug.WriteLine($"##---> Url returned: {e.Url}");

            LoginBrowser.IsVisible = false;
            string loginFailDetail = string.Empty;

            if (e.Url == escapeWebLoginUrl)
            {
                loginFailDetail = ErrorMessages.IDP_LOGIN_FAILED;
            }
            else if (e.Url == loginSuccessUrl)
            {
                MessageLabel.Text = "Verifica login in corso...";
                MessageLabel.IsVisible = true;

                // Get cookie
                IPlatformCookieStore cookieStore = DependencyService.Get<IPlatformCookieStore>();
                var cookies = cookieStore.GetCookiesForSite(Settings.IsProductionEnvironment ? Constants.COOKIES_URL_ProdEnv : Constants.COOKIES_URL_TestEnv);

                Cookie fedSecureToken = cookies.Where(c => c.Name == Constants.COOKIES_SECURE_TOKEN).FirstOrDefault();
                Debug.WriteLine($"++++ fedSecureToken: {fedSecureToken?.Value ?? "FEDSecureToken not found"}");

                Cookie userToken = cookies.Where(c => c.Name == Constants.COOKIES_USER_TOKEN).FirstOrDefault();
                Debug.WriteLine($"++++ userToken: {userToken?.Value ?? "cookieutente not found"}");


                if (fedSecureToken == null)
                {
                    loginFailDetail = ErrorMessages.LOGIN_MISSING_SECURE_TOKEN;
                }
                else if (userToken == null)
                {
                    loginFailDetail = ErrorMessages.LOGIN_MISSING_CLIENT_TOKEN;
                }
                else
                {
                    var loginService = Service.Resolve<ILoginService>();
                    var loginResult = await loginService.LoginAsync(fedSecureToken, userToken);
                    Debug.WriteLine($"++++ LoginResult: {loginResult.Success}");

                    if (loginResult.Success)
                    {
                        if (loginResult.Beneficiary == null)
                        {
                            loginFailDetail = ErrorMessages.UNAVAILABLE_BENEFICIARY;
                        }
                        else
                        {
                            Settings.FEDSecureTokenValue = fedSecureToken.Value;
                            Settings.UserLogin(loginResult.Beneficiary);
                            Settings.SetBeneficiario(loginResult.Beneficiary);

                            if (Settings.UserAcceptanceFlag == "1")
                            {
                                if (loginResult.Beneficiary.BorsellinoBean == null)
                                {
                                    loginFailDetail = ErrorMessages.UNAVAILABLE_WALLET;
                                }
                                else
                                {
                                    Settings.SetBorsellino(loginResult.Beneficiary.BorsellinoBean);
                                }
                            }
                        }
                    }
                    else
                    {
                        switch (loginResult.FailureReason)
                        {
                            case LoginFailureReason.UnsuccessfulHttpStatusCode:
                                loginFailDetail = ErrorMessages.UNSUCCESSFUL_HTTP_STATUS_CODE;
                                break;
                            case LoginFailureReason.RegistrationTimeEnded:
                                loginFailDetail = ErrorMessages.REGISTRATION_TIME_ENDED;
                                break;
                            case LoginFailureReason.NonOperatingBeneficiary:
                                loginFailDetail = ErrorMessages.NON_OPERATING_BENEFICIARY;
                                break;
                            case LoginFailureReason.RegistrationCheckFailed:
                                loginFailDetail = ErrorMessages.REGISTRATION_CHECK_FAILED;
                                break;
                            case LoginFailureReason.UnavailableBeneficiary:
                                loginFailDetail = ErrorMessages.UNAVAILABLE_BENEFICIARY;
                                break;
                            case LoginFailureReason.UnavailableWallet:
                                loginFailDetail = ErrorMessages.UNAVAILABLE_WALLET;
                                break;
                            case LoginFailureReason.Unknown:
                                loginFailDetail = ErrorMessages.UNKNOWN;
                                break;
                            default:
                                loginFailDetail = ErrorMessages.UNKNOWN;
                                break;
                        }
                    }
                }
            }

            if (!string.IsNullOrWhiteSpace(loginFailDetail))
            {
                await DisplayAlert("Login error", loginFailDetail, "OK");
            }

            if (Settings.UserLogged)
            {
                // Get the root page
                IReadOnlyList<Page> navStack = Navigation.NavigationStack;
                Page currentRootPage = navStack[0];

                // Insert page before WelcomePage, depending on the UserAcceptanceFlag value
                if (Settings.UserAcceptanceFlag == "0")
                {
                    Navigation.InsertPageBefore(new AcceptPrivacyPage(), currentRootPage);
                }
                else
                {
                    Navigation.InsertPageBefore(new LoggedRootPage(), currentRootPage);
                }
            }
            else
            {
                // Don't do anything, we'll go to the root page that is already the Welcome page
            }

            // Clear navigation stack
            await Navigation.PopToRootAsync();
        }

    }
}