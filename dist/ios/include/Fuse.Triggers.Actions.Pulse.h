// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Pulse.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Pulse;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Pulse :21
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof();
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target);
void Pulse__get_Target_fn(Pulse* __this, uObject** __retval);
void Pulse__set_Target_fn(Pulse* __this, uObject* value);

struct Pulse : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _Target;

    uObject* Target();
    void Target(uObject* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
