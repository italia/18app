// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract interface INavigation :77
// {
uInterfaceType* INavigation_typeof();

struct INavigation
{
    void(*fp_get_ActivePage)(uObject*, ::g::Fuse::Visual**);
    void(*fp_add_ActivePageChanged)(uObject*, uDelegate*);
    void(*fp_remove_ActivePageChanged)(uObject*, uDelegate*);
    void(*fp_GetPageState)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*);
    void(*fp_Goto)(uObject*, ::g::Fuse::Visual*, int*);
    void(*fp_add_Navigated)(uObject*, uDelegate*);
    void(*fp_remove_Navigated)(uObject*, uDelegate*);
    void(*fp_add_PageProgressChanged)(uObject*, uDelegate*);
    void(*fp_remove_PageProgressChanged)(uObject*, uDelegate*);
    void(*fp_get_State)(uObject*, int*);
    void(*fp_add_StateChanged)(uObject*, uDelegate*);
    void(*fp_remove_StateChanged)(uObject*, uDelegate*);
    void(*fp_Toggle)(uObject*, ::g::Fuse::Visual*);
    static ::g::Fuse::Visual* ActivePage(const uInterface& __this) { ::g::Fuse::Visual* __retval; return __this.VTable<INavigation>()->fp_get_ActivePage(__this, &__retval), __retval; }
    static void add_ActivePageChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_add_ActivePageChanged(__this, value); }
    static void remove_ActivePageChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_remove_ActivePageChanged(__this, value); }
    static ::g::Fuse::Navigation::NavigationPageState GetPageState(const uInterface& __this, ::g::Fuse::Visual* page);
    static void Goto(const uInterface& __this, ::g::Fuse::Visual* node, int mode) { __this.VTable<INavigation>()->fp_Goto(__this, node, &mode); }
    static void add_Navigated(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_add_Navigated(__this, value); }
    static void remove_Navigated(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_remove_Navigated(__this, value); }
    static void add_PageProgressChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_add_PageProgressChanged(__this, value); }
    static void remove_PageProgressChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_remove_PageProgressChanged(__this, value); }
    static int State(const uInterface& __this) { int __retval; return __this.VTable<INavigation>()->fp_get_State(__this, &__retval), __retval; }
    static void add_StateChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_add_StateChanged(__this, value); }
    static void remove_StateChanged(const uInterface& __this, uDelegate* value) { __this.VTable<INavigation>()->fp_remove_StateChanged(__this, value); }
    static void Toggle(const uInterface& __this, ::g::Fuse::Visual* node) { __this.VTable<INavigation>()->fp_Toggle(__this, node); }
};

}}} // ::g::Fuse::Navigation

#include <Fuse.Navigation.NavigationPageState.h>

namespace g{
namespace Fuse{
namespace Navigation{

inline ::g::Fuse::Navigation::NavigationPageState INavigation::GetPageState(const uInterface& __this, ::g::Fuse::Visual* page) { ::g::Fuse::Navigation::NavigationPageState __retval; return __this.VTable<INavigation>()->fp_GetPageState(__this, page, &__retval), __retval; }
// }

}}} // ::g::Fuse::Navigation
