// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.3.1/AppRoot.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppRoot.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Platform.SystemUI.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>
static uString* STRINGS[2];

namespace g{
namespace Fuse{

// internal static extern class AppRoot :11
// {
// static AppRoot() :18
static void AppRoot__cctor__fn(uType* __type)
{
    AppRoot::_clearColor_ = ::g::Uno::Float4__New1(1.0f);
    AppRoot::_appRootView_ = AppRoot::CreateAppRootView(uPtr(::g::Fuse::Controls::Native::iOS::FocusHelpers::KeyboardView())->Handle());
    AppRoot::SetClearColor(AppRoot::_appRootView_, AppRoot::_clearColor_.X, AppRoot::_clearColor_.Y, AppRoot::_clearColor_.Z, AppRoot::_clearColor_.W);
}

static void AppRoot_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" not set as root");
    ::STRINGS[1] = uString::Const("Root already set to: ");
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), (uintptr_t)&AppRoot::_appRootView_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&AppRoot::_clearColor_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::ViewHandle_typeof(), (uintptr_t)&AppRoot::_root_, uFieldFlagsStatic);
}

uClassType* AppRoot_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.AppRoot", options);
    type->fp_build_ = AppRoot_build;
    type->fp_cctor_ = AppRoot__cctor__fn;
    return type;
}

// public static float4 get_ClearColor() :41
void AppRoot__get_ClearColor_fn(::g::Uno::Float4* __retval)
{
    *__retval = AppRoot::ClearColor();
}

// public static void set_ClearColor(float4 value) :42
void AppRoot__set_ClearColor_fn(::g::Uno::Float4* value)
{
    AppRoot::ClearColor(*value);
}

// public static void ClearRoot(Fuse.Controls.Native.ViewHandle root) :69
void AppRoot__ClearRoot_fn(::g::Fuse::Controls::Native::ViewHandle* root)
{
    AppRoot::ClearRoot(root);
}

// private static ObjC.Object CreateAppRootView(ObjC.Object handle) :25
void AppRoot__CreateAppRootView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object** __retval)
{
    *__retval = AppRoot::CreateAppRootView(handle);
}

// public static ObjC.Object get_Handle() :14
void AppRoot__get_Handle_fn(::g::ObjC::Object** __retval)
{
    *__retval = AppRoot::Handle();
}

// private static void Remove(ObjC.Object childHandle) :87
void AppRoot__Remove_fn(::g::ObjC::Object* childHandle)
{
    AppRoot::Remove(childHandle);
}

// private static void Set(ObjC.Object handle, ObjC.Object childHandle) :79
void AppRoot__Set_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle)
{
    AppRoot::Set(handle, childHandle);
}

// private static void SetClearColor(ObjC.Object handle, float r, float g, float b, float a) :53
void AppRoot__SetClearColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    AppRoot::SetClearColor(handle, *r, *g, *b, *a);
}

// public static void SetRootView(Fuse.Controls.Native.ViewHandle root) :60
void AppRoot__SetRootView_fn(::g::Fuse::Controls::Native::ViewHandle* root)
{
    AppRoot::SetRootView(root);
}

uSStrong< ::g::ObjC::Object*> AppRoot::_appRootView_;
::g::Uno::Float4 AppRoot::_clearColor_;
uSStrong< ::g::Fuse::Controls::Native::ViewHandle*> AppRoot::_root_;

// public static void ClearRoot(Fuse.Controls.Native.ViewHandle root) [static] :69
void AppRoot::ClearRoot(::g::Fuse::Controls::Native::ViewHandle* root)
{
    AppRoot_typeof()->Init();

    if ((AppRoot::_root_ == NULL) || (root != AppRoot::_root_))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(root, ::STRINGS[0/*" not set as...*/])));

    AppRoot::Remove(uPtr(AppRoot::_root_)->NativeHandle);
    AppRoot::_root_ = NULL;
}

// private static ObjC.Object CreateAppRootView(ObjC.Object handle) [static] :25
::g::ObjC::Object* AppRoot::CreateAppRootView(::g::ObjC::Object* handle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle) -> ::id
        {
            UIControl* root = (UIControl*)handle;
            [root setUserInteractionEnabled: true];
            [root setMultipleTouchEnabled: true];
            [root setOpaque: false];
            [[root layer] setAnchorPoint: { 0.0f, 0.0f }];
            ::g::Fuse::Platform::SystemUI::RootView(::g::ObjC::Object::Create(root));
            [root sizeToFit];
            root.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            return root;
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// private static void Remove(ObjC.Object childHandle) [static] :87
void AppRoot::Remove(::g::ObjC::Object* childHandle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id childHandle) -> void
        {
            UIView* child = (UIView*)childHandle;
            [child removeFromSuperview];
        } (::g::ObjC::Object::GetHandle(childHandle));
        
    }
    
}

// private static void Set(ObjC.Object handle, ObjC.Object childHandle) [static] :79
void AppRoot::Set(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id handle, ::id childHandle) -> void
        {
            UIView* parent = (UIView*)handle;
            UIView* child = (UIView*)childHandle;
            [parent addSubview: child];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(childHandle));
        
    }
    
}

// private static void SetClearColor(ObjC.Object handle, float r, float g, float b, float a) [static] :53
void AppRoot::SetClearColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            UIView* view = (UIView*)handle;
            [view setBackgroundColor: [UIColor colorWithRed:(CGFloat)r green: (CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// public static void SetRootView(Fuse.Controls.Native.ViewHandle root) [static] :60
void AppRoot::SetRootView(::g::Fuse::Controls::Native::ViewHandle* root)
{
    AppRoot_typeof()->Init();

    if (AppRoot::_root_ != NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[1/*"Root alread...*/], AppRoot::_root_)));

    AppRoot::_root_ = root;
    AppRoot::Set(AppRoot::_appRootView_, uPtr(AppRoot::_root_)->NativeHandle);
}

// public static float4 get_ClearColor() [static] :41
::g::Uno::Float4 AppRoot::ClearColor()
{
    AppRoot_typeof()->Init();
    return AppRoot::_clearColor_;
}

// public static void set_ClearColor(float4 value) [static] :42
void AppRoot::ClearColor(::g::Uno::Float4 value)
{
    AppRoot_typeof()->Init();

    if (::g::Uno::Float4__op_Equality(AppRoot::_clearColor_, value))
        return;

    AppRoot::_clearColor_ = value;
    AppRoot::SetClearColor(AppRoot::_appRootView_, value.X, value.Y, value.Z, value.W);
}

// public static ObjC.Object get_Handle() [static] :14
::g::ObjC::Object* AppRoot::Handle()
{
    AppRoot_typeof()->Init();
    return AppRoot::_appRootView_;
}
// }

}} // ::g::Fuse
