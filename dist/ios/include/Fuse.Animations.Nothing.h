// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Nothing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Nothing;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Nothing :10
// {
::g::Fuse::Animations::Animator_type* Nothing_typeof();
void Nothing__ctor_3_fn(Nothing* __this);
void Nothing__CreateState_fn(Nothing* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Nothing__New2_fn(Nothing** __retval);

struct Nothing : ::g::Fuse::Animations::TrackAnimator
{
    void ctor_3();
    static Nothing* New2();
};
// }

}}} // ::g::Fuse::Animations
