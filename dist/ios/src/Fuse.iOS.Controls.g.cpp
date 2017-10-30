// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.URISchemeEventArgs.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.iOS.Controls.NavDelegate.h>
#include <Fuse.iOS.Controls.WebView.h>
#include <Fuse.iOS.Controls.WKWebViewHelpers.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Platform.AppEvents.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[4];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/iOS/WebView.uno
// -------------------------------------------------------------------------

// public sealed extern class WebView :155
// {
// ~WebView() :194
static void WebView__Finalize_fn(WebView* __this)
{
    if (__this->Handle1 != NULL)
        ::g::Fuse::Platform::AppEvents::remove_LowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnLowMemory_fn, __this));

    if (__this->_isUpdating)
        __this->_isUpdating = false;

    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnUpdate_fn, __this), 0);
}

static void WebView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("about:blank");
    ::STRINGS[2] = uString::Const("low mem in WebView");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/iOS/WebView.uno");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    ::TYPES[4] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(WebView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface5));
    type->SetFields(10,
        ::g::Uno::UX::FileSource_typeof(), offsetof(WebView, _file), 0,
        ::g::Uno::Bool_typeof(), offsetof(WebView, _isUpdating), 0,
        ::g::Uno::String_typeof(), offsetof(WebView, _source), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(WebView, _webViewHost), 0,
        ::g::ObjC::Object_typeof(), offsetof(WebView, Handle1), 0,
        ::g::ObjC::Object_typeof(), offsetof(WebView, NavigationDelegate), 0,
        ::g::Uno::String_typeof(), offsetof(WebView, _BaseUrl), 0,
        ::g::Uno::Bool_typeof(), offsetof(WebView, _ScrollEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(WebView, _ZoomEnabled), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(WebView, BeginLoading1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(WebView, PageLoaded1), 0,
        ::TYPES[6/*Uno.UX.ValueChangedHandler<double>*/], offsetof(WebView, ProgressChanged1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(WebView, URISchemeHandler1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(WebView, UrlChanged1), 0);
}

WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 6;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.iOS.Controls.WebView", options);
    type->fp_build_ = WebView_build;
    type->fp_Finalize = (void(*)(uObject*))WebView__Finalize_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))WebView__Dispose_fn;
    type->interface2.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface2.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface2.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface2.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface2.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface2.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface2.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface2.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface2.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface2.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface2.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface2.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface2.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface2.fp_get_ZoomEnabled = (void(*)(uObject*, bool*))WebView__get_ZoomEnabled_fn;
    type->interface2.fp_set_ZoomEnabled = (void(*)(uObject*, bool*))WebView__set_ZoomEnabled_fn;
    type->interface2.fp_get_ScrollEnabled = (void(*)(uObject*, bool*))WebView__get_ScrollEnabled_fn;
    type->interface2.fp_set_ScrollEnabled = (void(*)(uObject*, bool*))WebView__set_ScrollEnabled_fn;
    type->interface2.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface2.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface2.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface2.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface2.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface2.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface2.fp_add_URISchemeHandler = (void(*)(uObject*, uDelegate*))WebView__add_URISchemeHandler_fn;
    type->interface2.fp_remove_URISchemeHandler = (void(*)(uObject*, uDelegate*))WebView__remove_URISchemeHandler_fn;
    type->interface3.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface3.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface3.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface4.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface4.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface4.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface4.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface4.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__add_HistoryChanged_fn;
    type->interface4.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__remove_HistoryChanged_fn;
    type->interface5.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface5.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))WebView__Dispose_fn;
    return type;
}

// private WebView(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle, string[] schemes) :171
void WebView__ctor_5_fn(WebView* __this, ::g::Fuse::Controls::WebView* webViewHost, ::g::ObjC::Object* wvHandle, uArray* schemes)
{
    __this->ctor_5(webViewHost, wvHandle, schemes);
}

// public generated string get_BaseUrl() :209
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :209
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :338
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :338
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :332
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :333
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public static Fuse.iOS.Controls.WebView Create(Fuse.Controls.WebView webViewHost, string[] schemes) :165
void WebView__Create_fn(::g::Fuse::Controls::WebView* webViewHost, uArray* schemes, WebView** __retval)
{
    *__retval = WebView::Create(webViewHost, schemes);
}

// public override sealed void Dispose() :181
void WebView__Dispose_fn(WebView* __this)
{
    uPtr(__this->_webViewHost)->WebViewClient(NULL);
    __this->_webViewHost = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// public void Eval(string js) :259
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> onResult) :264
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* onResult)
{
    __this->Eval1(js, onResult);
}

// public Uno.UX.FileSource get_File() :272
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :273
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :334
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :335
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// public bool HasURISchemeHandler() :312
void WebView__HasURISchemeHandler_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->HasURISchemeHandler();
}

// public void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :190
void WebView__add_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :191
void WebView__remove_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// private void LoadFile(Uno.UX.FileSource file) :281
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :218
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :223
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public bool get_Loading() :329
void WebView__get_Loading_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->Loading();
}

