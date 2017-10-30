// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.DrawSelection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct DrawHelpers;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{

// internal sealed class DrawHelpers :7
// {
uType* DrawHelpers_typeof();
void DrawHelpers__ctor__fn(DrawHelpers* __this);
void DrawHelpers__DrawLocalRect_fn(DrawHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, ::g::Uno::Float4x4* transform, float* lineWidth, ::g::Uno::Float4* color);
void DrawHelpers__init_DrawCalls_fn(DrawHelpers* __this);
void DrawHelpers__New1_fn(DrawHelpers** __retval);
void DrawHelpers__get_Singelton_fn(DrawHelpers** __retval);

struct DrawHelpers : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_1e24cb92;
    static uSStrong<DrawHelpers*> _instance_;
    static uSStrong<DrawHelpers*>& _instance() { return _instance_; }
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawLocalRect_Coord_1e24cb92_1_2_1;
    uStrong<uArray*> DrawLocalRect_Vertices_1e24cb92_1_1_4;

    void ctor_();
    void DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, ::g::Uno::Float4x4 transform, float lineWidth, ::g::Uno::Float4 color);
    void init_DrawCalls();
    static DrawHelpers* New1();
    static DrawHelpers* Singelton();
};
// }

}} // ::g::Fuse
