// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/Displays.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Platform{struct Display;}}}
namespace g{namespace Uno{namespace Platform{struct Displays;}}}
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public static class Displays :10
// {
uClassType* Displays_typeof();
void Displays__get_All_fn(::g::Uno::Collections::List** __retval);
void Displays__set_All_fn(::g::Uno::Collections::List* value);
void Displays__GetMainDisplay_fn(::g::Uno::Platform::Display** __retval);
void Displays__get_MainDisplay_fn(::g::Uno::Platform::Display** __retval);
void Displays__PopulateDisplaysList_fn();
void Displays__TickAll_fn(::g::Uno::Platform::TimerEventArgs* args);

struct Displays : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _All_;
    static uSStrong< ::g::Uno::Collections::List*>& _All() { return Displays_typeof()->Init(), _All_; }

    static ::g::Uno::Platform::Display* GetMainDisplay();
    static void PopulateDisplaysList();
    static void TickAll(::g::Uno::Platform::TimerEventArgs* args);
    static ::g::Uno::Collections::List* All();
    static void All(::g::Uno::Collections::List* value);
    static ::g::Uno::Platform::Display* MainDisplay();
};
// }

}}} // ::g::Uno::Platform
