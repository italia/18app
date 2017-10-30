// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls/1.3.1/Control.Background.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Internal{namespace Drawing{struct SolidRectangle;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Internal{
namespace Drawing{

// internal sealed class SolidRectangle :133
// {
uType* SolidRectangle_typeof();
void SolidRectangle__ctor__fn(SolidRectangle* __this);
void SolidRectangle__DrawElement_fn(SolidRectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float* opacity);
void SolidRectangle__init_DrawCalls_fn(SolidRectangle* __this);
void SolidRectangle__New1_fn(SolidRectangle** __retval);

struct SolidRectangle : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_66ccbe7e;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_77a0ae88;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c5598fc3;
    ::g::Uno::Float4x4 DrawElement_LocalTransform_77a0ae88_4_9_2;
    ::g::Uno::Float4x4 DrawElement_LocalTransform_77a0ae88_4_9_3;
    ::g::Uno::Float4x4 DrawElement_LocalTransform_77a0ae88_4_9_4;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_66ccbe7e_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_77a0ae88_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_b4859fb9_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_c5598fc3_7_2_1;
    static uSStrong<SolidRectangle*> Impl_;
    static uSStrong<SolidRectangle*>& Impl() { return Impl_; }

    void ctor_();
    void DrawElement(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float opacity);
    void init_DrawCalls();
    static SolidRectangle* New1();
};
// }

}}}} // ::g::Fuse::Internal::Drawing
