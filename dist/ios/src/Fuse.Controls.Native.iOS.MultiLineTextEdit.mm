// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.Native.iOS.MultiLineTextEdit.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.NSAttributedStringBuilder.h>
#include <Fuse.Controls.Native.iOS.TextEditSpeedHack.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.Visual.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class MultiLineTextEdit :384
// {
static void MultiLineTextEdit_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::iOS::FontCache_typeof(),
        ::g::Fuse::Controls::Native::iOS::NativeFocus_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(MultiLineTextEdit_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(MultiLineTextEdit_type, interface1),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(MultiLineTextEdit_type, interface2),
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), offsetof(MultiLineTextEdit_type, interface3),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(MultiLineTextEdit_type, interface4));
    type->SetFields(10,
        ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder_typeof(), offsetof(MultiLineTextEdit, _builder), 0,
        ::g::ObjC::Object_typeof(), offsetof(MultiLineTextEdit, _delegate), 0,
        ::g::Fuse::Internal::FontFaceDescriptor_typeof(), offsetof(MultiLineTextEdit, _descriptor), 0,
        ::g::Uno::Float_typeof(), offsetof(MultiLineTextEdit, _fontSize), 0,
        ::TYPES[5/*Fuse.Controls.Native.ITextEditHost*/], offsetof(MultiLineTextEdit, _host), 0,
        ::g::Uno::Int_typeof(), offsetof(MultiLineTextEdit, _inputFrame), 0,
        ::g::Uno::Float2_typeof(), offsetof(MultiLineTextEdit, _pointerPosition), 0,
        ::g::Fuse::Visual_typeof(), offsetof(MultiLineTextEdit, _visual), 0);
}

MultiLineTextEdit_type* MultiLineTextEdit_typeof()
{
    static uSStrong<MultiLineTextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 5;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(MultiLineTextEdit);
    options.TypeSize = sizeof(MultiLineTextEdit_type);
    type = (MultiLineTextEdit_type*)uClassType::New("Fuse.Controls.Native.iOS.MultiLineTextEdit", options);
    type->fp_build_ = MultiLineTextEdit_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))MultiLineTextEdit__Dispose_fn;
    type->fp_OnSizeChanged = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))MultiLineTextEdit__OnSizeChanged_fn;
    type->interface2.fp_FocusGained = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn;
    type->interface2.fp_FocusLost = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn;
    type->interface3.fp_FocusGained = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn;
    type->interface3.fp_FocusLost = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn;
    type->interface4.fp_set_Value = (void(*)(uObject*, uString*))MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn;
    type->interface4.fp_set_MaxLength = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface4.fp_set_TextWrapping = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface4.fp_set_LineSpacing = (void(*)(uObject*, float*))MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface4.fp_set_FontSize = (void(*)(uObject*, float*))MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface4.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn;
    type->interface4.fp_set_TextAlignment = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface4.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface4.fp_set_TextTruncation = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn;
    type->interface2.fp_set_IsPassword = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn;
    type->interface2.fp_set_IsReadOnly = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn;
    type->interface2.fp_set_InputHint = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn;
    type->interface2.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn;
    type->interface2.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn;
    type->interface2.fp_set_ActionStyle = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn;
    type->interface2.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn;
    type->interface2.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn;
    type->interface2.fp_set_PlaceholderText = (void(*)(uObject*, uString*))MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn;
    type->interface2.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))MultiLineTextEdit__Dispose_fn;
    return type;
}

// public MultiLineTextEdit(Fuse.Controls.Native.ITextEditHost host, Fuse.Visual visual) :416
void MultiLineTextEdit__ctor_5_fn(MultiLineTextEdit* __this, uObject* host, ::g::Fuse::Visual* visual)
{
    __this->ctor_5(host, visual);
}

// private static ObjC.Object Create() :437
void MultiLineTextEdit__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = MultiLineTextEdit::Create();
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Action<ObjC.Object> callback, Uno.Action didBeginEditingCallback) :445
void MultiLineTextEdit__CreateDelegate_fn(::g::ObjC::Object* handle, uDelegate* callback, uDelegate* didBeginEditingCallback, ::g::ObjC::Object** __retval)
{
    *__retval = MultiLineTextEdit::CreateDelegate(handle, callback, didBeginEditingCallback);
}

