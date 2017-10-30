// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/Timer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerManager;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerManager__Timer;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class TimerManager :169
// {
uType* TimerManager_typeof();
void TimerManager__ctor__fn(TimerManager* __this);
void TimerManager__AddTimer_fn(TimerManager* __this, double* ms, uDelegate* callback, bool* repeat, int* __retval);
void TimerManager__DeleteAllTimers_fn(TimerManager* __this);
void TimerManager__DeleteTimer_fn(TimerManager* __this, int* id, bool* __retval);
void TimerManager__GetTimer_fn(TimerManager* __this, int* id, TimerManager__Timer** __retval);
void TimerManager__New1_fn(TimerManager** __retval);
void TimerManager__RemoveTimer_fn(TimerManager* __this, int* id);
void TimerManager__Tick_fn(TimerManager* __this);

struct TimerManager : uObject
{
    uStrong< ::g::Uno::Collections::List*> _timers;

    void ctor_();
    int AddTimer(double ms, uDelegate* callback, bool repeat);
    void DeleteAllTimers();
    bool DeleteTimer(int id);
    TimerManager__Timer* GetTimer(int id);
    void RemoveTimer(int id);
    void Tick();
    static TimerManager* New1();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
