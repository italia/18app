// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/iOS/WebView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct WKWebViewHelpers;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// internal static extern class WKWebViewHelpers :16
// {
uClassType* WKWebViewHelpers_typeof();
void WKWebViewHelpers__CreateWebView_fn(bool* zoomEnabled, bool* scrollEnabled, ::g::ObjC::Object** __retval);
void WKWebViewHelpers__EvalOnWebView_fn(::g::ObjC::Object* webview, uString* js);
void WKWebViewHelpers__EvalOnWebViewWithHandler_fn(::g::ObjC::Object* webview, uString* js, uDelegate* handler);
void WKWebViewHelpers__FreeMemory_fn();
void WKWebViewHelpers__GetCanGoBack_fn(::g::ObjC::Object* handle, bool* __retval);
void WKWebViewHelpers__GetCanGoForward_fn(::g::ObjC::Object* handle, bool* __retval);
void WKWebViewHelpers__GetEstimatedProgress_fn(::g::ObjC::Object* handle, double* __retval);
void WKWebViewHelpers__GetIsLoading_fn(::g::ObjC::Object* handle, bool* __retval);
void WKWebViewHelpers__GetURL_fn(::g::ObjC::Object* handle, uString** __retval);
void WKWebViewHelpers__GoBack_fn(::g::ObjC::Object* handle);
void WKWebViewHelpers__GoForward_fn(::g::ObjC::Object* handle);
void WKWebViewHelpers__LoadHTML_fn(::g::ObjC::Object* webview, uString* html, uString* baseURL);
void WKWebViewHelpers__LoadURL_fn(::g::ObjC::Object* handle, uString* url);
void WKWebViewHelpers__Reload_fn(::g::ObjC::Object* handle);
void WKWebViewHelpers__SetNavigationDelegate_fn(::g::ObjC::Object* webViewHandle, ::g::ObjC::Object* delegateHandle);
void WKWebViewHelpers__StopLoading_fn(::g::ObjC::Object* handle);

struct WKWebViewHelpers : uObject
{
    static ::g::ObjC::Object* CreateWebView(bool zoomEnabled, bool scrollEnabled);
    static void EvalOnWebView(::g::ObjC::Object* webview, uString* js);
    static void EvalOnWebViewWithHandler(::g::ObjC::Object* webview, uString* js, uDelegate* handler);
    static void FreeMemory();
    static bool GetCanGoBack(::g::ObjC::Object* handle);
    static bool GetCanGoForward(::g::ObjC::Object* handle);
    static double GetEstimatedProgress(::g::ObjC::Object* handle);
    static bool GetIsLoading(::g::ObjC::Object* handle);
    static uString* GetURL(::g::ObjC::Object* handle);
    static void GoBack(::g::ObjC::Object* handle);
    static void GoForward(::g::ObjC::Object* handle);
    static void LoadHTML(::g::ObjC::Object* webview, uString* html, uString* baseURL);
    static void LoadURL(::g::ObjC::Object* handle, uString* url);
    static void Reload(::g::ObjC::Object* handle);
    static void SetNavigationDelegate(::g::ObjC::Object* webViewHandle, ::g::ObjC::Object* delegateHandle);
    static void StopLoading(::g::ObjC::Object* handle);
};
// }

}}}} // ::g::Fuse::iOS::Controls
