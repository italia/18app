// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Clicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Gestures{struct ClickerTrigger;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract class ClickerTrigger :19
// {
::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof();
void ClickerTrigger__ctor_5_fn(ClickerTrigger* __this);
void ClickerTrigger__Accept_fn(ClickerTrigger* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval);
void ClickerTrigger__get_GesturePriority_fn(ClickerTrigger* __this, int* __retval);
void ClickerTrigger__set_GesturePriority_fn(ClickerTrigger* __this, int* value);
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this);
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this);
void ClickerTrigger__get_PointerIndex_fn(ClickerTrigger* __this, int* __retval);
void ClickerTrigger__set_PointerIndex_fn(ClickerTrigger* __this, int* value);

struct ClickerTrigger : ::g::Fuse::Triggers::Trigger
{
    int _gesturePriority;
    int _pointerIndex;
    uStrong< ::g::Fuse::Gestures::Clicker*> Clicker;

    void ctor_5();
    bool Accept(::g::Fuse::Input::PointerEventArgs* args);
    int GesturePriority();
    void GesturePriority(int value);
    int PointerIndex();
    void PointerIndex(int value);
};
// }

}}} // ::g::Fuse::Gestures