// public override sealed void Dispose() :426
void MultiLineTextEdit__Dispose_fn(MultiLineTextEdit* __this)
{
    ::g::Fuse::Controls::Native::iOS::NativeFocus::RemoveListener(__this->Handle());
    ::g::Fuse::Input::Pointer::RemoveHandlers(__this->_visual, uDelegate::New(::TYPES[2/*Fuse.Input.PointerPressedHandler*/], (void*)MultiLineTextEdit__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[3/*Fuse.Input.PointerMovedHandler*/], (void*)MultiLineTextEdit__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[4/*Fuse.Input.PointerReleasedHandler*/], (void*)MultiLineTextEdit__OnPointerReleased_fn, __this), NULL, NULL, NULL);
    __this->_host = NULL;
    __this->_delegate = NULL;
    __this->_visual = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained() :479
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(MultiLineTextEdit* __this)
{
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(__this->_host), ::TYPES[5/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost() :484
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(MultiLineTextEdit* __this)
{
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(__this->_host), ::TYPES[5/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.ITextEdit.set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :655
void MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDefault);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDone);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyNext);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyGo);
            break;
        }
        case 4:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySearch);
            break;
        }
        case 5:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySend);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) :684
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeNone);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeAllCharacters);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeWords);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeSentences);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) :671
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 1:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeNo);
            break;
        }
        case 0:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeDefault);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeYes);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_CaretColor(float4 value) :637
void MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    MultiLineTextEdit::SetCaretColor(__this->Handle(), value_.X, value_.Y, value_.Z, value_.W);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained() :468
void MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(MultiLineTextEdit* __this)
{
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleBecomeFirstResponder(__this->Handle());
    __this->UpdateCaretPosition();
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost() :474
void MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(MultiLineTextEdit* __this)
{
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleResignFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.set_InputHint(Fuse.Controls.TextInputHint value) :621
void MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDefault);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeEmailAddress);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeURL);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypePhonePad);
            break;
        }
        case 4:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeNumberPad);
            break;
        }
        case 5:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDecimalPad);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_IsPassword(bool value) :611
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(MultiLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    MultiLineTextEdit::SetIsPassword(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_IsReadOnly(bool value) :616
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(MultiLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    MultiLineTextEdit::SetIsReadOnly(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderColor(float4 value) :703
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderText(string value) :698
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(MultiLineTextEdit* __this, uString* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_SelectionColor(float4 value) :650
void MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value) :575
void MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn(MultiLineTextEdit* __this, ::g::Fuse::Font* value)
{
    ::g::Fuse::Internal::FontFaceDescriptor* ret2;

    if (uPtr(uPtr(value)->Descriptors)->Count() > 0)
    {
        ::g::Fuse::Internal::FontFaceDescriptor* descriptor = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(value)->Descriptors), uCRef<int>(0), &ret2), ret2);
        __this->_descriptor = descriptor;
        MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetFont(::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize)))->BuildAttributedString());
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value) :562
void MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(MultiLineTextEdit* __this, float* value)
{
    float value_ = *value;

    if (__this->_fontSize != value_)
    {
        __this->_fontSize = value_;

        if (__this->_descriptor != NULL)
            MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetFont(::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize)))->BuildAttributedString());
    }
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value) :556
void MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(MultiLineTextEdit* __this, float* value)
{
    float value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetLineSpacing(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value) :539
void MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;
    MultiLineTextEdit::SetMaxLength(__this->_delegate, (value_ == 0) ? 2147483647 : value_);
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value) :591
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetTextAlignment(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value) :596
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetTextColor(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value) :601
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(MultiLineTextEdit* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value) :551
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetTextWrapping(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value) :533
void MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn(MultiLineTextEdit* __this, uString* value)
{
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetValue(value))->BuildAttributedString());
}

// private static string GetValue(ObjC.Object handle) :721
void MultiLineTextEdit__GetValue_fn(::g::ObjC::Object* handle, uString** __retval)
{
    *__retval = MultiLineTextEdit::GetValue(handle);
}

// public MultiLineTextEdit New(Fuse.Controls.Native.ITextEditHost host, Fuse.Visual visual) :416
void MultiLineTextEdit__New3_fn(uObject* host, ::g::Fuse::Visual* visual, MultiLineTextEdit** __retval)
{
    *__retval = MultiLineTextEdit::New3(host, visual);
}

