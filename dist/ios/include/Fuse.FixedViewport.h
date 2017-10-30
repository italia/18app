// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ICommonViewport.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FixedViewport;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{

// internal sealed class FixedViewport :181
// {
struct FixedViewport_type : uType
{
    ::g::Fuse::IRenderViewport interface0;
    ::g::Fuse::IViewport interface1;
    ::g::Fuse::ICommonViewport interface2;
};

FixedViewport_type* FixedViewport_typeof();
void FixedViewport__ctor__fn(FixedViewport* __this, ::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum);
void FixedViewport__New1_fn(::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum, FixedViewport** __retval);
void FixedViewport__get_PixelSize_fn(FixedViewport* __this, ::g::Uno::Float2* __retval);
void FixedViewport__get_PixelsPerPoint_fn(FixedViewport* __this, float* __retval);
void FixedViewport__PointToWorldRay_fn(FixedViewport* __this, ::g::Uno::Float2* pointPos, ::g::Fuse::Ray* __retval);
void FixedViewport__get_Size_fn(FixedViewport* __this, ::g::Uno::Float2* __retval);
void FixedViewport__get_ViewProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval);
void FixedViewport__WorldToLocalRay_fn(FixedViewport* __this, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval);

struct FixedViewport : uObject
{
    uStrong<uObject*> _frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    ::g::Uno::Float2 _pixelSize;
    float _pixelsPerPoint;

    void ctor_(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Fuse::Ray PointToWorldRay(::g::Uno::Float2 pointPos);
    ::g::Uno::Float2 Size();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Fuse::Ray WorldToLocalRay(uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where);
    static FixedViewport* New1(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum);
};
// }

}} // ::g::Fuse
