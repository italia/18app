// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Panel.Freeze.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Controls{struct FreezeDrawable;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class FreezeDrawable :210
// {
uType* FreezeDrawable_typeof();
void FreezeDrawable__ctor__fn(FreezeDrawable* __this);
void FreezeDrawable__Draw_fn(FreezeDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Controls::Panel* panel, float* Opacity, ::g::Uno::Float2* scale, ::g::Fuse::VisualBounds* renderBounds, ::g::Uno::Graphics::Framebuffer* buffer);
void FreezeDrawable__init_DrawCalls_fn(FreezeDrawable* __this);
void FreezeDrawable__New1_fn(FreezeDrawable** __retval);

struct FreezeDrawable : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_646c65c3;
    ::g::Uno::Float4x4 Draw_LocalTransform_646c65c3_4_9_2;
    ::g::Uno::Float4x4 Draw_LocalTransform_646c65c3_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_VertexData_646c65c3_7_2_1;
    static uSStrong<FreezeDrawable*> Singleton_;
    static uSStrong<FreezeDrawable*>& Singleton() { return Singleton_; }

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Controls::Panel* panel, float Opacity, ::g::Uno::Float2 scale, ::g::Fuse::VisualBounds* renderBounds, ::g::Uno::Graphics::Framebuffer* buffer);
    void init_DrawCalls();
    static FreezeDrawable* New1();
};
// }

}}} // ::g::Fuse::Controls
