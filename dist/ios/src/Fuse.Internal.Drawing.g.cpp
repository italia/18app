// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Internal.Drawing.SolidRectangle.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.Vector.h>
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Internal{
namespace Drawing{

// /usr/local/share/uno/Packages/Fuse.Controls/1.3.1/Control.Background.uno
// ------------------------------------------------------------------------

// internal sealed class SolidRectangle :133
// {
// static generated SolidRectangle() :133
static void SolidRectangle__cctor__fn(uType* __type)
{
    SolidRectangle::Impl_ = SolidRectangle::New1();
}

static void SolidRectangle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[1] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[5] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(SolidRectangle, _draw_66ccbe7e), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(SolidRectangle, _draw_77a0ae88), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(SolidRectangle, _draw_c5598fc3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(SolidRectangle, DrawElement_LocalTransform_77a0ae88_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(SolidRectangle, DrawElement_LocalTransform_77a0ae88_4_9_3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(SolidRectangle, DrawElement_LocalTransform_77a0ae88_4_9_4), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(SolidRectangle, DrawElement_VertexData_66ccbe7e_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(SolidRectangle, DrawElement_VertexData_77a0ae88_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(SolidRectangle, DrawElement_VertexData_b4859fb9_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(SolidRectangle, DrawElement_VertexData_c5598fc3_7_2_1), 0,
        type, (uintptr_t)&SolidRectangle::Impl_, uFieldFlagsStatic);
}

uType* SolidRectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(SolidRectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.Drawing.SolidRectangle", options);
    type->fp_build_ = SolidRectangle_build;
    type->fp_ctor_ = (void*)SolidRectangle__New1_fn;
    type->fp_cctor_ = SolidRectangle__cctor__fn;
    return type;
}

// public generated SolidRectangle() :133
void SolidRectangle__ctor__fn(SolidRectangle* __this)
{
    __this->ctor_();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) :137
void SolidRectangle__DrawElement_fn(SolidRectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float* opacity)
{
    __this->DrawElement(dc, element, brush, *opacity);
}

// private generated void init_DrawCalls() :133
void SolidRectangle__init_DrawCalls_fn(SolidRectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated SolidRectangle New() :133
void SolidRectangle__New1_fn(SolidRectangle** __retval)
{
    *__retval = SolidRectangle::New1();
}

uSStrong<SolidRectangle*> SolidRectangle::Impl_;

// public generated SolidRectangle() [instance] :133
void SolidRectangle::ctor_()
{
    init_DrawCalls();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) [instance] :137
void SolidRectangle::DrawElement(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float opacity)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;

    if (uIs(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_77a0ae88_4_9_5 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_77a0ae88_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_77a0ae88_4_9_3, DrawElement_LocalTransform_77a0ae88_4_9_4);
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_77a0ae88_16_8_9 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, element->ActualSize());
        _draw_77a0ae88.BlendEnabled(true);
        _draw_77a0ae88.DepthTestEnabled(false);
        _draw_77a0ae88.CullFace(uPtr(dc)->CullFace());
        _draw_77a0ae88.BlendSrcAlpha(7);
        _draw_77a0ae88.BlendDstRgb(3);
        _draw_77a0ae88.Const(0, DP_77a0ae88_16_8_9.NeedFract);
        _draw_77a0ae88.Const(1, DP_77a0ae88_16_8_9.Texture == NULL);
        _draw_77a0ae88.Use();
        _draw_77a0ae88.Attrib1(2, 2, DrawElement_VertexData_77a0ae88_7_2_1, 8, 0);
        _draw_77a0ae88.Uniform12(3, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_77a0ae88.Uniform2(4, uPtr(element)->ActualSize());
        _draw_77a0ae88.Uniform2(5, DP_77a0ae88_16_8_9.Origin);
        _draw_77a0ae88.Uniform2(6, DP_77a0ae88_16_8_9.Size);
        _draw_77a0ae88.Uniform2(7, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_77a0ae88_16_8_9.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_77a0ae88_16_8_9.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
        _draw_77a0ae88.Uniform2(8, (ind3 = DP_77a0ae88_16_8_9.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
        _draw_77a0ae88.Uniform2(9, DP_77a0ae88_16_8_9.TexCoordScale1);
        _draw_77a0ae88.Uniform2(10, DP_77a0ae88_16_8_9.TexCoordBias1);
        _draw_77a0ae88.Uniform2(11, DP_77a0ae88_16_8_9.TexCoordScale2);
        _draw_77a0ae88.Uniform2(12, DP_77a0ae88_16_8_9.TexCoordBias2);
        _draw_77a0ae88.Uniform10(13, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_77a0ae88.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_77a0ae88.Uniform(15, opacity);
        _draw_77a0ae88.Uniform12(16, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_77a0ae88_4_9_5, element->WorldTransform()) : LocalTransform_77a0ae88_4_9_5);
        _draw_77a0ae88.Sampler3(17, DP_77a0ae88_16_8_9.Texture, DP_77a0ae88_16_8_9.SamplerState);
        _draw_77a0ae88.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c5598fc3_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_77a0ae88_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_77a0ae88_4_9_3, DrawElement_LocalTransform_77a0ae88_4_9_4);
        _draw_c5598fc3.BlendEnabled(true);
        _draw_c5598fc3.DepthTestEnabled(false);
        _draw_c5598fc3.CullFace(uPtr(dc)->CullFace());
        _draw_c5598fc3.BlendSrcAlpha(7);
        _draw_c5598fc3.BlendDstRgb(3);
        _draw_c5598fc3.Use();
        _draw_c5598fc3.Attrib1(0, 2, DrawElement_VertexData_c5598fc3_7_2_1, 8, 0);
        _draw_c5598fc3.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_c5598fc3.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind4 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Opacity()), opacity));
        _draw_c5598fc3.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c5598fc3_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_c5598fc3_4_9_2);
        _draw_c5598fc3.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_66ccbe7e_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_77a0ae88_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_77a0ae88_4_9_3, DrawElement_LocalTransform_77a0ae88_4_9_4);
        ::g::Uno::Float4 endPoints_66ccbe7e_16_17_8 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(element->ActualSize());
        _draw_66ccbe7e.BlendEnabled(true);
        _draw_66ccbe7e.DepthTestEnabled(false);
        _draw_66ccbe7e.CullFace(uPtr(dc)->CullFace());
        _draw_66ccbe7e.BlendSrcAlpha(7);
        _draw_66ccbe7e.BlendDstRgb(3);
        _draw_66ccbe7e.Use();
        _draw_66ccbe7e.Attrib1(0, 2, DrawElement_VertexData_66ccbe7e_7_2_1, 8, 0);
        _draw_66ccbe7e.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_66ccbe7e.Uniform2(2, uPtr(element)->ActualSize());
        _draw_66ccbe7e.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_66ccbe7e.Uniform(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_66ccbe7e.Uniform(5, opacity);
        _draw_66ccbe7e.Uniform12(6, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_66ccbe7e_4_9_2, element->WorldTransform()) : LocalTransform_66ccbe7e_4_9_2);
        _draw_66ccbe7e.Uniform10(7, endPoints_66ccbe7e_16_17_8);
        _draw_66ccbe7e.Uniform2(8, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_66ccbe7e_16_17_8.Z, endPoints_66ccbe7e_16_17_8.W), ::g::Uno::Float2__New2(endPoints_66ccbe7e_16_17_8.X, endPoints_66ccbe7e_16_17_8.Y))));
        _draw_66ccbe7e.Uniform(9, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_66ccbe7e_16_17_8.Z, endPoints_66ccbe7e_16_17_8.W), ::g::Uno::Float2__New2(endPoints_66ccbe7e_16_17_8.X, endPoints_66ccbe7e_16_17_8.Y))));
        _draw_66ccbe7e.Sampler3(10, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
        _draw_66ccbe7e.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_b4859fb9_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_77a0ae88_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_77a0ae88_4_9_3, DrawElement_LocalTransform_77a0ae88_4_9_4);
        _draw_c5598fc3.BlendEnabled(true);
        _draw_c5598fc3.DepthTestEnabled(false);
        _draw_c5598fc3.CullFace(uPtr(dc)->CullFace());
        _draw_c5598fc3.BlendSrcAlpha(7);
        _draw_c5598fc3.BlendDstRgb(3);
        _draw_c5598fc3.Use();
        _draw_c5598fc3.Attrib1(0, 2, DrawElement_VertexData_b4859fb9_7_2_1, 8, 0);
        _draw_c5598fc3.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_c5598fc3.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind5 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind5.X, ind5.Y, ind5.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), opacity));
        _draw_c5598fc3.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_b4859fb9_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_b4859fb9_4_9_2);
        _draw_c5598fc3.DrawArrays(6);
    }
}

