// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Blender.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.Blender-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Internal{struct Float2Blender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class Float2Blender :165
// {
::g::Fuse::Internal::Blender_type* Float2Blender_typeof();
void Float2Blender__ctor_1_fn(Float2Blender* __this);
void Float2Blender__Add_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void Float2Blender__Length_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* __retval);
void Float2Blender__Lerp_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, double* d, ::g::Uno::Float2* __retval);
void Float2Blender__New1_fn(Float2Blender** __retval);
void Float2Blender__Sub_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void Float2Blender__ToUnit_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* length, ::g::Uno::Float2* __retval);
void Float2Blender__Weight_fn(Float2Blender* __this, ::g::Uno::Float2* v, double* w, ::g::Uno::Float2* __retval);
void Float2Blender__get_Zero_fn(Float2Blender* __this, ::g::Uno::Float2* __retval);

struct Float2Blender : ::g::Fuse::Internal::Blender
{
    void ctor_1();
    static Float2Blender* New1();
};
// }

}}} // ::g::Fuse::Internal
