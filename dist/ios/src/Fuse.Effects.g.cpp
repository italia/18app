// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseEffects_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Effects.Desaturate.h>
#include <Fuse.Effects.DropShadow.Blitter.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Duotone.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Effects.EffectHelpers.h>
#include <Fuse.Effects.EffectType.h>
#include <Fuse.Effects.Halftone.h>
#include <Fuse.Effects.Mask.h>
#include <Fuse.Effects.Mask.MaskMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualBounds.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
static uString* STRINGS[1];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Effects{

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/BasicEffect.uno
// ----------------------------------------------------------------

// public abstract class BasicEffect :7
// {
static void BasicEffect_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(BasicEffect_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(BasicEffect_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(BasicEffect_type, interface5));
    type->SetFields(19);
}

BasicEffect_type* BasicEffect_typeof()
{
    static uSStrong<BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::Effect_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(BasicEffect);
    options.TypeSize = sizeof(BasicEffect_type);
    type = (BasicEffect_type*)uClassType::New("Fuse.Effects.BasicEffect", options);
    type->fp_build_ = BasicEffect_build;
    type->fp_Render = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::DrawContext*))BasicEffect__Render_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected BasicEffect(Fuse.Effects.EffectType effectType) :9
void BasicEffect__ctor_3_fn(BasicEffect* __this, int* effectType)
{
    __this->ctor_3(*effectType);
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :22
void BasicEffect__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = BasicEffect::ConservativelySnapToCoveringIntegers(*r);
}

// protected Uno.Rect GetLocalElementRect() :34
void BasicEffect__GetLocalElementRect_fn(BasicEffect* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetLocalElementRect();
}

// public override sealed void Render(Fuse.DrawContext dc) :14
void BasicEffect__Render_fn(BasicEffect* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Rect rect = __this->GetLocalElementRect();
    __this->OnRender(dc, rect);
}

// protected BasicEffect(Fuse.Effects.EffectType effectType) [instance] :9
void BasicEffect::ctor_3(int effectType)
{
    ctor_2(effectType);
}

// protected Uno.Rect GetLocalElementRect() [instance] :34
::g::Uno::Rect BasicEffect::GetLocalElementRect()
{
    ::g::Uno::Recti ir = BasicEffect::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(uPtr(uPtr(Element())->RenderBoundsWithoutEffects())->FlatRect(), uPtr(Element())->AbsoluteZoom()));
    return ::g::Uno::Rect__New1((float)ir.Minimum().X / uPtr(Element())->AbsoluteZoom(), (float)ir.Minimum().Y / uPtr(Element())->AbsoluteZoom(), (float)ir.Maximum().X / uPtr(Element())->AbsoluteZoom(), (float)ir.Maximum().Y / uPtr(Element())->AbsoluteZoom());
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :22
::g::Uno::Recti BasicEffect::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Floor2(r.LeftTop()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Subtraction2(r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/DropShadow.uno
// ---------------------------------------------------------------

// private sealed class DropShadow.Blitter :172
// {
static void DropShadow__Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(DropShadow__Blitter, _draw_969193be), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(DropShadow__Blitter, Blit_LocalTransform_969193be_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(DropShadow__Blitter, Blit_LocalTransform_969193be_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(DropShadow__Blitter, Blit_VertexData_969193be_7_2_1), 0,
        type, (uintptr_t)&DropShadow__Blitter::_instance_, uFieldFlagsStatic);
}

uType* DropShadow__Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DropShadow__Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Effects.DropShadow.Blitter", options);
    type->fp_build_ = DropShadow__Blitter_build;
    type->fp_ctor_ = (void*)DropShadow__Blitter__New1_fn;
    return type;
}

// public generated Blitter() :172
void DropShadow__Blitter__ctor__fn(DropShadow__Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Element element, Uno.Rect elementRect, float padding, int2 tempSize, texture2D blurTexture, float spreadScale, float2 offset, float4 color) :180
void DropShadow__Blitter__Blit_fn(DropShadow__Blitter* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Rect* elementRect, float* padding, ::g::Uno::Int2* tempSize, ::g::Uno::Graphics::Texture2D* blurTexture, float* spreadScale, ::g::Uno::Float2* offset, ::g::Uno::Float4* color)
{
    __this->Blit(dc, element, *elementRect, *padding, *tempSize, blurTexture, *spreadScale, *offset, *color);
}

// private generated void init_DrawCalls() :172
void DropShadow__Blitter__init_DrawCalls_fn(DropShadow__Blitter* __this)
{
    __this->init_DrawCalls();
}

// public static Fuse.Effects.DropShadow.Blitter get_Instance() :177
void DropShadow__Blitter__get_Instance_fn(DropShadow__Blitter** __retval)
{
    *__retval = DropShadow__Blitter::Instance();
}

// public generated Blitter New() :172
void DropShadow__Blitter__New1_fn(DropShadow__Blitter** __retval)
{
    *__retval = DropShadow__Blitter::New1();
}

uSStrong<DropShadow__Blitter*> DropShadow__Blitter::_instance_;

// public generated Blitter() [instance] :172
void DropShadow__Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Element element, Uno.Rect elementRect, float padding, int2 tempSize, texture2D blurTexture, float spreadScale, float2 offset, float4 color) [instance] :180
void DropShadow__Blitter::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Rect elementRect, float padding, ::g::Uno::Int2 tempSize, ::g::Uno::Graphics::Texture2D* blurTexture, float spreadScale, ::g::Uno::Float2 offset, ::g::Uno::Float4 color)
{
    ::g::Uno::Float4x4 LocalTransform_969193be_4_9_4 = ::g::Uno::Matrix::Mul10(Blit_LocalTransform_969193be_4_9_2, ::g::Uno::Matrix::Scaling1(::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tempSize.X, (float)tempSize.Y), uPtr(element)->AbsoluteZoom()).X, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tempSize.X, (float)tempSize.Y), uPtr(element)->AbsoluteZoom()).Y, 1.0f), Blit_LocalTransform_969193be_4_9_3, ::g::Uno::Matrix::Translation(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Addition2(elementRect.Minimum(), offset), padding).X, ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Addition2(elementRect.Minimum(), offset), padding).Y, 0.0f));
    _draw_969193be.BlendEnabled(true);
    _draw_969193be.DepthTestEnabled(false);
    _draw_969193be.CullFace(uPtr(dc)->CullFace());
    _draw_969193be.BlendSrcRgb(2);
    _draw_969193be.BlendDstRgb(3);
    _draw_969193be.BlendDstAlpha(3);
    _draw_969193be.Use();
    _draw_969193be.Attrib1(0, 2, Blit_VertexData_969193be_7_2_1, 8, 0);
    _draw_969193be.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    _draw_969193be.Uniform(2, spreadScale);
    _draw_969193be.Uniform(3, color.W);
    _draw_969193be.Uniform6(4, ::g::Uno::Float3__New2(color.X, color.Y, color.Z));
    _draw_969193be.Uniform12(5, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_969193be_4_9_4, uPtr(element)->WorldTransform()) : LocalTransform_969193be_4_9_4);
    _draw_969193be.Sampler3(6, blurTexture, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_969193be.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :172
void DropShadow__Blitter::init_DrawCalls()
{
    Blit_VertexData_969193be_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Blit_LocalTransform_969193be_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Blit_LocalTransform_969193be_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_969193be = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::Blitter6e650d31());
}

