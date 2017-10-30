// This file was generated based on /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/iOS/SystemUI.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <AppDelegateSoftKeyboard.h>
#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.StatusBarAnimation.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Platform.SystemUIID.h>
#include <Fuse.Platform.SystemUIResizeReason.h>
#include <Fuse.Platform.SystemUIWillResizeEventArgs.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform.iOS.Support.h>
#include <Uno.Platform.iOS.uCGRect.h>
#include <Uno.Platform.iOS.uCGSize.h>
#include <Uno.Platform.iOSDisplay.h>
#include <Uno-iOS/AppDelegate.h>
#include <uObjC.Foreign.h>
#include <Uno.Rect.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Platform{

// public static extern class SystemUI :29
// {
// static generated SystemUI() :29
static void SystemUI__cctor__fn(uType* __type)
{
    SystemUI::_isTopFrameVisible_ = true;
}

static void SystemUI_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Platform::iOSDisplay_typeof();
    ::TYPES[1] = ::g::Uno::EventHandler_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Platform::SystemUIWillResizeEventArgs_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&SystemUI::_isTopFrameVisible_, uFieldFlagsStatic,
        ::g::Fuse::Platform::StatusBarStyle_typeof(), (uintptr_t)&SystemUI::_style_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&SystemUI::_BottomFrame_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&SystemUI::_Frame_, uFieldFlagsStatic,
        ::g::Fuse::Platform::StatusBarAnimation_typeof(), (uintptr_t)&SystemUI::_uStatusBarAnimation_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&SystemUI::BottomFrameWillResize1_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.EventHandler*/], (uintptr_t)&SystemUI::FrameChanged1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&SystemUI::TopFrameWillResize1_, uFieldFlagsStatic);
}

uClassType* SystemUI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.SystemUI", options);
    type->fp_build_ = SystemUI_build;
    type->fp_cctor_ = SystemUI__cctor__fn;
    return type;
}

// private static void _statusBarWillChangeFrame(Uno.Platform.iOS.uCGRect _endFrame, double animationDuration) :187
void SystemUI___statusBarWillChangeFrame_fn(CGRect* _endFrame, double* animationDuration)
{
    SystemUI::_statusBarWillChangeFrame(*_endFrame, *animationDuration);
}

// public static generated Uno.Rect get_BottomFrame() :35
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::BottomFrame();
}

// private static generated void set_BottomFrame(Uno.Rect value) :35
void SystemUI__set_BottomFrame_fn(::g::Uno::Rect* value)
{
    SystemUI::BottomFrame(*value);
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :32
void SystemUI__add_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_BottomFrameWillResize(value);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :32
void SystemUI__remove_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_BottomFrameWillResize(value);
}

// private static void EnableKeyboardResizeNotifications() :68
void SystemUI__EnableKeyboardResizeNotifications_fn()
{
    SystemUI::EnableKeyboardResizeNotifications();
}

// public static generated Uno.Rect get_Frame() :37
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::Frame();
}

// private static generated void set_Frame(Uno.Rect value) :37
void SystemUI__set_Frame_fn(::g::Uno::Rect* value)
{
    SystemUI::Frame(*value);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) :42
void SystemUI__add_FrameChanged_fn(uDelegate* value)
{
    SystemUI::add_FrameChanged(value);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) :42
void SystemUI__remove_FrameChanged_fn(uDelegate* value)
{
    SystemUI::remove_FrameChanged(value);
}

// private static Uno.Rect GetStatusBarFrame() :178
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::GetStatusBarFrame();
}

// public static bool get_IsTopFrameVisible() :101
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval)
{
    *__retval = SystemUI::IsTopFrameVisible();
}

// public static void set_IsTopFrameVisible(bool value) :102
void SystemUI__set_IsTopFrameVisible_fn(bool* value)
{
    SystemUI::IsTopFrameVisible(*value);
}

// public static void OnCreate() :55
void SystemUI__OnCreate_fn()
{
    SystemUI::OnCreate();
}

// private static void OnFrameChanged(object s, object a) :43
void SystemUI__OnFrameChanged_fn(uObject* s, uObject* a)
{
    SystemUI::OnFrameChanged(s, a);
}

// private static void OnWillResize(Fuse.Platform.SystemUIWillResizeEventArgs args) :164
void SystemUI__OnWillResize_fn(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    SystemUI::OnWillResize(args);
}

