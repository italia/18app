// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/OpenAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.AnimatorState.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class OpenAnimatorState :57
// {
struct OpenAnimatorState_type : ::g::Fuse::Animations::AnimatorState_type
{
    void(*fp_Seek)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*);
};

OpenAnimatorState_type* OpenAnimatorState_typeof();
void OpenAnimatorState__ctor_1_fn(OpenAnimatorState* __this, ::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual);
void OpenAnimatorState__SeekProgress_fn(OpenAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval);
void OpenAnimatorState__SeekTime_fn(OpenAnimatorState* __this, double* nominal, double* interval, int* dir, double* strength, int* __retval);

struct OpenAnimatorState : ::g::Fuse::Animations::AnimatorState
{
    bool _seekDone;
    uStrong< ::g::Fuse::Animations::OpenAnimator*> Animator;

    void ctor_1(::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual);
    bool Seek(bool on, float interval, float strength, int dir) { bool __retval; return (((OpenAnimatorState_type*)__type)->fp_Seek)(this, &on, &interval, &strength, &dir, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
