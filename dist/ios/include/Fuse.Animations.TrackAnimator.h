// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TrackAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Animator.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract class TrackAnimator :48
// {
::g::Fuse::Animations::Animator_type* TrackAnimator_typeof();
void TrackAnimator__ctor_2_fn(TrackAnimator* __this);
void TrackAnimator__get_AnimatorVariant_fn(TrackAnimator* __this, int* __retval);
void TrackAnimator__get_DelayBack_fn(TrackAnimator* __this, double* __retval);
void TrackAnimator__set_DelayBack_fn(TrackAnimator* __this, double* value);
void TrackAnimator__get_Duration_fn(TrackAnimator* __this, double* __retval);
void TrackAnimator__set_Duration_fn(TrackAnimator* __this, double* value);
void TrackAnimator__get_DurationBack_fn(TrackAnimator* __this, double* __retval);
void TrackAnimator__set_DurationBack_fn(TrackAnimator* __this, double* value);
void TrackAnimator__get_Easing_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing** __retval);
void TrackAnimator__set_Easing_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing* value);
void TrackAnimator__get_EasingBack_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing** __retval);
void TrackAnimator__set_EasingBack_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing* value);
void TrackAnimator__GetDurationWithDelay_fn(TrackAnimator* __this, int* dir, double* __retval);
void TrackAnimator__GetProvider_fn(TrackAnimator* __this, int* variant, uObject** __retval);
void TrackAnimator__get_HasBack_fn(TrackAnimator* __this, bool* __retval);
void TrackAnimator__MarkDiscrete_fn(TrackAnimator* __this);
void TrackAnimator__get_Weight_fn(TrackAnimator* __this, double* __retval);
void TrackAnimator__set_Weight_fn(TrackAnimator* __this, double* value);

struct TrackAnimator : ::g::Fuse::Animations::Animator
{
    uStrong<uObject*> _continuousProvider;
    double _delayBack;
    uStrong<uObject*> _discreteProvider;
    double _durationBack;
    uStrong< ::g::Fuse::Animations::Easing*> _easing;
    uStrong< ::g::Fuse::Animations::Easing*> _easingBack;
    bool _hasDelayBack;
    bool _hasDurationBack;
    bool _hasEasingBack;
    bool _isDiscrete;
    uStrong<uObject*> _objectValue;
    ::g::Uno::Float4 _vectorValue;
    double _weight;
    double _Duration;

    void ctor_2();
    double DelayBack();
    void DelayBack(double value);
    double Duration();
    void Duration(double value);
    double DurationBack();
    void DurationBack(double value);
    ::g::Fuse::Animations::Easing* Easing();
    void Easing(::g::Fuse::Animations::Easing* value);
    ::g::Fuse::Animations::Easing* EasingBack();
    void EasingBack(::g::Fuse::Animations::Easing* value);
    uObject* GetProvider(int variant);
    bool HasBack();
    void MarkDiscrete();
    double Weight();
    void Weight(double value);
};
// }

}}} // ::g::Fuse::Animations