// private void OnDidBeginEditing() :456
void MultiLineTextEdit__OnDidBeginEditing_fn(MultiLineTextEdit* __this)
{
    __this->OnDidBeginEditing();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :527
void MultiLineTextEdit__OnPointerMoved_fn(MultiLineTextEdit* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :525
void MultiLineTextEdit__OnPointerPressed_fn(MultiLineTextEdit* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :529
void MultiLineTextEdit__OnPointerReleased_fn(MultiLineTextEdit* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// protected internal override sealed void OnSizeChanged() :387
void MultiLineTextEdit__OnSizeChanged_fn(MultiLineTextEdit* __this)
{
    MultiLineTextEdit::UpdateContentOffset(__this->Handle());
}

// private void OnTextChanged(ObjC.Object uitextView) :489
void MultiLineTextEdit__OnTextChanged_fn(MultiLineTextEdit* __this, ::g::ObjC::Object* uitextView)
{
    __this->OnTextChanged(uitextView);
}

// private static void SetActionStyle(ObjC.Object handle, int style) :756
void MultiLineTextEdit__SetActionStyle_fn(::g::ObjC::Object* handle, int* style)
{
    MultiLineTextEdit::SetActionStyle(handle, *style);
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) :770
void MultiLineTextEdit__SetAutoCapitalizationHint_fn(::g::ObjC::Object* handle, int* hint)
{
    MultiLineTextEdit::SetAutoCapitalizationHint(handle, *hint);
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) :763
void MultiLineTextEdit__SetAutoCorrectHint_fn(::g::ObjC::Object* handle, int* hint)
{
    MultiLineTextEdit::SetAutoCorrectHint(handle, *hint);
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a) :641
void MultiLineTextEdit__SetCaretColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    MultiLineTextEdit::SetCaretColor(handle, *r, *g, *b, *a);
}

// private static void SetCaretPosition(ObjC.Object handle, float x, float y) :517
void MultiLineTextEdit__SetCaretPosition_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    MultiLineTextEdit::SetCaretPosition(handle, *x, *y);
}

// private static void SetInputHint(ObjC.Object handle, int hint) :749
void MultiLineTextEdit__SetInputHint_fn(::g::ObjC::Object* handle, int* hint)
{
    MultiLineTextEdit::SetInputHint(handle, *hint);
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) :735
void MultiLineTextEdit__SetIsPassword_fn(::g::ObjC::Object* handle, bool* isPassword)
{
    MultiLineTextEdit::SetIsPassword(handle, *isPassword);
}

// private static void SetIsReadOnly(ObjC.Object handle, bool isReadOnly) :728
void MultiLineTextEdit__SetIsReadOnly_fn(::g::ObjC::Object* handle, bool* isReadOnly)
{
    MultiLineTextEdit::SetIsReadOnly(handle, *isReadOnly);
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) :543
void MultiLineTextEdit__SetMaxLength_fn(::g::ObjC::Object* delegateHandle, int* maxLength)
{
    MultiLineTextEdit::SetMaxLength(delegateHandle, *maxLength);
}

// private static void SetTypingAttributes(ObjC.Object handle, ObjC.Object typingAttributes) :462
void MultiLineTextEdit__SetTypingAttributes_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* typingAttributes)
{
    MultiLineTextEdit::SetTypingAttributes(handle, typingAttributes);
}

// private static void SetValue(ObjC.Object handle, ObjC.Object value) :714
void MultiLineTextEdit__SetValue_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* value)
{
    MultiLineTextEdit::SetValue(handle, value);
}

// private void UpdateCaretPosition() :507
void MultiLineTextEdit__UpdateCaretPosition_fn(MultiLineTextEdit* __this)
{
    __this->UpdateCaretPosition();
}

// private static void UpdateContentOffset(ObjC.Object handle) :393
void MultiLineTextEdit__UpdateContentOffset_fn(::g::ObjC::Object* handle)
{
    MultiLineTextEdit::UpdateContentOffset(handle);
}

// private void UpdatePointer(Fuse.Input.PointerEventArgs args) :498
void MultiLineTextEdit__UpdatePointer_fn(MultiLineTextEdit* __this, ::g::Fuse::Input::PointerEventArgs* args)
{
    __this->UpdatePointer(args);
}

