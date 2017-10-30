// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.3.1/AppRoot.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{struct AppRoot;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// internal static extern class AppRoot :11
// {
uClassType* AppRoot_typeof();
void AppRoot__get_ClearColor_fn(::g::Uno::Float4* __retval);
void AppRoot__set_ClearColor_fn(::g::Uno::Float4* value);
void AppRoot__ClearRoot_fn(::g::Fuse::Controls::Native::ViewHandle* root);
void AppRoot__CreateAppRootView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object** __retval);
void AppRoot__get_Handle_fn(::g::ObjC::Object** __retval);
void AppRoot__Remove_fn(::g::ObjC::Object* childHandle);
void AppRoot__Set_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle);
void AppRoot__SetClearColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a);
void AppRoot__SetRootView_fn(::g::Fuse::Controls::Native::ViewHandle* root);

struct AppRoot : uObject
{
    static uSStrong< ::g::ObjC::Object*> _appRootView_;
    static uSStrong< ::g::ObjC::Object*>& _appRootView() { return AppRoot_typeof()->Init(), _appRootView_; }
    static ::g::Uno::Float4 _clearColor_;
    static ::g::Uno::Float4& _clearColor() { return AppRoot_typeof()->Init(), _clearColor_; }
    static uSStrong< ::g::Fuse::Controls::Native::ViewHandle*> _root_;
    static uSStrong< ::g::Fuse::Controls::Native::ViewHandle*>& _root() { return AppRoot_typeof()->Init(), _root_; }

    static void ClearRoot(::g::Fuse::Controls::Native::ViewHandle* root);
    static ::g::ObjC::Object* CreateAppRootView(::g::ObjC::Object* handle);
    static void Remove(::g::ObjC::Object* childHandle);
    static void Set(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle);
    static void SetClearColor(::g::ObjC::Object* handle, float r, float g, float b, float a);
    static void SetRootView(::g::Fuse::Controls::Native::ViewHandle* root);
    static ::g::Uno::Float4 ClearColor();
    static void ClearColor(::g::Uno::Float4 value);
    static ::g::ObjC::Object* Handle();
};
// }

}} // ::g::Fuse
