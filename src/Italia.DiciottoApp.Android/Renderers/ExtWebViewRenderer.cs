using System;
using System.ComponentModel;
using Android.App;
using Android.Content;
using Android.Webkit;
using Android.OS;
using Xamarin.Forms.PlatformConfiguration.AndroidSpecific;
using Xamarin.Forms.Internals;
using MixedContentHandling = Android.Webkit.MixedContentHandling;
using AWebView = Android.Webkit.WebView;
using System.Threading.Tasks;
using Xamarin.Forms.Platform.Android;
using Xamarin.Forms;
using Italia.DiciottoApp.CustomRenderers;
using Italia.DiciottoApp.Droid.Renderers;
using Android.Graphics;
using Android.Net.Http;
using Android.Runtime;
using Android.Views;
using System.Linq;

[assembly: ExportRenderer(typeof(ExtWebView), typeof(ExtWebViewRenderer))]
namespace Italia.DiciottoApp.Droid.Renderers
{
    public class ExtWebViewRenderer : ViewRenderer<ExtWebView, AWebView>, IWebViewDelegate
    {
        bool _ignoreSourceChanges;
        ExtFormsWebChromeClient _webChromeClient;

        IWebViewController ElementController => Element;

        public ExtWebViewRenderer(Context context) : base(context)
        {
            AutoPackage = false;
        }

        [Obsolete("This constructor is obsolete as of version 2.5. Please use WebViewRenderer(Context) instead.")]
        public ExtWebViewRenderer()
        {
            AutoPackage = false;
        }

        public void LoadHtml(string html, string baseUrl)
        {
            Control.LoadDataWithBaseURL(baseUrl ?? "file:///android_asset/", html, "text/html", "UTF-8", null);
        }

        public void LoadUrl(string url)
        {
            Control.LoadUrl(url);
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                if (Element != null)
                {
                    if (Control != null)
                        Control.StopLoading();
                    ElementController.EvalRequested -= OnEvalRequested;
                    ElementController.GoBackRequested -= OnGoBackRequested;
                    ElementController.GoForwardRequested -= OnGoForwardRequested;

                    _webChromeClient?.Dispose();
                }
            }

            base.Dispose(disposing);
        }

        protected virtual ExtFormsWebChromeClient GetFormsWebChromeClient()
        {
            return new ExtFormsWebChromeClient();
        }

        protected override Size MinimumSize()
        {
            return new Size(Context.ToPixels(40), Context.ToPixels(40));
        }

        protected override AWebView CreateNativeControl()
        {
            return new AWebView(Context);
        }

        protected override void OnElementChanged(ElementChangedEventArgs<ExtWebView> e)
        {
            base.OnElementChanged(e);

            if (Control == null)
            {
                var webView = CreateNativeControl();
#pragma warning disable 618 // This can probably be replaced with LinearLayout(LayoutParams.MatchParent, LayoutParams.MatchParent); just need to test that theory
                webView.LayoutParameters = new global::Android.Widget.AbsoluteLayout.LayoutParams(LayoutParams.MatchParent, LayoutParams.MatchParent, 0, 0);
#pragma warning restore 618
                webView.SetWebViewClient(new WebClient(this));

                _webChromeClient = GetFormsWebChromeClient();
                _webChromeClient.SetContext(Context as Activity);
                webView.SetWebChromeClient(_webChromeClient);

                webView.Settings.JavaScriptEnabled = true;
                webView.Settings.DomStorageEnabled = true;
                SetNativeControl(webView);
            }

            if (e.OldElement != null)
            {
                var oldElementController = e.OldElement as IWebViewController;
                oldElementController.EvalRequested -= OnEvalRequested;
                oldElementController.EvaluateJavaScriptRequested -= OnEvaluateJavaScriptRequested;
                oldElementController.GoBackRequested -= OnGoBackRequested;
                oldElementController.GoForwardRequested -= OnGoForwardRequested;
            }

            if (e.NewElement != null)
            {
                var newElementController = e.NewElement as IWebViewController;
                newElementController.EvalRequested += OnEvalRequested;
                newElementController.EvaluateJavaScriptRequested += OnEvaluateJavaScriptRequested;
                newElementController.GoBackRequested += OnGoBackRequested;
                newElementController.GoForwardRequested += OnGoForwardRequested;

                UpdateMixedContentMode();
            }

            Load();
        }

        protected override void OnElementPropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            base.OnElementPropertyChanged(sender, e);

