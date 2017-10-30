// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Blender.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.Blender-1.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{namespace Internal{struct Float3Blender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class Float3Blender :181
// {
::g::Fuse::Internal::Blender_type* Float3Blender_typeof();
void Float3Blender__ctor_1_fn(Float3Blender* __this);
void Float3Blender__Add_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);
void Float3Blender__Length_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* __retval);
void Float3Blender__Lerp_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, double* d, ::g::Uno::Float3* __retval);
void Float3Blender__New1_fn(Float3Blender** __retval);
void Float3Blender__Sub_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);
void Float3Blender__ToUnit_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* length, ::g::Uno::Float3* __retval);
void Float3Blender__Weight_fn(Float3Blender* __this, ::g::Uno::Float3* v, double* w, ::g::Uno::Float3* __retval);
void Float3Blender__get_Zero_fn(Float3Blender* __this, ::g::Uno::Float3* __retval);

struct Float3Blender : ::g::Fuse::Internal::Blender
{
    void ctor_1();
    static Float3Blender* New1();
};
// }

}}} // ::g::Fuse::Internal