// public generated Blitter New() [static] :172
DropShadow__Blitter* DropShadow__Blitter::New1()
{
    DropShadow__Blitter* obj2 = (DropShadow__Blitter*)uNew(DropShadow__Blitter_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Fuse.Effects.DropShadow.Blitter get_Instance() [static] :177
DropShadow__Blitter* DropShadow__Blitter::Instance()
{
    DropShadow__Blitter* ind1;
    ind1 = DropShadow__Blitter::_instance_;
    return (ind1 != NULL) ? ind1 : (DropShadow__Blitter*)(DropShadow__Blitter::_instance_ = DropShadow__Blitter::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/Blur.uno
// ---------------------------------------------------------

// public sealed class Blur :13
// {
static void Blur_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5));
    type->SetFields(19,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Blur, _draw_7a2fdace), 0,
        ::g::Uno::Float_typeof(), offsetof(Blur, _radius), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Blur, OnRender_LocalTransform_7a2fdace_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Blur, OnRender_LocalTransform_7a2fdace_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Blur, OnRender_VertexData_7a2fdace_7_2_1), 0);
}

::g::Fuse::Effects::BasicEffect_type* Blur_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Blur);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Blur", options);
    type->fp_build_ = Blur_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Effects::Effect*, bool*))Blur__get_Active_fn;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))Blur__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Blur__OnRender_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public override sealed bool get_Active() :38
void Blur__get_Active_fn(Blur* __this, bool* __retval)
{
    return *__retval = __this->Radius() > 0.0f, void();
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds) :40
void Blur__ModifyRenderBounds_fn(Blur* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = uPtr(inBounds)->InflateXY(__this->Padding()), void();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :48
void Blur__OnRender_fn(Blur* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Rect paddedRect = ::g::Uno::Rect__Inflate(elementRect_, __this->Padding());
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, paddedRect, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == NULL)
        return;

    ::g::Uno::Graphics::Framebuffer* blur = uPtr(::g::Fuse::Effects::EffectHelpers::Instance())->Blur(uPtr(original)->ColorBuffer(), dc, __this->Sigma() * uPtr(__this->Element())->AbsoluteZoom());
    ::g::Fuse::FramebufferPool::Release(original);
    ::g::Uno::Float4x4 LocalTransform_7a2fdace_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_7a2fdace_4_9_2, ::g::Uno::Matrix::Scaling1(paddedRect.Size().X, paddedRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_7a2fdace_4_9_3, ::g::Uno::Matrix::Translation(::g::Uno::Float2__op_Subtraction1(elementRect_.Minimum(), __this->Padding()).X, ::g::Uno::Float2__op_Subtraction1(elementRect_.Minimum(), __this->Padding()).Y, 0.0f));
    __this->_draw_7a2fdace.BlendEnabled(true);
    __this->_draw_7a2fdace.DepthTestEnabled(false);
    __this->_draw_7a2fdace.CullFace(uPtr(dc)->CullFace());
    __this->_draw_7a2fdace.BlendSrcAlpha(7);
    __this->_draw_7a2fdace.BlendDstRgb(3);
    __this->_draw_7a2fdace.Use();
    __this->_draw_7a2fdace.Attrib1(0, 2, __this->OnRender_VertexData_7a2fdace_7_2_1, 8, 0);
    __this->_draw_7a2fdace.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    __this->_draw_7a2fdace.Uniform12(2, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_7a2fdace_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_7a2fdace_4_9_4);
    __this->_draw_7a2fdace.Sampler3(3, uPtr(blur)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    __this->_draw_7a2fdace.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(blur);
}

// internal float get_Padding() :46
void Blur__get_Padding_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Padding();
}

// public float get_Radius() :25
void Blur__get_Radius_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value) :26
void Blur__set_Radius_fn(Blur* __this, float* value)
{
    __this->Radius(*value);
}

// internal float get_Sigma() :45
void Blur__get_Sigma_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Sigma();
}

// internal float get_Padding() [instance] :46
float Blur::Padding()
{
    return ::g::Uno::Math::Ceil1((Sigma() * 3.0f) * uPtr(Element())->AbsoluteZoom()) / uPtr(Element())->AbsoluteZoom();
}

// public float get_Radius() [instance] :25
float Blur::Radius()
{
    return _radius;
}

// public void set_Radius(float value) [instance] :26
void Blur::Radius(float value)
{
    if (_radius != value)
    {
        _radius = value;
        OnRenderingChanged();
        OnRenderBoundsChanged();
    }
}

// internal float get_Sigma() [instance] :45
float Blur::Sigma()
{
    return ::g::Uno::Math::Max1(Radius(), 1e-05f);
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/Desaturate.uno
// ---------------------------------------------------------------

// public sealed class Desaturate :11
// {
static void Desaturate_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5));
    type->SetFields(19,
        ::g::Uno::Float_typeof(), offsetof(Desaturate, _amount), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Desaturate, _draw_bd5b5311), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Desaturate, OnRender_LocalTransform_bd5b5311_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Desaturate, OnRender_LocalTransform_bd5b5311_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Desaturate, OnRender_VertexData_bd5b5311_7_2_1), 0);
}

::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Desaturate);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Desaturate", options);
    type->fp_build_ = Desaturate_build;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Desaturate__OnRender_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public float get_Amount() :24
void Desaturate__get_Amount_fn(Desaturate* __this, float* __retval)
{
    *__retval = __this->Amount();
}

