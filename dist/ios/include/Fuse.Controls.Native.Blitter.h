// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/NativeRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct Blitter;}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal sealed extern class Blitter :241
// {
uType* Blitter_typeof();
void Blitter__ctor__fn(Blitter* __this);
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform);
void Blitter__init_DrawCalls_fn(Blitter* __this);
void Blitter__New1_fn(Blitter** __retval);

struct Blitter : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f88335dd;
    bool _ios;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_v_f88335dd_3_4_1;
    uStrong<uArray*> Blit_verts_f88335dd_3_3_5;
    static uSStrong<Blitter*> Singleton_;
    static uSStrong<Blitter*>& Singleton() { return Singleton_; }

    void ctor_();
    void Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform);
    void init_DrawCalls();
    static Blitter* New1();
};
// }

}}}} // ::g::Fuse::Controls::Native
