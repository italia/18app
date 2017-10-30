// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RoutePageProxy.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.RoutePageProxy.Level.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct RoutePageProxy;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class RoutePageProxy :32
// {
uType* RoutePageProxy_typeof();
void RoutePageProxy__ctor_1_fn(RoutePageProxy* __this, ::g::Fuse::Visual* source, uDelegate* progressUpdated);
void RoutePageProxy__DiscardLevels_fn(RoutePageProxy* __this, int* start);
void RoutePageProxy__Dispose_fn(RoutePageProxy* __this);
void RoutePageProxy__Dispose1_fn(RoutePageProxy* __this, RoutePageProxy__Level* level);
void RoutePageProxy__ExtendListen_fn(RoutePageProxy* __this, RoutePageProxy__Level* level, bool* __retval);
void RoutePageProxy__GetLevel_fn(RoutePageProxy* __this, uObject* sender, int* __retval);
void RoutePageProxy__GetProgress_fn(RoutePageProxy* __this, double* __retval);
void RoutePageProxy__GetState_fn(RoutePageProxy* __this, bool* isActive, bool* isStable);
void RoutePageProxy__Init_fn(RoutePageProxy* __this);
void RoutePageProxy__InitialUpdate_fn(RoutePageProxy* __this);
void RoutePageProxy__Listen_fn(RoutePageProxy* __this, RoutePageProxy__Level* level);
void RoutePageProxy__NavReady_fn(RoutePageProxy* __this, uObject* sender);
void RoutePageProxy__NavUnready_fn(RoutePageProxy* __this, uObject* sender);
void RoutePageProxy__New2_fn(::g::Fuse::Visual* source, uDelegate* progressUpdated, RoutePageProxy** __retval);
void RoutePageProxy__OnActivePageChanged_fn(RoutePageProxy* __this, uObject* s, ::g::Fuse::Visual* active);
void RoutePageProxy__OnNavigationProgressChanged_fn(RoutePageProxy* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);
void RoutePageProxy__OnStateChanged_fn(RoutePageProxy* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* state);
void RoutePageProxy__get_Path_fn(RoutePageProxy* __this, int* __retval);
void RoutePageProxy__set_Path_fn(RoutePageProxy* __this, int* value);
void RoutePageProxy__ScheduleActiveChanged_fn(RoutePageProxy* __this);
void RoutePageProxy__get_TriggerWhen_fn(RoutePageProxy* __this, int* __retval);
void RoutePageProxy__set_TriggerWhen_fn(RoutePageProxy* __this, int* value);
void RoutePageProxy__Unlisten_fn(RoutePageProxy* __this, RoutePageProxy__Level* level);
void RoutePageProxy__UpdateActive_fn(RoutePageProxy* __this);

struct RoutePageProxy : uObject
{
    uStrong<uDelegate*> _activeChanged;
    bool _activeChangedPending;
    bool _isActive;
    uStrong< ::g::Uno::Collections::List*> _levels;
    int _path;
    uStrong<uDelegate*> _progressUpdated;
    uStrong< ::g::Fuse::Visual*> _source;
    int _triggerWhen;

    void ctor_1(::g::Fuse::Visual* source, uDelegate* progressUpdated);
    void DiscardLevels(int start);
    void Dispose();
    void Dispose1(RoutePageProxy__Level level);
    bool ExtendListen(RoutePageProxy__Level level);
    int GetLevel(uObject* sender);
    double GetProgress();
    void GetState(bool* isActive, bool* isStable);
    void Init();
    void InitialUpdate();
    void Listen(RoutePageProxy__Level level);
    void NavReady(uObject* sender);
    void NavUnready(uObject* sender);
    void OnActivePageChanged(uObject* s, ::g::Fuse::Visual* active);
    void OnNavigationProgressChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);
    void OnStateChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* state);
    int Path();
    void Path(int value);
    void ScheduleActiveChanged();
    int TriggerWhen();
    void TriggerWhen(int value);
    void Unlisten(RoutePageProxy__Level level);
    void UpdateActive();
    static RoutePageProxy* New2(::g::Fuse::Visual* source, uDelegate* progressUpdated);
};
// }

}}} // ::g::Fuse::Navigation
