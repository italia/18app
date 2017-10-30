// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.NavigationTriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigateToggle;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigateToggle :108
// {
::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof();
void NavigateToggle__ctor_3_fn(NavigateToggle* __this);
void NavigateToggle__New2_fn(NavigateToggle** __retval);
void NavigateToggle__Perform1_fn(NavigateToggle* __this, uObject* ctx, ::g::Fuse::Node* n);
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual** __retval);
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual* value);

struct NavigateToggle : ::g::Fuse::Navigation::NavigationTriggerAction
{
    uStrong< ::g::Fuse::Visual*> _Target;

    void ctor_3();
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
    static NavigateToggle* New2();
};
// }

}}} // ::g::Fuse::Navigation
