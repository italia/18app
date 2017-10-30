// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/NativeRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal abstract extern interface IViewHandleRenderer :10
// {
uInterfaceType* IViewHandleRenderer_typeof();

struct IViewHandleRenderer
{
    void(*fp_Draw)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*);
    void(*fp_Invalidate)(uObject*);
    static void Draw(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density);
    static void Invalidate(const uInterface& __this) { __this.VTable<IViewHandleRenderer>()->fp_Invalidate(__this); }
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float2.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void IViewHandleRenderer::Draw(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density) { __this.VTable<IViewHandleRenderer>()->fp_Draw(__this, viewHandle, &localToClipTransform, &position, &size, &density); }
// }

}}}} // ::g::Fuse::Controls::Native
