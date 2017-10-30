// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/Displays.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Platform{struct Display;}}}
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public abstract class Display :54
// {
struct Display_type : uType
{
    void(*fp_DisableTicks)(::g::Uno::Platform::Display*);
    void(*fp_EnableTicks)(::g::Uno::Platform::Display*);
    void(*fp_GetDensity)(::g::Uno::Platform::Display*, float*);
    void(*fp_SetTicksPerSecond)(::g::Uno::Platform::Display*, uint32_t*);
};

Display_type* Display_typeof();
void Display__ctor__fn(Display* __this);
void Display__add__tick_fn(Display* __this, uDelegate* value);
void Display__remove__tick_fn(Display* __this, uDelegate* value);
void Display__get_Density_fn(Display* __this, float* __retval);
void Display__DisableTicks_fn(Display* __this);
void Display__EnableTicks_fn(Display* __this);
void Display__OnTick_fn(Display* __this, ::g::Uno::Platform::TimerEventArgs* args);
void Display__SetTicksPerSecond_fn(Display* __this, uint32_t* value);
void Display__add_Tick_fn(Display* __this, uDelegate* value);
void Display__remove_Tick_fn(Display* __this, uDelegate* value);
void Display__get_TicksPerSecond_fn(Display* __this, uint32_t* __retval);
void Display__set_TicksPerSecond_fn(Display* __this, uint32_t* value);

struct Display : uObject
{
    uint32_t _ticksPerSecond;
    uStrong<uDelegate*> _tick1;

    void ctor_();
    void add__tick(uDelegate* value);
    void remove__tick(uDelegate* value);
    float Density();
    void DisableTicks() { (((Display_type*)__type)->fp_DisableTicks)(this); }
    void EnableTicks() { (((Display_type*)__type)->fp_EnableTicks)(this); }
    float GetDensity() { float __retval; return (((Display_type*)__type)->fp_GetDensity)(this, &__retval), __retval; }
    void OnTick(::g::Uno::Platform::TimerEventArgs* args);
    void SetTicksPerSecond(uint32_t value) { (((Display_type*)__type)->fp_SetTicksPerSecond)(this, &value); }
    void add_Tick(uDelegate* value);
    void remove_Tick(uDelegate* value);
    uint32_t TicksPerSecond();
    void TicksPerSecond(uint32_t value);
    static void DisableTicks(Display* __this) { Display__DisableTicks_fn(__this); }
    static void EnableTicks(Display* __this) { Display__EnableTicks_fn(__this); }
    static void SetTicksPerSecond(Display* __this, uint32_t value) { Display__SetTicksPerSecond_fn(__this, &value); }
};
// }

}}} // ::g::Uno::Platform
