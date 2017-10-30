// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class NavigationTriggerAction :9
// {
struct NavigationTriggerAction_type : ::g::Fuse::Triggers::Actions::TriggerAction_type
{
    void(*fp_Perform1)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*);
};

NavigationTriggerAction_type* NavigationTriggerAction_typeof();
void NavigationTriggerAction__ctor_2_fn(NavigationTriggerAction* __this);
void NavigationTriggerAction__get_NavigationContext_fn(NavigationTriggerAction* __this, uObject** __retval);
void NavigationTriggerAction__set_NavigationContext_fn(NavigationTriggerAction* __this, uObject* value);
void NavigationTriggerAction__Perform_fn(NavigationTriggerAction* __this, ::g::Fuse::Node* n);

struct NavigationTriggerAction : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _NavigationContext;

    void ctor_2();
    uObject* NavigationContext();
    void NavigationContext(uObject* value);
    void Perform1(uObject* ctx, ::g::Fuse::Node* n) { (((NavigationTriggerAction_type*)__type)->fp_Perform1)(this, ctx, n); }
};
// }

}}} // ::g::Fuse::Navigation
