// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Input.IGesture.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollPositionChangedArgs;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct GesturePriorityConfig;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct PointerVelocity;}}}}
namespace g{namespace Fuse{struct RequestBringIntoViewArgs;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Scroller :21
// {
struct Scroller_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface6;
    ::g::Fuse::Input::IGesture interface7;
};

Scroller_type* Scroller_typeof();
void Scroller__ctor_4_fn(Scroller* __this, bool* ignore);
void Scroller__CheckLimits_fn(Scroller* __this);
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off);
void Scroller__get_DelayStart_fn(Scroller* __this, bool* __retval);
void Scroller__set_DelayStart_fn(Scroller* __this, bool* value);
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Scroller__FuseInputIGestureOnCaptureChanged_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, int* how, int* prev);
void Scroller__FuseInputIGestureOnLostCapture_fn(Scroller* __this, bool* forced);
void Scroller__FuseInputIGestureOnPointerMoved_fn(Scroller* __this, ::g::Fuse::Input::PointerMovedArgs* args, int* __retval);
void Scroller__FuseInputIGestureOnPointerPressed_fn(Scroller* __this, ::g::Fuse::Input::PointerPressedArgs* args, int* __retval);
void Scroller__FuseInputIGestureOnPointerReleased_fn(Scroller* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int* __retval);
void Scroller__FuseInputIGestureget_Priority_fn(Scroller* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval);
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position);
void Scroller__MoveUser_fn(Scroller* __this, int* flags, double* time);
void Scroller__New3_fn(bool* ignore, Scroller** __retval);
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args);
void Scroller__OnRooted_fn(Scroller* __this);
void Scroller__OnScrollPositionChanged_fn(Scroller* __this, uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args);
void Scroller__OnUnrooted_fn(Scroller* __this);
void Scroller__OnUpdated_fn(Scroller* __this);
void Scroller__PerformBringIntoView_fn(Scroller* __this);
void Scroller__get_ScrollableUserScroll_fn(Scroller* __this, bool* __retval);
void Scroller__StartInvalidateVisual_fn(Scroller* __this);
void Scroller__StopInvalidateVisual_fn(Scroller* __this);
void Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn(Scroller* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel);
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff);
void Scroller__UpdateScrollMax_fn(Scroller* __this);

struct Scroller : ::g::Fuse::Behavior
{
    bool _delayStart;
    int _down;
    uStrong< ::g::Fuse::Input::Gesture*> _gesture;
    bool _hasUpdated;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _horizontalGesture() { return _horizontalGesture_; }
    uStrong< ::g::Fuse::Visual*> _pendingBringIntoView;
    bool _pointerListening;
    ::g::Uno::Float2 _pointerPos;
    bool _pressed;
    ::g::Uno::Float2 _prevPos;
    double _prevTime;
    uStrong<uObject*> _region;
    uStrong< ::g::Fuse::Controls::ScrollView*> _scrollable;
    float _significance;
    ::g::Uno::Float2 _softCaptureCurrent;
    ::g::Uno::Float2 _softCaptureStart;
    ::g::Uno::Float2 _startPos;
    bool _updateFirstFrame;
    uStrong< ::g::Fuse::Motion::Simulation::PointerVelocity*> _velocity;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _verticalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _verticalGesture() { return _verticalGesture_; }

    void ctor_4(bool ignore);
    void CheckLimits();
    void CheckNeedUpdated(bool off);
    bool DelayStart();
    void DelayStart(bool value);
    ::g::Uno::Float2 FromWindow(::g::Uno::Float2 p);
    void Goto(::g::Uno::Float2 position);
    void MoveUser(int flags, double time);
    void OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args);
    void OnScrollPositionChanged(uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args);
    void OnUpdated();
    void PerformBringIntoView();
    bool ScrollableUserScroll();
    void StartInvalidateVisual();
    void StopInvalidateVisual();
    void UpdatePointerEvents(bool forceOff);
    void UpdateScrollMax();
    static Scroller* New3(bool ignore);
};
// }

}}} // ::g::Fuse::Gestures
