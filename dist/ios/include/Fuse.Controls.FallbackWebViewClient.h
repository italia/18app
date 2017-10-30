// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/WebView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Triggers.IProgress.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct FallbackWebViewClient;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class FallbackWebViewClient :501
// {
struct FallbackWebViewClient_type : uType
{
    ::g::Fuse::Controls::IWebView interface0;
    ::g::Fuse::Triggers::IProgress interface1;
    ::g::Fuse::Navigation::IBaseNavigation interface2;
    ::g::Fuse::Controls::ISourceReceiver interface3;
};

FallbackWebViewClient_type* FallbackWebViewClient_typeof();
void FallbackWebViewClient__ApplyBufferedCalls_fn(FallbackWebViewClient* __this, uObject* wv);
void FallbackWebViewClient__get_BaseUrl_fn(FallbackWebViewClient* __this, uString** __retval);
void FallbackWebViewClient__set_BaseUrl_fn(FallbackWebViewClient* __this, uString* value);
void FallbackWebViewClient__add_BeginLoading_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__remove_BeginLoading_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__get_CanGoBack_fn(FallbackWebViewClient* __this, bool* __retval);
void FallbackWebViewClient__get_CanGoForward_fn(FallbackWebViewClient* __this, bool* __retval);
void FallbackWebViewClient__Eval_fn(FallbackWebViewClient* __this, uString* js);
void FallbackWebViewClient__Eval1_fn(FallbackWebViewClient* __this, uString* js, uDelegate* resultHandler);
void FallbackWebViewClient__get_File_fn(FallbackWebViewClient* __this, ::g::Uno::UX::FileSource** __retval);
void FallbackWebViewClient__set_File_fn(FallbackWebViewClient* __this, ::g::Uno::UX::FileSource* value);
void FallbackWebViewClient__GoBack_fn(FallbackWebViewClient* __this);
void FallbackWebViewClient__GoForward_fn(FallbackWebViewClient* __this);
void FallbackWebViewClient__add_HistoryChanged_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__remove_HistoryChanged_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__LoadHtml_fn(FallbackWebViewClient* __this, uString* html);
void FallbackWebViewClient__LoadHtml1_fn(FallbackWebViewClient* __this, uString* html, uString* baseUrl);
void FallbackWebViewClient__LoadUrl_fn(FallbackWebViewClient* __this, uString* url);
void FallbackWebViewClient__add_PageLoaded_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__remove_PageLoaded_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__get_Progress_fn(FallbackWebViewClient* __this, double* __retval);
void FallbackWebViewClient__add_ProgressChanged_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__remove_ProgressChanged_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__Reload_fn(FallbackWebViewClient* __this);
void FallbackWebViewClient__get_ScrollEnabled_fn(FallbackWebViewClient* __this, bool* __retval);
void FallbackWebViewClient__set_ScrollEnabled_fn(FallbackWebViewClient* __this, bool* value);
void FallbackWebViewClient__get_Source_fn(FallbackWebViewClient* __this, uString** __retval);
void FallbackWebViewClient__set_Source_fn(FallbackWebViewClient* __this, uString* value);
void FallbackWebViewClient__Stop_fn(FallbackWebViewClient* __this);
void FallbackWebViewClient__add_URISchemeHandler_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__remove_URISchemeHandler_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__get_Url_fn(FallbackWebViewClient* __this, uString** __retval);
void FallbackWebViewClient__set_Url_fn(FallbackWebViewClient* __this, uString* value);
void FallbackWebViewClient__add_UrlChanged_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__remove_UrlChanged_fn(FallbackWebViewClient* __this, uDelegate* value);
void FallbackWebViewClient__get_ZoomEnabled_fn(FallbackWebViewClient* __this, bool* __retval);
void FallbackWebViewClient__set_ZoomEnabled_fn(FallbackWebViewClient* __this, bool* value);

struct FallbackWebViewClient : uObject
{
    uStrong< ::g::Uno::Collections::List*> _bufferedCalls;
    uStrong<uString*> _BaseUrl;
    uStrong< ::g::Uno::UX::FileSource*> _File;
    bool _ScrollEnabled;
    uStrong<uString*> _Source;
    uStrong<uString*> _Url;
    bool _ZoomEnabled;
    uStrong<uDelegate*> BeginLoading1;
    uStrong<uDelegate*> HistoryChanged1;
    uStrong<uDelegate*> PageLoaded1;
    uStrong<uDelegate*> ProgressChanged1;
    uStrong<uDelegate*> URISchemeHandler1;
    uStrong<uDelegate*> UrlChanged1;

    void ApplyBufferedCalls(uObject* wv);
    uString* BaseUrl();
    void BaseUrl(uString* value);
    void add_BeginLoading(uDelegate* value);
    void remove_BeginLoading(uDelegate* value);
    bool CanGoBack();
    bool CanGoForward();
    void Eval(uString* js);
    void Eval1(uString* js, uDelegate* resultHandler);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void GoBack();
    void GoForward();
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    void LoadHtml(uString* html);
    void LoadHtml1(uString* html, uString* baseUrl);
    void LoadUrl(uString* url);
    void add_PageLoaded(uDelegate* value);
    void remove_PageLoaded(uDelegate* value);
    double Progress();
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Reload();
    bool ScrollEnabled();
    void ScrollEnabled(bool value);
    uString* Source();
    void Source(uString* value);
    void Stop();
    void add_URISchemeHandler(uDelegate* value);
    void remove_URISchemeHandler(uDelegate* value);
    uString* Url();
    void Url(uString* value);
    void add_UrlChanged(uDelegate* value);
    void remove_UrlChanged(uDelegate* value);
    bool ZoomEnabled();
    void ZoomEnabled(bool value);
};
// }

}}} // ::g::Fuse::Controls
