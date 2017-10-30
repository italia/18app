// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS.TextRenderer/1.3.1/TextRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct TextLayout;}}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal sealed extern class TextLayout :12
// {
uType* TextLayout_typeof();
void TextLayout__ctor__fn(TextLayout* __this);
void TextLayout__AddNSTextContainer_fn(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer);
void TextLayout__ClearTextContainers_fn(::g::ObjC::Object* layoutManager);
void TextLayout__CreateNSTextContainer_fn(float* width, float* height, ::g::ObjC::Object** __retval);
void TextLayout__CreateNSTextStorage_fn(uString* value, ::g::ObjC::Object* font, ::g::ObjC::Object* color, ::g::ObjC::Object* style, ::g::ObjC::Object** __retval);
void TextLayout__CreateRect_fn(::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Rect* __retval);
void TextLayout__Invalidate_fn(TextLayout* __this);
void TextLayout__New1_fn(TextLayout** __retval);
void TextLayout__SetNSParagraphStyleProperties_fn(::g::ObjC::Object* style, int* alignment, int* wrapping, float* lineSpacing);
void TextLayout__SetNSTextStorage_fn(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textStorage);
void TextLayout__ToUIColor_fn(::g::Uno::Float4* color, ::g::ObjC::Object** __retval);
void TextLayout__UpdateLayout_fn(TextLayout* __this, ::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2* size, bool* useMin, bool* __retval);
void TextLayout__UsedRectForTextContainer_fn(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer, ::g::Uno::Rect* __retval);

struct TextLayout : uObject
{
    uStrong< ::g::ObjC::Object*> _font;
    bool _layoutMin;
    ::g::Uno::Float2 _layoutSize;
    bool _layoutValid;
    uStrong< ::g::ObjC::Object*> _style;
    uStrong< ::g::ObjC::Object*> _textColor;
    uStrong< ::g::ObjC::Object*> _textStorage;
    uStrong< ::g::ObjC::Object*> LayoutManager;
    ::g::Uno::Rect PixelBounds;
    uStrong< ::g::ObjC::Object*> TextContainer;

    void ctor_();
    void Invalidate();
    bool UpdateLayout(::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2 size, bool useMin);
    static void AddNSTextContainer(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer);
    static void ClearTextContainers(::g::ObjC::Object* layoutManager);
    static ::g::ObjC::Object* CreateNSTextContainer(float width, float height);
    static ::g::ObjC::Object* CreateNSTextStorage(uString* value, ::g::ObjC::Object* font, ::g::ObjC::Object* color, ::g::ObjC::Object* style);
    static ::g::Uno::Rect CreateRect(::g::Uno::Float2 pos, ::g::Uno::Float2 size);
    static TextLayout* New1();
    static void SetNSParagraphStyleProperties(::g::ObjC::Object* style, int alignment, int wrapping, float lineSpacing);
    static void SetNSTextStorage(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textStorage);
    static ::g::ObjC::Object* ToUIColor(::g::Uno::Float4 color);
    static ::g::Uno::Rect UsedRectForTextContainer(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer);
};
// }

}}}} // ::g::Fuse::iOS::Bindings
