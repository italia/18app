// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Animator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class AnimatorState :122
// {
struct AnimatorState_type : uType
{
    void(*fp_Disable)(::g::Fuse::Animations::AnimatorState*);
    void(*fp_SeekProgress)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*);
    void(*fp_SeekTime)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*);
};

AnimatorState_type* AnimatorState_typeof();
void AnimatorState__ctor__fn(AnimatorState* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual);
void AnimatorState__Disable_fn(AnimatorState* __this);

struct AnimatorState : uObject
{
    double TotalDuration;
    int Variant;
    uStrong< ::g::Fuse::Visual*> Visual;

    void ctor_(::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual);
    void Disable() { (((AnimatorState_type*)__type)->fp_Disable)(this); }
    int SeekProgress(double progress, double interval, int dir, double strength) { int __retval; return (((AnimatorState_type*)__type)->fp_SeekProgress)(this, &progress, &interval, &dir, &strength, &__retval), __retval; }
    int SeekTime(double nominal, double interval, int dir, double strength) { int __retval; return (((AnimatorState_type*)__type)->fp_SeekTime)(this, &nominal, &interval, &dir, &strength, &__retval), __retval; }
    static void Disable(AnimatorState* __this) { AnimatorState__Disable_fn(__this); }
};
// }

}}} // ::g::Fuse::Animations
