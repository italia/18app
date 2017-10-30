// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseElements_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Internal.Scale9Rectangle.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.UShort.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Elements{
namespace Internal{

// /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Drawing/Scale9Rectangle.uno
// -----------------------------------------------------------------------------

// internal sealed class Scale9Rectangle :7
// {
// static generated Scale9Rectangle() :7
static void Scale9Rectangle__cctor__fn(uType* __type)
{
    Scale9Rectangle::Impl_ = Scale9Rectangle::New1();
}

static void Scale9Rectangle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[1] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Float3_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Scale9Rectangle, _draw_42808b82), 0,
        ::TYPES[1/*ushort[]*/], offsetof(Scale9Rectangle, Draw_indices_42808b82_1_2_13), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(Scale9Rectangle, Draw_xv_42808b82_1_3_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Scale9Rectangle, Draw_xv_42808b82_1_3_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Scale9Rectangle, Draw_yv_42808b82_1_4_6), 0,
        type, (uintptr_t)&Scale9Rectangle::Impl_, uFieldFlagsStatic);
}

uType* Scale9Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Scale9Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.Internal.Scale9Rectangle", options);
    type->fp_build_ = Scale9Rectangle_build;
    type->fp_ctor_ = (void*)Scale9Rectangle__New1_fn;
    type->fp_cctor_ = Scale9Rectangle__cctor__fn;
    return type;
}

// public generated Scale9Rectangle() :7
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, texture2D tex, float4 color, float4 margin) :11
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float4* color, ::g::Uno::Float4* margin)
{
    __this->Draw(dc, element, *size, *scaleTextureSize, tex, *color, *margin);
}

// private generated void init_DrawCalls() :7
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated Scale9Rectangle New() :7
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval)
{
    *__retval = Scale9Rectangle::New1();
}

uSStrong<Scale9Rectangle*> Scale9Rectangle::Impl_;

// public generated Scale9Rectangle() [instance] :7
void Scale9Rectangle::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, texture2D tex, float4 color, float4 margin) [instance] :11
void Scale9Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float4 color, ::g::Uno::Float4 margin)
{
    _draw_42808b82.BlendEnabled(true);
    _draw_42808b82.DepthTestEnabled(false);
    _draw_42808b82.CullFace(0);
    _draw_42808b82.BlendSrcRgb(2);
    _draw_42808b82.BlendDstRgb(3);
    _draw_42808b82.BlendDstAlpha(3);
    _draw_42808b82.Use();
    _draw_42808b82.Attrib1(0, 3, Draw_xv_42808b82_1_3_3, 12, 0);
    _draw_42808b82.Attrib1(1, 3, Draw_yv_42808b82_1_4_6, 12, 0);
    _draw_42808b82.Uniform(2, margin.X);
    _draw_42808b82.Uniform(3, size.X - margin.Z);
    _draw_42808b82.Uniform(4, size.X);
    _draw_42808b82.Uniform(5, margin.Y);
    _draw_42808b82.Uniform(6, size.Y - margin.W);
    _draw_42808b82.Uniform(7, size.Y);
    _draw_42808b82.Uniform12(8, uPtr(element)->WorldTransform());
    _draw_42808b82.Uniform12(9, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(dc)->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    _draw_42808b82.Uniform(10, scaleTextureSize.X - margin.Z);
    _draw_42808b82.Uniform(11, scaleTextureSize.X);
    _draw_42808b82.Uniform(12, scaleTextureSize.Y - margin.W);
    _draw_42808b82.Uniform(13, scaleTextureSize.Y);
    _draw_42808b82.Uniform2(14, scaleTextureSize);
    _draw_42808b82.Uniform10(15, color);
    _draw_42808b82.Sampler3(16, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_42808b82.Draw(uPtr(Draw_indices_42808b82_1_2_13)->Length(), 2, Draw_xv_42808b82_1_3_2);
}

// private generated void init_DrawCalls() [instance] :7
void Scale9Rectangle::init_DrawCalls()
{
    uArray* indices_42808b82_1_2_1 = uArray::Init<int>(::TYPES[1/*ushort[]*/], 54, 0, 4, 5, 0, 5, 1, 1, 5, 6, 1, 6, 2, 2, 6, 7, 2, 7, 3, 4, 8, 9, 4, 9, 5, 5, 9, 10, 5, 10, 6, 6, 10, 11, 6, 11, 7, 8, 12, 13, 8, 13, 9, 9, 13, 14, 9, 14, 10, 10, 14, 15, 10, 15, 11);
    Draw_xv_42808b82_1_3_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(indices_42808b82_1_2_1), 0);
    Draw_xv_42808b82_1_3_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[2/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_yv_42808b82_1_4_6 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[2/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_indices_42808b82_1_2_13 = indices_42808b82_1_2_1;
    _draw_42808b82 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::Scale9Rectangle720ad3ad());
}

// public generated Scale9Rectangle New() [static] :7
Scale9Rectangle* Scale9Rectangle::New1()
{
    Scale9Rectangle* obj1 = (Scale9Rectangle*)uNew(Scale9Rectangle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Fuse::Elements::Internal
