// This file was generated based on /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/ToggleSelection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Selection{struct ToggleSelection;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Selection{

// public sealed class ToggleSelection :26
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSelection_typeof();
void ToggleSelection__get_Mode_fn(ToggleSelection* __this, int* __retval);
void ToggleSelection__set_Mode_fn(ToggleSelection* __this, int* value);
void ToggleSelection__Perform_fn(ToggleSelection* __this, ::g::Fuse::Node* target);

struct ToggleSelection : ::g::Fuse::Triggers::Actions::TriggerAction
{
    int _mode;

    int Mode();
    void Mode(int value);
};
// }

}}} // ::g::Fuse::Selection
