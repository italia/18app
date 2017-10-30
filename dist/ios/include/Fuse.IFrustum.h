// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IFrustum.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public abstract interface IFrustum :5
// {
uInterfaceType* IFrustum_typeof();

struct IFrustum
{
    void(*fp_GetViewTransform)(uObject*, uObject*, ::g::Uno::Float4x4*);
    void(*fp_GetViewTransformInverse)(uObject*, uObject*, ::g::Uno::Float4x4*);
    void(*fp_TryGetProjectionTransform)(uObject*, uObject*, ::g::Uno::Float4x4*, bool*);
    void(*fp_TryGetProjectionTransformInverse)(uObject*, uObject*, ::g::Uno::Float4x4*, bool*);
    static ::g::Uno::Float4x4 GetViewTransform(const uInterface& __this, uObject* viewport);
    static ::g::Uno::Float4x4 GetViewTransformInverse(const uInterface& __this, uObject* viewport);
    static bool TryGetProjectionTransform(const uInterface& __this, uObject* viewport, ::g::Uno::Float4x4* result) { bool __retval; return __this.VTable<IFrustum>()->fp_TryGetProjectionTransform(__this, viewport, result, &__retval), __retval; }
    static bool TryGetProjectionTransformInverse(const uInterface& __this, uObject* viewport, ::g::Uno::Float4x4* result) { bool __retval; return __this.VTable<IFrustum>()->fp_TryGetProjectionTransformInverse(__this, viewport, result, &__retval), __retval; }
};

}} // ::g::Fuse

#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float4x4 IFrustum::GetViewTransform(const uInterface& __this, uObject* viewport) { ::g::Uno::Float4x4 __retval; return __this.VTable<IFrustum>()->fp_GetViewTransform(__this, viewport, &__retval), __retval; }
inline ::g::Uno::Float4x4 IFrustum::GetViewTransformInverse(const uInterface& __this, uObject* viewport) { ::g::Uno::Float4x4 __retval; return __this.VTable<IFrustum>()->fp_GetViewTransformInverse(__this, viewport, &__retval), __retval; }
// }

}} // ::g::Fuse
