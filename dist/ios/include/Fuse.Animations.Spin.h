// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Spin.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.OpenAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Spin;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Spin :18
// {
::g::Fuse::Animations::Animator_type* Spin_typeof();
void Spin__CreateState_fn(Spin* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Spin__get_Frequency_fn(Spin* __this, double* __retval);
void Spin__set_Frequency_fn(Spin* __this, double* value);
void Spin__get_Target_fn(Spin* __this, ::g::Fuse::Visual** __retval);
void Spin__set_Target_fn(Spin* __this, ::g::Fuse::Visual* value);

struct Spin : ::g::Fuse::Animations::OpenAnimator
{
    double _hertz;
    uStrong< ::g::Fuse::Visual*> _Target;

    double Frequency();
    void Frequency(double value);
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
};
// }

}}} // ::g::Fuse::Animations
