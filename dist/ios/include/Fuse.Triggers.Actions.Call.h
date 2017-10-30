// This file was generated based on '/Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Phone/1.3.1/Phone/PhoneTrigger.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Call;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Call :34
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Call_typeof();
void Call__get_Number_fn(Call* __this, uString** __retval);
void Call__set_Number_fn(Call* __this, uString* value);
void Call__Perform_fn(Call* __this, ::g::Fuse::Node* target);

struct Call : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _Number;

    uString* Number();
    void Number(uString* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
