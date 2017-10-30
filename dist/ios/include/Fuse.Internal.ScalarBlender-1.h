// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Blender.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.Blender-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal abstract class ScalarBlender<T> :123
// {
struct ScalarBlender_type : ::g::Fuse::Internal::Blender_type
{
    void(*fp_FromDouble)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef);
    void(*fp_ToDouble)(::g::Fuse::Internal::ScalarBlender*, void*, double*);
};

ScalarBlender_type* ScalarBlender_typeof();
void ScalarBlender__ctor_1_fn(ScalarBlender* __this);

struct ScalarBlender : ::g::Fuse::Internal::Blender
{
    void ctor_1();
    template<class T>
    T FromDouble(double a) { T __retval; return (((ScalarBlender_type*)__type)->fp_FromDouble)(this, &a, &__retval), __retval; }
    void FromDouble_ex(double* a, uTRef __retval) { (((ScalarBlender_type*)__type)->fp_FromDouble)(this, a, __retval); }
    template<class T>
    double ToDouble(T a) { double __retval; return (((ScalarBlender_type*)__type)->fp_ToDouble)(this, uConstrain(__type->GetBase(ScalarBlender_typeof())->T(0), a), &__retval), __retval; }
    void ToDouble_ex(void* a, double* __retval) { (((ScalarBlender_type*)__type)->fp_ToDouble)(this, a, __retval); }
};
// }

}}} // ::g::Fuse::Internal
