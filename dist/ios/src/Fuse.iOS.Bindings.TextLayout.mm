// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS.TextRenderer/1.3.1/TextRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.iOS.Bindings.TextLayout.h>
#include <Fuse.IViewport.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal sealed extern class TextLayout :12
// {
static void TextLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::ICommonViewport_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::iOS::FontCache_typeof());
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, _font), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextLayout, _layoutMin), 0,
        ::g::Uno::Float2_typeof(), offsetof(TextLayout, _layoutSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextLayout, _layoutValid), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, _style), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, _textColor), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, _textStorage), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, LayoutManager), 0,
        ::g::Uno::Rect_typeof(), offsetof(TextLayout, PixelBounds), 0,
        ::g::ObjC::Object_typeof(), offsetof(TextLayout, TextContainer), 0);
}

uType* TextLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TextLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Bindings.TextLayout", options);
    type->fp_build_ = TextLayout_build;
    type->fp_ctor_ = (void*)TextLayout__New1_fn;
    return type;
}

// public TextLayout() :31
void TextLayout__ctor__fn(TextLayout* __this)
{
    __this->ctor_();
}

// public static void AddNSTextContainer(ObjC.Object layoutManager, ObjC.Object textContainer) :159
void TextLayout__AddNSTextContainer_fn(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    TextLayout::AddNSTextContainer(layoutManager, textContainer);
}

// public static void ClearTextContainers(ObjC.Object layoutManager) :93
void TextLayout__ClearTextContainers_fn(::g::ObjC::Object* layoutManager)
{
    TextLayout::ClearTextContainers(layoutManager);
}

// public static ObjC.Object CreateNSTextContainer(float width, float height) :101
void TextLayout__CreateNSTextContainer_fn(float* width, float* height, ::g::ObjC::Object** __retval)
{
    *__retval = TextLayout::CreateNSTextContainer(*width, *height);
}

// public static ObjC.Object CreateNSTextStorage(string value, ObjC.Object font, ObjC.Object color, ObjC.Object style) :142
void TextLayout__CreateNSTextStorage_fn(uString* value, ::g::ObjC::Object* font, ::g::ObjC::Object* color, ::g::ObjC::Object* style, ::g::ObjC::Object** __retval)
{
    *__retval = TextLayout::CreateNSTextStorage(value, font, color, style);
}

// private static Uno.Rect CreateRect(float2 pos, float2 size) :164
void TextLayout__CreateRect_fn(::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Rect* __retval)
{
    *__retval = TextLayout::CreateRect(*pos, *size);
}

// public void Invalidate() :25
void TextLayout__Invalidate_fn(TextLayout* __this)
{
    __this->Invalidate();
}

// public TextLayout New() :31
void TextLayout__New1_fn(TextLayout** __retval)
{
    *__retval = TextLayout::New1();
}

// public static void SetNSParagraphStyleProperties(ObjC.Object style, Fuse.Controls.TextAlignment alignment, Fuse.Controls.TextWrapping wrapping, float lineSpacing) :109
void TextLayout__SetNSParagraphStyleProperties_fn(::g::ObjC::Object* style, int* alignment, int* wrapping, float* lineSpacing)
{
    TextLayout::SetNSParagraphStyleProperties(style, *alignment, *wrapping, *lineSpacing);
}

// public static void SetNSTextStorage(ObjC.Object layoutManager, ObjC.Object textStorage) :153
void TextLayout__SetNSTextStorage_fn(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textStorage)
{
    TextLayout::SetNSTextStorage(layoutManager, textStorage);
}

// public static ObjC.Object ToUIColor(float4 color) :84
void TextLayout__ToUIColor_fn(::g::Uno::Float4* color, ::g::ObjC::Object** __retval)
{
    *__retval = TextLayout::ToUIColor(*color);
}

// public bool UpdateLayout(Fuse.Controls.TextControl control, float2 size, [bool useMin]) :40
void TextLayout__UpdateLayout_fn(TextLayout* __this, ::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2* size, bool* useMin, bool* __retval)
{
    *__retval = __this->UpdateLayout(control, *size, *useMin);
}

// public static Uno.Rect UsedRectForTextContainer(ObjC.Object layoutManager, ObjC.Object textContainer) :170
void TextLayout__UsedRectForTextContainer_fn(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer, ::g::Uno::Rect* __retval)
{
    *__retval = TextLayout::UsedRectForTextContainer(layoutManager, textContainer);
}