// public static extern Uno.Platform.iOS.uCGSize Pre_iOS8_HandleDeviceOrientation_Size(Uno.Platform.iOS.uCGSize cgsize, ObjC.Object view) :133
void SystemUI__Pre_iOS8_HandleDeviceOrientation_Size_fn(CGSize* cgsize, ::g::ObjC::Object* view, CGSize* __retval)
{
    *__retval = SystemUI::Pre_iOS8_HandleDeviceOrientation_Size(*cgsize, view);
}

// public static ObjC.Object get_RootView() :154
void SystemUI__get_RootView_fn(::g::ObjC::Object** __retval)
{
    *__retval = SystemUI::RootView();
}

// public static void set_RootView(ObjC.Object value) :155
void SystemUI__set_RootView_fn(::g::ObjC::Object* value)
{
    SystemUI::RootView(value);
}

// public static Uno.Rect get_TopFrame() :34
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::TopFrame();
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :31
void SystemUI__add_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_TopFrameWillResize(value);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :31
void SystemUI__remove_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_TopFrameWillResize(value);
}

// private static void uKeyboardWillChangeFrame(Uno.Platform.iOS.uCGRect frameBegin, Uno.Platform.iOS.uCGRect frameEnd, double animationDuration, int animationCurve, Fuse.Platform.SystemUIResizeReason reason) :217
void SystemUI__uKeyboardWillChangeFrame1_fn(CGRect* frameBegin, CGRect* frameEnd, double* animationDuration, int* animationCurve, int* reason)
{
    SystemUI::uKeyboardWillChangeFrame1(*frameBegin, *frameEnd, *animationDuration, *animationCurve, *reason);
}

// public static generated Fuse.Platform.StatusBarAnimation get_uStatusBarAnimation() :40
void SystemUI__get_uStatusBarAnimation_fn(int* __retval)
{
    *__retval = SystemUI::uStatusBarAnimation1();
}

// public static generated void set_uStatusBarAnimation(Fuse.Platform.StatusBarAnimation value) :40
void SystemUI__set_uStatusBarAnimation_fn(int* value)
{
    SystemUI::uStatusBarAnimation1(*value);
}

// public static Fuse.Platform.StatusBarStyle get_uStatusBarStyle() :250
void SystemUI__get_uStatusBarStyle_fn(int* __retval)
{
    *__retval = SystemUI::uStatusBarStyle1();
}

// public static void set_uStatusBarStyle(Fuse.Platform.StatusBarStyle value) :251
void SystemUI__set_uStatusBarStyle_fn(int* value)
{
    SystemUI::uStatusBarStyle1(*value);
}

bool SystemUI::_isTopFrameVisible_;
int SystemUI::_style_;
::g::Uno::Rect SystemUI::_BottomFrame_;
::g::Uno::Rect SystemUI::_Frame_;
int SystemUI::_uStatusBarAnimation_;
uSStrong<uDelegate*> SystemUI::BottomFrameWillResize1_;
uSStrong<uDelegate*> SystemUI::FrameChanged1_;
uSStrong<uDelegate*> SystemUI::TopFrameWillResize1_;

// private static void _statusBarWillChangeFrame(Uno.Platform.iOS.uCGRect _endFrame, double animationDuration) [static] :187
void SystemUI::_statusBarWillChangeFrame(CGRect _endFrame, double animationDuration)
{
    if (::g::Fuse::Platform::Lifecycle::State() == 0)
        return;

    float density = uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
    ::g::Uno::Rect startFrame = ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect([UIApplication sharedApplication].statusBarFrame, NULL), density);
    ::g::Uno::Rect endFrame = ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect(_endFrame, NULL), density);
    int reason;

    if (startFrame.Height() == 0.0f)
        reason = 0;
    else if (endFrame.Height() == 0.0f)
        reason = 2;
    else
        reason = 1;

    ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args = ::g::Fuse::Platform::SystemUIWillResizeEventArgs::New2(0, reason, endFrame, startFrame, animationDuration, 1);
    SystemUI::OnWillResize(args);
}

// private static void EnableKeyboardResizeNotifications() [static] :68
void SystemUI::EnableKeyboardResizeNotifications()
{
    @autoreleasepool
    {
        uAppDelegate* _delegate = (uAppDelegate*)[UIApplication sharedApplication].delegate;
        
        [[NSNotificationCenter defaultCenter]
         addObserver:_delegate selector:@selector(uKeyboardWillChangeFrame:)
         name:UIKeyboardWillShowNotification object:nil];
        
        [[NSNotificationCenter defaultCenter]
         addObserver:_delegate
         selector:@selector(uKeyboardWillChangeFrame:)
         name:UIKeyboardWillHideNotification object:nil];
    }
    
}

