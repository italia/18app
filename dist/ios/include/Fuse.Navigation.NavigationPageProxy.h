// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationPageProxy.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IPagePropertyListener.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigationPageProxy :14
// {
struct NavigationPageProxy_type : uType
{
    ::g::Fuse::Navigation::IPagePropertyListener interface0;
};

NavigationPageProxy_type* NavigationPageProxy_typeof();
void NavigationPageProxy__ctor__fn(NavigationPageProxy* __this);
void NavigationPageProxy__Dispose_fn(NavigationPageProxy* __this);
void NavigationPageProxy__Init_fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready, ::g::Fuse::Visual* source);
void NavigationPageProxy__get_IsReady_fn(NavigationPageProxy* __this, bool* __retval);
void NavigationPageProxy__get_Navigation_fn(NavigationPageProxy* __this, uObject** __retval);
void NavigationPageProxy__New1_fn(NavigationPageProxy** __retval);
void NavigationPageProxy__OnPageRootingCompleted_fn(NavigationPageProxy* __this);
void NavigationPageProxy__get_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual** __retval);
void NavigationPageProxy__set_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* value);
void NavigationPageProxy__RootImpl_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source);
void NavigationPageProxy__UnrootImpl_fn(NavigationPageProxy* __this);

struct NavigationPageProxy : uObject
{
    uStrong<uObject*> _navigation;
    uStrong< ::g::Fuse::Visual*> _pageBind;
    uStrong<uDelegate*> _ready;
    uStrong< ::g::Fuse::Visual*> _source;
    uStrong<uDelegate*> _unready;
    bool _waitRootingCompleted;
    uStrong< ::g::Fuse::Visual*> _Page;

    void ctor_();
    void Dispose();
    void Init(uDelegate* ready, uDelegate* unready, ::g::Fuse::Visual* source);
    bool IsReady();
    uObject* Navigation();
    void OnPageRootingCompleted();
    ::g::Fuse::Visual* Page();
    void Page(::g::Fuse::Visual* value);
    void RootImpl(::g::Fuse::Visual* source);
    void UnrootImpl();
    static NavigationPageProxy* New1();
};
// }

}}} // ::g::Fuse::Navigation
