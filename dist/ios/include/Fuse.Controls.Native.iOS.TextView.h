// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/TextView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct NSAttributedStringBuilder;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct TextView;}}}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class TextView :9
// {
struct TextView_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::ITextView interface2;
};

TextView_type* TextView_typeof();
void TextView__ctor_5_fn(TextView* __this);
void TextView__ctor_6_fn(TextView* __this, ::g::ObjC::Object* handle);
void TextView__Create_fn(::g::ObjC::Object** __retval);
void TextView__FuseControlsNativeITextViewset_Font_fn(TextView* __this, ::g::Fuse::Font* value);
void TextView__FuseControlsNativeITextViewset_FontSize_fn(TextView* __this, float* value);
void TextView__FuseControlsNativeITextViewset_LineSpacing_fn(TextView* __this, float* value);
void TextView__FuseControlsNativeITextViewset_MaxLength_fn(TextView* __this, int* value);
void TextView__FuseControlsNativeITextViewset_TextAlignment_fn(TextView* __this, int* value);
void TextView__FuseControlsNativeITextViewset_TextColor_fn(TextView* __this, ::g::Uno::Float4* value);
void TextView__FuseControlsNativeITextViewset_TextTruncation_fn(TextView* __this, int* value);
void TextView__FuseControlsNativeITextViewset_TextWrapping_fn(TextView* __this, int* value);
void TextView__FuseControlsNativeITextViewset_Value_fn(TextView* __this, uString* value);
void TextView__New3_fn(TextView** __retval);
void TextView__SetValue_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* attributedString);
void TextView__UpdateText_fn(TextView* __this);

struct TextView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder*> _builder;
    uStrong< ::g::Fuse::Font*> _font;
    float _fontSize;

    void ctor_5();
    void ctor_6(::g::ObjC::Object* handle);
    void UpdateText();
    static ::g::ObjC::Object* Create();
    static TextView* New3();
    static void SetValue(::g::ObjC::Object* handle, ::g::ObjC::Object* attributedString);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