// public void set_Amount(float value) :25
void Desaturate__set_Amount_fn(Desaturate* __this, float* value)
{
    __this->Amount(*value);
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :35
void Desaturate__OnRender_fn(Desaturate* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == NULL)
        return;

    ::g::Uno::Float4x4 LocalTransform_bd5b5311_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_bd5b5311_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_bd5b5311_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
    __this->_draw_bd5b5311.BlendEnabled(true);
    __this->_draw_bd5b5311.DepthTestEnabled(false);
    __this->_draw_bd5b5311.CullFace(uPtr(dc)->CullFace());
    __this->_draw_bd5b5311.BlendSrcRgb(2);
    __this->_draw_bd5b5311.BlendDstRgb(3);
    __this->_draw_bd5b5311.BlendDstAlpha(3);
    __this->_draw_bd5b5311.Use();
    __this->_draw_bd5b5311.Attrib1(0, 2, __this->OnRender_VertexData_bd5b5311_7_2_1, 8, 0);
    __this->_draw_bd5b5311.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    __this->_draw_bd5b5311.Uniform(2, __this->Amount());
    __this->_draw_bd5b5311.Uniform12(3, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_bd5b5311_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_bd5b5311_4_9_4);
    __this->_draw_bd5b5311.Sampler3(4, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    __this->_draw_bd5b5311.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(original);
}

// public float get_Amount() [instance] :24
float Desaturate::Amount()
{
    return _amount;
}

// public void set_Amount(float value) [instance] :25
void Desaturate::Amount(float value)
{
    if (_amount != value)
    {
        _amount = value;
        OnRenderingChanged();
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/DropShadow.uno
// ---------------------------------------------------------------

// public sealed class DropShadow :11
// {
static void DropShadow_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5));
    type->SetFields(19,
        ::g::Uno::Float_typeof(), offsetof(DropShadow, _angle), 0,
        ::g::Uno::Float4_typeof(), offsetof(DropShadow, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(DropShadow, _distance), 0,
        ::g::Uno::Float_typeof(), offsetof(DropShadow, _size), 0,
        ::g::Uno::Float_typeof(), offsetof(DropShadow, _spread), 0);
}

::g::Fuse::Effects::BasicEffect_type* DropShadow_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(DropShadow);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.DropShadow", options);
    type->fp_build_ = DropShadow_build;
    type->fp_ctor_ = (void*)DropShadow__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Effects::Effect*, bool*))DropShadow__get_Active_fn;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))DropShadow__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))DropShadow__OnRender_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public DropShadow() :164
void DropShadow__ctor_4_fn(DropShadow* __this)
{
    __this->ctor_4();
}

// public override sealed bool get_Active() :142
void DropShadow__get_Active_fn(DropShadow* __this, bool* __retval)
{
    return *__retval = __this->Color().W > 0.0f, void();
}

// public float get_Angle() :39
void DropShadow__get_Angle_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Angle();
}

// public void set_Angle(float value) :40
void DropShadow__set_Angle_fn(DropShadow* __this, float* value)
{
    __this->Angle(*value);
}

// public float4 get_Color() :113
void DropShadow__get_Color_fn(DropShadow* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :117
void DropShadow__set_Color_fn(DropShadow* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_Distance() :59
void DropShadow__get_Distance_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public void set_Distance(float value) :60
void DropShadow__set_Distance_fn(DropShadow* __this, float* value)
{
    __this->Distance(*value);
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds) :134
void DropShadow__ModifyRenderBounds_fn(DropShadow* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    ::g::Fuse::VisualBounds* r = uPtr(uPtr(inBounds)->InflateXY(__this->Padding()))->Translate(::g::Uno::Float3__New4(__this->Offset(), 0.0f));
    return *__retval = inBounds->Merge(r, NULL), void();
}

// public DropShadow New() :164
void DropShadow__New2_fn(DropShadow** __retval)
{
    *__retval = DropShadow::New2();
}

// private float2 get_Offset() :77
void DropShadow__get_Offset_fn(DropShadow* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Offset();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :148
void DropShadow__OnRender_fn(DropShadow* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* temp = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__New1(__this->Padding()));

    if (temp == NULL)
        return;

    ::g::Uno::Graphics::Framebuffer* blur = uPtr(::g::Fuse::Effects::EffectHelpers::Instance())->Blur(uPtr(temp)->ColorBuffer(), dc, __this->Sigma() * uPtr(__this->Element())->AbsoluteZoom());
    float spreadScale = ::g::Uno::Math::Pow1(1.0f / ::g::Uno::Math::Max1(1.0f - __this->Spread(), 1e-10f), 2.0f);
    uPtr(DropShadow__Blitter::Instance())->Blit(dc, __this->Element(), elementRect_, __this->Padding(), temp->Size(), uPtr(blur)->ColorBuffer(), spreadScale, __this->Offset(), __this->Color());
    ::g::Fuse::FramebufferPool::Release(blur);
    ::g::Fuse::FramebufferPool::Release(temp);
}

// internal float get_Padding() :132
void DropShadow__get_Padding_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Padding();
}

// private float get_Radius() :33
void DropShadow__get_Radius_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// internal float get_Sigma() :131
void DropShadow__get_Sigma_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Sigma();
}

// public float get_Size() :17
void DropShadow__get_Size_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float value) :18
void DropShadow__set_Size_fn(DropShadow* __this, float* value)
{
    __this->Size(*value);
}

// public float get_Spread() :88
void DropShadow__get_Spread_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Spread();
}

// public void set_Spread(float value) :89
void DropShadow__set_Spread_fn(DropShadow* __this, float* value)
{
    __this->Spread(*value);
}

// public DropShadow() [instance] :164
void DropShadow::ctor_4()
{
    ctor_3(0);
    Size(5.0f);
    Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.35f));
    Angle(90.0f);
    Distance(3.0f);
}

// public float get_Angle() [instance] :39
float DropShadow::Angle()
{
    return _angle;
}

// public void set_Angle(float value) [instance] :40
void DropShadow::Angle(float value)
{
    if (_angle != value)
    {
        _angle = value;

        if (Active())
        {
            OnRenderingChanged();
            OnRenderBoundsChanged();
        }
    }
}

// public float4 get_Color() [instance] :113
::g::Uno::Float4 DropShadow::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :117
void DropShadow::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        bool wasActive = Active();
        _color = value;

        if (wasActive || Active())
            OnRenderingChanged();
    }
}

// public float get_Distance() [instance] :59
float DropShadow::Distance()
{
    return _distance;
}

// public void set_Distance(float value) [instance] :60
void DropShadow::Distance(float value)
{
    if (_distance != value)
    {
        _distance = value;

        if (Active())
        {
            OnRenderingChanged();
            OnRenderBoundsChanged();
        }
    }
}

// private float2 get_Offset() [instance] :77
::g::Uno::Float2 DropShadow::Offset()
{
    float th = Angle() * 0.0174532924f;
    return ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__New2(-::g::Uno::Math::Cos1(th), ::g::Uno::Math::Sin1(th)), Distance());
}

// internal float get_Padding() [instance] :132
float DropShadow::Padding()
{
    return ::g::Uno::Math::Ceil1((Sigma() * 3.0f) * uPtr(Element())->AbsoluteZoom()) / uPtr(Element())->AbsoluteZoom();
}

// private float get_Radius() [instance] :33
float DropShadow::Radius()
{
    return Size() / 2.0f;
}

// internal float get_Sigma() [instance] :131
float DropShadow::Sigma()
{
    return ::g::Uno::Math::Max1(Radius(), 1e-05f);
}

// public float get_Size() [instance] :17
float DropShadow::Size()
{
    return _size;
}

// public void set_Size(float value) [instance] :18
void DropShadow::Size(float value)
{
    if (_size != value)
    {
        _size = value;

        if (Active())
        {
            OnRenderingChanged();
            OnRenderBoundsChanged();
        }
    }
}

// public float get_Spread() [instance] :88
float DropShadow::Spread()
{
    return _spread;
}

