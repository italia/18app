using Italia.DiciottoApp.CookieStore;
using Italia.DiciottoApp.CustomRenderers;
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
        private readonly string returnUrls = Constants.RETURN_URL;

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
            if (!string.IsNullOrWhiteSpace(e.Url)
                && returnUrls.Split(';').Any(returnUrl => returnUrl == e.Url))
            {
                e.Cancel = true;
                LoginBrowser.OnUrlReturned(new UrlReturnedEventArgs(e.Url));
            }
        }

        private void OnBrowserNavigated(object sender, WebNavigatedEventArgs e)
        {
            Debug.WriteLine($"++++ Navigated to {e.Url}");
        }

        private async void OnUrlReturned(object sender, UrlReturnedEventArgs e)
        {
            Debug.WriteLine($"++++ Url returned: {e.Url}");

            LoginBrowser.IsVisible = false;

            MessageLabel.Text = "Verifica login in corso...";
            MessageLabel.IsVisible = true;

            // Get cookie
            IPlatformCookieStore cookieStore = DependencyService.Get<IPlatformCookieStore>();
            // cookieStore.DumpAllCookiesForSite(Constants.COOKIES_URL);
            var cookies = cookieStore.GetCookiesForSite(Constants.COOKIES_URL);
            Cookie fedSecureToken = cookies.Where(c => c.Name == Constants.COOKIES_SECURE_TOKEN).FirstOrDefault();
            Debug.WriteLine($"++++ fedSecureToken: {fedSecureToken?.Value ?? "FEDSecureToken not found"}");

            Cookie userToken = cookies.Where(c => c.Name == Constants.COOKIES_USER_TOKEN).FirstOrDefault();
            Debug.WriteLine($"++++ userToken: {userToken?.Value ?? "cookieutente not found"}");

            string loginFailDetail = string.Empty;

            if (fedSecureToken == null)
            {
                loginFailDetail = "Unavailable Secure Token";
            }
            else if (userToken == null)
            {
                loginFailDetail = "Unavailable User Token";
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
                        loginFailDetail = "Unavailable Beneficiary info";
                    }
                    else
                    {
                        Settings.FEDSecureTokenValue = fedSecureToken.Value;
                        Settings.UserLogged = true;
                        Settings.SetBeneficiario(loginResult.Beneficiary);

                        if (Settings.UserAcceptanceFlag == "1")
                        {
                            if (loginResult.Beneficiary.BorsellinoBean == null)
                            {
                                loginFailDetail = "Unavailable Wallet info";
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
                    loginFailDetail = loginResult.FailureReason.ToString();
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