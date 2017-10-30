// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.TextEditSpeedHack.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.iOSDisplay.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class TextEditSpeedHack :779
// {
static void TextEditSpeedHack_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Platform::iOSDisplay_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&TextEditSpeedHack::_done_, uFieldFlagsStatic);
}

uClassType* TextEditSpeedHack_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TextEditSpeedHack", options);
    type->fp_build_ = TextEditSpeedHack_build;
    return type;
}

// public static void Run() :783
void TextEditSpeedHack__Run_fn()
{
    TextEditSpeedHack::Run();
}

// private static void RunInner(ObjC.Object win) :796
void TextEditSpeedHack__RunInner_fn(::g::ObjC::Object* win)
{
    TextEditSpeedHack::RunInner(win);
}

bool TextEditSpeedHack::_done_;

// public static void Run() [static] :783
void TextEditSpeedHack::Run()
{
    if (TextEditSpeedHack::_done_)
        return;

    TextEditSpeedHack::_done_ = true;
    ::g::Uno::Platform::iOSDisplay* d = uCast< ::g::Uno::Platform::iOSDisplay*>(::g::Uno::Platform::Displays::MainDisplay(), ::TYPES[0/*Uno.Platform.iOSDisplay*/]);
    ::g::ObjC::Object* wobj = d->_handle;
    TextEditSpeedHack::RunInner(wobj);
}

// private static void RunInner(ObjC.Object win) [static] :796
void TextEditSpeedHack::RunInner(::g::ObjC::Object* win)
{
    @autoreleasepool
    {
        [] (::id win) -> void
        {
            UITextField* lagFreeField = [[UITextField alloc] init];
            UIWindow* window = (UIWindow*)win;
            [window addSubview:lagFreeField];
            [lagFreeField becomeFirstResponder];
            [lagFreeField resignFirstResponder];
            [lagFreeField removeFromSuperview];
        } (::g::ObjC::Object::GetHandle(win));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
