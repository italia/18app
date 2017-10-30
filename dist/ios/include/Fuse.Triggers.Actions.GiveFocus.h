// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Focus.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct GiveFocus;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class GiveFocus :25
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof();
void GiveFocus__ctor_2_fn(GiveFocus* __this);
void GiveFocus__New2_fn(GiveFocus** __retval);
void GiveFocus__Perform_fn(GiveFocus* __this, ::g::Fuse::Node* target);
void GiveFocus__get_Target_fn(GiveFocus* __this, ::g::Fuse::Visual** __retval);
void GiveFocus__set_Target_fn(GiveFocus* __this, ::g::Fuse::Visual* value);

struct GiveFocus : ::g::Fuse::Triggers::Actions::TriggerAction
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> Singleton_;
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*>& Singleton() { return Singleton_; }
    uStrong< ::g::Fuse::Visual*> _Target;

    void ctor_2();
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
    static GiveFocus* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
