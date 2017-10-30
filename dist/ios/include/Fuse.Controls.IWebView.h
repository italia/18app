// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/WebView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Triggers.IProgress.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract interface IWebView :20
// {
uInterfaceType* IWebView_typeof();

struct IWebView
{
    void(*fp_get_BaseUrl)(uObject*, uString**);
    void(*fp_set_BaseUrl)(uObject*, uString*);
    void(*fp_add_BeginLoading)(uObject*, uDelegate*);
    void(*fp_remove_BeginLoading)(uObject*, uDelegate*);
    void(*fp_Eval)(uObject*, uString*);
    void(*fp_Eval1)(uObject*, uString*, uDelegate*);
    void(*fp_get_File)(uObject*, ::g::Uno::UX::FileSource**);
    void(*fp_set_File)(uObject*, ::g::Uno::UX::FileSource*);
    void(*fp_LoadHtml)(uObject*, uString*);
    void(*fp_LoadHtml1)(uObject*, uString*, uString*);
    void(*fp_LoadUrl)(uObject*, uString*);
    void(*fp_add_PageLoaded)(uObject*, uDelegate*);
    void(*fp_remove_PageLoaded)(uObject*, uDelegate*);
    void(*fp_Reload)(uObject*);
    void(*fp_get_ScrollEnabled)(uObject*, bool*);
    void(*fp_set_ScrollEnabled)(uObject*, bool*);
    void(*fp_Stop)(uObject*);
    void(*fp_add_URISchemeHandler)(uObject*, uDelegate*);
    void(*fp_remove_URISchemeHandler)(uObject*, uDelegate*);
    void(*fp_get_Url)(uObject*, uString**);
    void(*fp_set_Url)(uObject*, uString*);
    void(*fp_add_UrlChanged)(uObject*, uDelegate*);
    void(*fp_remove_UrlChanged)(uObject*, uDelegate*);
    void(*fp_get_ZoomEnabled)(uObject*, bool*);
    void(*fp_set_ZoomEnabled)(uObject*, bool*);
    static uString* BaseUrl(const uInterface& __this) { uString* __retval; return __this.VTable<IWebView>()->fp_get_BaseUrl(__this, &__retval), __retval; }
    static void BaseUrl(const uInterface& __this, uString* value) { __this.VTable<IWebView>()->fp_set_BaseUrl(__this, value); }
    static void add_BeginLoading(const uInterface& __this, uDelegate* value) { __this.VTable<IWebView>()->fp_add_BeginLoading(__this, value); }
    static void remove_BeginLoading(const uInterface& __this, uDelegate* value) { __this.VTable<IWebView>()->fp_remove_BeginLoading(__this, value); }
    static void Eval(const uInterface& __this, uString* js) { __this.VTable<IWebView>()->fp_Eval(__this, js); }
    static void Eval1(const uInterface& __this, uString* js, uDelegate* resultHandler) { __this.VTable<IWebView>()->fp_Eval1(__this, js, resultHandler); }
    static ::g::Uno::UX::FileSource* File(const uInterface& __this) { ::g::Uno::UX::FileSource* __retval; return __this.VTable<IWebView>()->fp_get_File(__this, &__retval), __retval; }
    static void File(const uInterface& __this, ::g::Uno::UX::FileSource* value) { __this.VTable<IWebView>()->fp_set_File(__this, value); }
    static void LoadHtml(const uInterface& __this, uString* html) { __this.VTable<IWebView>()->fp_LoadHtml(__this, html); }
    static void LoadHtml1(const uInterface& __this, uString* html, uString* baseUrl) { __this.VTable<IWebView>()->fp_LoadHtml1(__this, html, baseUrl); }
    static void LoadUrl(const uInterface& __this, uString* url) { __this.VTable<IWebView>()->fp_LoadUrl(__this, url); }
    static void add_PageLoaded(const uInterface& __this, uDelegate* value) { __this.VTable<IWebView>()->fp_add_PageLoaded(__this, value); }
    static void remove_PageLoaded(const uInterface& __this, uDelegate* value) { __this.VTable<IWebView>()->fp_remove_PageLoaded(__this, value); }
    static void Reload(const uInterface& __this) { __this.VTable<IWebView>()->fp_Reload(__this); }
    static bool ScrollEnabled(const uInterface& __this) { bool __retval; return __this.VTable<IWebView>()->fp_get_ScrollEnabled(__this, &__retval), __retval; }
    static void ScrollEnabled(const uInterface& __this, bool value) { __this.VTable<IWebView>()->fp_set_ScrollEnabled(__this, &value); }
    static void Stop(const uInterface& __this) { __this.VTable<IWebView>()->fp_Stop(__this); }
    static void add_URISchemeHandler(const uInterface& __this, uDelegate* value) { __this.VTable<IWebView>()->fp_add_URISchemeHandler(__this, value); }
    static void remove_URISchemeHandler(const uInterface& __this, uDelegate* value) { __this.VTable<IWebView>()->fp_remove_URISchemeHandler(__this, value); }
    static uString* Url(const uInterface& __this) { uString* __retval; return __this.VTable<IWebView>()->fp_get_Url(__this, &__retval), __retval; }
    static void Url(const uInterface& __this, uString* value) { __this.VTable<IWebView>()->fp_set_Url(__this, value); }
    static void add_UrlChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IWebView>()->fp_add_UrlChanged(__this, value); }
    static void remove_UrlChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IWebView>()->fp_remove_UrlChanged(__this, value); }
    static bool ZoomEnabled(const uInterface& __this) { bool __retval; return __this.VTable<IWebView>()->fp_get_ZoomEnabled(__this, &__retval), __retval; }
    static void ZoomEnabled(const uInterface& __this, bool value) { __this.VTable<IWebView>()->fp_set_ZoomEnabled(__this, &value); }
};
// }

}}} // ::g::Fuse::Controls
