// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/ElementBatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal abstract interface IElementBatchDrawable :8
// {
uInterfaceType* IElementBatchDrawable_typeof();

struct IElementBatchDrawable
{
    void(*fp_Draw)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*);
    static void Draw(const uInterface& __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace);
};

}}} // ::g::Fuse::Elements

#include <Uno.Float4x4.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{
namespace Elements{

inline void IElementBatchDrawable::Draw(const uInterface& __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace) { __this.VTable<IElementBatchDrawable>()->fp_Draw(__this, dc, &localToClipTransform, &scissorRectInClipSpace); }
// }

}}} // ::g::Fuse::Elements