// public TextLayout() [instance] :31
void TextLayout::ctor_()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            NSLayoutManager* lm = [[NSLayoutManager alloc] init];
            uCast<TextLayout*>((_this).unoObject, TextLayout_typeof())->LayoutManager = ::g::ObjC::Object::Create(lm);
            
            NSMutableParagraphStyle* ps = [[NSParagraphStyle defaultParagraphStyle] mutableCopy];
            uCast<TextLayout*>((_this).unoObject, TextLayout_typeof())->_style = ::g::ObjC::Object::Create(ps);
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void Invalidate() [instance] :25
void TextLayout::Invalidate()
{
    _layoutValid = false;
}

// public bool UpdateLayout(Fuse.Controls.TextControl control, float2 size, [bool useMin]) [instance] :40
bool TextLayout::UpdateLayout(::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2 size, bool useMin)
{
    ::g::Fuse::Internal::FontFaceDescriptor* ret2;
    size = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(size, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(control)->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/]))));
    bool valid = (_layoutValid && ::g::Uno::Float2__op_Equality(_layoutSize, size)) && (_layoutMin == useMin);

    if (valid)
        return false;

    _font = ::g::Fuse::Controls::Native::iOS::FontCache::Get((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(control->Font())->Descriptors), uCRef<int>(0), &ret2), ret2), control->FontSize() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));
    _textColor = TextLayout::ToUIColor(control->TextColor());
    TextLayout::ClearTextContainers(LayoutManager);
    float width = size.X;

    if ((control->TextTruncation() == 1) && (control->TextWrapping() == 0))
        width = 0.0f;

    TextContainer = TextLayout::CreateNSTextContainer(width, size.Y);
    TextLayout::AddNSTextContainer(LayoutManager, TextContainer);
    TextLayout::SetNSParagraphStyleProperties(_style, control->TextAlignment(), control->TextWrapping(), control->LineSpacing() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));
    _textStorage = TextLayout::CreateNSTextStorage(control->Value(), _font, _textColor, _style);
    TextLayout::SetNSTextStorage(LayoutManager, _textStorage);
    _layoutSize = size;
    _layoutValid = true;
    _layoutMin = useMin;
    PixelBounds = TextLayout::UsedRectForTextContainer(LayoutManager, TextContainer);
    return true;
}

// public static void AddNSTextContainer(ObjC.Object layoutManager, ObjC.Object textContainer) [static] :159
void TextLayout::AddNSTextContainer(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    @autoreleasepool
    {
        [] (::id layoutManager, ::id textContainer) -> void
        {
            [(NSLayoutManager*)layoutManager addTextContainer:(NSTextContainer*)textContainer];
        } (::g::ObjC::Object::GetHandle(layoutManager), ::g::ObjC::Object::GetHandle(textContainer));
        
    }
    
}

// public static void ClearTextContainers(ObjC.Object layoutManager) [static] :93
void TextLayout::ClearTextContainers(::g::ObjC::Object* layoutManager)
{
    @autoreleasepool
    {
        [] (::id layoutManager) -> void
        {
            NSLayoutManager* lm = (NSLayoutManager*)layoutManager;
            while (lm.textContainers.count > 0)
            	[lm removeTextContainerAtIndex:0];
        } (::g::ObjC::Object::GetHandle(layoutManager));
        
    }
    
}

// public static ObjC.Object CreateNSTextContainer(float width, float height) [static] :101
::g::ObjC::Object* TextLayout::CreateNSTextContainer(float width, float height)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (float width, float height) -> ::id
        {
            NSTextContainer* result = [[NSTextContainer alloc] initWithSize:CGSizeMake(width, height)];
            result.lineFragmentPadding = 0;
            return result;
        } (width, height));
        
    }
    
}

// public static ObjC.Object CreateNSTextStorage(string value, ObjC.Object font, ObjC.Object color, ObjC.Object style) [static] :142
::g::ObjC::Object* TextLayout::CreateNSTextStorage(uString* value, ::g::ObjC::Object* font, ::g::ObjC::Object* color, ::g::ObjC::Object* style)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::NSString* value, ::id font, ::id color, ::id style) -> ::id
        {
            return [[NSTextStorage alloc] initWithString:value
            	attributes: @{
            		NSFontAttributeName: font,
            		NSForegroundColorAttributeName: color,
            		NSParagraphStyleAttributeName: style
            	}];
        } (::uObjC::NativeString(value), ::g::ObjC::Object::GetHandle(font), ::g::ObjC::Object::GetHandle(color), ::g::ObjC::Object::GetHandle(style)));
        
    }
    
}

