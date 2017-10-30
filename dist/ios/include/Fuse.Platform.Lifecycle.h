// This file was generated based on /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/Lifecycle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Platform{struct Lifecycle;}}}

namespace g{
namespace Fuse{
namespace Platform{

// public static class Lifecycle :22
// {
uClassType* Lifecycle_typeof();
void Lifecycle__add_EnteringBackground_fn(uDelegate* value);
void Lifecycle__remove_EnteringBackground_fn(uDelegate* value);
void Lifecycle__add_EnteringForeground_fn(uDelegate* value);
void Lifecycle__remove_EnteringForeground_fn(uDelegate* value);
void Lifecycle__add_EnteringInteractive_fn(uDelegate* value);
void Lifecycle__remove_EnteringInteractive_fn(uDelegate* value);
void Lifecycle__add_ExitedInteractive_fn(uDelegate* value);
void Lifecycle__remove_ExitedInteractive_fn(uDelegate* value);
void Lifecycle__OnEnteringBackground_fn(int* newState);
void Lifecycle__OnEnteringForeground_fn(int* newState);
void Lifecycle__OnEnteringInteractive_fn(int* newState);
void Lifecycle__OnExitedInteractive_fn(int* newState);
void Lifecycle__OnStarted_fn(int* newState);
void Lifecycle__OnTerminating_fn(int* newState);
void Lifecycle__add_Started_fn(uDelegate* value);
void Lifecycle__remove_Started_fn(uDelegate* value);
void Lifecycle__get_State_fn(int* __retval);
void Lifecycle__add_Terminating_fn(uDelegate* value);
void Lifecycle__remove_Terminating_fn(uDelegate* value);

struct Lifecycle : uObject
{
    static uSStrong<uDelegate*> EnteringBackground1_;
    static uSStrong<uDelegate*>& EnteringBackground1() { return Lifecycle_typeof()->Init(), EnteringBackground1_; }
    static uSStrong<uDelegate*> EnteringForeground1_;
    static uSStrong<uDelegate*>& EnteringForeground1() { return Lifecycle_typeof()->Init(), EnteringForeground1_; }
    static uSStrong<uDelegate*> EnteringInteractive1_;
    static uSStrong<uDelegate*>& EnteringInteractive1() { return Lifecycle_typeof()->Init(), EnteringInteractive1_; }
    static uSStrong<uDelegate*> ExitedInteractive1_;
    static uSStrong<uDelegate*>& ExitedInteractive1() { return Lifecycle_typeof()->Init(), ExitedInteractive1_; }
    static uSStrong<uDelegate*> Started1_;
    static uSStrong<uDelegate*>& Started1() { return Lifecycle_typeof()->Init(), Started1_; }
    static uSStrong<uDelegate*> Terminating1_;
    static uSStrong<uDelegate*>& Terminating1() { return Lifecycle_typeof()->Init(), Terminating1_; }

    static void OnEnteringBackground(int newState);
    static void OnEnteringForeground(int newState);
    static void OnEnteringInteractive(int newState);
    static void OnExitedInteractive(int newState);
    static void OnStarted(int newState);
    static void OnTerminating(int newState);
    static int State();
    static void add_EnteringBackground(uDelegate* value);
    static void remove_EnteringBackground(uDelegate* value);
    static void add_EnteringForeground(uDelegate* value);
    static void remove_EnteringForeground(uDelegate* value);
    static void add_EnteringInteractive(uDelegate* value);
    static void remove_EnteringInteractive(uDelegate* value);
    static void add_ExitedInteractive(uDelegate* value);
    static void remove_ExitedInteractive(uDelegate* value);
    static void add_Started(uDelegate* value);
    static void remove_Started(uDelegate* value);
    static void add_Terminating(uDelegate* value);
    static void remove_Terminating(uDelegate* value);
};
// }

}}} // ::g::Fuse::Platform
