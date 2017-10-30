// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/VisualBounds.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Box.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{

// public sealed class VisualBounds :12
// {
uType* VisualBounds_typeof();
void VisualBounds__ctor__fn(VisualBounds* __this);
void VisualBounds__AddRect_fn(VisualBounds* __this, ::g::Uno::Float2* mn, ::g::Uno::Float2* mx, VisualBounds** __retval);
void VisualBounds__AddRect1_fn(VisualBounds* __this, ::g::Uno::Rect* r, VisualBounds** __retval);
void VisualBounds__get_AxisMax_fn(VisualBounds* __this, ::g::Uno::Float3* __retval);
void VisualBounds__get_AxisMin_fn(VisualBounds* __this, ::g::Uno::Float3* __retval);
void VisualBounds__Box_fn(::g::Fuse::Box* a, VisualBounds** __retval);
void VisualBounds__BoxTransform1_fn(::g::Fuse::Box* box, ::g::Fuse::FastMatrix* matrix, ::g::Fuse::Box* __retval);
void VisualBounds__ContainsPoint_fn(VisualBounds* __this, ::g::Uno::Float2* pt, bool* __retval);
void VisualBounds__get_Empty_fn(VisualBounds** __retval);
void VisualBounds__get_FlatRect_fn(VisualBounds* __this, ::g::Uno::Rect* __retval);
void VisualBounds__get_Infinite_fn(VisualBounds** __retval);
void VisualBounds__InflateXY_fn(VisualBounds* __this, float* padding, VisualBounds** __retval);
void VisualBounds__IntersectsRay_fn(VisualBounds* __this, ::g::Fuse::Ray* ray, bool* __retval);
void VisualBounds__IntersectXY_fn(VisualBounds* __this, VisualBounds* nb, VisualBounds** __retval);
void VisualBounds__get_IsEmpty_fn(VisualBounds* __this, bool* __retval);
void VisualBounds__get_IsFlat_fn(VisualBounds* __this, bool* __retval);
void VisualBounds__get_IsInfinite_fn(VisualBounds* __this, bool* __retval);
void VisualBounds__Max8_fn(float* a, float* b, float* c, float* d, float* e, float* f, float* g, float* h, float* __retval);
void VisualBounds__Merge_fn(VisualBounds* __this, VisualBounds* nb, ::g::Fuse::FastMatrix* trans, VisualBounds** __retval);
void VisualBounds__Merge1_fn(uObject* visuals, int* bt, VisualBounds** __retval);
void VisualBounds__MergeChild_fn(VisualBounds* __this, ::g::Fuse::Visual* child, VisualBounds* nb, VisualBounds** __retval);
void VisualBounds__Min8_fn(float* a, float* b, float* c, float* d, float* e, float* f, float* g, float* h, float* __retval);
void VisualBounds__New1_fn(VisualBounds** __retval);
void VisualBounds__op_Implicit_fn(VisualBounds* vb, ::g::Fuse::Box* __retval);
void VisualBounds__Rect_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, VisualBounds** __retval);
void VisualBounds__Rect1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, VisualBounds** __retval);
void VisualBounds__Scale_fn(VisualBounds* __this, ::g::Uno::Float3* factor, VisualBounds** __retval);
void VisualBounds__get_Size_fn(VisualBounds* __this, ::g::Uno::Float3* __retval);
void VisualBounds__Translate_fn(VisualBounds* __this, ::g::Uno::Float3* offset, VisualBounds** __retval);

struct VisualBounds : uObject
{
    ::g::Fuse::Box _box;
    static uSStrong<VisualBounds*> _empty_;
    static uSStrong<VisualBounds*>& _empty() { return _empty_; }
    static uSStrong<VisualBounds*> _infinite_;
    static uSStrong<VisualBounds*>& _infinite() { return _infinite_; }

    void ctor_();
    VisualBounds* AddRect(::g::Uno::Float2 mn, ::g::Uno::Float2 mx);
    VisualBounds* AddRect1(::g::Uno::Rect r);
    ::g::Uno::Float3 AxisMax();
    ::g::Uno::Float3 AxisMin();
    bool ContainsPoint(::g::Uno::Float2 pt);
    ::g::Uno::Rect FlatRect();
    VisualBounds* InflateXY(float padding);
    bool IntersectsRay(::g::Fuse::Ray ray);
    VisualBounds* IntersectXY(VisualBounds* nb);
    bool IsEmpty();
    bool IsFlat();
    bool IsInfinite();
    VisualBounds* Merge(VisualBounds* nb, ::g::Fuse::FastMatrix* trans);
    VisualBounds* MergeChild(::g::Fuse::Visual* child, VisualBounds* nb);
    VisualBounds* Scale(::g::Uno::Float3 factor);
    ::g::Uno::Float3 Size();
    VisualBounds* Translate(::g::Uno::Float3 offset);
    static VisualBounds* Box(::g::Fuse::Box a);
    static ::g::Fuse::Box BoxTransform1(::g::Fuse::Box box, ::g::Fuse::FastMatrix* matrix);
    static float Max8(float a, float b, float c, float d, float e, float f, float g, float h);
    static VisualBounds* Merge1(uObject* visuals, int bt);
    static float Min8(float a, float b, float c, float d, float e, float f, float g, float h);
    static VisualBounds* New1();
    static ::g::Fuse::Box op_Implicit(VisualBounds* vb);
    static VisualBounds* Rect(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static VisualBounds* Rect1(::g::Uno::Float3 a, ::g::Uno::Float3 b);
    static VisualBounds* Empty();
    static VisualBounds* Infinite();
};
// }

}} // ::g::Fuse