// private static Uno.Rect CreateRect(float2 pos, float2 size) [static] :164
::g::Uno::Rect TextLayout::CreateRect(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    return ::g::Uno::Rect__New2(pos, size);
}

// public TextLayout New() [static] :31
TextLayout* TextLayout::New1()
{
    TextLayout* obj1 = (TextLayout*)uNew(TextLayout_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void SetNSParagraphStyleProperties(ObjC.Object style, Fuse.Controls.TextAlignment alignment, Fuse.Controls.TextWrapping wrapping, float lineSpacing) [static] :109
void TextLayout::SetNSParagraphStyleProperties(::g::ObjC::Object* style, int alignment, int wrapping, float lineSpacing)
{
    @autoreleasepool
    {
        [] (::id style, int alignment, int wrapping, float lineSpacing) -> void
        {
            NSMutableParagraphStyle* s = (NSMutableParagraphStyle*)style;
            switch (alignment)
            {
            	case 0:
            		s.alignment = NSTextAlignmentLeft;
            		break;
            	case 1:
            		s.alignment = NSTextAlignmentCenter;
            		break;
            	case 2:
            		s.alignment = NSTextAlignmentRight;
            		break;
            	default: break;
            }
            switch (wrapping)
            {
            	case 0:
            		s.lineBreakMode = NSLineBreakByTruncatingTail;
            		break;
            	case 1:
            		s.lineBreakMode = NSLineBreakByWordWrapping;
            	default: break;
            }
            s.lineSpacing = lineSpacing;
        } (::g::ObjC::Object::GetHandle(style), alignment, wrapping, lineSpacing);
        
    }
    
}

// public static void SetNSTextStorage(ObjC.Object layoutManager, ObjC.Object textStorage) [static] :153
void TextLayout::SetNSTextStorage(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textStorage)
{
    @autoreleasepool
    {
        [] (::id layoutManager, ::id textStorage) -> void
        {
            [(NSLayoutManager*)layoutManager setTextStorage:textStorage];
        } (::g::ObjC::Object::GetHandle(layoutManager), ::g::ObjC::Object::GetHandle(textStorage));
        
    }
    
}

// public static ObjC.Object ToUIColor(float4 color) [static] :84
::g::ObjC::Object* TextLayout::ToUIColor(::g::Uno::Float4 color)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::g::Uno::Float4 color) -> ::id
        {
            return [UIColor colorWithRed:(CGFloat)color.X
            	green:(CGFloat)color.Y
            	blue:(CGFloat)color.Z
            	alpha:(CGFloat)color.W];
        } (color));
        
    }
    
}

// public static Uno.Rect UsedRectForTextContainer(ObjC.Object layoutManager, ObjC.Object textContainer) [static] :170
::g::Uno::Rect TextLayout::UsedRectForTextContainer(::g::ObjC::Object* layoutManager, ::g::ObjC::Object* textContainer)
{
    @autoreleasepool
    {
        return [] (::id layoutManager, ::id textContainer) -> ::g::Uno::Rect
        {
            CGRect rect = [(NSLayoutManager*)layoutManager
            	usedRectForTextContainer:(NSTextContainer*)textContainer];
            ::g::Uno::Float2 pos = [&]() -> ::g::Uno::Float2 { ::uForeignPool __foreignPool; return ::g::Uno::Float2__New2((float)rect.origin.x, (float)-rect.origin.y); }(); // Apple's coordinate systems and/or APIs are crazy.
            ::g::Uno::Float2 size = [&]() -> ::g::Uno::Float2 { ::uForeignPool __foreignPool; return ::g::Uno::Float2__New2((float)rect.size.width, (float)rect.size.height); }();
            return [&]() -> ::g::Uno::Rect { ::uForeignPool __foreignPool; return TextLayout::CreateRect(pos, size); }();
        } (::g::ObjC::Object::GetHandle(layoutManager), ::g::ObjC::Object::GetHandle(textContainer));
        
    }
    
}
// }

}}}} // ::g::Fuse::iOS::Bindings
