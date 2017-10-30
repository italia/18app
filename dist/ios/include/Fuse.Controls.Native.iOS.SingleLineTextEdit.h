// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct SingleLineTextEdit;}}}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class SingleLineTextEdit :11
// {
struct SingleLineTextEdit_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::ITextEdit interface2;
    ::g::Fuse::Controls::Native::iOS::INativeFocusListener interface3;
    ::g::Fuse::Controls::Native::ITextView interface4;
};

SingleLineTextEdit_type* SingleLineTextEdit_typeof();
void SingleLineTextEdit__ctor_5_fn(SingleLineTextEdit* __this, uObject* textEditHost);
void SingleLineTextEdit__AddOnActionCallback_fn(::g::ObjC::Object* handle, uDelegate* callback, ::g::ObjC::Object** __retval);
void SingleLineTextEdit__Create_fn(::g::ObjC::Object** __retval);
void SingleLineTextEdit__Dispose_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value);
void SingleLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(SingleLineTextEdit* __this, bool* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(SingleLineTextEdit* __this, bool* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(SingleLineTextEdit* __this, uString* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_Font_fn(SingleLineTextEdit* __this, ::g::Fuse::Font* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(SingleLineTextEdit* __this, float* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(SingleLineTextEdit* __this, float* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_Value_fn(SingleLineTextEdit* __this, uString* value);
void SingleLineTextEdit__GetValue_fn(::g::ObjC::Object* handle, uString** __retval);
void SingleLineTextEdit__New3_fn(uObject* textEditHost, SingleLineTextEdit** __retval);
void SingleLineTextEdit__OnAction_fn(SingleLineTextEdit* __this, ::g::ObjC::Object* sender, bool* __retval);
void SingleLineTextEdit__OnTextEdit_fn(SingleLineTextEdit* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* args);
void SingleLineTextEdit__OnValueChanged_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__SetActionStyle_fn(::g::ObjC::Object* handle, int* style);
void SingleLineTextEdit__SetAutoCapitalizationHint_fn(::g::ObjC::Object* handle, int* hint);
void SingleLineTextEdit__SetAutoCorrectHint_fn(::g::ObjC::Object* handle, int* hint);
void SingleLineTextEdit__SetCaretColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a);
void SingleLineTextEdit__SetFont_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle);
void SingleLineTextEdit__SetInputHint_fn(::g::ObjC::Object* handle, int* hint);
void SingleLineTextEdit__SetIsPassword_fn(::g::ObjC::Object* handle, bool* isPassword);
void SingleLineTextEdit__SetMaxLength_fn(::g::ObjC::Object* delegateHandle, int* maxLength);
void SingleLineTextEdit__SetPlaceholderText_fn(::g::ObjC::Object* handle, uString* text, float* r, float* g, float* b, float* a);
void SingleLineTextEdit__SetTextAlignment_fn(::g::ObjC::Object* handle, int* alignmnet);
void SingleLineTextEdit__SetTextColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a);
void SingleLineTextEdit__SetValue_fn(::g::ObjC::Object* handle, uString* value);

struct SingleLineTextEdit : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::ObjC::Object*> _delegate;
    uStrong< ::g::Fuse::Internal::FontFaceDescriptor*> _descriptor;
    uStrong<uObject*> _editingEvents;
    float _fontSize;
    ::g::Uno::Float4 _placeholderColor;
    uStrong<uString*> _placeholderText;
    uStrong<uObject*> _textEditHost;

    void ctor_5(uObject* textEditHost);
    bool OnAction(::g::ObjC::Object* sender);
    void OnTextEdit(::g::ObjC::Object* sender, ::g::ObjC::Object* args);
    void OnValueChanged();
    static ::g::ObjC::Object* AddOnActionCallback(::g::ObjC::Object* handle, uDelegate* callback);
    static ::g::ObjC::Object* Create();
    static uString* GetValue(::g::ObjC::Object* handle);
    static SingleLineTextEdit* New3(uObject* textEditHost);
    static void SetActionStyle(::g::ObjC::Object* handle, int style);
    static void SetAutoCapitalizationHint(::g::ObjC::Object* handle, int hint);
    static void SetAutoCorrectHint(::g::ObjC::Object* handle, int hint);
    static void SetCaretColor(::g::ObjC::Object* handle, float r, float g, float b, float a);
    static void SetFont(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle);
    static void SetInputHint(::g::ObjC::Object* handle, int hint);
    static void SetIsPassword(::g::ObjC::Object* handle, bool isPassword);
    static void SetMaxLength(::g::ObjC::Object* delegateHandle, int maxLength);
    static void SetPlaceholderText(::g::ObjC::Object* handle, uString* text, float r, float g, float b, float a);
    static void SetTextAlignment(::g::ObjC::Object* handle, int alignmnet);
    static void SetTextColor(::g::ObjC::Object* handle, float r, float g, float b, float a);
    static void SetValue(::g::ObjC::Object* handle, uString* value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