// private static Uno.Rect GetStatusBarFrame() [static] :178
::g::Uno::Rect SystemUI::GetStatusBarFrame()
{
    float density = uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
    return ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect([UIApplication sharedApplication].statusBarFrame, NULL), density);
}

// public static void OnCreate() [static] :55
void SystemUI::OnCreate()
{
    uPtr(uCast< ::g::Uno::Platform::iOSDisplay*>(::g::Uno::Platform::Displays::MainDisplay(), ::TYPES[0/*Uno.Platform.iOSDisplay*/]))->add_FrameChanged(uDelegate::New(::TYPES[1/*Uno.EventHandler*/], (void*)SystemUI__OnFrameChanged_fn));
    SystemUI::OnFrameChanged(NULL, NULL);
    SystemUI::EnableKeyboardResizeNotifications();
}

// private static void OnFrameChanged(object s, object a) [static] :43
void SystemUI::OnFrameChanged(uObject* s, uObject* a)
{
    ::g::Uno::Platform::iOSDisplay* iDisplay = uCast< ::g::Uno::Platform::iOSDisplay*>(::g::Uno::Platform::Displays::MainDisplay(), ::TYPES[0/*Uno.Platform.iOSDisplay*/]);
    SystemUI::Frame(uPtr(iDisplay)->Frame());
    uDelegate* handler = SystemUI::FrameChanged1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// private static void OnWillResize(Fuse.Platform.SystemUIWillResizeEventArgs args) [static] :164
void SystemUI::OnWillResize(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    if (uPtr(args)->ID() == 0)
    {
        uDelegate* handler = SystemUI::TopFrameWillResize1_;

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, args);
    }
    else
    {
        SystemUI::BottomFrame(uPtr(args)->EndFrame());
        uDelegate* handler1 = SystemUI::BottomFrameWillResize1_;

        if (::g::Uno::Delegate::op_Inequality(handler1, NULL))
            uPtr(handler1)->Invoke(2, NULL, args);
    }
}

// public static extern Uno.Platform.iOS.uCGSize Pre_iOS8_HandleDeviceOrientation_Size(Uno.Platform.iOS.uCGSize cgsize, ObjC.Object view) [static] :133
CGSize SystemUI::Pre_iOS8_HandleDeviceOrientation_Size(CGSize cgsize, ::g::ObjC::Object* view)
{
    if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
    	&& ::g::Uno::Platform::iOS::Application::IsLandscape()
    	&& (!view || ::g::Uno::Platform::iOS::Application::IsRootView(view)))
    {
    	// Transpose dimensions
    	return CGSizeMake(cgsize.height, cgsize.width);
    }
    
    return cgsize;
}

// private static void uKeyboardWillChangeFrame(Uno.Platform.iOS.uCGRect frameBegin, Uno.Platform.iOS.uCGRect frameEnd, double animationDuration, int animationCurve, Fuse.Platform.SystemUIResizeReason reason) [static] :217
void SystemUI::uKeyboardWillChangeFrame1(CGRect frameBegin, CGRect frameEnd, double animationDuration, int animationCurve, int reason)
{
    float density = uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
    ::g::Uno::Rect startFrame = ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect(frameBegin, NULL), density);
    ::g::Uno::Rect endFrame = ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect(frameEnd, NULL), density);
    ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args = ::g::Fuse::Platform::SystemUIWillResizeEventArgs::New2(1, reason, endFrame, startFrame, animationDuration, 1);
    SystemUI::OnWillResize(args);
}

// public static generated Uno.Rect get_BottomFrame() [static] :35
::g::Uno::Rect SystemUI::BottomFrame()
{
    return SystemUI::_BottomFrame_;
}

// private static generated void set_BottomFrame(Uno.Rect value) [static] :35
void SystemUI::BottomFrame(::g::Uno::Rect value)
{
    SystemUI::_BottomFrame_ = value;
}

// public static generated Uno.Rect get_Frame() [static] :37
::g::Uno::Rect SystemUI::Frame()
{
    return SystemUI::_Frame_;
}

// private static generated void set_Frame(Uno.Rect value) [static] :37
void SystemUI::Frame(::g::Uno::Rect value)
{
    SystemUI::_Frame_ = value;
}

