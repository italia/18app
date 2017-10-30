// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/KeyboardView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct KeyboardView;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class KeyboardView :6
// {
uType* KeyboardView_typeof();
void KeyboardView__ctor__fn(KeyboardView* __this);
void KeyboardView__CopyKeyboardType_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* source);
void KeyboardView__Create_fn(::g::ObjC::Object** __retval);
void KeyboardView__GetIsFocusable_fn(::g::ObjC::Object* handle, bool* __retval);
void KeyboardView__get_Handle_fn(KeyboardView* __this, ::g::ObjC::Object** __retval);
void KeyboardView__HideKeyboard_fn(KeyboardView* __this);
void KeyboardView__HoldFocus_fn(KeyboardView* __this, ::g::ObjC::Object* focusedObject);
void KeyboardView__get_IsFocusable_fn(KeyboardView* __this, bool* __retval);
void KeyboardView__set_IsFocusable_fn(KeyboardView* __this, bool* value);
void KeyboardView__New1_fn(KeyboardView** __retval);
void KeyboardView__SetIsFocusable_fn(::g::ObjC::Object* handle, bool* value);

struct KeyboardView : uObject
{
    uStrong< ::g::ObjC::Object*> _handle;

    void ctor_();
    ::g::ObjC::Object* Handle();
    void HideKeyboard();
    void HoldFocus(::g::ObjC::Object* focusedObject);
    bool IsFocusable();
    void IsFocusable(bool value);
    static void CopyKeyboardType(::g::ObjC::Object* handle, ::g::ObjC::Object* source);
    static ::g::ObjC::Object* Create();
    static bool GetIsFocusable(::g::ObjC::Object* handle);
    static KeyboardView* New1();
    static void SetIsFocusable(::g::ObjC::Object* handle, bool value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
