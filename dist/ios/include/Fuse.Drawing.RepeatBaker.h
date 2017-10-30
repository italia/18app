// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Drawing/ImageFill.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{struct RepeatBaker;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class RepeatBaker :309
// {
uType* RepeatBaker_typeof();
void RepeatBaker__ctor__fn(RepeatBaker* __this);
void RepeatBaker__FillBuffer_fn(RepeatBaker* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Graphics::Framebuffer* fb);
void RepeatBaker__init_DrawCalls_fn(RepeatBaker* __this);
void RepeatBaker__New1_fn(RepeatBaker** __retval);

struct RepeatBaker : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_2972f423;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> FillBuffer_VertexPosition_2972f423_1_1_1;
    uStrong<uArray*> FillBuffer_Vertices_2972f423_1_0_6;
    static uSStrong<RepeatBaker*> Singleton_;
    static uSStrong<RepeatBaker*>& Singleton() { return Singleton_; }

    void ctor_();
    void FillBuffer(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Graphics::Framebuffer* fb);
    void init_DrawCalls();
    static RepeatBaker* New1();
};
// }

}}} // ::g::Fuse::Drawing
