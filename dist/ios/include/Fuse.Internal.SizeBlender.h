// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Blender.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.Blender-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Internal{struct SizeBlender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class SizeBlender :88
// {
::g::Fuse::Internal::Blender_type* SizeBlender_typeof();
void SizeBlender__ctor_1_fn(SizeBlender* __this);
void SizeBlender__Add_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval);
void SizeBlender__Length_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* __retval);
void SizeBlender__Lerp_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, double* d, ::g::Uno::UX::Size* __retval);
void SizeBlender__New1_fn(SizeBlender** __retval);
void SizeBlender__Sub_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval);
void SizeBlender__ToUnit_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* length, ::g::Uno::UX::Size* __retval);
void SizeBlender__Weight_fn(SizeBlender* __this, ::g::Uno::UX::Size* v, double* w, ::g::Uno::UX::Size* __retval);
void SizeBlender__get_Zero_fn(SizeBlender* __this, ::g::Uno::UX::Size* __retval);

struct SizeBlender : ::g::Fuse::Internal::Blender
{
    void ctor_1();
    static SizeBlender* New1();
};
// }

}}} // ::g::Fuse::Internal
