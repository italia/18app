// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Scaling.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Fuse{struct ScalingModes__IdentityMode;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// private sealed class ScalingModes.IdentityMode :13
// {
struct ScalingModes__IdentityMode_type : uType
{
    ::g::Fuse::IScalingMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof();
void ScalingModes__IdentityMode__ctor__fn(ScalingModes__IdentityMode* __this);
void ScalingModes__IdentityMode__GetScaleVector_fn(ScalingModes__IdentityMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval);
void ScalingModes__IdentityMode__New1_fn(ScalingModes__IdentityMode** __retval);
void ScalingModes__IdentityMode__Subscribe_fn(ScalingModes__IdentityMode* __this, uObject* transform, uObject** __retval);
void ScalingModes__IdentityMode__Unsubscribe_fn(ScalingModes__IdentityMode* __this, uObject* transform, uObject* sub);

struct ScalingModes__IdentityMode : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetScaleVector(::g::Fuse::Scaling* t);
    uObject* Subscribe(uObject* transform);
    void Unsubscribe(uObject* transform, uObject* sub);
    static ScalingModes__IdentityMode* New1();
};
// }

}} // ::g::Fuse
