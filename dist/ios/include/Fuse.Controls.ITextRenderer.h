// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/TextControls/TextControl.GraphicsText.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface ITextRenderer :6
// {
uInterfaceType* ITextRenderer_typeof();

struct ITextRenderer
{
    void(*fp_Arrange)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*);
    void(*fp_Draw)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*);
    void(*fp_GetContentSize)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*);
    void(*fp_GetRenderBounds)(uObject*, ::g::Uno::Rect*);
    void(*fp_Invalidate)(uObject*);
    void(*fp_SoftDispose)(uObject*);
    static void Arrange(const uInterface& __this, ::g::Uno::Float2 position, ::g::Uno::Float2 size);
    static void Draw(const uInterface& __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where) { __this.VTable<ITextRenderer>()->fp_Draw(__this, dc, where); }
    static ::g::Uno::Float2 GetContentSize(const uInterface& __this, ::g::Fuse::LayoutParams lp);
    static ::g::Uno::Rect GetRenderBounds(const uInterface& __this);
    static void Invalidate(const uInterface& __this) { __this.VTable<ITextRenderer>()->fp_Invalidate(__this); }
    static void SoftDispose(const uInterface& __this) { __this.VTable<ITextRenderer>()->fp_SoftDispose(__this); }
};

}}} // ::g::Fuse::Controls

#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{
namespace Controls{

inline void ITextRenderer::Arrange(const uInterface& __this, ::g::Uno::Float2 position, ::g::Uno::Float2 size) { __this.VTable<ITextRenderer>()->fp_Arrange(__this, &position, &size); }
inline ::g::Uno::Float2 ITextRenderer::GetContentSize(const uInterface& __this, ::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return __this.VTable<ITextRenderer>()->fp_GetContentSize(__this, &lp, &__retval), __retval; }
inline ::g::Uno::Rect ITextRenderer::GetRenderBounds(const uInterface& __this) { ::g::Uno::Rect __retval; return __this.VTable<ITextRenderer>()->fp_GetRenderBounds(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Controls
