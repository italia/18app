// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/Transition.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct Transition;}}}
namespace g{namespace Fuse{namespace Triggers{struct TransitionGroup;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class Transition :200
// {
::g::Fuse::Triggers::Trigger_type* Transition_typeof();
void Transition__ctor_5_fn(Transition* __this);
void Transition__AddUseTransition_fn(Transition* __this);
void Transition__get_AutoRelease_fn(Transition* __this, bool* __retval);
void Transition__set_AutoRelease_fn(Transition* __this, bool* value);
void Transition__get_Direction_fn(Transition* __this, int* __retval);
void Transition__set_Direction_fn(Transition* __this, int* value);
void Transition__get_Mode_fn(Transition* __this, int* __retval);
void Transition__set_Mode_fn(Transition* __this, int* value);
void Transition__New2_fn(Transition** __retval);
void Transition__OnPageProgressChanged_fn(Transition* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args);
void Transition__OnPlayStateChanged_fn(Transition* __this, int* state);
void Transition__OnProgressChanged_fn(Transition* __this);
void Transition__OnRooted_fn(Transition* __this);
void Transition__OnUnrooted_fn(Transition* __this);
void Transition__Priority_fn(Transition* __this, bool* isActive, bool* isBackward, uString* newPath, uString* oldPath, int* mode, uString* operationStyle, int* __retval);
void Transition__QuickDeactivate_fn(Transition* __this);
void Transition__get_Style_fn(Transition* __this, uString** __retval);
void Transition__set_Style_fn(Transition* __this, uString* value);
void Transition__get_UseTransition_fn(Transition* __this, int* __retval);
void Transition__set_UseTransition_fn(Transition* __this, int* value);

struct Transition : ::g::Fuse::Triggers::Trigger
{
    bool _autoRelease;
    int _direction;
    ::g::Fuse::Internal::MiniList _from;
    uStrong< ::g::Fuse::Triggers::TransitionGroup*> _group;
    int _mode;
    uStrong<uString*> _style;
    ::g::Fuse::Internal::MiniList _to;
    uStrong< ::g::Fuse::Animations::Animator*> _useAnimator;
    int _useTransition;
    bool IsSelected;

    void ctor_5();
    void AddUseTransition();
    bool AutoRelease();
    void AutoRelease(bool value);
    int Direction();
    void Direction(int value);
    int Mode();
    void Mode(int value);
    void OnPageProgressChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args);
    int Priority(bool isActive, bool isBackward, uString* newPath, uString* oldPath, int mode, uString* operationStyle);
    void QuickDeactivate();
    uString* Style();
    void Style(uString* value);
    int UseTransition();
    void UseTransition(int value);
    static Transition* New2();
};
// }

}}} // ::g::Fuse::Triggers
