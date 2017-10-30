// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Blender.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal abstract class Blender<T> :62
// {
struct Blender_type : uType
{
    void(*fp_Add)(::g::Fuse::Internal::Blender*, void*, void*, uTRef);
    void(*fp_Length)(::g::Fuse::Internal::Blender*, void*, double*);
    void(*fp_Lerp)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef);
    void(*fp_Sub)(::g::Fuse::Internal::Blender*, void*, void*, uTRef);
    void(*fp_ToUnit)(::g::Fuse::Internal::Blender*, void*, double*, uTRef);
    void(*fp_Weight)(::g::Fuse::Internal::Blender*, void*, double*, uTRef);
    void(*fp_get_Zero)(::g::Fuse::Internal::Blender*, uTRef);
};

Blender_type* Blender_typeof();
void Blender__ctor__fn(Blender* __this);
void Blender__Distance_fn(Blender* __this, void* a, void* b, double* __retval);
void Blender__ScalarMult_fn(Blender* __this, void* v, double* s, uTRef __retval);
void Blender__UnitWeight_fn(Blender* __this, void* v, double* w, uTRef __retval);

struct Blender : uObject
{
    void ctor_();
    template<class T>
    T Add(T a, T b) { T __retval; return (((Blender_type*)__type)->fp_Add)(this, uConstrain(__type->GetBase(Blender_typeof())->T(0), a), uConstrain(__type->GetBase(Blender_typeof())->T(0), b), &__retval), __retval; }
    void Add_ex(void* a, void* b, uTRef __retval) { (((Blender_type*)__type)->fp_Add)(this, a, b, __retval); }
    template<class T>
    double Distance(T a, T b) { double __retval; return Blender__Distance_fn(this, uConstrain(__type->GetBase(Blender_typeof())->T(0), a), uConstrain(__type->GetBase(Blender_typeof())->T(0), b), &__retval), __retval; }
    template<class T>
    double Length(T a) { double __retval; return (((Blender_type*)__type)->fp_Length)(this, uConstrain(__type->GetBase(Blender_typeof())->T(0), a), &__retval), __retval; }
    void Length_ex(void* a, double* __retval) { (((Blender_type*)__type)->fp_Length)(this, a, __retval); }
    template<class T>
    T Lerp(T a, T b, double d) { T __retval; return (((Blender_type*)__type)->fp_Lerp)(this, uConstrain(__type->GetBase(Blender_typeof())->T(0), a), uConstrain(__type->GetBase(Blender_typeof())->T(0), b), &d, &__retval), __retval; }
    void Lerp_ex(void* a, void* b, double* d, uTRef __retval) { (((Blender_type*)__type)->fp_Lerp)(this, a, b, d, __retval); }
    template<class T>
    T ScalarMult(T v, double s) { T __retval; return Blender__ScalarMult_fn(this, uConstrain(__type->GetBase(Blender_typeof())->T(0), v), &s, &__retval), __retval; }
    template<class T>
    T Sub(T a, T b) { T __retval; return (((Blender_type*)__type)->fp_Sub)(this, uConstrain(__type->GetBase(Blender_typeof())->T(0), a), uConstrain(__type->GetBase(Blender_typeof())->T(0), b), &__retval), __retval; }
    void Sub_ex(void* a, void* b, uTRef __retval) { (((Blender_type*)__type)->fp_Sub)(this, a, b, __retval); }
    template<class T>
    T ToUnit(T a, double* length) { T __retval; return (((Blender_type*)__type)->fp_ToUnit)(this, uConstrain(__type->GetBase(Blender_typeof())->T(0), a), length, &__retval), __retval; }
    void ToUnit_ex(void* a, double* length, uTRef __retval) { (((Blender_type*)__type)->fp_ToUnit)(this, a, length, __retval); }
    template<class T>
    T UnitWeight(T v, double w) { T __retval; return Blender__UnitWeight_fn(this, uConstrain(__type->GetBase(Blender_typeof())->T(0), v), &w, &__retval), __retval; }
    template<class T>
    T Weight(T v, double w) { T __retval; return (((Blender_type*)__type)->fp_Weight)(this, uConstrain(__type->GetBase(Blender_typeof())->T(0), v), &w, &__retval), __retval; }
    void Weight_ex(void* v, double* w, uTRef __retval) { (((Blender_type*)__type)->fp_Weight)(this, v, w, __retval); }
    template<class T>
    T Zero() { T __retval; return (((Blender_type*)__type)->fp_get_Zero)(this, &__retval), __retval; }
    void get_Zero_ex(uTRef __retval) { (((Blender_type*)__type)->fp_get_Zero)(this, __retval); }
};
// }

}}} // ::g::Fuse::Internal
