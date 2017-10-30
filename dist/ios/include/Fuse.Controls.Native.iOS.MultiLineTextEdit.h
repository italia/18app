// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct MultiLineTextEdit;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct NSAttributedStringBuilder;}}}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class MultiLineTextEdit :384
// {
struct MultiLineTextEdit_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::ITextEdit interface2;
    ::g::Fuse::Controls::Native::iOS::INativeFocusListener interface3;
    ::g::Fuse::Controls::Native::ITextView interface4;
};

MultiLineTextEdit_type* MultiLineTextEdit_typeof();
void MultiLineTextEdit__ctor_5_fn(MultiLineTextEdit* __this, uObject* host, ::g::Fuse::Visual* visual);
void MultiLineTextEdit__Create_fn(::g::ObjC::Object** __retval);
void MultiLineTextEdit__CreateDelegate_fn(::g::ObjC::Object* handle, uDelegate* callback, uDelegate* didBeginEditingCallback, ::g::ObjC::Object** __retval);
void MultiLineTextEdit__Dispose_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value);
void MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(MultiLineTextEdit* __this, bool* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(MultiLineTextEdit* __this, bool* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(MultiLineTextEdit* __this, uString* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn(MultiLineTextEdit* __this, ::g::Fuse::Font* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(MultiLineTextEdit* __this, float* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(MultiLineTextEdit* __this, float* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn(MultiLineTextEdit* __this, uString* value);
void MultiLineTextEdit__GetValue_fn(::g::ObjC::Object* handle, uString** __retval);
void MultiLineTextEdit__New3_fn(uObject* host, ::g::Fuse::Visual* visual, MultiLineTextEdit** __retval);
void MultiLineTextEdit__OnDidBeginEditing_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__OnPointerMoved_fn(MultiLineTextEdit* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void MultiLineTextEdit__OnPointerPressed_fn(MultiLineTextEdit* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void MultiLineTextEdit__OnPointerReleased_fn(MultiLineTextEdit* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void MultiLineTextEdit__OnSizeChanged_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__OnTextChanged_fn(MultiLineTextEdit* __this, ::g::ObjC::Object* uitextView);
void MultiLineTextEdit__SetActionStyle_fn(::g::ObjC::Object* handle, int* style);
void MultiLineTextEdit__SetAutoCapitalizationHint_fn(::g::ObjC::Object* handle, int* hint);
void MultiLineTextEdit__SetAutoCorrectHint_fn(::g::ObjC::Object* handle, int* hint);
void MultiLineTextEdit__SetCaretColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a);
void MultiLineTextEdit__SetCaretPosition_fn(::g::ObjC::Object* handle, float* x, float* y);
void MultiLineTextEdit__SetInputHint_fn(::g::ObjC::Object* handle, int* hint);
void MultiLineTextEdit__SetIsPassword_fn(::g::ObjC::Object* handle, bool* isPassword);
void MultiLineTextEdit__SetIsReadOnly_fn(::g::ObjC::Object* handle, bool* isReadOnly);
void MultiLineTextEdit__SetMaxLength_fn(::g::ObjC::Object* delegateHandle, int* maxLength);
void MultiLineTextEdit__SetTypingAttributes_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* typingAttributes);
void MultiLineTextEdit__SetValue_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* value);
void MultiLineTextEdit__UpdateCaretPosition_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__UpdateContentOffset_fn(::g::ObjC::Object* handle);
void MultiLineTextEdit__UpdatePointer_fn(MultiLineTextEdit* __this, ::g::Fuse::Input::PointerEventArgs* args);

struct MultiLineTextEdit : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder*> _builder;
    uStrong< ::g::ObjC::Object*> _delegate;
    uStrong< ::g::Fuse::Internal::FontFaceDescriptor*> _descriptor;
    float _fontSize;
    uStrong<uObject*> _host;
    int _inputFrame;
    ::g::Uno::Float2 _pointerPosition;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_5(uObject* host, ::g::Fuse::Visual* visual);
    void OnDidBeginEditing();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnTextChanged(::g::ObjC::Object* uitextView);
    void UpdateCaretPosition();
    void UpdatePointer(::g::Fuse::Input::PointerEventArgs* args);
    static ::g::ObjC::Object* Create();
    static ::g::ObjC::Object* CreateDelegate(::g::ObjC::Object* handle, uDelegate* callback, uDelegate* didBeginEditingCallback);
    static uString* GetValue(::g::ObjC::Object* handle);
    static MultiLineTextEdit* New3(uObject* host, ::g::Fuse::Visual* visual);
    static void SetActionStyle(::g::ObjC::Object* handle, int style);
    static void SetAutoCapitalizationHint(::g::ObjC::Object* handle, int hint);
    static void SetAutoCorrectHint(::g::ObjC::Object* handle, int hint);
    static void SetCaretColor(::g::ObjC::Object* handle, float r, float g, float b, float a);
    static void SetCaretPosition(::g::ObjC::Object* handle, float x, float y);
    static void SetInputHint(::g::ObjC::Object* handle, int hint);
    static void SetIsPassword(::g::ObjC::Object* handle, bool isPassword);
    static void SetIsReadOnly(::g::ObjC::Object* handle, bool isReadOnly);
    static void SetMaxLength(::g::ObjC::Object* delegateHandle, int maxLength);
    static void SetTypingAttributes(::g::ObjC::Object* handle, ::g::ObjC::Object* typingAttributes);
    static void SetValue(::g::ObjC::Object* handle, ::g::ObjC::Object* value);
    static void UpdateContentOffset(::g::ObjC::Object* handle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
