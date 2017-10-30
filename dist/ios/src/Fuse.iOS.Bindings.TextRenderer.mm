// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS.TextRenderer/1.3.1/TextRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.TextControl.h>
#include <Fuse.DrawContext.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.iOS.Bindings.Blitter.h>
#include <Fuse.iOS.Bindings.CGColorSpaceRef.h>
#include <Fuse.iOS.Bindings.CGContextRef.h>
#include <Fuse.iOS.Bindings.TextLayout.h>
#include <Fuse.iOS.Bindings.TextRenderer.h>
#include <Fuse.IViewport.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLPixelFormat.h>
#include <OpenGL.GLPixelStoreParameter.h>
#include <OpenGL.GLPixelType.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Rect.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal sealed extern class TextRenderer :188
// {
// static generated TextRenderer() :188
static void TextRenderer__cctor__fn(uType* __type)
{
    TextRenderer::_colorSpace_ = TextRenderer::CGColorSpaceCreateDeviceRGB();
}

static void TextRenderer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Failed to create CGBitmapContext");
    ::TYPES[0] = ::g::Fuse::ICommonViewport_typeof();
    type->SetDependencies(
        ::g::Fuse::iOS::Bindings::Blitter_typeof(),
        ::g::Uno::Graphics::Texture2D_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(TextRenderer, _arrangePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(TextRenderer, _arrangeSize), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(TextRenderer, _control), 0,
        ::g::Fuse::iOS::Bindings::TextLayout_typeof(), offsetof(TextRenderer, _measureLayout), 0,
        ::g::Fuse::iOS::Bindings::TextLayout_typeof(), offsetof(TextRenderer, _textLayout), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(TextRenderer, _texture), 0,
        ::g::Fuse::iOS::Bindings::CGColorSpaceRef_typeof(), (uintptr_t)&TextRenderer::_colorSpace_, uFieldFlagsStatic);
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.iOS.Bindings.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    type->fp_cctor_ = TextRenderer__cctor__fn;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    return type;
}

// public TextRenderer(Fuse.Controls.TextControl control) :203
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* control)
{
    __this->ctor_(control);
}

// public void Arrange(float2 position, float2 size) :298
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// private static Fuse.iOS.Bindings.CGContextRef CGBitmapContextCreate(Uno.IntPtr textureBuffer, int width, int height, Fuse.iOS.Bindings.CGColorSpaceRef colorSpace) :270
void TextRenderer__CGBitmapContextCreate_fn(void** textureBuffer, int* width, int* height, ::CGColorSpaceRef* colorSpace, ::CGContextRef* __retval)
{
    *__retval = TextRenderer::CGBitmapContextCreate(*textureBuffer, *width, *height, *colorSpace);
}

// private static Fuse.iOS.Bindings.CGColorSpaceRef CGColorSpaceCreateDeviceRGB() :192
void TextRenderer__CGColorSpaceCreateDeviceRGB_fn(::CGColorSpaceRef* __retval)
{
    *__retval = TextRenderer::CGColorSpaceCreateDeviceRGB();
}

// private static void CGContextRelease(Fuse.iOS.Bindings.CGContextRef context) :276
void TextRenderer__CGContextRelease_fn(::CGContextRef* context)
{
    TextRenderer::CGContextRelease(*context);
}

// internal static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) :194
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval)
{
    *__retval = TextRenderer::Create(control);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) :224
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    __this->Draw(dc, where);
}

// private static void DrawGlyphs(Fuse.iOS.Bindings.CGContextRef context, float x, float y, int width, int height, ObjC.Object layoutManager, ObjC.Object textContainer) :279
void TextRenderer__DrawGlyphs_fn(::CGContextRef* context, float* x, float* y, int* width, int* height, ::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    TextRenderer::DrawGlyphs(*context, *x, *y, *width, *height, layoutManager, textContainer);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :208
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :330
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// public void Invalidate() :308
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private void InvalidateTexture() :321
void TextRenderer__InvalidateTexture_fn(TextRenderer* __this)
{
    __this->InvalidateTexture();
}

// public TextRenderer New(Fuse.Controls.TextControl control) :203
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* control, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(control);
}

// public void SoftDispose() :316
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

::CGColorSpaceRef TextRenderer::_colorSpace_;

// public TextRenderer(Fuse.Controls.TextControl control) [instance] :203
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* control)
{
    _textLayout = ::g::Fuse::iOS::Bindings::TextLayout::New1();
    _control = control;
}