// public static bool get_IsTopFrameVisible() [static] :101
bool SystemUI::IsTopFrameVisible()
{
    return SystemUI::_isTopFrameVisible_;
}

// public static void set_IsTopFrameVisible(bool value) [static] :102
void SystemUI::IsTopFrameVisible(bool value)
{
    if (value == SystemUI::_isTopFrameVisible_)
        return;

    SystemUI::_isTopFrameVisible_ = value;
    CGRect endFrame = ::g::Uno::Platform::iOS::uCGRect1::Zero();
    double animationDuration = 0.5;

    if (!value)
    {
        CGSize screenSize = SystemUI::Pre_iOS8_HandleDeviceOrientation_Size([UIScreen mainScreen].bounds.size, NULL);
        endFrame = CGRectMake(0., 0., screenSize.width, 20.);
        animationDuration = 0.25;
    }

    if (SystemUI::uStatusBarAnimation1() == (int)UIStatusBarAnimationNone)
        animationDuration = 0.0;

    SystemUI::_statusBarWillChangeFrame(endFrame, animationDuration);
    [UIApplication sharedApplication].statusBarHidden = !value;
    [UIView animateWithDuration:animationDuration animations:^{ [(::uAppDelegate*)[UIApplication sharedApplication].delegate setNeedsStatusBarAppearanceUpdate]; }];
}

// public static ObjC.Object get_RootView() [static] :154
::g::ObjC::Object* SystemUI::RootView()
{
    return ::g::Uno::Platform::iOS::Application::GetRootView();
}

// public static void set_RootView(ObjC.Object value) [static] :155
void SystemUI::RootView(::g::ObjC::Object* value)
{
    ::g::Uno::Platform::iOS::Application::SetRootView(value);
}

// public static Uno.Rect get_TopFrame() [static] :34
::g::Uno::Rect SystemUI::TopFrame()
{
    return SystemUI::GetStatusBarFrame();
}

// public static generated Fuse.Platform.StatusBarAnimation get_uStatusBarAnimation() [static] :40
int SystemUI::uStatusBarAnimation1()
{
    return SystemUI::_uStatusBarAnimation_;
}

// public static generated void set_uStatusBarAnimation(Fuse.Platform.StatusBarAnimation value) [static] :40
void SystemUI::uStatusBarAnimation1(int value)
{
    SystemUI::_uStatusBarAnimation_ = value;
}

// public static Fuse.Platform.StatusBarStyle get_uStatusBarStyle() [static] :250
int SystemUI::uStatusBarStyle1()
{
    return SystemUI::_style_;
}

// public static void set_uStatusBarStyle(Fuse.Platform.StatusBarStyle value) [static] :251
void SystemUI::uStatusBarStyle1(int value)
{
    if (value == SystemUI::_style_)
        return;

    SystemUI::_style_ = value;

    if ([[UIApplication sharedApplication].delegate respondsToSelector:@selector(setNeedsStatusBarAppearanceUpdate)])
    {
        if (SystemUI::uStatusBarAnimation1() == (int)UIStatusBarAnimationNone)
            [(::uAppDelegate*)[UIApplication sharedApplication].delegate setNeedsStatusBarAppearanceUpdate];
        else
            [UIView animateWithDuration:0.33 animations:^{ [(::uAppDelegate*)[UIApplication sharedApplication].delegate setNeedsStatusBarAppearanceUpdate]; }];
    }
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :32
void SystemUI::add_BottomFrameWillResize(uDelegate* value)
{
    SystemUI::BottomFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::BottomFrameWillResize1_, value), ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :32
void SystemUI::remove_BottomFrameWillResize(uDelegate* value)
{
    SystemUI::BottomFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::BottomFrameWillResize1_, value), ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) [static] :42
void SystemUI::add_FrameChanged(uDelegate* value)
{
    SystemUI::FrameChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::FrameChanged1_, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) [static] :42
void SystemUI::remove_FrameChanged(uDelegate* value)
{
    SystemUI::FrameChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::FrameChanged1_, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :31
void SystemUI::add_TopFrameWillResize(uDelegate* value)
{
    SystemUI::TopFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::TopFrameWillResize1_, value), ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :31
void SystemUI::remove_TopFrameWillResize(uDelegate* value)
{
    SystemUI::TopFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::TopFrameWillResize1_, value), ::TYPES[2/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}
// }

}}} // ::g::Fuse::Platform
