// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Blender.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.Blender-1.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Internal{struct Float4Blender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class Float4Blender :197
// {
::g::Fuse::Internal::Blender_type* Float4Blender_typeof();
void Float4Blender__ctor_1_fn(Float4Blender* __this);
void Float4Blender__Add_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval);
void Float4Blender__Length_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* __retval);
void Float4Blender__Lerp_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, double* d, ::g::Uno::Float4* __retval);
void Float4Blender__New1_fn(Float4Blender** __retval);
void Float4Blender__Sub_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval);
void Float4Blender__ToUnit_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* length, ::g::Uno::Float4* __retval);
void Float4Blender__Weight_fn(Float4Blender* __this, ::g::Uno::Float4* v, double* w, ::g::Uno::Float4* __retval);
void Float4Blender__get_Zero_fn(Float4Blender* __this, ::g::Uno::Float4* __retval);

struct Float4Blender : ::g::Fuse::Internal::Blender
{
    void ctor_1();
    static Float4Blender* New1();
};
// }

}}} // ::g::Fuse::Internal
