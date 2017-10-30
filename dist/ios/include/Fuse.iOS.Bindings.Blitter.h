// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS.TextRenderer/1.3.1/TextRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct Blitter;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal sealed class Blitter :341
// {
uType* Blitter_typeof();
void Blitter__ctor__fn(Blitter* __this);
void Blitter__Blit_fn(Blitter* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size);
void Blitter__init_DrawCalls_fn(Blitter* __this);
void Blitter__New1_fn(Blitter** __retval);

struct Blitter : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e36bc3a0;
    ::g::Uno::Float4x4 Blit_LocalTransform_e36bc3a0_4_9_2;
    ::g::Uno::Float4x4 Blit_LocalTransform_e36bc3a0_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_VertexData_e36bc3a0_7_2_1;
    static uSStrong<Blitter*> Singleton_;
    static uSStrong<Blitter*>& Singleton() { return Singleton_; }

    void ctor_();
    void Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size);
    void init_DrawCalls();
    static Blitter* New1();
};
// }

}}}} // ::g::Fuse::iOS::Bindings
