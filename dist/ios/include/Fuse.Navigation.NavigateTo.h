// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.NavigationTriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigateTo;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigateTo :53
// {
::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof();
void NavigateTo__get_Bypass_fn(NavigateTo* __this, bool* __retval);
void NavigateTo__set_Bypass_fn(NavigateTo* __this, bool* value);
void NavigateTo__get_ClearForwardHistory_fn(NavigateTo* __this, bool* __retval);
void NavigateTo__set_ClearForwardHistory_fn(NavigateTo* __this, bool* value);
void NavigateTo__Perform1_fn(NavigateTo* __this, uObject* ctx, ::g::Fuse::Node* n);
void NavigateTo__get_Target_fn(NavigateTo* __this, ::g::Fuse::Visual** __retval);
void NavigateTo__set_Target_fn(NavigateTo* __this, ::g::Fuse::Visual* value);

struct NavigateTo : ::g::Fuse::Navigation::NavigationTriggerAction
{
    bool _Bypass;
    bool _ClearForwardHistory;
    uStrong< ::g::Fuse::Visual*> _Target;

    bool Bypass();
    void Bypass(bool value);
    bool ClearForwardHistory();
    void ClearForwardHistory(bool value);
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
};
// }

}}} // ::g::Fuse::Navigation
