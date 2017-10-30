// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/SwipeNavigate.uno.
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
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct GesturePriorityConfig;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct PointerVelocity;}}}}
namespace g{namespace Fuse{namespace Navigation{struct SwipeNavigate;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class SwipeNavigate :89
// {
struct SwipeNavigate_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Input::IGesture interface6;
};

SwipeNavigate_type* SwipeNavigate_typeof();
void SwipeNavigate__ctor_3_fn(SwipeNavigate* __this);
void SwipeNavigate__get_AllowedDirections_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__set_AllowedDirections_fn(SwipeNavigate* __this, int* value);
void SwipeNavigate__DetermineSnap_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__get_Direction_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval);
void SwipeNavigate__get_Distance_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval);
void SwipeNavigate__get_ElapsedTime_fn(SwipeNavigate* __this, double* __retval);
void SwipeNavigate__get_ForwardDirection_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__set_ForwardDirection_fn(SwipeNavigate* __this, int* value);
void SwipeNavigate__FuseInputIGestureOnCaptureChanged_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerEventArgs* args, int* how, int* prev);
void SwipeNavigate__FuseInputIGestureOnLostCapture_fn(SwipeNavigate* __this, bool* forced);
void SwipeNavigate__FuseInputIGestureOnPointerMoved_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerMovedArgs* args, int* __retval);
void SwipeNavigate__FuseInputIGestureOnPointerPressed_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerPressedArgs* args, int* __retval);
void SwipeNavigate__FuseInputIGestureOnPointerReleased_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int* __retval);
void SwipeNavigate__FuseInputIGestureget_Priority_fn(SwipeNavigate* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval);
void SwipeNavigate__GetNavigationArgs_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::UpdateSeekArgs** __retval);
void SwipeNavigate__Invert_fn(SwipeNavigate* __this, int* sd, int* __retval);
void SwipeNavigate__get_IsHorizontal_fn(SwipeNavigate* __this, bool* __retval);
void SwipeNavigate__get_Navigation_fn(SwipeNavigate* __this, uObject** __retval);
void SwipeNavigate__New2_fn(SwipeNavigate** __retval);
void SwipeNavigate__OnRooted_fn(SwipeNavigate* __this);
void SwipeNavigate__OnUnrooted_fn(SwipeNavigate* __this);
void SwipeNavigate__get_ProgressVelocity_fn(SwipeNavigate* __this, float* __retval);
void SwipeNavigate__get_Scale_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval);
void SwipeNavigate__get_SwipeDirection_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__set_SwipeDirection_fn(SwipeNavigate* __this, int* value);
void SwipeNavigate__get_VelocityThreshold_fn(SwipeNavigate* __this, float* __retval);
void SwipeNavigate__set_VelocityThreshold_fn(SwipeNavigate* __this, float* value);

struct SwipeNavigate : ::g::Fuse::Behavior
{
    ::g::Uno::Float2 _currentCoord;
    uStrong<uObject*> _currentNavigation;
    int _forwardDirection;
    uStrong< ::g::Fuse::Input::Gesture*> _gesture;
    bool _hasMaxPages;
    uStrong< ::g::Fuse::Elements::Element*> _lengthNode;
    float _maxPages;
    float _prevDistance;
    ::g::Uno::Float2 _startCoord;
    bool _startedSeek;
    double _startTime;
    int _swipeAllow;
    uStrong< ::g::Fuse::Motion::Simulation::PointerVelocity*> _velocity;
    static float elasticDecay_;
    static float& elasticDecay() { return elasticDecay_; }
    static float elasticScale_;
    static float& elasticScale() { return elasticScale_; }
    float _VelocityThreshold;

    void ctor_3();
    int AllowedDirections();
    void AllowedDirections(int value);
    int DetermineSnap();
    ::g::Uno::Float2 Direction();
    ::g::Uno::Float2 Distance();
    double ElapsedTime();
    int ForwardDirection();
    void ForwardDirection(int value);
    ::g::Fuse::Navigation::UpdateSeekArgs* GetNavigationArgs();
    int Invert(int sd);
    bool IsHorizontal();
    uObject* Navigation();
    float ProgressVelocity();
    ::g::Uno::Float2 Scale();
    int SwipeDirection();
    void SwipeDirection(int value);
    float VelocityThreshold();
    void VelocityThreshold(float value);
    static SwipeNavigate* New2();
};
// }

}}} // ::g::Fuse::Navigation
