// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/iOS/iOSDisplay.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Platform.Display.h>
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Platform{struct iOSDisplay;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed extern class iOSDisplay :13
// {
::g::Uno::Platform::Display_type* iOSDisplay_typeof();
void iOSDisplay__ctor_1_fn(iOSDisplay* __this, ::g::ObjC::Object* handle);
void iOSDisplay__Destroy_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* displayLink);
void iOSDisplay__DisableTicks_fn(iOSDisplay* __this);
void iOSDisplay__EnableTicks_fn(iOSDisplay* __this);
void iOSDisplay__get_Frame_fn(iOSDisplay* __this, ::g::Uno::Rect* __retval);
void iOSDisplay__add_FrameChanged_fn(iOSDisplay* __this, uDelegate* value);
void iOSDisplay__remove_FrameChanged_fn(iOSDisplay* __this, uDelegate* value);
void iOSDisplay__GetDensity_fn(iOSDisplay* __this, float* __retval);
void iOSDisplay__GetDensityOfScreen_fn(::g::ObjC::Object* screen, double* __retval);
void iOSDisplay__GetDensityOfScreenFromWindow_fn(::g::ObjC::Object* window, double* __retval);
void iOSDisplay__GetFrame_fn(iOSDisplay* __this, ::g::Uno::Rect* __retval);
void iOSDisplay__New1_fn(::g::ObjC::Object* handle, iOSDisplay** __retval);
void iOSDisplay__OnFrameChanged_fn(iOSDisplay* __this);
void iOSDisplay__SetTicksPerSecond_fn(iOSDisplay* __this, uint32_t* fps);
void iOSDisplay__WrapMainDisplay_fn(::g::Uno::Platform::Display** __retval);

struct iOSDisplay : ::g::Uno::Platform::Display
{
    uStrong< ::g::ObjC::Object*> _displayLink;
    uStrong< ::g::ObjC::Object*> _handle;
    uStrong<uDelegate*> FrameChanged1;

    void ctor_1(::g::ObjC::Object* handle);
    ::g::Uno::Rect Frame();
    void add_FrameChanged(uDelegate* value);
    void remove_FrameChanged(uDelegate* value);
    ::g::Uno::Rect GetFrame();
    void OnFrameChanged();
    static void Destroy(::g::ObjC::Object* handle, ::g::ObjC::Object* displayLink);
    static double GetDensityOfScreen(::g::ObjC::Object* screen);
    static double GetDensityOfScreenFromWindow(::g::ObjC::Object* window);
    static iOSDisplay* New1(::g::ObjC::Object* handle);
    static ::g::Uno::Platform::Display* WrapMainDisplay();
};
// }

}}} // ::g::Uno::Platform