// public void LoadUrl(string url) :235
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// private WebView New(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle, string[] schemes) :171
void WebView__New3_fn(::g::Fuse::Controls::WebView* webViewHost, ::g::ObjC::Object* wvHandle, uArray* schemes, WebView** __retval)
{
    *__retval = WebView::New3(webViewHost, wvHandle, schemes);
}

// private void OnBeginNavigation() :300
void WebView__OnBeginNavigation_fn(WebView* __this)
{
    __this->OnBeginNavigation();
}

// private void OnCustomURI(string url) :317
void WebView__OnCustomURI_fn(WebView* __this, uString* url)
{
    __this->OnCustomURI(url);
}

// private void OnFinishNavigation() :323
void WebView__OnFinishNavigation_fn(WebView* __this)
{
    __this->OnFinishNavigation();
}

// private void OnLowMemory() :203
void WebView__OnLowMemory_fn(WebView* __this)
{
    __this->OnLowMemory();
}

// private void OnProgressChanged() :293
void WebView__OnProgressChanged_fn(WebView* __this)
{
    __this->OnProgressChanged();
}

// private void OnUpdate() :249
void WebView__OnUpdate_fn(WebView* __this)
{
    __this->OnUpdate();
}

// private void OnURLChanged() :306
void WebView__OnURLChanged_fn(WebView* __this)
{
    __this->OnURLChanged();
}

// public generated void add_PageLoaded(Uno.EventHandler value) :339
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :339
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :330
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :160
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :160
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :336
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public generated bool get_ScrollEnabled() :343
void WebView__get_ScrollEnabled_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->ScrollEnabled();
}

// public generated void set_ScrollEnabled(bool value) :343
void WebView__set_ScrollEnabled_fn(WebView* __this, bool* value)
{
    __this->ScrollEnabled(*value);
}

// public string get_Source() :214
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :215
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// private void StartProgressUpdate() :243
void WebView__StartProgressUpdate_fn(WebView* __this)
{
    __this->StartProgressUpdate();
}

// public void Stop() :337
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public generated void add_URISchemeHandler(Uno.EventHandler value) :341
void WebView__add_URISchemeHandler_fn(WebView* __this, uDelegate* value)
{
    __this->add_URISchemeHandler(value);
}

// public generated void remove_URISchemeHandler(Uno.EventHandler value) :341
void WebView__remove_URISchemeHandler_fn(WebView* __this, uDelegate* value)
{
    __this->remove_URISchemeHandler(value);
}

// public string get_Url() :231
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :232
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) :340
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :340
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// public generated bool get_ZoomEnabled() :342
void WebView__get_ZoomEnabled_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->ZoomEnabled();
}

// public generated void set_ZoomEnabled(bool value) :342
void WebView__set_ZoomEnabled_fn(WebView* __this, bool* value)
{
    __this->ZoomEnabled(*value);
}

// private WebView(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle, string[] schemes) [instance] :171
void WebView::ctor_5(::g::Fuse::Controls::WebView* webViewHost, ::g::ObjC::Object* wvHandle, uArray* schemes)
{
    ctor_4(wvHandle);
    _webViewHost = webViewHost;
    Handle1 = wvHandle;
    NavigationDelegate = ::g::Fuse::iOS::Controls::NavDelegate::Create(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnBeginNavigation_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnFinishNavigation_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnURLChanged_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)WebView__OnCustomURI_fn, this), schemes, uDelegate::New(::TYPES[2/*Uno.Func<bool>*/], (void*)WebView__HasURISchemeHandler_fn, this));
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::SetNavigationDelegate(Handle1, NavigationDelegate);
    ::g::Fuse::Platform::AppEvents::add_LowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnLowMemory_fn, this));
    uPtr(_webViewHost)->WebViewClient((uObject*)this);
}

// public generated string get_BaseUrl() [instance] :209
uString* WebView::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :209
void WebView::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :338
void WebView::add_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :338
void WebView::remove_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :332
bool WebView::CanGoBack()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetCanGoBack(Handle1);
}

// public bool get_CanGoForward() [instance] :333
bool WebView::CanGoForward()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetCanGoForward(Handle1);
}

// public void Eval(string js) [instance] :259
void WebView::Eval(uString* js)
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebView(Handle1, js);
}

// public void Eval(string js, Uno.Action<string> onResult) [instance] :264
void WebView::Eval1(uString* js, uDelegate* onResult)
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebViewWithHandler(Handle1, js, onResult);
}

// public Uno.UX.FileSource get_File() [instance] :272
::g::Uno::UX::FileSource* WebView::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :273
void WebView::File(::g::Uno::UX::FileSource* value)
{
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :334
void WebView::GoBack()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::GoBack(Handle1);
}

// public void GoForward() [instance] :335
void WebView::GoForward()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::GoForward(Handle1);
}

// public bool HasURISchemeHandler() [instance] :312
bool WebView::HasURISchemeHandler()
{
    return ::g::Uno::Delegate::op_Inequality(URISchemeHandler1, NULL);
}

