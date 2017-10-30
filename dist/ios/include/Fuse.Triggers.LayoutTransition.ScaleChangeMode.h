// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Triggers/LayoutAnimation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ScaleChangeMode;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class LayoutTransition.ScaleChangeMode :107
// {
struct LayoutTransition__ScaleChangeMode_type : uType
{
    ::g::Fuse::IScalingMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof();
void LayoutTransition__ScaleChangeMode__ctor__fn(LayoutTransition__ScaleChangeMode* __this);
void LayoutTransition__ScaleChangeMode__GetScaleVector_fn(LayoutTransition__ScaleChangeMode* __this, ::g::Fuse::Scaling* v, ::g::Uno::Float3* __retval);
void LayoutTransition__ScaleChangeMode__New1_fn(LayoutTransition__ScaleChangeMode** __retval);
void LayoutTransition__ScaleChangeMode__Subscribe_fn(LayoutTransition__ScaleChangeMode* __this, uObject* transform, uObject** __retval);
void LayoutTransition__ScaleChangeMode__Unsubscribe_fn(LayoutTransition__ScaleChangeMode* __this, uObject* transform, uObject* sub);

struct LayoutTransition__ScaleChangeMode : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetScaleVector(::g::Fuse::Scaling* v);
    uObject* Subscribe(uObject* transform);
    void Unsubscribe(uObject* transform, uObject* sub);
    static LayoutTransition__ScaleChangeMode* New1();
};
// }

}}} // ::g::Fuse::Triggers
