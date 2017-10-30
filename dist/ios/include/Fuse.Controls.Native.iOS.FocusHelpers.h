// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Focus.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct FocusHelpers;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct KeyboardView;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class FocusHelpers :49
// {
uClassType* FocusHelpers_typeof();
void FocusHelpers__BecomeFirstResponder_fn(::g::ObjC::Object* uiView);
void FocusHelpers__GetCurrentFirstResponder_fn(::g::ObjC::Object** __retval);
void FocusHelpers__IsFirstResponder_fn(::g::ObjC::Object* handle, bool* __retval);
void FocusHelpers__get_KeyboardView_fn(::g::Fuse::Controls::Native::iOS::KeyboardView** __retval);
void FocusHelpers__ResignFirstResponder_fn(::g::ObjC::Object* uiView);
void FocusHelpers__ScheduleBecomeFirstResponder_fn(::g::ObjC::Object* target);
void FocusHelpers__ScheduleResignFirstResponder_fn(::g::ObjC::Object* target);

struct FocusHelpers : uObject
{
    static uSStrong< ::g::Fuse::Controls::Native::iOS::KeyboardView*> _keyboardView_;
    static uSStrong< ::g::Fuse::Controls::Native::iOS::KeyboardView*>& _keyboardView() { return FocusHelpers_typeof()->Init(), _keyboardView_; }

    static void BecomeFirstResponder(::g::ObjC::Object* uiView);
    static ::g::ObjC::Object* GetCurrentFirstResponder();
    static bool IsFirstResponder(::g::ObjC::Object* handle);
    static void ResignFirstResponder(::g::ObjC::Object* uiView);
    static void ScheduleBecomeFirstResponder(::g::ObjC::Object* target);
    static void ScheduleResignFirstResponder(::g::ObjC::Object* target);
    static ::g::Fuse::Controls::Native::iOS::KeyboardView* KeyboardView();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
