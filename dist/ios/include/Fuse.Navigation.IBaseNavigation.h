// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract interface IBaseNavigation :56
// {
uInterfaceType* IBaseNavigation_typeof();

struct IBaseNavigation
{
    void(*fp_get_CanGoBack)(uObject*, bool*);
    void(*fp_get_CanGoForward)(uObject*, bool*);
    void(*fp_GoBack)(uObject*);
    void(*fp_GoForward)(uObject*);
    void(*fp_add_HistoryChanged)(uObject*, uDelegate*);
    void(*fp_remove_HistoryChanged)(uObject*, uDelegate*);
    static bool CanGoBack(const uInterface& __this) { bool __retval; return __this.VTable<IBaseNavigation>()->fp_get_CanGoBack(__this, &__retval), __retval; }
    static bool CanGoForward(const uInterface& __this) { bool __retval; return __this.VTable<IBaseNavigation>()->fp_get_CanGoForward(__this, &__retval), __retval; }
    static void GoBack(const uInterface& __this) { __this.VTable<IBaseNavigation>()->fp_GoBack(__this); }
    static void GoForward(const uInterface& __this) { __this.VTable<IBaseNavigation>()->fp_GoForward(__this); }
    static void add_HistoryChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IBaseNavigation>()->fp_add_HistoryChanged(__this, value); }
    static void remove_HistoryChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IBaseNavigation>()->fp_remove_HistoryChanged(__this, value); }
};
// }

}}} // ::g::Fuse::Navigation