            switch (e.PropertyName)
            {
                case "Source":
                    Load();
                    break;
                case "MixedContentMode":
                    UpdateMixedContentMode();
                    break;
            }
        }

        void Load()
        {
            if (_ignoreSourceChanges)
                return;

            if (Element.Source != null)
                Element.Source.Load(this);

            UpdateCanGoBackForward();
        }

        void OnEvalRequested(object sender, EvalRequested eventArg)
        {
            LoadUrl("javascript:" + eventArg.Script);
        }

        async Task<string> OnEvaluateJavaScriptRequested(string script)
        {
            var jsr = new JavascriptResult();

            Control.EvaluateJavascript(script, jsr);

            return await jsr.JsResult.ConfigureAwait(false);
        }

        void OnGoBackRequested(object sender, EventArgs eventArgs)
        {
            if (Control.CanGoBack())
                Control.GoBack();

            UpdateCanGoBackForward();
        }

        void OnGoForwardRequested(object sender, EventArgs eventArgs)
        {
            if (Control.CanGoForward())
                Control.GoForward();

            UpdateCanGoBackForward();
        }

        void UpdateCanGoBackForward()
        {
            if (Element == null || Control == null)
                return;
            ElementController.CanGoBack = Control.CanGoBack();
            ElementController.CanGoForward = Control.CanGoForward();
        }

        void UpdateMixedContentMode()
        {
            if (Control != null && ((int)Build.VERSION.SdkInt >= 21))
            {
                if (Element is Xamarin.Forms.WebView element)
                {
                    Control.Settings.MixedContentMode = (MixedContentHandling)element.OnThisPlatform().MixedContentMode();
                }
                else
                {
                    throw new InvalidCastException("Element type is not based on Xamarin.Forms.WebView");
                }
            }
        }

        class WebClient : WebViewClient
        {
            WebNavigationResult _navigationResult = WebNavigationResult.Success;
            ExtWebViewRenderer _renderer;
            bool _navigationEnabled = true;

            public WebClient(ExtWebViewRenderer renderer)
            {
                _renderer = renderer ?? throw new ArgumentNullException("renderer");
                _navigationEnabled = true;
            }

            public override void OnPageFinished(AWebView view, string url)
            {
                Log.Warning("++++++++ WebView:OnPageFinished(AWebView view, string url)", $"url={url}");

                if (_renderer.Element == null || url == "file:///android_asset/")
                    return;

                var source = new UrlWebViewSource { Url = url };
                _renderer._ignoreSourceChanges = true;
                _renderer.ElementController.SetValueFromRenderer(ExtWebView.SourceProperty, source);
                _renderer._ignoreSourceChanges = false;

                var args = new WebNavigatedEventArgs(WebNavigationEvent.NewPage, source, url, _navigationResult);

                _renderer.ElementController.SendNavigated(args);

                _renderer.UpdateCanGoBackForward();

                base.OnPageFinished(view, url);
            }

            [Obsolete("OnReceivedError is obsolete as of version 2.3.0. This method was deprecated in API level 23.")]
            public override void OnReceivedError(AWebView view, ClientError errorCode, string description, string failingUrl)
            {
                Log.Warning("++++++++ WebView:OnReceivedError(AWebView view, ClientError errorCode, string description, string failingUrl)", $"failingUrl={failingUrl}");

                _navigationResult = WebNavigationResult.Failure;
                if (errorCode == ClientError.Timeout)
                    _navigationResult = WebNavigationResult.Timeout;
#pragma warning disable 618
                base.OnReceivedError(view, errorCode, description, failingUrl);
#pragma warning restore 618
            }

            public override void OnReceivedError(AWebView view, IWebResourceRequest request, WebResourceError error)
            {
                Log.Warning("++++++++ WebView:OnReceivedError(AWebView view, IWebResourceRequest request, WebResourceError error)", $"error.Description={error.Description}");

                _navigationResult = WebNavigationResult.Failure;
                if (error.ErrorCode == ClientError.Timeout)
                    _navigationResult = WebNavigationResult.Timeout;
                base.OnReceivedError(view, request, error);
            }

            [Obsolete]
            public override bool ShouldOverrideUrlLoading(AWebView view, string url)
            {
                Log.Warning("++++++++ WebView:[obsolete]ShouldOverrideUrlLoading(AWebView view, string url)", $"url={url}");

                return ShouldOverrideUrlLoading(url);
            }

            #region Added overrides

            public override bool ShouldOverrideUrlLoading(AWebView view, IWebResourceRequest request)
            {
                Log.Warning("++++++++ WebView:ShouldOverrideUrlLoading(AWebView view, IWebResourceRequest request)", $"request.Url.Host={request.Url.Host}");

                return ShouldOverrideUrlLoading(request.Url.ToString());
            }

            #endregion

            #region utilities

            private bool ShouldOverrideUrlLoading(string url)
            {
                if (_renderer.Element == null)
                    return true;

                var args = new WebNavigatingEventArgs(WebNavigationEvent.NewPage, new UrlWebViewSource { Url = url }, url);

                _renderer.ElementController.SendNavigating(args);
                _navigationResult = WebNavigationResult.Success;
                _renderer.UpdateCanGoBackForward();

                // Override Url loading if url is equal to ExtWebView.ReturnUrl
                ExtWebView extWebView = _renderer.ElementController as ExtWebView;
                Log.Warning("+*+*+*+* Checkin overload request", $"url={url} VS. returnUrls={extWebView.ReturnUrls}");
                if (!string.IsNullOrWhiteSpace(extWebView?.ReturnUrls)
                    && extWebView.ReturnUrls.Split(';').Any(returnUrl => returnUrl == url))
                {
                    Log.Warning("+*+*+*+* Checkin overload request", $"True!!!");
                    extWebView.OnUrlReturned(new UrlReturnedEventArgs(url));
                    // _renderer.Control.StopLoading();
                    _navigationEnabled = false;
                    return true;
                }
                Log.Warning("+*+*+*+* Checkin overload request", $"False!!!");

                return false;
            }

            #endregion 

            #region Other unused overrides

            public override void DoUpdateVisitedHistory(AWebView view, string url, bool isReload)
            {
                base.DoUpdateVisitedHistory(view, url, isReload);
            }

            public override void OnFormResubmission(AWebView view, Message dontResend, Message resend)
            {
                base.OnFormResubmission(view, dontResend, resend);
            }

            public override void OnLoadResource(AWebView view, string url)
            {
                Log.Warning("++++++++ WebView:OnLoadResource(AWebView view, string url)", $"url={url}");
                base.OnLoadResource(view, url);
            }

            public override void OnPageCommitVisible(AWebView view, string url)
            {
                base.OnPageCommitVisible(view, url);
            }

            public override void OnPageStarted(AWebView view, string url, Bitmap favicon)
            {
                Log.Warning("++++++++ WebView:OnPageStarted(AWebView view, string url, Bitmap favicon)", $"url={url}");
                base.OnPageStarted(view, url, favicon);
            }

            public override void OnReceivedClientCertRequest(AWebView view, ClientCertRequest request)
            {
                base.OnReceivedClientCertRequest(view, request);
            }

            public override void OnReceivedHttpAuthRequest(AWebView view, HttpAuthHandler handler, string host, string realm)
            {
                base.OnReceivedHttpAuthRequest(view, handler, host, realm);
            }

            public override void OnReceivedHttpError(AWebView view, IWebResourceRequest request, WebResourceResponse errorResponse)
            {
                Log.Warning("++++++++ WebView:OnReceivedHttpError(AWebView view, IWebResourceRequest request, WebResourceResponse errorResponse)", $"errorResponse.StatusCode={errorResponse.StatusCode}");
                base.OnReceivedHttpError(view, request, errorResponse);
            }

            public override void OnReceivedLoginRequest(AWebView view, string realm, string account, string args)
            {
                base.OnReceivedLoginRequest(view, realm, account, args);
            }

            public override void OnReceivedSslError(AWebView view, SslErrorHandler handler, SslError error)
            {
                base.OnReceivedSslError(view, handler, error);
            }

            public override bool OnRenderProcessGone(AWebView view, RenderProcessGoneDetail detail)
            {
                return base.OnRenderProcessGone(view, detail);
            }

            public override void OnSafeBrowsingHit(AWebView view, IWebResourceRequest request, [GeneratedEnum] SafeBrowsingThreat threatType, SafeBrowsingResponse callback)
            {
                base.OnSafeBrowsingHit(view, request, threatType, callback);
            }

            public override void OnScaleChanged(AWebView view, float oldScale, float newScale)
            {
                base.OnScaleChanged(view, oldScale, newScale);
            }

            [Obsolete]
            public override void OnTooManyRedirects(AWebView view, Message cancelMsg, Message continueMsg)
            {
                base.OnTooManyRedirects(view, cancelMsg, continueMsg);
            }

            public override void OnUnhandledInputEvent(AWebView view, InputEvent e)
            {
                base.OnUnhandledInputEvent(view, e);
            }

            public override void OnUnhandledKeyEvent(AWebView view, KeyEvent e)
            {
                base.OnUnhandledKeyEvent(view, e);
            }

            public override WebResourceResponse ShouldInterceptRequest(AWebView view, IWebResourceRequest request)
            {
                Log.Warning("++++++++ WebView:ShouldInterceptRequest(AWebView view, IWebResourceRequest request)", $"request.Url.Host={request.Url.Host}");
                return base.ShouldInterceptRequest(view, request);
            }

            [Obsolete]
            public override WebResourceResponse ShouldInterceptRequest(AWebView view, string url)
            {
                Log.Warning("++++++++ WebView:ShouldInterceptRequest(AWebView view, string url)", $"url={url}");
                return base.ShouldInterceptRequest(view, url);
            }

            public override bool ShouldOverrideKeyEvent(AWebView view, KeyEvent e)
            {
                return base.ShouldOverrideKeyEvent(view, e);
            }

            #endregion

            protected override void Dispose(bool disposing)
            {
                base.Dispose(disposing);
                if (disposing)
                    _renderer = null;
            }
        }

        class JavascriptResult : Java.Lang.Object, IValueCallback
        {
            TaskCompletionSource<string> source;
            public Task<string> JsResult { get { return source.Task; } }

            public JavascriptResult()
            {
                source = new TaskCompletionSource<string>();
            }

            public void OnReceiveValue(Java.Lang.Object result)
            {
                string json = ((Java.Lang.String)result).ToString();
                source.SetResult(json);
            }
        }

    }
}