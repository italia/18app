// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Drawing/Scale9Rectangle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Elements{namespace Internal{struct Scale9Rectangle;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Elements{
namespace Internal{

// internal sealed class Scale9Rectangle :7
// {
uType* Scale9Rectangle_typeof();
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this);
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float4* color, ::g::Uno::Float4* margin);
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this);
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval);

struct Scale9Rectangle : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_42808b82;
    uStrong<uArray*> Draw_indices_42808b82_1_2_13;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> Draw_xv_42808b82_1_3_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_xv_42808b82_1_3_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_yv_42808b82_1_4_6;
    static uSStrong<Scale9Rectangle*> Impl_;
    static uSStrong<Scale9Rectangle*>& Impl() { return Impl_; }

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float4 color, ::g::Uno::Float4 margin);
    void init_DrawCalls();
    static Scale9Rectangle* New1();
};
// }

}}}} // ::g::Fuse::Elements::Internal
