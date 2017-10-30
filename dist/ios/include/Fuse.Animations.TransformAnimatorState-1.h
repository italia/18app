// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimatorState.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimatorState;}}}
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class TransformAnimatorState<TransformType> :132
// {
::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof();
void TransformAnimatorState__ctor_2_fn(TransformAnimatorState* __this, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p);
void TransformAnimatorState__Disable_fn(TransformAnimatorState* __this);
void TransformAnimatorState__New1_fn(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, TransformAnimatorState** __retval);
void TransformAnimatorState__OnMatrixChanged_fn(TransformAnimatorState* __this, ::g::Fuse::Transform* ignore);
void TransformAnimatorState__SeekValue_fn(TransformAnimatorState* __this, ::g::Uno::Float4* value, float* strength);

struct TransformAnimatorState : ::g::Fuse::Animations::TrackAnimatorState
{
    bool _inSeek;
    float _lastStrength;
    uStrong<uDelegate*> _matAct;
    uStrong< ::g::Fuse::Animations::TransformAnimator*> Animator1;
    uStrong<uObject*> mixHandle;
    uStrong< ::g::Fuse::Transform*> transform;

    void ctor_2(::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p);
    void OnMatrixChanged(::g::Fuse::Transform* ignore);
    static TransformAnimatorState* New1(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p);
};
// }

}}} // ::g::Fuse::Animations
