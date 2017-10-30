// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Swiper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// internal sealed class SwipeRegion :19
// {
struct SwipeRegion_type : uType
{
    ::g::Uno::UX::IPropertyListener interface0;
};

SwipeRegion_type* SwipeRegion_typeof();
void SwipeRegion__ctor_1_fn(SwipeRegion* __this);
void SwipeRegion__ActivateStrength_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, float* __retval);
void SwipeRegion__DoRevertActive_fn(SwipeRegion* __this);
void SwipeRegion__get_EffectiveLength_fn(SwipeRegion* __this, double* __retval);
void SwipeRegion__get_GesturePriority_fn(SwipeRegion* __this, int* __retval);
void SwipeRegion__set_GesturePriority_fn(SwipeRegion* __this, int* value);
void SwipeRegion__get_InProgress_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__set_InProgress_fn(SwipeRegion* __this, bool* value);
void SwipeRegion__InteractProgress_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, double* startProgress, bool* __retval);
void SwipeRegion__get_IsActive_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__set_IsActive_fn(SwipeRegion* __this, bool* value);
void SwipeRegion__get_IsEnabled_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__set_IsEnabled_fn(SwipeRegion* __this, bool* value);
void SwipeRegion__IsPointInside_fn(SwipeRegion* __this, ::g::Fuse::Elements::Element* prime, ::g::Uno::Float2* coord, bool* __retval);
void SwipeRegion__get_IsSelectable_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__get_IsStatic_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__New2_fn(SwipeRegion** __retval);
void SwipeRegion__get_Progress_fn(SwipeRegion* __this, double* __retval);
void SwipeRegion__ScalarDistance_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, float* __retval);
void SwipeRegion__ScalarValue_fn(SwipeRegion* __this, ::g::Uno::Float2* x, float* __retval);
void SwipeRegion__SetActive_fn(SwipeRegion* __this, bool* active);
void SwipeRegion__SetIsActive_fn(SwipeRegion* __this, bool* value, uObject* origin);
void SwipeRegion__SetProgress_fn(SwipeRegion* __this, double* value, int* flags, bool* __retval);
void SwipeRegion__get_StableProgress_fn(SwipeRegion* __this, double* __retval);
void SwipeRegion__add_Swiped_fn(SwipeRegion* __this, uDelegate* value);
void SwipeRegion__remove_Swiped_fn(SwipeRegion* __this, uDelegate* value);
void SwipeRegion__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeRegion* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct SwipeRegion : ::g::Uno::UX::PropertyObject
{
    int _gesturePriority;
    bool _inProgress;
    bool _isActive;
    static ::g::Uno::UX::Selector _isActiveName_;
    static ::g::Uno::UX::Selector& _isActiveName() { return _isActiveName_; }
    bool _isEnabled;
    double _progress;
    double _stableProgress;
    float ActivationThreshold;
    int Area;
    ::g::Uno::Float4 AreaVector;
    float AreaVectorDistance;
    bool AutoTrigger;
    float DeactivationThreshold;
    ::g::Uno::Float2 Direction;
    static ::g::Uno::UX::Selector InProgressName_;
    static ::g::Uno::UX::Selector& InProgressName() { return InProgressName_; }
    bool IsInterruptible;
    double Length;
    uStrong< ::g::Fuse::Elements::Element*> LengthElement;
    uStrong<uObject*> PointBody1D;
    int Priority;
    static ::g::Uno::UX::Selector ProgressName_;
    static ::g::Uno::UX::Selector& ProgressName() { return ProgressName_; }
    float Range;
    bool RevertActive;
    double TimeMultiplier;
    bool TriggerSwipe;
    uStrong<uDelegate*> Swiped1;

    void ctor_1();
    float ActivateStrength(::g::Uno::Float2 diff);
    void DoRevertActive();
    double EffectiveLength();
    int GesturePriority();
    void GesturePriority(int value);
    bool InProgress();
    void InProgress(bool value);
    bool InteractProgress(::g::Uno::Float2 diff, double startProgress);
    bool IsActive();
    void IsActive(bool value);
    bool IsEnabled();
    void IsEnabled(bool value);
    bool IsPointInside(::g::Fuse::Elements::Element* prime, ::g::Uno::Float2 coord);
    bool IsSelectable();
    bool IsStatic();
    double Progress();
    float ScalarDistance(::g::Uno::Float2 diff);
    float ScalarValue(::g::Uno::Float2 x);
    void SetActive(bool active);
    void SetIsActive(bool value, uObject* origin);
    bool SetProgress(double value, int flags);
    double StableProgress();
    void add_Swiped(uDelegate* value);
    void remove_Swiped(uDelegate* value);
    static SwipeRegion* New2();
};
// }

}}}} // ::g::Fuse::Gestures::Internal
