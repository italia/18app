// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer.h>
namespace g{namespace Fuse{struct Computer1;}}

namespace g{
namespace Fuse{

// internal abstract class Computer<T> :29
// {
struct Computer1_type : ::g::Fuse::Computer_type
{
    void(*fp_Add1)(::g::Fuse::Computer1*, void*, void*, uTRef);
    void(*fp_Convert)(::g::Fuse::Computer1*, uObject*, uTRef);
    void(*fp_Divide1)(::g::Fuse::Computer1*, void*, void*, uTRef);
    void(*fp_EqualTo1)(::g::Fuse::Computer1*, void*, void*, bool*);
    void(*fp_GreaterThan1)(::g::Fuse::Computer1*, void*, void*, bool*);
    void(*fp_LessThan1)(::g::Fuse::Computer1*, void*, void*, bool*);
    void(*fp_Multiply1)(::g::Fuse::Computer1*, void*, void*, uTRef);
    void(*fp_Subtract1)(::g::Fuse::Computer1*, void*, void*, uTRef);
};

Computer1_type* Computer1_typeof();
void Computer1__ctor_1_fn(Computer1* __this);
void Computer1__Add_fn(Computer1* __this, uObject* a, uObject* b, uObject** __retval);
void Computer1__Add1_fn(Computer1* __this, void* a, void* b, uTRef __retval);
void Computer1__Divide_fn(Computer1* __this, uObject* a, uObject* b, uObject** __retval);
void Computer1__Divide1_fn(Computer1* __this, void* a, void* b, uTRef __retval);
void Computer1__EqualTo_fn(Computer1* __this, uObject* a, uObject* b, bool* __retval);
void Computer1__EqualTo1_fn(Computer1* __this, void* a, void* b, bool* __retval);
void Computer1__GreaterThan_fn(Computer1* __this, uObject* a, uObject* b, bool* __retval);
void Computer1__GreaterThan1_fn(Computer1* __this, void* a, void* b, bool* __retval);
void Computer1__LessThan_fn(Computer1* __this, uObject* a, uObject* b, bool* __retval);
void Computer1__LessThan1_fn(Computer1* __this, void* a, void* b, bool* __retval);
void Computer1__Multiply_fn(Computer1* __this, uObject* a, uObject* b, uObject** __retval);
void Computer1__Multiply1_fn(Computer1* __this, void* a, void* b, uTRef __retval);
void Computer1__Subtract_fn(Computer1* __this, uObject* a, uObject* b, uObject** __retval);
void Computer1__Subtract1_fn(Computer1* __this, void* a, void* b, uTRef __retval);

struct Computer1 : ::g::Fuse::Computer
{
    void ctor_1();
    template<class T>
    T Add1(T a, T b) { T __retval; return (((Computer1_type*)__type)->fp_Add1)(this, uConstrain(__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    void Add1_ex(void* a, void* b, uTRef __retval) { (((Computer1_type*)__type)->fp_Add1)(this, a, b, __retval); }
    template<class T>
    T Convert(uObject* o) { T __retval; return (((Computer1_type*)__type)->fp_Convert)(this, o, &__retval), __retval; }
    void Convert_ex(uObject* o, uTRef __retval) { (((Computer1_type*)__type)->fp_Convert)(this, o, __retval); }
    template<class T>
    T Divide1(T a, T b) { T __retval; return (((Computer1_type*)__type)->fp_Divide1)(this, uConstrain(__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    void Divide1_ex(void* a, void* b, uTRef __retval) { (((Computer1_type*)__type)->fp_Divide1)(this, a, b, __retval); }
    template<class T>
    bool EqualTo1(T a, T b) { bool __retval; return (((Computer1_type*)__type)->fp_EqualTo1)(this, uConstrain(__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    void EqualTo1_ex(void* a, void* b, bool* __retval) { (((Computer1_type*)__type)->fp_EqualTo1)(this, a, b, __retval); }
    template<class T>
    bool GreaterThan1(T a, T b) { bool __retval; return (((Computer1_type*)__type)->fp_GreaterThan1)(this, uConstrain(__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    void GreaterThan1_ex(void* a, void* b, bool* __retval) { (((Computer1_type*)__type)->fp_GreaterThan1)(this, a, b, __retval); }
    template<class T>
    bool LessThan1(T a, T b) { bool __retval; return (((Computer1_type*)__type)->fp_LessThan1)(this, uConstrain(__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    void LessThan1_ex(void* a, void* b, bool* __retval) { (((Computer1_type*)__type)->fp_LessThan1)(this, a, b, __retval); }
    template<class T>
    T Multiply1(T a, T b) { T __retval; return (((Computer1_type*)__type)->fp_Multiply1)(this, uConstrain(__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    void Multiply1_ex(void* a, void* b, uTRef __retval) { (((Computer1_type*)__type)->fp_Multiply1)(this, a, b, __retval); }
    template<class T>
    T Subtract1(T a, T b) { T __retval; return (((Computer1_type*)__type)->fp_Subtract1)(this, uConstrain(__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    void Subtract1_ex(void* a, void* b, uTRef __retval) { (((Computer1_type*)__type)->fp_Subtract1)(this, a, b, __retval); }
    template<class T>
    static T Add1(Computer1* __this, T a, T b) { T __retval; return Computer1__Add1_fn(__this, uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    template<class T>
    static T Divide1(Computer1* __this, T a, T b) { T __retval; return Computer1__Divide1_fn(__this, uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    template<class T>
    static bool EqualTo1(Computer1* __this, T a, T b) { bool __retval; return Computer1__EqualTo1_fn(__this, uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    template<class T>
    static bool GreaterThan1(Computer1* __this, T a, T b) { bool __retval; return Computer1__GreaterThan1_fn(__this, uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    template<class T>
    static bool LessThan1(Computer1* __this, T a, T b) { bool __retval; return Computer1__LessThan1_fn(__this, uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    template<class T>
    static T Multiply1(Computer1* __this, T a, T b) { T __retval; return Computer1__Multiply1_fn(__this, uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
    template<class T>
    static T Subtract1(Computer1* __this, T a, T b) { T __retval; return Computer1__Subtract1_fn(__this, uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), a), uConstrain(__this->__type->GetBase(Computer1_typeof())->T(0), b), &__retval), __retval; }
};
// }

}} // ::g::Fuse
