using System;
using System.Collections.Generic;
using System.Text;
using Xamarin.Forms;

namespace Italia.DiciottoApp.CustomRenderers
{
    public class ExtWebView: WebView
    {
        public event EventHandler<UrlReturnedEventArgs> UrlReturned;

        public void OnUrlReturned(UrlReturnedEventArgs e)
        {
            UrlReturned(this, e);
        }

        public static readonly BindableProperty ReturnUrlsProperty =
            BindableProperty.Create("ReturnUrls", typeof(string), typeof(ExtWebView));

        public string ReturnUrls
        {
            get { return (string)GetValue(ReturnUrlsProperty); }
            set { SetValue(ReturnUrlsProperty, value); }
        }

    }

    public class UrlReturnedEventArgs : EventArgs
    {
        public string Url { get; set; }

        public UrlReturnedEventArgs(string url)
        {
            Url = url;
        }
    }

}
