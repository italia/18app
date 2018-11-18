using Italia.DiciottoApp.CustomRenderers;
using Italia.DiciottoApp.iOS.Renderers;
using Xamarin.Forms;
using Xamarin.Forms.Platform.iOS;

[assembly: ExportRenderer(typeof(ExtWebView), typeof(ExtWebViewRenderer))]
namespace Italia.DiciottoApp.iOS.Renderers
{
    class ExtWebViewRenderer: WebViewRenderer
    {
        public ExtWebViewRenderer() : base()
        {
        }
    }
}