// public void set_Spread(float value) [instance] :89
void DropShadow::Spread(float value)
{
    value = ::g::Uno::Math::Clamp1(value, 0.0f, 1.0f);

    if (_spread != value)
    {
        bool wasActive = Active();
        _spread = value;

        if (wasActive || Active())
            OnRenderingChanged();
    }
}

// public DropShadow New() [static] :164
DropShadow* DropShadow::New2()
{
    DropShadow* obj1 = (DropShadow*)uNew(DropShadow_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/Duotone.uno
// ------------------------------------------------------------

// public sealed class Duotone :13
// {
static void Duotone_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5));
    type->SetFields(19,
        ::g::Uno::Float_typeof(), offsetof(Duotone, _amount), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Duotone, _draw_80b7f54b), 0,
        ::g::Uno::Float3_typeof(), offsetof(Duotone, _light), 0,
        ::g::Uno::Float3_typeof(), offsetof(Duotone, _shadow), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Duotone, OnRender_LocalTransform_80b7f54b_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Duotone, OnRender_LocalTransform_80b7f54b_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Duotone, OnRender_VertexData_80b7f54b_7_2_1), 0);
}

::g::Fuse::Effects::BasicEffect_type* Duotone_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Duotone);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Duotone", options);
    type->fp_build_ = Duotone_build;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Duotone__OnRender_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public float get_Amount() :27
void Duotone__get_Amount_fn(Duotone* __this, float* __retval)
{
    *__retval = __this->Amount();
}

// public void set_Amount(float value) :28
void Duotone__set_Amount_fn(Duotone* __this, float* value)
{
    __this->Amount(*value);
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :74
void Duotone__OnRender_fn(Duotone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == NULL)
        return;

    ::g::Uno::Float4x4 LocalTransform_80b7f54b_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_80b7f54b_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_80b7f54b_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
    __this->_draw_80b7f54b.BlendEnabled(true);
    __this->_draw_80b7f54b.DepthTestEnabled(false);
    __this->_draw_80b7f54b.CullFace(uPtr(dc)->CullFace());
    __this->_draw_80b7f54b.BlendSrcRgb(2);
    __this->_draw_80b7f54b.BlendDstRgb(3);
    __this->_draw_80b7f54b.BlendDstAlpha(3);
    __this->_draw_80b7f54b.Use();
    __this->_draw_80b7f54b.Attrib1(0, 2, __this->OnRender_VertexData_80b7f54b_7_2_1, 8, 0);
    __this->_draw_80b7f54b.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    __this->_draw_80b7f54b.Uniform6(2, __this->_shadow);
    __this->_draw_80b7f54b.Uniform6(3, __this->_light);
    __this->_draw_80b7f54b.Uniform(4, __this->Amount());
    __this->_draw_80b7f54b.Uniform12(5, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_80b7f54b_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_80b7f54b_4_9_4);
    __this->_draw_80b7f54b.Sampler3(6, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    __this->_draw_80b7f54b.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(original);
}

// public float get_Amount() [instance] :27
float Duotone::Amount()
{
    return _amount;
}

// public void set_Amount(float value) [instance] :28
void Duotone::Amount(float value)
{
    if (_amount != value)
    {
        _amount = value;
        OnRenderingChanged();
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Effects/Effect.uno
// --------------------------------------------------------------------

// public abstract class Effect :15
// {
static void Effect_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Effects can only be parented to Elements");
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Effect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Effect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Effect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Effect_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Effect_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Effect_type, interface5));
    type->SetFields(15,
        ::g::Fuse::Effects::EffectType_typeof(), offsetof(Effect, _effectType), 0,
        ::TYPES[2/*Fuse.Elements.Element*/], offsetof(Effect, _Element), 0,
        ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/], offsetof(Effect, RenderBoundsChanged1), 0,
        ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/], offsetof(Effect, RenderingChanged1), 0);
}

Effect_type* Effect_typeof()
{
    static uSStrong<Effect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Effect);
    options.TypeSize = sizeof(Effect_type);
    type = (Effect_type*)uClassType::New("Fuse.Effects.Effect", options);
    type->fp_build_ = Effect_build;
    type->fp_get_Active = Effect__get_Active_fn;
    type->fp_ModifyRenderBounds = Effect__ModifyRenderBounds_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Effect__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Effect__OnUnrooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected Effect(Fuse.Effects.EffectType effectType) :20
void Effect__ctor_2_fn(Effect* __this, int* effectType)
{
    __this->ctor_2(*effectType);
}

// public virtual bool get_Active() :65
void Effect__get_Active_fn(Effect* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated Fuse.Elements.Element get_Element() :45
void Effect__get_Element_fn(Effect* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Element();
}

// private generated void set_Element(Fuse.Elements.Element value) :45
void Effect__set_Element_fn(Effect* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Element(value);
}

// public virtual Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds) :68
void Effect__ModifyRenderBounds_fn(Effect* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = inBounds, void();
}

// protected void OnRenderBoundsChanged() :58
void Effect__OnRenderBoundsChanged_fn(Effect* __this)
{
    __this->OnRenderBoundsChanged();
}

// protected void OnRenderingChanged() :50
void Effect__OnRenderingChanged_fn(Effect* __this)
{
    __this->OnRenderingChanged();
}

// protected override void OnRooted() :25
void Effect__OnRooted_fn(Effect* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[2/*Fuse.Elements.Element*/]);

    if (elm == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Effects can...*/]));

    __this->Element(elm);
    uPtr(__this->Element())->AddDrawCost(3.0);
}

// protected override void OnUnrooted() :37
void Effect__OnUnrooted_fn(Effect* __this)
{
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    uPtr(__this->Element())->RemoveDrawCost(3.0);
    __this->Element(NULL);
}

// public generated void add_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) :56
void Effect__add_RenderBoundsChanged_fn(Effect* __this, uDelegate* value)
{
    __this->add_RenderBoundsChanged(value);
}

// public generated void remove_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) :56
void Effect__remove_RenderBoundsChanged_fn(Effect* __this, uDelegate* value)
{
    __this->remove_RenderBoundsChanged(value);
}

// public generated void add_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) :48
void Effect__add_RenderingChanged_fn(Effect* __this, uDelegate* value)
{
    __this->add_RenderingChanged(value);
}

// public generated void remove_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) :48
void Effect__remove_RenderingChanged_fn(Effect* __this, uDelegate* value)
{
    __this->remove_RenderingChanged(value);
}

// public Fuse.Effects.EffectType get_Type() :18
void Effect__get_Type_fn(Effect* __this, int* __retval)
{
    *__retval = __this->Type();
}

// protected Effect(Fuse.Effects.EffectType effectType) [instance] :20
void Effect::ctor_2(int effectType)
{
    ctor_1();
    _effectType = effectType;
}

// public generated Fuse.Elements.Element get_Element() [instance] :45
::g::Fuse::Elements::Element* Effect::Element()
{
    return _Element;
}

