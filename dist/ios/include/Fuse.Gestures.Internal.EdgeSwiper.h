// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/EdgeSwiper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct EdgeSwiper;}}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct PointerVelocity;}}}}

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// internal sealed class EdgeSwiper :10
// {
uType* EdgeSwiper_typeof();
void EdgeSwiper__ctor__fn(EdgeSwiper* __this);
void EdgeSwiper__CalcProgress_fn(EdgeSwiper* __this);
void EdgeSwiper__CheckNeedUpdated_fn(EdgeSwiper* __this, bool* off);
void EdgeSwiper__Disable_fn(EdgeSwiper* __this);
void EdgeSwiper__get_Edge_fn(EdgeSwiper* __this, int* __retval);
void EdgeSwiper__set_Edge_fn(EdgeSwiper* __this, int* value);
void EdgeSwiper__get_EdgeThreshold_fn(EdgeSwiper* __this, float* __retval);
void EdgeSwiper__set_EdgeThreshold_fn(EdgeSwiper* __this, float* value);
void EdgeSwiper__Enable_fn(EdgeSwiper* __this);
void EdgeSwiper__FromWindow_fn(EdgeSwiper* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void EdgeSwiper__IsWithinSwipeBounds_fn(EdgeSwiper* __this, ::g::Uno::Float2* windowPoint, bool* __retval);
void EdgeSwiper__MoveUser_fn(EdgeSwiper* __this, ::g::Uno::Float2* coord, bool* release);
void EdgeSwiper__New1_fn(EdgeSwiper** __retval);
void EdgeSwiper__OnLostCapture_fn(EdgeSwiper* __this);
void EdgeSwiper__OnPointerMoved_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void EdgeSwiper__OnPointerPressed_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void EdgeSwiper__OnPointerReleased_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void EdgeSwiper__OnUpdated_fn(EdgeSwiper* __this);
void EdgeSwiper__PrimaryValue_fn(EdgeSwiper* __this, ::g::Uno::Float2* v, float* __retval);
void EdgeSwiper__get_Progress_fn(EdgeSwiper* __this, double* __retval);
void EdgeSwiper__set_Progress_fn(EdgeSwiper* __this, double* value);
void EdgeSwiper__add_ProgressChanged_fn(EdgeSwiper* __this, uDelegate* value);
void EdgeSwiper__remove_ProgressChanged_fn(EdgeSwiper* __this, uDelegate* value);
void EdgeSwiper__Rooted_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element* e);
void EdgeSwiper__get_Target_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element** __retval);
void EdgeSwiper__set_Target_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element* value);
void EdgeSwiper__Unrooted_fn(EdgeSwiper* __this);

struct EdgeSwiper : uObject
{
    ::g::Uno::Float2 _currentCoord;
    int _down;
    int _edge;
    float _edgeThreshold;
    uStrong< ::g::Fuse::Elements::Element*> _element;
    bool _hasUpdated;
    bool _isHardCapture;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _leftRightSwipe_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _leftRightSwipe() { return _leftRightSwipe_; }
    uStrong<uObject*> _pointBody1D;
    ::g::Uno::Float2 _previousCoord;
    double _prevTime;
    double _progress;
    ::g::Uno::Float2 _startCoord;
    double _startProgress;
    uStrong< ::g::Fuse::Elements::Element*> _target;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _upDownSwipe_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _upDownSwipe() { return _upDownSwipe_; }
    uStrong< ::g::Fuse::Motion::Simulation::PointerVelocity*> _velocity;
    float _velocityThreshold;
    uStrong<uDelegate*> ProgressChanged1;

    void ctor_();
    void CalcProgress();
    void CheckNeedUpdated(bool off);
    void Disable();
    int Edge();
    void Edge(int value);
    float EdgeThreshold();
    void EdgeThreshold(float value);
    void Enable();
    ::g::Uno::Float2 FromWindow(::g::Uno::Float2 p);
    bool IsWithinSwipeBounds(::g::Uno::Float2 windowPoint);
    void MoveUser(::g::Uno::Float2 coord, bool release);
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnUpdated();
    float PrimaryValue(::g::Uno::Float2 v);
    double Progress();
    void Progress(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Rooted(::g::Fuse::Elements::Element* e);
    ::g::Fuse::Elements::Element* Target();
    void Target(::g::Fuse::Elements::Element* value);
    void Unrooted();
    static EdgeSwiper* New1();
};
// }

}}}} // ::g::Fuse::Gestures::Internal
