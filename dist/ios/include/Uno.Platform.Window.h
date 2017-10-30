// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/Window.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Platform.OSFrame.h>
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed extern class Window :7
// {
uType* Window_typeof();
void Window__ctor_1_fn(Window* __this);
void Window__add_GotFocus_fn(Window* __this, uDelegate* value);
void Window__remove_GotFocus_fn(Window* __this, uDelegate* value);
void Window__add_LostFocus_fn(Window* __this, uDelegate* value);
void Window__remove_LostFocus_fn(Window* __this, uDelegate* value);
void Window__New2_fn(Window** __retval);
void Window__OnGotFocus_fn(Window* __this, int* newState);
void Window__OnLostFocus_fn(Window* __this, int* newState);
void Window__OnTick_fn(Window* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
void Window__add_Updating_fn(Window* __this, uDelegate* value);
void Window__remove_Updating_fn(Window* __this, uDelegate* value);

struct Window : ::g::Uno::Platform::OSFrame
{
    uStrong<uDelegate*> GotFocus1;
    uStrong<uDelegate*> LostFocus1;
    uStrong<uDelegate*> Updating1;

    void ctor_1();
    void add_GotFocus(uDelegate* value);
    void remove_GotFocus(uDelegate* value);
    void add_LostFocus(uDelegate* value);
    void remove_LostFocus(uDelegate* value);
    void OnGotFocus(int newState);
    void OnLostFocus(int newState);
    void OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
    void add_Updating(uDelegate* value);
    void remove_Updating(uDelegate* value);
    static Window* New2();
};
// }

}}} // ::g::Uno::Platform
