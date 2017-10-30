// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FrustumViewport;}}

namespace g{
namespace Fuse{

// internal sealed class FrustumViewport :124
// {
uType* FrustumViewport_typeof();
void FrustumViewport__ctor__fn(FrustumViewport* __this);
void FrustumViewport__New1_fn(FrustumViewport** __retval);
void FrustumViewport__Update_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum);

struct FrustumViewport : uObject
{
    ::g::Uno::Float4x4 ProjectionTransform;
    ::g::Uno::Float4x4 ProjectionTransformInverse;
    ::g::Uno::Float4x4 ViewProjectionTransform;
    ::g::Uno::Float4x4 ViewProjectionTransformInverse;
    ::g::Uno::Float4x4 ViewTransform;
    ::g::Uno::Float4x4 ViewTransformInverse;

    void ctor_();
    void Update(uObject* viewport, uObject* frustum);
    static FrustumViewport* New1();
};
// }

}} // ::g::Fuse
