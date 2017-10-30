// This file was generated based on /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/DropShadow.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct DropShadow__Blitter;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// private sealed class DropShadow.Blitter :172
// {
uType* DropShadow__Blitter_typeof();
void DropShadow__Blitter__ctor__fn(DropShadow__Blitter* __this);
void DropShadow__Blitter__Blit_fn(DropShadow__Blitter* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Rect* elementRect, float* padding, ::g::Uno::Int2* tempSize, ::g::Uno::Graphics::Texture2D* blurTexture, float* spreadScale, ::g::Uno::Float2* offset, ::g::Uno::Float4* color);
void DropShadow__Blitter__init_DrawCalls_fn(DropShadow__Blitter* __this);
void DropShadow__Blitter__get_Instance_fn(DropShadow__Blitter** __retval);
void DropShadow__Blitter__New1_fn(DropShadow__Blitter** __retval);

struct DropShadow__Blitter : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_969193be;
    static uSStrong<DropShadow__Blitter*> _instance_;
    static uSStrong<DropShadow__Blitter*>& _instance() { return _instance_; }
    ::g::Uno::Float4x4 Blit_LocalTransform_969193be_4_9_2;
    ::g::Uno::Float4x4 Blit_LocalTransform_969193be_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_VertexData_969193be_7_2_1;

    void ctor_();
    void Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Rect elementRect, float padding, ::g::Uno::Int2 tempSize, ::g::Uno::Graphics::Texture2D* blurTexture, float spreadScale, ::g::Uno::Float2 offset, ::g::Uno::Float4 color);
    void init_DrawCalls();
    static DropShadow__Blitter* New1();
    static DropShadow__Blitter* Instance();
};
// }

}}} // ::g::Fuse::Effects
