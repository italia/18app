// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/OpenAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Animator.h>
namespace g{namespace Fuse{namespace Animations{struct OpenAnimator;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract class OpenAnimator :14
// {
::g::Fuse::Animations::Animator_type* OpenAnimator_typeof();
void OpenAnimator__get_AnimatorVariant_fn(OpenAnimator* __this, int* __retval);
void OpenAnimator__get_Duration_fn(OpenAnimator* __this, double* __retval);
void OpenAnimator__set_Duration_fn(OpenAnimator* __this, double* value);
void OpenAnimator__GetDelay_fn(OpenAnimator* __this, int* dir, double* totalDuration, double* __retval);
void OpenAnimator__GetDurationWithDelay_fn(OpenAnimator* __this, int* dir, double* __retval);
void OpenAnimator__get_HasDuration_fn(OpenAnimator* __this, bool* __retval);

struct OpenAnimator : ::g::Fuse::Animations::Animator
{
    double _duration;
    bool _hasDuration;

    double Duration();
    void Duration(double value);
    double GetDelay(int dir, double totalDuration);
    bool HasDuration();
};
// }

}}} // ::g::Fuse::Animations
