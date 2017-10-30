// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Resize.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Resize;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Resize :32
// {
::g::Fuse::Animations::Animator_type* Resize_typeof();
void Resize__ctor_3_fn(Resize* __this);
void Resize__CreateState_fn(Resize* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Resize__New2_fn(Resize** __retval);
void Resize__get_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual** __retval);
void Resize__set_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual* value);
void Resize__get_RelativeTo_fn(Resize* __this, uObject** __retval);
void Resize__set_RelativeTo_fn(Resize* __this, uObject* value);
void Resize__get_Target_fn(Resize* __this, ::g::Fuse::Visual** __retval);
void Resize__set_Target_fn(Resize* __this, ::g::Fuse::Visual* value);
void Resize__get_Vector_fn(Resize* __this, ::g::Uno::Float2* __retval);
void Resize__set_Vector_fn(Resize* __this, ::g::Uno::Float2* value);

struct Resize : ::g::Fuse::Animations::TrackAnimator
{
    uStrong<uObject*> _resizeMode;
    uStrong< ::g::Fuse::Visual*> _RelativeNode;
    uStrong< ::g::Fuse::Visual*> _Target;

    void ctor_3();
    ::g::Fuse::Visual* RelativeNode();
    void RelativeNode(::g::Fuse::Visual* value);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
    ::g::Uno::Float2 Vector();
    void Vector(::g::Uno::Float2 value);
    static Resize* New2();
};
// }

}}} // ::g::Fuse::Animations