// private generated void init_DrawCalls() [instance] :133
void SolidRectangle::init_DrawCalls()
{
    uArray* Vertices_77a0ae88_7_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[5/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    DrawElement_VertexData_77a0ae88_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_77a0ae88_7_1_0), 0);
    DrawElement_LocalTransform_77a0ae88_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_LocalTransform_77a0ae88_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    DrawElement_LocalTransform_77a0ae88_4_9_4 = ::g::Uno::Matrix::Translation(::g::Uno::Float2__New1(0.0f).X, ::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_VertexData_c5598fc3_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_77a0ae88_7_1_0), 0);
    DrawElement_VertexData_66ccbe7e_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_77a0ae88_7_1_0), 0);
    DrawElement_VertexData_b4859fb9_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_77a0ae88_7_1_0), 0);
    _draw_77a0ae88 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle2f148815());
    _draw_c5598fc3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangled1bbfcb0());
    _draw_66ccbe7e = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle7463714b());
}

// public generated SolidRectangle New() [static] :133
SolidRectangle* SolidRectangle::New1()
{
    SolidRectangle* obj6 = (SolidRectangle*)uNew(SolidRectangle_typeof());
    obj6->ctor_();
    return obj6;
}
// }

}}}} // ::g::Fuse::Internal::Drawing
