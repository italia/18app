// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class BackForwardNavigationTriggerAction :123
// {
struct BackForwardNavigationTriggerAction_type : ::g::Fuse::Triggers::Actions::TriggerAction_type
{
    void(*fp_Perform1)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*);
};

BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof();
void BackForwardNavigationTriggerAction__ctor_2_fn(BackForwardNavigationTriggerAction* __this);
void BackForwardNavigationTriggerAction__get_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject** __retval);
void BackForwardNavigationTriggerAction__set_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject* value);
void BackForwardNavigationTriggerAction__Perform_fn(BackForwardNavigationTriggerAction* __this, ::g::Fuse::Node* n);

struct BackForwardNavigationTriggerAction : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _NavigationContext;

    void ctor_2();
    uObject* NavigationContext();
    void NavigationContext(uObject* value);
    void Perform1(uObject* ctx, ::g::Fuse::Node* node) { (((BackForwardNavigationTriggerAction_type*)__type)->fp_Perform1)(this, ctx, node); }
};
// }

}}} // ::g::Fuse::Navigation