// private generated void set_Element(Fuse.Elements.Element value) [instance] :45
void Effect::Element(::g::Fuse::Elements::Element* value)
{
    _Element = value;
}

// protected void OnRenderBoundsChanged() [instance] :58
void Effect::OnRenderBoundsChanged()
{
    if (::g::Uno::Delegate::op_Inequality(RenderBoundsChanged1, NULL))
        uPtr(RenderBoundsChanged1)->InvokeVoid(this);
}

// protected void OnRenderingChanged() [instance] :50
void Effect::OnRenderingChanged()
{
    if (::g::Uno::Delegate::op_Inequality(RenderingChanged1, NULL))
        uPtr(RenderingChanged1)->InvokeVoid(this);
}

// public generated void add_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) [instance] :56
void Effect::add_RenderBoundsChanged(uDelegate* value)
{
    RenderBoundsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderBoundsChanged1, value), ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public generated void remove_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) [instance] :56
void Effect::remove_RenderBoundsChanged(uDelegate* value)
{
    RenderBoundsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderBoundsChanged1, value), ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public generated void add_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) [instance] :48
void Effect::add_RenderingChanged(uDelegate* value)
{
    RenderingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderingChanged1, value), ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public generated void remove_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) [instance] :48
void Effect::remove_RenderingChanged(uDelegate* value)
{
    RenderingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderingChanged1, value), ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public Fuse.Effects.EffectType get_Type() [instance] :18
int Effect::Type()
{
    return _effectType;
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/EffectHelpers.Blur.uno
// -----------------------------------------------------------------------

// internal partial sealed class EffectHelpers :9
// {
static void EffectHelpers_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[5] = ::g::Uno::UShort_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(EffectHelpers, _draw_2aabda0d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(EffectHelpers, _draw_44444bad), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(EffectHelpers, _draw_6379debe), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(EffectHelpers, _draw_8e4c5d82), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(EffectHelpers, GaussianBlurSeparable_VertexData_2aabda0d_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(EffectHelpers, GaussianBlurSeparable_VertexData_2aabda0d_2_5_3), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(EffectHelpers, ResampleBilinear_VertexData_44444bad_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(EffectHelpers, ResampleBilinear_VertexData_44444bad_2_5_3), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(EffectHelpers, ResampleGaussian5tap_VertexData_8e4c5d82_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(EffectHelpers, ResampleGaussian5tap_VertexData_8e4c5d82_2_5_3), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(EffectHelpers, ResampleGaussian9tap_VertexData_6379debe_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(EffectHelpers, ResampleGaussian9tap_VertexData_6379debe_2_5_3), 0,
        type, (uintptr_t)&EffectHelpers::_instance_, uFieldFlagsStatic);
}

uType* EffectHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(EffectHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Effects.EffectHelpers", options);
    type->fp_build_ = EffectHelpers_build;
    type->fp_ctor_ = (void*)EffectHelpers__New1_fn;
    return type;
}

// public generated EffectHelpers() :9
void EffectHelpers__ctor__fn(EffectHelpers* __this)
{
    __this->ctor_();
}

// public framebuffer Blur(texture2D original, Fuse.DrawContext dc, float sigma) :17
void EffectHelpers__Blur_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float* sigma, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Blur(original, dc, *sigma);
}

// private framebuffer BlurHorizontal(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) :156
void EffectHelpers__BlurHorizontal_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int* samples, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->BlurHorizontal(dc, *size, tex, *sigma, *samples);
}

// private framebuffer BlurVertical(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) :168
void EffectHelpers__BlurVertical_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int* samples, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->BlurVertical(dc, *size, tex, *sigma, *samples);
}

// private void GaussianBlurSeparable(texture2D tex, float2 dir, float sigma, int samples) :180
void EffectHelpers__GaussianBlurSeparable_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2* dir, float* sigma, int* samples)
{
    __this->GaussianBlurSeparable(tex, *dir, *sigma, *samples);
}

// private generated void init_DrawCalls() :9
void EffectHelpers__init_DrawCalls_fn(EffectHelpers* __this)
{
    __this->init_DrawCalls();
}

// public static Fuse.Effects.EffectHelpers get_Instance() :14
void EffectHelpers__get_Instance_fn(EffectHelpers** __retval)
{
    *__retval = EffectHelpers::Instance();
}

// public generated EffectHelpers New() :9
void EffectHelpers__New1_fn(EffectHelpers** __retval)
{
    *__retval = EffectHelpers::New1();
}

// private framebuffer ResampleGaussian5tap(Fuse.DrawContext dc, texture2D tex, int2 size) :67
void EffectHelpers__ResampleGaussian5tap_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2* size, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->ResampleGaussian5tap(dc, tex, *size);
}

uSStrong<EffectHelpers*> EffectHelpers::_instance_;

// public generated EffectHelpers() [instance] :9
void EffectHelpers::ctor_()
{
    init_DrawCalls();
}

// public framebuffer Blur(texture2D original, Fuse.DrawContext dc, float sigma) [instance] :17
::g::Uno::Graphics::Framebuffer* EffectHelpers::Blur(::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float sigma)
{
    int maxSamples = 3;
    ::g::Uno::Graphics::Texture2D* src = original;
    ::g::Uno::Graphics::Framebuffer* fb = NULL;
    ::g::Uno::Float2 sigmas = ::g::Uno::Float2__New1(sigma);

    while (((3.0f * sigmas.X) > (float)maxSamples) && ((3.0f * sigmas.Y) > (float)maxSamples))
    {
        ::g::Uno::Int2 newSize = ::g::Uno::Int2__New2(::g::Uno::Math::Max8(uPtr(src)->Size().X / 2, 1), ::g::Uno::Math::Max8(uPtr(src)->Size().Y / 2, 1));
        ::g::Uno::Graphics::Framebuffer* newFb = ResampleGaussian5tap(dc, src, newSize);

        if (fb != NULL)
            ::g::Fuse::FramebufferPool::Release(fb);

        sigmas = ::g::Uno::Math::Sqrt2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply2(sigmas, sigmas), 1.0f));
        sigmas = ::g::Uno::Float2__op_Multiply2(sigmas, ::g::Uno::Float2__op_Division2(::g::Uno::Float2__New2((float)newSize.X, (float)newSize.Y), ::g::Uno::Float2__op_Implicit1(src->Size())));
        fb = newFb;
        src = uPtr(newFb)->ColorBuffer();
        maxSamples = maxSamples * 2;
    }

    ::g::Uno::Int2 samples = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Max2(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply(3.0f, sigmas)), 1.0f));
    ::g::Uno::Graphics::Framebuffer* tmp = BlurHorizontal(dc, uPtr(src)->Size(), src, sigmas.X, samples.X);

    if (fb != NULL)
        ::g::Fuse::FramebufferPool::Release(fb);

    ::g::Uno::Graphics::Framebuffer* blur = BlurVertical(dc, uPtr(uPtr(tmp)->ColorBuffer())->Size(), uPtr(tmp)->ColorBuffer(), sigmas.Y, samples.Y);
    ::g::Fuse::FramebufferPool::Release(tmp);
    return blur;
}