// public MultiLineTextEdit(Fuse.Controls.Native.ITextEditHost host, Fuse.Visual visual) [instance] :416
void MultiLineTextEdit::ctor_5(uObject* host, ::g::Fuse::Visual* visual)
{
    _builder = ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder::New1();
    _inputFrame = -1;
    _pointerPosition = ::g::Uno::Float2__New1(0.0f);
    _fontSize = 12.0f;
    ctor_4(MultiLineTextEdit::Create());
    ::g::Fuse::Controls::Native::iOS::TextEditSpeedHack::Run();
    _host = host;
    _visual = visual;
    _delegate = MultiLineTextEdit::CreateDelegate(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object>*/], (void*)MultiLineTextEdit__OnTextChanged_fn, this), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)MultiLineTextEdit__OnDidBeginEditing_fn, this));
    ::g::Fuse::Controls::Native::iOS::NativeFocus::AddListener(Handle(), (uObject*)this);
    ::g::Fuse::Input::Pointer::AddHandlers(_visual, uDelegate::New(::TYPES[2/*Fuse.Input.PointerPressedHandler*/], (void*)MultiLineTextEdit__OnPointerPressed_fn, this), uDelegate::New(::TYPES[3/*Fuse.Input.PointerMovedHandler*/], (void*)MultiLineTextEdit__OnPointerMoved_fn, this), uDelegate::New(::TYPES[4/*Fuse.Input.PointerReleasedHandler*/], (void*)MultiLineTextEdit__OnPointerReleased_fn, this), NULL, NULL, NULL);
}

// private void OnDidBeginEditing() [instance] :456
void MultiLineTextEdit::OnDidBeginEditing()
{
    MultiLineTextEdit::SetTypingAttributes(Handle(), uPtr(_builder)->BuildAttributes());
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :527
void MultiLineTextEdit::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    UpdatePointer(args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :525
void MultiLineTextEdit::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    UpdatePointer(args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :529
void MultiLineTextEdit::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    UpdatePointer(args);
}

// private void OnTextChanged(ObjC.Object uitextView) [instance] :489
void MultiLineTextEdit::OnTextChanged(::g::ObjC::Object* uitextView)
{
    uString* value = MultiLineTextEdit::GetValue(Handle());
    uPtr(_builder)->SetValue(value);
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[5/*Fuse.Controls.Native.ITextEditHost*/]), value);
}

// private void UpdateCaretPosition() [instance] :507
void MultiLineTextEdit::UpdateCaretPosition()
{
    if (_inputFrame == ::g::Fuse::UpdateManager::FrameIndex())
    {
        ::g::Uno::Float2 p = uPtr(_visual)->WindowToLocal(_pointerPosition);
        MultiLineTextEdit::SetCaretPosition(Handle(), p.X, p.Y);
    }
}

// private void UpdatePointer(Fuse.Input.PointerEventArgs args) [instance] :498
void MultiLineTextEdit::UpdatePointer(::g::Fuse::Input::PointerEventArgs* args)
{
    if (uPtr(args)->IsPrimary())
    {
        _pointerPosition = uPtr(args)->WindowPoint();
        _inputFrame = ::g::Fuse::UpdateManager::FrameIndex();
    }
}

// private static ObjC.Object Create() [static] :437
::g::ObjC::Object* MultiLineTextEdit::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UITextView* tv = [[::UITextView alloc] init];
            [tv setBackgroundColor:[::UIColor colorWithRed:(CGFloat)0.0f green:(CGFloat)0.0f blue:(CGFloat)0.0f alpha:(CGFloat)0.0f]];
            return tv;
        } ());
        
    }
    
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Action<ObjC.Object> callback, Uno.Action didBeginEditingCallback) [static] :445
::g::ObjC::Object* MultiLineTextEdit::CreateDelegate(::g::ObjC::Object* handle, uDelegate* callback, uDelegate* didBeginEditingCallback)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::uObjC::Function<void, ::id> callback, ::uObjC::Function<void> didBeginEditingCallback) -> ::id
        {
            ::UITextView* textView = (::UITextView*)handle;
            ::TextViewDelegate* del = [[::TextViewDelegate alloc] init];
            [del setTextChangedCallback: callback];
            [del setDidBeginEditingCallback: didBeginEditingCallback];
            [del setMaxLength: INT_MAX];
            [textView setDelegate:del];
            return del;
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::id>)nil : (^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::ObjC::Object::Create(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: didBeginEditingCallback])));
        
    }
    
}

