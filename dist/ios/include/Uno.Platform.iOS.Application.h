// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/iOS/Application.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Platform{namespace iOS{struct Application;}}}}

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class Application :12
// {
uClassType* Application_typeof();
void Application__GetRootView_fn(::g::ObjC::Object** __retval);
void Application__IsLandscape_fn(bool* __retval);
void Application__IsRootView_fn(::g::ObjC::Object* view, bool* __retval);
void Application__get_LaunchOptions_fn(::g::ObjC::Object** __retval);
void Application__set_LaunchOptions_fn(::g::ObjC::Object* value);
void Application__SetRootView_fn(::g::ObjC::Object* view);

struct Application : uObject
{
    static uSStrong< ::g::ObjC::Object*> _LaunchOptions_;
    static uSStrong< ::g::ObjC::Object*>& _LaunchOptions() { return _LaunchOptions_; }

    static ::g::ObjC::Object* GetRootView();
    static bool IsLandscape();
    static bool IsRootView(::g::ObjC::Object* view);
    static void SetRootView(::g::ObjC::Object* view);
    static ::g::ObjC::Object* LaunchOptions();
    static void LaunchOptions(::g::ObjC::Object* value);
};
// }

}}}} // ::g::Uno::Platform::iOS
