// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ICommonViewport.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public abstract interface IRenderViewport :34
// {
uInterfaceType* IRenderViewport_typeof();

struct IRenderViewport
{
    void(*fp_get_ViewProjectionTransform)(uObject*, ::g::Uno::Float4x4*);
    static ::g::Uno::Float4x4 ViewProjectionTransform(const uInterface& __this);
};

}} // ::g::Fuse

#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float4x4 IRenderViewport::ViewProjectionTransform(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<IRenderViewport>()->fp_get_ViewProjectionTransform(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
