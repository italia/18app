// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Clicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.IGesture.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct GesturePriorityConfig;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Gestures{

// internal sealed class Clicker :101
// {
struct Clicker_type : uType
{
    ::g::Fuse::Input::IGesture interface0;
};

Clicker_type* Clicker_typeof();
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Visual* visual);
void Clicker__AttachClicker_fn(::g::Fuse::Visual* elm, int* priority, Clicker** __retval);
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__Detach_fn(Clicker* __this);
void Clicker__DoneCapture_fn(Clicker* __this);
void Clicker__FuseInputIGestureOnCaptureChanged_fn(Clicker* __this, ::g::Fuse::Input::PointerEventArgs* args, int* how, int* prev);
void Clicker__FuseInputIGestureOnLostCapture_fn(Clicker* __this, bool* forced);
void Clicker__FuseInputIGestureOnPointerMoved_fn(Clicker* __this, ::g::Fuse::Input::PointerMovedArgs* args, int* __retval);
void Clicker__FuseInputIGestureOnPointerPressed_fn(Clicker* __this, ::g::Fuse::Input::PointerPressedArgs* args, int* __retval);
void Clicker__FuseInputIGestureOnPointerReleased_fn(Clicker* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int* __retval);
void Clicker__FuseInputIGestureget_Priority_fn(Clicker* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval);
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval);
void Clicker__New1_fn(::g::Fuse::Visual* visual, Clicker** __retval);
void Clicker__OnRooted_fn(Clicker* __this);
void Clicker__OnUnrooted_fn(Clicker* __this);
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__ReleaseUpdate_fn(Clicker* __this);
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value);
void Clicker__Update_fn(Clicker* __this);

struct Clicker : uObject
{
    int _attachCount;
    int _clickCount;
    static uSStrong< ::g::Fuse::PropertyHandle*> _clickerProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _clickerProperty() { return _clickerProperty_; }
    uStrong< ::g::Fuse::Input::Gesture*> _gesture;
    bool _hasUpdate;
    bool _hovering;
    uStrong< ::g::Fuse::Input::PointerEventArgs*> _lastArgs;
    double _lastUpTime;
    float _longPressTimeout;
    float _maxDoubleInterval;
    float _maxTapDistanceMoved;
    float _maxTapTimeHeld;
    bool _maybeTap;
    ::g::Uno::Float2 _pressedPosition;
    int _priority;
    ::g::Uno::Float2 _startCoord;
    double _startTime;
    int _tapCount;
    uStrong< ::g::Fuse::Visual*> _visual;
    uStrong<uDelegate*> ClickedEvent1;
    uStrong<uDelegate*> LongPressedEvent1;
    uStrong<uDelegate*> PressingEvent1;
    uStrong<uDelegate*> TappedEvent1;

    void ctor_(::g::Fuse::Visual* visual);
    void add_ClickedEvent(uDelegate* value);
    void remove_ClickedEvent(uDelegate* value);
    void Detach();
    void DoneCapture();
    void add_LongPressedEvent(uDelegate* value);
    void remove_LongPressedEvent(uDelegate* value);
    bool NeedCapture();
    void OnRooted();
    void OnUnrooted();
    void add_PressingEvent(uDelegate* value);
    void remove_PressingEvent(uDelegate* value);
    void ReleaseUpdate();
    void add_TappedEvent(uDelegate* value);
    void remove_TappedEvent(uDelegate* value);
    void Update();
    static Clicker* AttachClicker(::g::Fuse::Visual* elm, int priority);
    static Clicker* New1(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Gestures