// public void Arrange(float2 position, float2 size) [instance] :298
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    _arrangePosition = position;
    _arrangeSize = ::g::Uno::Float2__op_Addition2(size, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2(0.5f, 0.5f), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/]))));
    Invalidate();
    uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) [instance] :224
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    if (uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false))
        InvalidateTexture();

    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(uPtr(_textLayout)->PixelBounds.Size()));

    if ((((pixelSize.X < 1) || (pixelSize.Y < 1)) || (pixelSize.X > ::g::Uno::Graphics::Texture2D::MaxSize())) || (pixelSize.Y > ::g::Uno::Graphics::Texture2D::MaxSize()))
        return;

    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));

    if (_texture == NULL)
    {
        void* textureBuffer = malloc(pixelSize.X * pixelSize.Y * 4);

        if (::g::Uno::IntPtr::op_Equality(textureBuffer, ::g::Uno::IntPtr::Zero_))
            return;

        ::CGContextRef imageContext = TextRenderer::CGBitmapContextCreate(textureBuffer, pixelSize.X, pixelSize.Y, TextRenderer::_colorSpace_);

        if (::g::Uno::IntPtr::op_Equality((void*)imageContext, ::g::Uno::IntPtr::Zero_))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Failed to c...*/]));

        TextRenderer::DrawGlyphs(imageContext, -uPtr(_textLayout)->PixelBounds.Position().X, -uPtr(_textLayout)->PixelBounds.Position().Y, pixelSize.X, pixelSize.Y, uPtr(_textLayout)->LayoutManager, uPtr(_textLayout)->TextContainer);
        TextRenderer::CGContextRelease(imageContext);
        uint32_t textureHandle = ::g::OpenGL::GL::CreateTexture();
        ::g::OpenGL::GL::BindTexture(3553, textureHandle);
        ::g::OpenGL::GL::PixelStore(3317, 1);
        ::g::OpenGL::GL::TexImage2D1(3553, 0, 6408, pixelSize.X, pixelSize.Y, 0, 32993, 5121, textureBuffer);
        free(textureBuffer);
        textureBuffer = ::g::Uno::IntPtr::Zero_;
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        _texture = ::g::Uno::Graphics::Texture2D::New2(textureHandle, pixelSize, 1, 3);
    }

    uPtr(::g::Fuse::iOS::Bindings::Blitter::Singleton_)->Blit(dc, where, _texture, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Position(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/]))), _arrangePosition), pointSize);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :208
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    if (_measureLayout == NULL)
        _measureLayout = ::g::Fuse::iOS::Bindings::TextLayout::New1();

    ::g::Uno::Float2 size = ::g::Uno::Float2__New2(lp.HasX() ? lp.X() : FLT_INF, lp.HasY() ? lp.Y() : FLT_INF);

    if (lp.HasMaxX())
        size.X = ::g::Uno::Math::Min1(size.X, lp.MaxX());

    if (lp.HasMaxY())
        size.Y = ::g::Uno::Math::Min1(size.Y, lp.MaxY());

    uPtr(_measureLayout)->UpdateLayout(_control, size, true);
    return ::g::Uno::Float2__op_Division1(uPtr(_measureLayout)->PixelBounds.Size(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));
}

// public Uno.Rect GetRenderBounds() [instance] :330
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false);
    return ::g::Uno::Rect__Translate(::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Position(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/]))), ::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Size(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])))), _arrangePosition);
}

// public void Invalidate() [instance] :308
void TextRenderer::Invalidate()
{
    uPtr(_textLayout)->Invalidate();

    if (_measureLayout != NULL)
        uPtr(_measureLayout)->Invalidate();

    InvalidateTexture();
}

// private void InvalidateTexture() [instance] :321
void TextRenderer::InvalidateTexture()
{
    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }
}

// public void SoftDispose() [instance] :316
void TextRenderer::SoftDispose()
{
    InvalidateTexture();
}

// private static Fuse.iOS.Bindings.CGContextRef CGBitmapContextCreate(Uno.IntPtr textureBuffer, int width, int height, Fuse.iOS.Bindings.CGColorSpaceRef colorSpace) [static] :270
::CGContextRef TextRenderer::CGBitmapContextCreate(void* textureBuffer, int width, int height, ::CGColorSpaceRef colorSpace)
{
    CGBitmapInfo flags = kCGBitmapByteOrder32Little | kCGImageAlphaPremultipliedFirst;
    return ::CGBitmapContextCreate(textureBuffer, width, height, 8, width * 4, colorSpace, flags);
}

// private static Fuse.iOS.Bindings.CGColorSpaceRef CGColorSpaceCreateDeviceRGB() [static] :192
::CGColorSpaceRef TextRenderer::CGColorSpaceCreateDeviceRGB()
{
    return ::CGColorSpaceCreateDeviceRGB();
}

// private static void CGContextRelease(Fuse.iOS.Bindings.CGContextRef context) [static] :276
void TextRenderer::CGContextRelease(::CGContextRef context)
{
    ::CGContextRelease(context);
}

// internal static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) [static] :194
uObject* TextRenderer::Create(::g::Fuse::Controls::TextControl* control)
{
    return (uObject*)TextRenderer::New1(control);
}

// private static void DrawGlyphs(Fuse.iOS.Bindings.CGContextRef context, float x, float y, int width, int height, ObjC.Object layoutManager, ObjC.Object textContainer) [static] :279
void TextRenderer::DrawGlyphs(::CGContextRef context, float x, float y, int width, int height, ::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    @autoreleasepool
    {
        [] (::CGContextRef context, float x, float y, int width, int height, ::id layoutManager, ::id textContainer) -> void
        {
            NSLayoutManager* lm = (NSLayoutManager*)layoutManager;
            NSTextContainer* tc = (NSTextContainer*)textContainer;
            UIGraphicsPushContext(context);
            CGRect rect = CGRectMake(0, 0, width, height);
            CGContextClearRect(context, rect);
            NSRange glyphRange = [lm glyphRangeForTextContainer:tc];
            CGPoint point = CGPointMake(x, y);
            [lm drawGlyphsForGlyphRange:glyphRange atPoint:point];
            UIGraphicsPopContext();
        } (context, x, y, width, height, ::g::ObjC::Object::GetHandle(layoutManager), ::g::ObjC::Object::GetHandle(textContainer));
        
    }
    
}

// public TextRenderer New(Fuse.Controls.TextControl control) [static] :203
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* control)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(control);
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
