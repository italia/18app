// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TrackAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.AnimatorState.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class TrackAnimatorState :266
// {
struct TrackAnimatorState_type : ::g::Fuse::Animations::AnimatorState_type
{
    void(*fp_SeekObjectValue)(::g::Fuse::Animations::TrackAnimatorState*, uObject*, float*);
    void(*fp_SeekValue)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*);
};

TrackAnimatorState_type* TrackAnimatorState_typeof();
void TrackAnimatorState__ctor_1_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual);
void TrackAnimatorState__get_Duration_fn(TrackAnimatorState* __this, double* __retval);
void TrackAnimatorState__get_Easing_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::Easing** __retval);
void TrackAnimatorState__get_IsBackward_fn(TrackAnimatorState* __this, bool* __retval);
void TrackAnimatorState__SeekObjectValue_fn(TrackAnimatorState* __this, uObject* value, float* strength);
void TrackAnimatorState__SeekProgress_fn(TrackAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval);
void TrackAnimatorState__SeekTime_fn(TrackAnimatorState* __this, double* elapsed, double* interval, int* dir, double* strength, int* __retval);
void TrackAnimatorState__SeekValue_fn(TrackAnimatorState* __this, ::g::Uno::Float4* value, float* strength);

struct TrackAnimatorState : ::g::Fuse::Animations::AnimatorState
{
    uStrong<uObject*> _continuousProvider;
    uStrong<uObject*> _discreteProvider;
    uStrong< ::g::Fuse::Animations::TrackAnimator*> Animator;

    void ctor_1(::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual);
    double Duration();
    ::g::Fuse::Animations::Easing* Easing();
    bool IsBackward();
    void SeekObjectValue(uObject* value, float strength) { (((TrackAnimatorState_type*)__type)->fp_SeekObjectValue)(this, value, &strength); }
    void SeekValue(::g::Uno::Float4 value, float strength);
    static void SeekObjectValue(TrackAnimatorState* __this, uObject* value, float strength) { TrackAnimatorState__SeekObjectValue_fn(__this, value, &strength); }
    static void SeekValue(TrackAnimatorState* __this, ::g::Uno::Float4 value, float strength);
};

}}} // ::g::Fuse::Animations

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Animations{

inline void TrackAnimatorState::SeekValue(::g::Uno::Float4 value, float strength) { (((TrackAnimatorState_type*)__type)->fp_SeekValue)(this, &value, &strength); }
inline void TrackAnimatorState::SeekValue(TrackAnimatorState* __this, ::g::Uno::Float4 value, float strength) { TrackAnimatorState__SeekValue_fn(__this, &value, &strength); }
// }

}}} // ::g::Fuse::Animations
