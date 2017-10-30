// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Scaling.h>
namespace g{namespace Fuse{namespace Animations{struct Scale;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Scale :331
// {
::g::Fuse::Animations::TransformAnimator_type* Scale_typeof();
void Scale__ctor_4_fn(Scale* __this);
void Scale__get_Factor_fn(Scale* __this, float* __retval);
void Scale__set_Factor_fn(Scale* __this, float* value);
void Scale__New2_fn(Scale** __retval);
void Scale__get_RelativeTo_fn(Scale* __this, uObject** __retval);
void Scale__set_RelativeTo_fn(Scale* __this, uObject* value);
void Scale__Update_fn(Scale* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Scaling* t, ::g::Uno::Float4* value);

struct Scale : ::g::Fuse::Animations::TransformAnimator
{
    uStrong<uObject*> _relativeTo;

    void ctor_4();
    float Factor();
    void Factor(float value);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    static Scale* New2();
};
// }

}}} // ::g::Fuse::Animations
