// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/LayoutParams.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public struct LayoutParams :12
// {
uStructType* LayoutParams_typeof();
void LayoutParams__BoxConstrain_fn(LayoutParams* __this, LayoutParams* o);
void LayoutParams__Clone_fn(LayoutParams* __this, LayoutParams* __retval);
void LayoutParams__CloneAndDerive_fn(LayoutParams* __this, LayoutParams* __retval);
void LayoutParams__ConstrainMax_fn(LayoutParams* __this, ::g::Uno::Float2* max, bool* hasMaxX, bool* hasMaxY);
void LayoutParams__ConstrainMaxX_fn(LayoutParams* __this, float* max);
void LayoutParams__ConstrainMaxY_fn(LayoutParams* __this, float* max);
void LayoutParams__ConstrainMin_fn(LayoutParams* __this, ::g::Uno::Float2* min, bool* hasMinX, bool* hasMinY);
void LayoutParams__ConstrainMinX_fn(LayoutParams* __this, float* min);
void LayoutParams__ConstrainMinY_fn(LayoutParams* __this, float* min);
void LayoutParams__Create_fn(::g::Uno::Float2* size, LayoutParams* __retval);
void LayoutParams__CreateEmpty_fn(LayoutParams* __retval);
void LayoutParams__CreateTemporary_fn(::g::Uno::Float2* size, LayoutParams* __retval);
void LayoutParams__CreateXY_fn(::g::Uno::Float2* size, bool* hasX, bool* hasY, LayoutParams* __retval);
void LayoutParams__GetAvailableSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval);
void LayoutParams__GetAvailableSize1_fn(LayoutParams* __this, bool* hasX, bool* hasY, ::g::Uno::Float2* __retval);
void LayoutParams__get_HasMaxSize_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_HasMaxX_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_HasMaxY_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_HasMinX_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_HasMinY_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_HasRelativeX_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_HasRelativeY_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_HasSize_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_HasX_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_HasY_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__IsCompatible_fn(LayoutParams* __this, LayoutParams* nlp, bool* __retval);
void LayoutParams__get_MaxSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval);
void LayoutParams__get_MaxX_fn(LayoutParams* __this, float* __retval);
void LayoutParams__get_MaxY_fn(LayoutParams* __this, float* __retval);
void LayoutParams__get_MinSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval);
void LayoutParams__get_MinX_fn(LayoutParams* __this, float* __retval);
void LayoutParams__get_MinY_fn(LayoutParams* __this, float* __retval);
void LayoutParams__PointConstrain_fn(LayoutParams* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void LayoutParams__PointConstrain1_fn(LayoutParams* __this, ::g::Uno::Float2* p, bool* knowX, bool* knowY, ::g::Uno::Float2* __retval);
void LayoutParams__get_RelativeX_fn(LayoutParams* __this, float* __retval);
void LayoutParams__get_RelativeY_fn(LayoutParams* __this, float* __retval);
void LayoutParams__RemoveSize_fn(LayoutParams* __this, ::g::Uno::Float2* size);
void LayoutParams__RemoveSize1_fn(LayoutParams* __this, ::g::Uno::Float4* size);
void LayoutParams__Reset_fn(LayoutParams* __this);
void LayoutParams__RetainMaxXY_fn(LayoutParams* __this, bool* x, bool* y);
void LayoutParams__RetainXY_fn(LayoutParams* __this, bool* x, bool* y);
void LayoutParams__SetFlag_fn(LayoutParams* __this, int* g, bool* val);
void LayoutParams__SetRelativeSize_fn(LayoutParams* __this, ::g::Uno::Float2* sz, bool* hasX, bool* hasY);
void LayoutParams__SetSize_fn(LayoutParams* __this, ::g::Uno::Float2* xy, bool* hasX, bool* hasY);
void LayoutParams__SetX_fn(LayoutParams* __this, float* x);
void LayoutParams__SetY_fn(LayoutParams* __this, float* y);
void LayoutParams__get_Size_fn(LayoutParams* __this, ::g::Uno::Float2* __retval);
void LayoutParams__get_Temporary_fn(LayoutParams* __this, bool* __retval);
void LayoutParams__get_X_fn(LayoutParams* __this, float* __retval);
void LayoutParams__get_Y_fn(LayoutParams* __this, float* __retval);

struct LayoutParams
{
    int _flags;
    ::g::Uno::Float2 _size;
    ::g::Uno::Float2 _maxSize;
    ::g::Uno::Float2 _minSize;
    ::g::Uno::Float2 _relativeSize;
    static bool _warnTrueClone_;
    static bool& _warnTrueClone() { return _warnTrueClone_; }
    static bool _warnDeriveClone_;
    static bool& _warnDeriveClone() { return _warnDeriveClone_; }

    void BoxConstrain(LayoutParams o);
    LayoutParams Clone();
    LayoutParams CloneAndDerive();
    void ConstrainMax(::g::Uno::Float2 max, bool hasMaxX, bool hasMaxY);
    void ConstrainMaxX(float max);
    void ConstrainMaxY(float max);
    void ConstrainMin(::g::Uno::Float2 min, bool hasMinX, bool hasMinY);
    void ConstrainMinX(float min);
    void ConstrainMinY(float min);
    ::g::Uno::Float2 GetAvailableSize();
    ::g::Uno::Float2 GetAvailableSize1(bool* hasX, bool* hasY);
    bool HasMaxSize();
    bool HasMaxX();
    bool HasMaxY();
    bool HasMinX();
    bool HasMinY();
    bool HasRelativeX();
    bool HasRelativeY();
    bool HasSize();
    bool HasX();
    bool HasY();
    bool IsCompatible(LayoutParams nlp);
    ::g::Uno::Float2 MaxSize();
    float MaxX();
    float MaxY();
    ::g::Uno::Float2 MinSize();
    float MinX();
    float MinY();
    ::g::Uno::Float2 PointConstrain(::g::Uno::Float2 p);
    ::g::Uno::Float2 PointConstrain1(::g::Uno::Float2 p, bool* knowX, bool* knowY);
    float RelativeX();
    float RelativeY();
    void RemoveSize(::g::Uno::Float2 size);
    void RemoveSize1(::g::Uno::Float4 size);
    void Reset();
    void RetainMaxXY(bool x, bool y);
    void RetainXY(bool x, bool y);
    void SetFlag(int g, bool val);
    void SetRelativeSize(::g::Uno::Float2 sz, bool hasX, bool hasY);
    void SetSize(::g::Uno::Float2 xy, bool hasX, bool hasY);
    void SetX(float x);
    void SetY(float y);
    ::g::Uno::Float2 Size();
    bool Temporary();
    float X();
    float Y();
};

LayoutParams LayoutParams__Create(::g::Uno::Float2 size);
LayoutParams LayoutParams__CreateEmpty();
LayoutParams LayoutParams__CreateTemporary(::g::Uno::Float2 size);
LayoutParams LayoutParams__CreateXY(::g::Uno::Float2 size, bool hasX, bool hasY);
// }

}} // ::g::Fuse