// private framebuffer BlurHorizontal(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) [instance] :156
::g::Uno::Graphics::Framebuffer* EffectHelpers::BlurHorizontal(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int samples)
{
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
    uPtr(dc)->PushRenderTarget(fb);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    GaussianBlurSeparable(tex, ::g::Uno::Float2__New2(1.0f, 0.0f), sigma, samples);
    dc->PopRenderTarget();
    return fb;
}

// private framebuffer BlurVertical(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) [instance] :168
::g::Uno::Graphics::Framebuffer* EffectHelpers::BlurVertical(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int samples)
{
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
    uPtr(dc)->PushRenderTarget(fb);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    GaussianBlurSeparable(tex, ::g::Uno::Float2__New2(0.0f, 1.0f), sigma, samples);
    dc->PopRenderTarget();
    return fb;
}

// private void GaussianBlurSeparable(texture2D tex, float2 dir, float sigma, int samples) [instance] :180
void EffectHelpers::GaussianBlurSeparable(::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2 dir, float sigma, int samples)
{
    float sigmaSquared = sigma * sigma;
    float scale = 1.0f / (float)::g::Uno::Math::Sqrt(6.2831853071795862 * (double)sigmaSquared);
    uArray* weights = uArray::New(::TYPES[4/*float[]*/], 1 + samples);
    uArray* offsets = uArray::New(::TYPES[1/*float2[]*/], samples);
    float total = weights->Item<float>(0) = scale;

    for (int i = 0; i < samples; ++i)
    {
        int offset1 = (i * 2) + 1;
        int offset2 = (i * 2) + 2;
        float weight1 = scale * ::g::Uno::Math::Exp1((float)(-offset1 * offset1) / (2.0f * sigmaSquared));
        float weight2 = scale * ::g::Uno::Math::Exp1((float)(-offset2 * offset2) / (2.0f * sigmaSquared));
        float weight = weight1 + weight2;
        float offset = (((float)offset1 * weight1) + ((float)offset2 * weight2)) / weight;
        uPtr(weights)->Item<float>(i + 1) = weight;
        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Multiply2(dir, ::g::Uno::Float2__New2(offset / (float)uPtr(tex)->Size().X, offset / (float)uPtr(tex)->Size().Y));
        total = total + (2.0f * weight);
    }

    for (int i1 = 0; i1 < (samples + 1); ++i1)
        uPtr(weights)->Item<float>(i1) = uPtr(weights)->Item<float>(i1) / total;

    _draw_2aabda0d.DepthTestEnabled(false);
    _draw_2aabda0d.Const1(0, uPtr(weights)->Length());
    _draw_2aabda0d.Const1(1, samples);
    _draw_2aabda0d.Const1(2, uPtr(offsets)->Length());
    _draw_2aabda0d.Use();
    _draw_2aabda0d.Attrib1(3, 2, GaussianBlurSeparable_VertexData_2aabda0d_2_5_3, 8, 0);
    _draw_2aabda0d.Uniform1(4, weights);
    _draw_2aabda0d.Uniform3(5, offsets);
    _draw_2aabda0d.Sampler3(6, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_2aabda0d.Draw(6, 2, GaussianBlurSeparable_VertexData_2aabda0d_2_5_2);
}

// private generated void init_DrawCalls() [instance] :9
void EffectHelpers::init_DrawCalls()
{
    uArray* Vertices_44444bad_2_2_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    uArray* Indices_44444bad_2_3_1 = uArray::Init<int>(::TYPES[5/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0);
    ResampleBilinear_VertexData_44444bad_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(Indices_44444bad_2_3_1), 0);
    ResampleBilinear_VertexData_44444bad_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_44444bad_2_2_0), 0);
    ResampleGaussian5tap_VertexData_8e4c5d82_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(Indices_44444bad_2_3_1), 0);
    ResampleGaussian5tap_VertexData_8e4c5d82_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_44444bad_2_2_0), 0);
    ResampleGaussian9tap_VertexData_6379debe_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(Indices_44444bad_2_3_1), 0);
    ResampleGaussian9tap_VertexData_6379debe_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_44444bad_2_2_0), 0);
    GaussianBlurSeparable_VertexData_2aabda0d_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(Indices_44444bad_2_3_1), 0);
    GaussianBlurSeparable_VertexData_2aabda0d_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_44444bad_2_2_0), 0);
    _draw_44444bad = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers9b892494());
    _draw_8e4c5d82 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelperse7e608d1());
    _draw_6379debe = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpersd8c2e3e5());
    _draw_2aabda0d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers52052d40());
}

// private framebuffer ResampleGaussian5tap(Fuse.DrawContext dc, texture2D tex, int2 size) [instance] :67
::g::Uno::Graphics::Framebuffer* EffectHelpers::ResampleGaussian5tap(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2 size)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
    uPtr(dc)->PushRenderTarget(fb);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    ::g::Uno::Float2 diagonalOffsets = ::g::Uno::Float2__New2(0.384289622f, 1.20486164f);
    ::g::Uno::Int2 texSize = uPtr(tex)->Size();
    float centerWeight = 0.162102818f;
    float diagonalWeight = 0.20850347f;
    _draw_8e4c5d82.DepthTestEnabled(false);
    _draw_8e4c5d82.Use();
    _draw_8e4c5d82.Attrib1(0, 2, ResampleGaussian5tap_VertexData_8e4c5d82_2_5_3, 8, 0);
    _draw_8e4c5d82.Uniform(1, centerWeight);
    _draw_8e4c5d82.Uniform2(2, ::g::Uno::Float2__op_Division2((ind1 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_8e4c5d82.Uniform(3, diagonalWeight);
    _draw_8e4c5d82.Uniform2(4, ::g::Uno::Float2__op_Division2((ind2 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind2.W, ind2.X)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_8e4c5d82.Uniform2(5, ::g::Uno::Float2__op_Division2((ind3 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind3.Z, ind3.W)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_8e4c5d82.Uniform2(6, ::g::Uno::Float2__op_Division2((ind4 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind4.Y, ind4.Z)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_8e4c5d82.Sampler3(7, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_8e4c5d82.Draw(6, 2, ResampleGaussian5tap_VertexData_8e4c5d82_2_5_2);
    dc->PopRenderTarget();
    return fb;
}

// public generated EffectHelpers New() [static] :9
EffectHelpers* EffectHelpers::New1()
{
    EffectHelpers* obj12 = (EffectHelpers*)uNew(EffectHelpers_typeof());
    obj12->ctor_();
    return obj12;
}

// public static Fuse.Effects.EffectHelpers get_Instance() [static] :14
EffectHelpers* EffectHelpers::Instance()
{
    EffectHelpers* ind11;
    ind11 = EffectHelpers::_instance_;
    return (ind11 != NULL) ? ind11 : (EffectHelpers*)(EffectHelpers::_instance_ = EffectHelpers::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Effects/Effect.uno
// --------------------------------------------------------------------

// public enum EffectType :8
uEnumType* EffectType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Effects.EffectType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Underlay", 0LL,
        "Composition", 1LL,
        "Overlay", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/Halftone.uno
// -------------------------------------------------------------

// public sealed class Halftone :12
// {
static void Halftone_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5));
    type->SetFields(19,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _dotTint), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Halftone, _draw_4b464452), 0,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _intensity), 0,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _paperTint), 0,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _smoothness), 0,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _spacing), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Halftone, OnRender_LocalTransform_4b464452_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Halftone, OnRender_LocalTransform_4b464452_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Halftone, OnRender_VertexData_4b464452_7_2_1), 0);
}

::g::Fuse::Effects::BasicEffect_type* Halftone_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Halftone);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Halftone", options);
    type->fp_build_ = Halftone_build;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Halftone__OnRender_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public float get_DotTint() :67
