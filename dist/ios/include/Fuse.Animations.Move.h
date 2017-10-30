// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Translation.h>
namespace g{namespace Fuse{namespace Animations{struct Move;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Move :214
// {
::g::Fuse::Animations::TransformAnimator_type* Move_typeof();
void Move__ctor_4_fn(Move* __this);
void Move__New2_fn(Move** __retval);
void Move__get_RelativeTo_fn(Move* __this, uObject** __retval);
void Move__set_RelativeTo_fn(Move* __this, uObject* value);
void Move__Update_fn(Move* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Translation* t, ::g::Uno::Float4* value);

struct Move : ::g::Fuse::Animations::TransformAnimator
{
    uStrong<uObject*> _relativeTo;

    void ctor_4();
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    static Move* New2();
};
// }

}}} // ::g::Fuse::Animations
