// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS.TextRenderer/1.3.1/TextRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ITextRenderer.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct TextLayout;}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct TextRenderer;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal sealed extern class TextRenderer :188
// {
struct TextRenderer_type : uType
{
    ::g::Fuse::Controls::ITextRenderer interface0;
};

TextRenderer_type* TextRenderer_typeof();
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* control);
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size);
void TextRenderer__CGBitmapContextCreate_fn(void** textureBuffer, int* width, int* height, ::CGColorSpaceRef* colorSpace, ::CGContextRef* __retval);
void TextRenderer__CGColorSpaceCreateDeviceRGB_fn(::CGColorSpaceRef* __retval);
void TextRenderer__CGContextRelease_fn(::CGContextRef* context);
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval);
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where);
void TextRenderer__DrawGlyphs_fn(::CGContextRef* context, float* x, float* y, int* width, int* height, ::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer);
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval);
void TextRenderer__Invalidate_fn(TextRenderer* __this);
void TextRenderer__InvalidateTexture_fn(TextRenderer* __this);
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* control, TextRenderer** __retval);
void TextRenderer__SoftDispose_fn(TextRenderer* __this);

struct TextRenderer : uObject
{
    ::g::Uno::Float2 _arrangePosition;
    ::g::Uno::Float2 _arrangeSize;
    static ::CGColorSpaceRef _colorSpace_;
    static ::CGColorSpaceRef& _colorSpace() { return _colorSpace_; }
    uStrong< ::g::Fuse::Controls::TextControl*> _control;
    uStrong< ::g::Fuse::iOS::Bindings::TextLayout*> _measureLayout;
    uStrong< ::g::Fuse::iOS::Bindings::TextLayout*> _textLayout;
    uStrong< ::g::Uno::Graphics::Texture2D*> _texture;

    void ctor_(::g::Fuse::Controls::TextControl* control);
    void Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size);
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where);
    ::g::Uno::Float2 GetContentSize(::g::Fuse::LayoutParams lp);
    ::g::Uno::Rect GetRenderBounds();
    void Invalidate();
    void InvalidateTexture();
    void SoftDispose();
    static ::CGContextRef CGBitmapContextCreate(void* textureBuffer, int width, int height, ::CGColorSpaceRef colorSpace);
    static ::CGColorSpaceRef CGColorSpaceCreateDeviceRGB();
    static void CGContextRelease(::CGContextRef context);
    static uObject* Create(::g::Fuse::Controls::TextControl* control);
    static void DrawGlyphs(::CGContextRef context, float x, float y, int width, int height, ::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer);
    static TextRenderer* New1(::g::Fuse::Controls::TextControl* control);
};
// }

}}}} // ::g::Fuse::iOS::Bindings
