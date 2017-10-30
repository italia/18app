// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Blender.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Uno.Double.h>
namespace g{namespace Fuse{namespace Internal{struct DoubleBlender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class DoubleBlender :147
// {
::g::Fuse::Internal::ScalarBlender_type* DoubleBlender_typeof();
void DoubleBlender__ctor_2_fn(DoubleBlender* __this);
void DoubleBlender__Add_fn(DoubleBlender* __this, double* a, double* b, double* __retval);
void DoubleBlender__FromDouble_fn(DoubleBlender* __this, double* a, double* __retval);
void DoubleBlender__Length_fn(DoubleBlender* __this, double* a, double* __retval);
void DoubleBlender__Lerp_fn(DoubleBlender* __this, double* a, double* b, double* d, double* __retval);
void DoubleBlender__New1_fn(DoubleBlender** __retval);
void DoubleBlender__Sub_fn(DoubleBlender* __this, double* a, double* b, double* __retval);
void DoubleBlender__ToDouble_fn(DoubleBlender* __this, double* a, double* __retval);
void DoubleBlender__ToUnit_fn(DoubleBlender* __this, double* a, double* length, double* __retval);
void DoubleBlender__Weight_fn(DoubleBlender* __this, double* v, double* w, double* __retval);
void DoubleBlender__get_Zero_fn(DoubleBlender* __this, double* __retval);

struct DoubleBlender : ::g::Fuse::Internal::ScalarBlender
{
    void ctor_2();
    static DoubleBlender* New1();
};
// }

}}} // ::g::Fuse::Internal