void Halftone__get_DotTint_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->DotTint();
}

// public void set_DotTint(float value) :68
void Halftone__set_DotTint_fn(Halftone* __this, float* value)
{
    __this->DotTint(*value);
}

// public float get_Intensity() :37
void Halftone__get_Intensity_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->Intensity();
}

// public void set_Intensity(float value) :38
void Halftone__set_Intensity_fn(Halftone* __this, float* value)
{
    __this->Intensity(*value);
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :93
void Halftone__OnRender_fn(Halftone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == NULL)
        return;

    float tSpacing = __this->Spacing();
    float angle = 0.7853982f;
    ::g::Uno::Float2x2 rot = ::g::Uno::Float2x2__New1(::g::Uno::Math::Cos1(angle), ::g::Uno::Math::Sin1(angle), -::g::Uno::Math::Sin1(angle), ::g::Uno::Math::Cos1(angle));
    ::g::Uno::Float2x2 rotI = ::g::Uno::Float2x2__New1(::g::Uno::Math::Cos1(-angle), ::g::Uno::Math::Sin1(-angle), -::g::Uno::Math::Sin1(-angle), ::g::Uno::Math::Cos1(-angle));
    ::g::Uno::Float4x4 LocalTransform_4b464452_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_4b464452_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_4b464452_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
    __this->_draw_4b464452.BlendEnabled(true);
    __this->_draw_4b464452.DepthTestEnabled(false);
    __this->_draw_4b464452.CullFace(uPtr(dc)->CullFace());
    __this->_draw_4b464452.BlendSrcRgb(2);
    __this->_draw_4b464452.BlendDstRgb(3);
    __this->_draw_4b464452.BlendDstAlpha(3);
    __this->_draw_4b464452.Use();
    __this->_draw_4b464452.Attrib1(0, 2, __this->OnRender_VertexData_4b464452_7_2_1, 8, 0);
    __this->_draw_4b464452.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    __this->_draw_4b464452.Uniform(2, __this->PaperTint());
    __this->_draw_4b464452.Uniform(3, __this->DotTint());
    __this->_draw_4b464452.Uniform(4, tSpacing);
    __this->_draw_4b464452.Uniform(5, __this->Intensity());
    __this->_draw_4b464452.Uniform2(6, elementRect_.Size());
    __this->_draw_4b464452.Uniform2(7, elementRect_.Minimum());
    __this->_draw_4b464452.Uniform4(8, rot);
    __this->_draw_4b464452.Uniform4(9, rotI);
    __this->_draw_4b464452.Uniform(10, dc->ViewportPixelsPerPoint());
    __this->_draw_4b464452.Uniform(11, 1.0f / __this->Smoothness());
    __this->_draw_4b464452.Uniform12(12, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_4b464452_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_4b464452_4_9_4);
    __this->_draw_4b464452.Sampler3(13, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    __this->_draw_4b464452.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(original);
}

// public float get_PaperTint() :82
void Halftone__get_PaperTint_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->PaperTint();
}

// public void set_PaperTint(float value) :83
void Halftone__set_PaperTint_fn(Halftone* __this, float* value)
{
    __this->PaperTint(*value);
}

// public float get_Smoothness() :52
void Halftone__get_Smoothness_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->Smoothness();
}

// public void set_Smoothness(float value) :53
void Halftone__set_Smoothness_fn(Halftone* __this, float* value)
{
    __this->Smoothness(*value);
}

// public float get_Spacing() :22
void Halftone__get_Spacing_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->Spacing();
}

// public void set_Spacing(float value) :23
void Halftone__set_Spacing_fn(Halftone* __this, float* value)
{
    __this->Spacing(*value);
}

// public float get_DotTint() [instance] :67
float Halftone::DotTint()
{
    return _dotTint;
}

// public void set_DotTint(float value) [instance] :68
void Halftone::DotTint(float value)
{
    if (_dotTint != value)
    {
        _dotTint = value;
        OnRenderingChanged();
    }
}

// public float get_Intensity() [instance] :37
float Halftone::Intensity()
{
    return _intensity;
}

// public void set_Intensity(float value) [instance] :38
void Halftone::Intensity(float value)
{
    if (_intensity != value)
    {
        _intensity = value;
        OnRenderingChanged();
    }
}

// public float get_PaperTint() [instance] :82
float Halftone::PaperTint()
{
    return _paperTint;
}

// public void set_PaperTint(float value) [instance] :83
void Halftone::PaperTint(float value)
{
    if (_paperTint != value)
    {
        _paperTint = value;
        OnRenderingChanged();
    }
}

// public float get_Smoothness() [instance] :52
float Halftone::Smoothness()
{
    return _smoothness;
}

// public void set_Smoothness(float value) [instance] :53
void Halftone::Smoothness(float value)
{
    if (_smoothness != value)
    {
        _smoothness = value;
        OnRenderingChanged();
    }
}

// public float get_Spacing() [instance] :22
float Halftone::Spacing()
{
    return _spacing;
}

// public void set_Spacing(float value) [instance] :23
void Halftone::Spacing(float value)
{
    if (_spacing != value)
    {
        _spacing = value;
        OnRenderingChanged();
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/Mask.uno
// ---------------------------------------------------------

// public sealed class Mask :13
// {
static void Mask_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::VisualBounds_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Mask_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Mask_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Mask_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Mask_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Mask_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Mask_type, interface5),
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(Mask_type, interface6));
    type->SetFields(19,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(Mask, _container), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Mask, _draw_97b14dfa), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Mask, _draw_e56a2f35), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Mask, _draw_f63e1f3f), 0,
        Mask__MaskMode_typeof(), offsetof(Mask, _mode), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Mask, OnRender_LocalTransform_e56a2f35_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Mask, OnRender_LocalTransform_e56a2f35_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Mask, OnRender_VertexData_97b14dfa_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Mask, OnRender_VertexData_e56a2f35_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Mask, OnRender_VertexData_f63e1f3f_7_2_1), 0);
}

