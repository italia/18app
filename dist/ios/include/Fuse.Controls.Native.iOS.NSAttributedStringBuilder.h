// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/NSAttributedStringBuilder.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct NSAttributedStringBuilder;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class NSAttributedStringBuilder :7
// {
uType* NSAttributedStringBuilder_typeof();
void NSAttributedStringBuilder__ctor__fn(NSAttributedStringBuilder* __this);
void NSAttributedStringBuilder__BuildAttributedString_fn(NSAttributedStringBuilder* __this, ::g::ObjC::Object** __retval);
void NSAttributedStringBuilder__BuildAttributes_fn(NSAttributedStringBuilder* __this, ::g::ObjC::Object** __retval);
void NSAttributedStringBuilder__Create_fn(uString* value, ::g::ObjC::Object* attributes, ::g::ObjC::Object** __retval);
void NSAttributedStringBuilder__GetTextAlignment_fn(NSAttributedStringBuilder* __this, int* alignment, int* __retval);
void NSAttributedStringBuilder__New1_fn(NSAttributedStringBuilder** __retval);
void NSAttributedStringBuilder__NewDictionary_fn(::g::ObjC::Object** __retval);
void NSAttributedStringBuilder__SetFont_fn(NSAttributedStringBuilder* __this, ::g::ObjC::Object* font, NSAttributedStringBuilder** __retval);
void NSAttributedStringBuilder__SetFont1_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle);
void NSAttributedStringBuilder__SetForegroundColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a);
void NSAttributedStringBuilder__SetLineSpacing_fn(NSAttributedStringBuilder* __this, float* lineSpacing, NSAttributedStringBuilder** __retval);
void NSAttributedStringBuilder__SetParagraphStyle_fn(::g::ObjC::Object* handle, float* lineSpacing, int* textAlignment, bool* wrapText);
void NSAttributedStringBuilder__SetTextAlignment_fn(NSAttributedStringBuilder* __this, int* alignment, NSAttributedStringBuilder** __retval);
void NSAttributedStringBuilder__SetTextColor_fn(NSAttributedStringBuilder* __this, ::g::Uno::Float4* color, NSAttributedStringBuilder** __retval);
void NSAttributedStringBuilder__SetTextWrapping_fn(NSAttributedStringBuilder* __this, int* wrapping, NSAttributedStringBuilder** __retval);
void NSAttributedStringBuilder__SetValue_fn(NSAttributedStringBuilder* __this, uString* value, NSAttributedStringBuilder** __retval);

struct NSAttributedStringBuilder : uObject
{
    int _alignment;
    ::g::Uno::Float4 _color;
    uStrong< ::g::ObjC::Object*> _font;
    float _lineSpacing;
    int _textWrapping;
    uStrong<uString*> _value;

    void ctor_();
    ::g::ObjC::Object* BuildAttributedString();
    ::g::ObjC::Object* BuildAttributes();
    int GetTextAlignment(int alignment);
    NSAttributedStringBuilder* SetFont(::g::ObjC::Object* font);
    NSAttributedStringBuilder* SetLineSpacing(float lineSpacing);
    NSAttributedStringBuilder* SetTextAlignment(int alignment);
    NSAttributedStringBuilder* SetTextColor(::g::Uno::Float4 color);
    NSAttributedStringBuilder* SetTextWrapping(int wrapping);
    NSAttributedStringBuilder* SetValue(uString* value);
    static ::g::ObjC::Object* Create(uString* value, ::g::ObjC::Object* attributes);
    static NSAttributedStringBuilder* New1();
    static ::g::ObjC::Object* NewDictionary();
    static void SetFont1(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle);
    static void SetForegroundColor(::g::ObjC::Object* handle, float r, float g, float b, float a);
    static void SetParagraphStyle(::g::ObjC::Object* handle, float lineSpacing, int textAlignment, bool wrapText);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
