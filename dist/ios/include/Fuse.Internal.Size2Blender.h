// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Blender.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.Blender-1.h>
#include <Uno.UX.Size2.h>
namespace g{namespace Fuse{namespace Internal{struct Size2Blender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class Size2Blender :104
// {
::g::Fuse::Internal::Blender_type* Size2Blender_typeof();
void Size2Blender__ctor_1_fn(Size2Blender* __this);
void Size2Blender__Add_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval);
void Size2Blender__Length_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* __retval);
void Size2Blender__Lerp_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, double* d, ::g::Uno::UX::Size2* __retval);
void Size2Blender__New1_fn(Size2Blender** __retval);
void Size2Blender__Sub_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval);
void Size2Blender__ToUnit_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* length, ::g::Uno::UX::Size2* __retval);
void Size2Blender__Weight_fn(Size2Blender* __this, ::g::Uno::UX::Size2* v, double* w, ::g::Uno::UX::Size2* __retval);
void Size2Blender__get_Zero_fn(Size2Blender* __this, ::g::Uno::UX::Size2* __retval);

struct Size2Blender : ::g::Fuse::Internal::Blender
{
    void ctor_1();
    static Size2Blender* New1();
};
// }

}}} // ::g::Fuse::Internal