// private static string GetValue(ObjC.Object handle) [static] :721
uString* MultiLineTextEdit::GetValue(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            ::UITextView* textView = (::UITextView*)handle;
            return [textView text];
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public MultiLineTextEdit New(Fuse.Controls.Native.ITextEditHost host, Fuse.Visual visual) [static] :416
MultiLineTextEdit* MultiLineTextEdit::New3(uObject* host, ::g::Fuse::Visual* visual)
{
    MultiLineTextEdit* obj1 = (MultiLineTextEdit*)uNew(MultiLineTextEdit_typeof());
    obj1->ctor_5(host, visual);
    return obj1;
}

// private static void SetActionStyle(ObjC.Object handle, int style) [static] :756
void MultiLineTextEdit::SetActionStyle(::g::ObjC::Object* handle, int style)
{
    @autoreleasepool
    {
        [] (::id handle, int style) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setReturnKeyType: (UIReturnKeyType)style];
        } (::g::ObjC::Object::GetHandle(handle), style);
        
    }
    
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) [static] :770
void MultiLineTextEdit::SetAutoCapitalizationHint(::g::ObjC::Object* handle, int hint)
{
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setAutocapitalizationType: (UITextAutocapitalizationType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) [static] :763
void MultiLineTextEdit::SetAutoCorrectHint(::g::ObjC::Object* handle, int hint)
{
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setAutocorrectionType: (UITextAutocorrectionType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a) [static] :641
void MultiLineTextEdit::SetCaretColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            ::UIColor* color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
            [textView setTintColor:color];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetCaretPosition(ObjC.Object handle, float x, float y) [static] :517
void MultiLineTextEdit::SetCaretPosition(::g::ObjC::Object* handle, float x, float y)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y) -> void
        {
            UITextView* textView = (::UITextView*)handle;
            UITextPosition* textPos = [textView closestPositionToPoint: CGPointMake(x, y)];
            auto offset = [textView offsetFromPosition:textView.beginningOfDocument toPosition:textPos];
            [textView setSelectedRange:NSMakeRange(offset, 0)];
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static void SetInputHint(ObjC.Object handle, int hint) [static] :749
void MultiLineTextEdit::SetInputHint(::g::ObjC::Object* handle, int hint)
{
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setKeyboardType:(UIKeyboardType)hint];
        } (::g::ObjC::Object::GetHandle(handle), hint);
        
    }
    
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) [static] :735
void MultiLineTextEdit::SetIsPassword(::g::ObjC::Object* handle, bool isPassword)
{
    @autoreleasepool
    {
        [] (::id handle, bool isPassword) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setSecureTextEntry: isPassword];
        } (::g::ObjC::Object::GetHandle(handle), isPassword);
        
    }
    
}

// private static void SetIsReadOnly(ObjC.Object handle, bool isReadOnly) [static] :728
void MultiLineTextEdit::SetIsReadOnly(::g::ObjC::Object* handle, bool isReadOnly)
{
    @autoreleasepool
    {
        [] (::id handle, bool isReadOnly) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            [textView setEditable: !isReadOnly];
        } (::g::ObjC::Object::GetHandle(handle), isReadOnly);
        
    }
    
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) [static] :543
void MultiLineTextEdit::SetMaxLength(::g::ObjC::Object* delegateHandle, int maxLength)
{
    @autoreleasepool
    {
        [] (::id delegateHandle, int maxLength) -> void
        {
            ::TextViewDelegate* textViewDelegate = (::TextViewDelegate*)delegateHandle;
            [textViewDelegate setMaxLength: maxLength];
        } (::g::ObjC::Object::GetHandle(delegateHandle), maxLength);
        
    }
    
}

// private static void SetTypingAttributes(ObjC.Object handle, ObjC.Object typingAttributes) [static] :462
void MultiLineTextEdit::SetTypingAttributes(::g::ObjC::Object* handle, ::g::ObjC::Object* typingAttributes)
{
    @autoreleasepool
    {
        [] (::id handle, ::id typingAttributes) -> void
        {
            UITextView* textView = (UITextView*)handle;
            textView.typingAttributes = typingAttributes;
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(typingAttributes));
        
    }
    
}

// private static void SetValue(ObjC.Object handle, ObjC.Object value) [static] :714
void MultiLineTextEdit::SetValue(::g::ObjC::Object* handle, ::g::ObjC::Object* value)
{
    @autoreleasepool
    {
        [] (::id handle, ::id value) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            textView.attributedText = (NSAttributedString*)value;
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(value));
        
    }
    
}

// private static void UpdateContentOffset(ObjC.Object handle) [static] :393
void MultiLineTextEdit::UpdateContentOffset(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            // If viewSize == contentSize the contentOffset should no change.
            // However iOS sets the contentOffset if viewSize and contentSize changes
            // even if the condition above is true.
            // This prevents spastic behavior like https://github.com/fusetools/ManualTestApp/issues/334
            auto contentSize = [handle contentSize];
            auto viewSize = [handle frame].size;
            // viewSize is sometimes 0.5 smaller than contentSize
            viewSize = CGSizeMake(ceilf(viewSize.width), ceilf(viewSize.height));
            if (viewSize.width >= contentSize.width && viewSize.height >= contentSize.height)
            {
            	[handle setContentOffset: CGPointMake(0.0, 0.0) animated:false];
            }
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
