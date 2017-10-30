// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Fuse{struct ViewportHelpers;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public static class ViewportHelpers :81
// {
uClassType* ViewportHelpers_typeof();
void ViewportHelpers__LocalPlaneIntersection_fn(::g::Fuse::Ray* local, ::g::Uno::Float2* __retval);
void ViewportHelpers__PointToWorldRay_fn(uObject* viewport, ::g::Uno::Float4x4* viewProjectionInverse, ::g::Uno::Float2* pointPos, ::g::Fuse::Ray* __retval);
void ViewportHelpers__WorldToLocalRay_fn(uObject* viewport, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval);

struct ViewportHelpers : uObject
{
    static ::g::Uno::Float2 LocalPlaneIntersection(::g::Fuse::Ray local);
    static ::g::Fuse::Ray PointToWorldRay(uObject* viewport, ::g::Uno::Float4x4 viewProjectionInverse, ::g::Uno::Float2 pointPos);
    static ::g::Fuse::Ray WorldToLocalRay(uObject* viewport, uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where);
};
// }

}} // ::g::Fuse
