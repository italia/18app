// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/UX/Size.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Size.h>
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Uno{
namespace UX{

// public struct Size2 :178
// {
uStructType* Size2_typeof();
void Size2__ctor__fn(Size2* __this, ::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y);
void Size2__get_Auto_fn(Size2* __retval);
void Size2__Equals_fn(Size2* __this, uType* __type, uObject* obj, bool* __retval);
void Size2__GetHashCode_fn(Size2* __this, uType* __type, int* __retval);
void Size2__New1_fn(::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y, Size2* __retval);
void Size2__op_Addition_fn(Size2* a, Size2* b, Size2* __retval);
void Size2__op_Division1_fn(Size2* a, Size2* b, Size2* __retval);
void Size2__op_Equality_fn(Size2* a, Size2* b, bool* __retval);
void Size2__op_Explicit1_fn(Size2* v, ::g::Uno::Float2* __retval);
void Size2__op_Implicit1_fn(::g::Uno::Float2* unspecifiedUnitsVector, Size2* __retval);
void Size2__op_Inequality_fn(Size2* a, Size2* b, bool* __retval);
void Size2__op_Multiply_fn(Size2* a, float* b, Size2* __retval);
void Size2__op_Multiply1_fn(Size2* a, Size2* b, Size2* __retval);
void Size2__op_Subtraction_fn(Size2* a, Size2* b, Size2* __retval);
void Size2__ToString_fn(Size2* __this, uType* __type, uString** __retval);

struct Size2
{
    ::g::Uno::UX::Size X;
    ::g::Uno::UX::Size Y;

    void ctor_(::g::Uno::UX::Size x, ::g::Uno::UX::Size y);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Size2__Equals_fn(this, __type, obj, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Size2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Size2__ToString_fn(this, __type, &__retval), __retval; }
};

Size2 Size2__New1(::g::Uno::UX::Size x, ::g::Uno::UX::Size y);
Size2 Size2__op_Addition(Size2 a, Size2 b);
Size2 Size2__op_Division1(Size2 a, Size2 b);
bool Size2__op_Equality(Size2 a, Size2 b);
::g::Uno::Float2 Size2__op_Explicit1(Size2 v);
Size2 Size2__op_Implicit1(::g::Uno::Float2 unspecifiedUnitsVector);
bool Size2__op_Inequality(Size2 a, Size2 b);
Size2 Size2__op_Multiply(Size2 a, float b);
Size2 Size2__op_Multiply1(Size2 a, Size2 b);
Size2 Size2__op_Subtraction(Size2 a, Size2 b);
Size2 Size2__Auto();
// }

}}} // ::g::Uno::UX