// public void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :190
void WebView::add_HistoryChanged(uDelegate* value)
{
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :191
void WebView::remove_HistoryChanged(uDelegate* value)
{
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :281
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uString* data = ::STRINGS[0/*""*/];

    {
        const auto __finally_fun = [&]()
        {
            LoadHtml(data);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            data = uPtr(file)->ReadAllText();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
        }
    }
}

// public void LoadHtml(string html) [instance] :218
void WebView::LoadHtml(uString* html)
{
    LoadHtml1(html, ::STRINGS[0/*""*/]);
}

// public void LoadHtml(string html, string baseUrl) [instance] :223
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::LoadHTML(Handle1, html, baseUrl);
    StartProgressUpdate();
}

// public bool get_Loading() [instance] :329
bool WebView::Loading()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetIsLoading(Handle1);
}

// public void LoadUrl(string url) [instance] :235
void WebView::LoadUrl(uString* url)
{
    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[0/*""*/]))
        url = ::STRINGS[1/*"about:blank"*/];

    ::g::Fuse::iOS::Controls::WKWebViewHelpers::LoadURL(Handle1, url);
    StartProgressUpdate();
}

// private void OnBeginNavigation() [instance] :300
void WebView::OnBeginNavigation()
{
    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, NULL))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// private void OnCustomURI(string url) [instance] :317
void WebView::OnCustomURI(uString* url)
{
    if (::g::Uno::Delegate::op_Inequality(URISchemeHandler1, NULL))
        uPtr(URISchemeHandler1)->Invoke(2, this, (::g::Fuse::Controls::URISchemeEventArgs*)::g::Fuse::Controls::URISchemeEventArgs::New2(url));
}

// private void OnFinishNavigation() [instance] :323
void WebView::OnFinishNavigation()
{
    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, NULL))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// private void OnLowMemory() [instance] :203
void WebView::OnLowMemory()
{
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"low mem in ...*/], 0, ::STRINGS[3/*"/usr/local/...*/], 205);
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::FreeMemory();
}

// private void OnProgressChanged() [instance] :293
void WebView::OnProgressChanged()
{
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[4/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), &ret2), ret2));
}

// private void OnUpdate() [instance] :249
void WebView::OnUpdate()
{
    OnProgressChanged();

    if (!Loading())
    {
        _isUpdating = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
    }
}

// private void OnURLChanged() [instance] :306
void WebView::OnURLChanged()
{
    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, NULL))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :339
void WebView::add_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :339
void WebView::remove_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :330
double WebView::Progress()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetEstimatedProgress(Handle1);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :160
void WebView::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[6/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :160
void WebView::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[6/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance] :336
void WebView::Reload()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::Reload(Handle1);
}

// public generated bool get_ScrollEnabled() [instance] :343
bool WebView::ScrollEnabled()
{
    return _ScrollEnabled;
}

// public generated void set_ScrollEnabled(bool value) [instance] :343
void WebView::ScrollEnabled(bool value)
{
    _ScrollEnabled = value;
}

// public string get_Source() [instance] :214
uString* WebView::Source()
{
    return _source;
}

// public void set_Source(string value) [instance] :215
void WebView::Source(uString* value)
{
    LoadHtml(_source = value);
}

// private void StartProgressUpdate() [instance] :243
void WebView::StartProgressUpdate()
{
    if (!_isUpdating)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
}

// public void Stop() [instance] :337
void WebView::Stop()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::StopLoading(Handle1);
}

// public generated void add_URISchemeHandler(Uno.EventHandler value) [instance] :341
void WebView::add_URISchemeHandler(uDelegate* value)
{
    URISchemeHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(URISchemeHandler1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_URISchemeHandler(Uno.EventHandler value) [instance] :341
void WebView::remove_URISchemeHandler(uDelegate* value)
{
    URISchemeHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(URISchemeHandler1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public string get_Url() [instance] :231
uString* WebView::Url()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetURL(Handle1);
}

// public void set_Url(string value) [instance] :232
void WebView::Url(uString* value)
{
    LoadUrl(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :340
void WebView::add_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :340
void WebView::remove_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated bool get_ZoomEnabled() [instance] :342
bool WebView::ZoomEnabled()
{
    return _ZoomEnabled;
}

// public generated void set_ZoomEnabled(bool value) [instance] :342
void WebView::ZoomEnabled(bool value)
{
    _ZoomEnabled = value;
}

// public static Fuse.iOS.Controls.WebView Create(Fuse.Controls.WebView webViewHost, string[] schemes) [static] :165
WebView* WebView::Create(::g::Fuse::Controls::WebView* webViewHost, uArray* schemes)
{
    ::g::ObjC::Object* wv = ::g::Fuse::iOS::Controls::WKWebViewHelpers::CreateWebView(uPtr(webViewHost)->ZoomEnabled(), uPtr(webViewHost)->ScrollEnabled());
    return WebView::New3(webViewHost, wv, schemes);
}

// private WebView New(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle, string[] schemes) [static] :171
WebView* WebView::New3(::g::Fuse::Controls::WebView* webViewHost, ::g::ObjC::Object* wvHandle, uArray* schemes)
{
    WebView* obj1 = (WebView*)uNew(WebView_typeof());
    obj1->ctor_5(webViewHost, wvHandle, schemes);
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::Controls
