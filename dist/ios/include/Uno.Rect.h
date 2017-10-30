// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Rect.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Uno{

// public struct Rect :6
// {
uStructType* Rect_typeof();
void Rect__ctor__fn(Rect* __this, float* left, float* top, float* right, float* bottom);
void Rect__ctor_1_fn(Rect* __this, ::g::Uno::Float2* pos, ::g::Uno::Float2* size);
void Rect__ContainingPoints_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, Rect* __retval);
void Rect__ContainingPoints1_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, ::g::Uno::Float2* point2, ::g::Uno::Float2* point3, Rect* __retval);
void Rect__get_Height_fn(Rect* __this, float* __retval);
void Rect__set_Height_fn(Rect* __this, float* value);
void Rect__Inflate_fn(Rect* r, float* size, Rect* __retval);
void Rect__Inflate1_fn(Rect* r, ::g::Uno::Float2* size, Rect* __retval);
void Rect__Intersect_fn(Rect* a, Rect* b, Rect* __retval);
void Rect__Intersects_fn(Rect* __this, Rect* r, bool* __retval);
void Rect__get_LeftBottom_fn(Rect* __this, ::g::Uno::Float2* __retval);
void Rect__get_LeftTop_fn(Rect* __this, ::g::Uno::Float2* __retval);
void Rect__get_Maximum_fn(Rect* __this, ::g::Uno::Float2* __retval);
void Rect__set_Maximum_fn(Rect* __this, ::g::Uno::Float2* value);
void Rect__get_Minimum_fn(Rect* __this, ::g::Uno::Float2* __retval);
void Rect__set_Minimum_fn(Rect* __this, ::g::Uno::Float2* value);
void Rect__New1_fn(float* left, float* top, float* right, float* bottom, Rect* __retval);
void Rect__New2_fn(::g::Uno::Float2* pos, ::g::Uno::Float2* size, Rect* __retval);
void Rect__op_Implicit_fn(::g::Uno::Recti* r, Rect* __retval);
void Rect__get_Position_fn(Rect* __this, ::g::Uno::Float2* __retval);
void Rect__set_Position_fn(Rect* __this, ::g::Uno::Float2* value);
void Rect__get_RightBottom_fn(Rect* __this, ::g::Uno::Float2* __retval);
void Rect__get_RightTop_fn(Rect* __this, ::g::Uno::Float2* __retval);
void Rect__Scale_fn(Rect* r, float* scale, Rect* __retval);
void Rect__Scale1_fn(Rect* r, ::g::Uno::Float2* scale, Rect* __retval);
void Rect__get_Size_fn(Rect* __this, ::g::Uno::Float2* __retval);
void Rect__set_Size_fn(Rect* __this, ::g::Uno::Float2* value);
void Rect__ToString_fn(Rect* __this, uType* __type, uString** __retval);
void Rect__Transform_fn(Rect* r, ::g::Uno::Float4x4* matrix, Rect* __retval);
void Rect__Translate_fn(Rect* r, ::g::Uno::Float2* offset, Rect* __retval);
void Rect__get_Width_fn(Rect* __this, float* __retval);
void Rect__set_Width_fn(Rect* __this, float* value);

struct Rect
{
    float Left;
    float Top;
    float Right;
    float Bottom;

    void ctor_(float left, float top, float right, float bottom);
    void ctor_1(::g::Uno::Float2 pos, ::g::Uno::Float2 size);
    float Height();
    void Height(float value);
    bool Intersects(Rect r);
    ::g::Uno::Float2 LeftBottom();
    ::g::Uno::Float2 LeftTop();
    ::g::Uno::Float2 Maximum();
    void Maximum(::g::Uno::Float2 value);
    ::g::Uno::Float2 Minimum();
    void Minimum(::g::Uno::Float2 value);
    ::g::Uno::Float2 Position();
    void Position(::g::Uno::Float2 value);
    ::g::Uno::Float2 RightBottom();
    ::g::Uno::Float2 RightTop();
    ::g::Uno::Float2 Size();
    void Size(::g::Uno::Float2 value);
    uString* ToString(uType* __type) { uString* __retval; return Rect__ToString_fn(this, __type, &__retval), __retval; }
    float Width();
    void Width(float value);
};

Rect Rect__ContainingPoints(::g::Uno::Float2 point0, ::g::Uno::Float2 point1);
Rect Rect__ContainingPoints1(::g::Uno::Float2 point0, ::g::Uno::Float2 point1, ::g::Uno::Float2 point2, ::g::Uno::Float2 point3);
Rect Rect__Inflate(Rect r, float size);
Rect Rect__Inflate1(Rect r, ::g::Uno::Float2 size);
Rect Rect__Intersect(Rect a, Rect b);
Rect Rect__New1(float left, float top, float right, float bottom);
Rect Rect__New2(::g::Uno::Float2 pos, ::g::Uno::Float2 size);
Rect Rect__op_Implicit(::g::Uno::Recti r);
Rect Rect__Scale(Rect r, float scale);
Rect Rect__Scale1(Rect r, ::g::Uno::Float2 scale);
Rect Rect__Transform(Rect r, ::g::Uno::Float4x4 matrix);
Rect Rect__Translate(Rect r, ::g::Uno::Float2 offset);
// }

}} // ::g::Uno
