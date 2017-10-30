// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Blender.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Uno.Float.h>
namespace g{namespace Fuse{namespace Internal{struct FloatBlender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class FloatBlender :129
// {
::g::Fuse::Internal::ScalarBlender_type* FloatBlender_typeof();
void FloatBlender__ctor_2_fn(FloatBlender* __this);
void FloatBlender__Add_fn(FloatBlender* __this, float* a, float* b, float* __retval);
void FloatBlender__FromDouble_fn(FloatBlender* __this, double* a, float* __retval);
void FloatBlender__Length_fn(FloatBlender* __this, float* a, double* __retval);
void FloatBlender__Lerp_fn(FloatBlender* __this, float* a, float* b, double* d, float* __retval);
void FloatBlender__New1_fn(FloatBlender** __retval);
void FloatBlender__Sub_fn(FloatBlender* __this, float* a, float* b, float* __retval);
void FloatBlender__ToDouble_fn(FloatBlender* __this, float* a, double* __retval);
void FloatBlender__ToUnit_fn(FloatBlender* __this, float* a, double* length, float* __retval);
void FloatBlender__Weight_fn(FloatBlender* __this, float* v, double* w, float* __retval);
void FloatBlender__get_Zero_fn(FloatBlender* __this, float* __retval);

struct FloatBlender : ::g::Fuse::Internal::ScalarBlender
{
    void ctor_2();
    static FloatBlender* New1();
};
// }

}}} // ::g::Fuse::Internal
