// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct ToggleSwipeActive;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ToggleSwipeActive :410
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof();
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target);
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value);

struct ToggleSwipeActive : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Target;

    ::g::Fuse::Gestures::SwipeGesture* Target();
    void Target(::g::Fuse::Gestures::SwipeGesture* value);
};
// }

}}} // ::g::Fuse::Gestures
