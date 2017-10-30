// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProperty;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public static class NavigationPageProperty :325
// {
uClassType* NavigationPageProperty_typeof();
void NavigationPageProperty__AddPageWatcher_fn(::g::Fuse::Visual* where, uObject* callback);
void NavigationPageProperty__GetNavigationPage_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval);
void NavigationPageProperty__GetWatcherList_fn(::g::Fuse::Visual* where, bool* optional, ::g::Uno::Collections::List** __retval);
void NavigationPageProperty__RemovePageWatcher_fn(::g::Fuse::Visual* where, uObject* callback);

struct NavigationPageProperty : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _pageProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _pageProperty() { return _pageProperty_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _watchers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _watchers() { return _watchers_; }
    static uSStrong< ::g::Uno::Collections::List*> RootedBindings_;
    static uSStrong< ::g::Uno::Collections::List*>& RootedBindings() { return RootedBindings_; }

    static void AddPageWatcher(::g::Fuse::Visual* where, uObject* callback);
    static ::g::Fuse::Visual* GetNavigationPage(::g::Fuse::Visual* n);
    static ::g::Uno::Collections::List* GetWatcherList(::g::Fuse::Visual* where, bool optional);
    static void RemovePageWatcher(::g::Fuse::Visual* where, uObject* callback);
};
// }

}}} // ::g::Fuse::Navigation