Mask_type* Mask_typeof()
{
    static uSStrong<Mask_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Mask);
    options.TypeSize = sizeof(Mask_type);
    type = (Mask_type*)uClassType::New("Fuse.Effects.Mask", options);
    type->fp_build_ = Mask_build;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))Mask__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Mask__OnRender_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Mask__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Mask__OnUnrooted_fn;
    type->interface6.fp_OnSourceChanged = (void(*)(uObject*))Mask__FuseInternalIImageContainerOwnerOnSourceChanged_fn;
    type->interface6.fp_OnParamChanged = (void(*)(uObject*))Mask__FuseInternalIImageContainerOwnerOnParamChanged_fn;
    type->interface6.fp_OnSizingChanged = (void(*)(uObject*))Mask__FuseInternalIImageContainerOwnerOnSizingChanged_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private void Fuse.Internal.IImageContainerOwner.OnParamChanged() :41
void Mask__FuseInternalIImageContainerOwnerOnParamChanged_fn(Mask* __this)
{
    __this->OnRenderingChanged();
}

// private void Fuse.Internal.IImageContainerOwner.OnSizingChanged() :46
void Mask__FuseInternalIImageContainerOwnerOnSizingChanged_fn(Mask* __this)
{
    __this->OnRenderingChanged();
}

// private void Fuse.Internal.IImageContainerOwner.OnSourceChanged() :36
void Mask__FuseInternalIImageContainerOwnerOnSourceChanged_fn(Mask* __this)
{
    __this->OnRenderingChanged();
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds) :77
void Mask__ModifyRenderBounds_fn(Mask* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), uPtr(__this->Element())->ActualSize()), void();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect) :83
void Mask__OnRender_fn(Mask* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    elementRect_ = ::g::Uno::Rect__Intersect(::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), uPtr(__this->Element())->ActualSize()), elementRect_);
    ::g::Uno::Graphics::Texture2D* texture = uPtr(__this->_container)->GetTexture();

    if (texture == NULL)
        return;

    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__New1(0.0f));

    if (original == NULL)
        return;

    ::g::Uno::Float2 scale = ::g::Uno::Float2__op_Division2(elementRect_.Size(), uPtr(__this->Element())->ActualSize());
    ::g::Uno::Float2 bias = ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division2(elementRect_.LeftTop(), elementRect_.Size()), scale);

    switch (__this->_mode)
    {
        case 0:
        {
            ::g::Uno::Float4x4 LocalTransform_e56a2f35_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_e56a2f35_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_e56a2f35_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
            __this->_draw_e56a2f35.BlendEnabled(true);
            __this->_draw_e56a2f35.DepthTestEnabled(false);
            __this->_draw_e56a2f35.CullFace(uPtr(dc)->CullFace());
            __this->_draw_e56a2f35.BlendSrcAlpha(7);
            __this->_draw_e56a2f35.BlendDstRgb(3);
            __this->_draw_e56a2f35.Use();
            __this->_draw_e56a2f35.Attrib1(0, 2, __this->OnRender_VertexData_e56a2f35_7_2_1, 8, 0);
            __this->_draw_e56a2f35.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
            __this->_draw_e56a2f35.Uniform2(2, scale);
            __this->_draw_e56a2f35.Uniform2(3, bias);
            __this->_draw_e56a2f35.Uniform12(4, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_e56a2f35_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_e56a2f35_4_9_4);
            __this->_draw_e56a2f35.Sampler3(5, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_e56a2f35.Sampler3(6, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_e56a2f35.DrawArrays(6);
            break;
        }
        case 1:
        {
            ::g::Uno::Float4x4 LocalTransform_97b14dfa_4_9_2 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_e56a2f35_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_e56a2f35_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
            __this->_draw_97b14dfa.BlendEnabled(true);
            __this->_draw_97b14dfa.DepthTestEnabled(false);
            __this->_draw_97b14dfa.CullFace(uPtr(dc)->CullFace());
            __this->_draw_97b14dfa.BlendSrcAlpha(7);
            __this->_draw_97b14dfa.BlendDstRgb(3);
            __this->_draw_97b14dfa.Use();
            __this->_draw_97b14dfa.Attrib1(0, 2, __this->OnRender_VertexData_97b14dfa_7_2_1, 8, 0);
            __this->_draw_97b14dfa.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
            __this->_draw_97b14dfa.Uniform2(2, scale);
            __this->_draw_97b14dfa.Uniform2(3, bias);
            __this->_draw_97b14dfa.Uniform12(4, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_97b14dfa_4_9_2, uPtr(__this->Element())->WorldTransform()) : LocalTransform_97b14dfa_4_9_2);
            __this->_draw_97b14dfa.Sampler3(5, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_97b14dfa.Sampler3(6, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_97b14dfa.DrawArrays(6);
            break;
        }
        case 2:
        {
            ::g::Uno::Float4x4 LocalTransform_f63e1f3f_4_9_2 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_e56a2f35_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_e56a2f35_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
            __this->_draw_f63e1f3f.BlendEnabled(true);
            __this->_draw_f63e1f3f.DepthTestEnabled(false);
            __this->_draw_f63e1f3f.CullFace(uPtr(dc)->CullFace());
            __this->_draw_f63e1f3f.BlendSrcAlpha(7);
            __this->_draw_f63e1f3f.BlendDstRgb(3);
            __this->_draw_f63e1f3f.Use();
            __this->_draw_f63e1f3f.Attrib1(0, 2, __this->OnRender_VertexData_f63e1f3f_7_2_1, 8, 0);
            __this->_draw_f63e1f3f.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
            __this->_draw_f63e1f3f.Uniform2(2, scale);
            __this->_draw_f63e1f3f.Uniform2(3, bias);
            __this->_draw_f63e1f3f.Uniform12(4, (__this->Element() != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_f63e1f3f_4_9_2, uPtr(__this->Element())->WorldTransform()) : LocalTransform_f63e1f3f_4_9_2);
            __this->_draw_f63e1f3f.Sampler3(5, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_f63e1f3f.Sampler3(6, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_f63e1f3f.DrawArrays(6);
            break;
        }
    }

    ::g::Fuse::FramebufferPool::Release(original);
}

// protected override sealed void OnRooted() :24
void Mask__OnRooted_fn(Mask* __this)
{
    ::g::Fuse::Effects::Effect__OnRooted_fn(__this);
    uPtr(__this->_container)->IsRooted(true);
}

// protected override sealed void OnUnrooted() :30
void Mask__OnUnrooted_fn(Mask* __this)
{
    uPtr(__this->_container)->IsRooted(false);
    ::g::Fuse::Effects::Effect__OnUnrooted_fn(__this);
}
// }

// /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/Mask.uno
// ---------------------------------------------------------

// public enum Mask.MaskMode :52
uEnumType* Mask__MaskMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Effects.Mask.MaskMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Alpha", 0LL,
        "Grayscale", 1LL,
        "RGBA", 2LL);
    return type;
}

}}} // ::g::Fuse::Effects
