// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationAnimations.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class NavigationAnimation :37
// {
struct NavigationAnimation_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_ForceUpdate)(::g::Fuse::Navigation::NavigationAnimation*);
    void(*fp_OnNavigationStateChanged)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*);
};

NavigationAnimation_type* NavigationAnimation_typeof();
void NavigationAnimation__ctor_5_fn(NavigationAnimation* __this);
void NavigationAnimation__GoProgress_fn(NavigationAnimation* __this, double* p, int* variant, ::g::Fuse::Navigation::NavigationArgs* state);
void NavigationAnimation__GoProgressPlay_fn(NavigationAnimation* __this);
void NavigationAnimation__get_NavContext_fn(NavigationAnimation* __this, uObject** __retval);
void NavigationAnimation__NavReady_fn(NavigationAnimation* __this, uObject* s);
void NavigationAnimation__NavUnready_fn(NavigationAnimation* __this, uObject* s);
void NavigationAnimation__OnRooted_fn(NavigationAnimation* __this);
void NavigationAnimation__OnUnrooted_fn(NavigationAnimation* __this);
void NavigationAnimation__get_PageContext_fn(NavigationAnimation* __this, ::g::Fuse::Visual** __retval);
void NavigationAnimation__get_Scale_fn(NavigationAnimation* __this, float* __retval);
void NavigationAnimation__set_Scale_fn(NavigationAnimation* __this, float* value);

struct NavigationAnimation : ::g::Fuse::Triggers::Trigger
{
    bool _delay;
    double _delayProgress;
    int _delayVariant;
    uStrong< ::g::Fuse::Navigation::NavigationPageProxy*> _proxy;
    float _scale;

    void ctor_5();
    void ForceUpdate() { (((NavigationAnimation_type*)__type)->fp_ForceUpdate)(this); }
    void GoProgress(double p, int variant, ::g::Fuse::Navigation::NavigationArgs* state);
    void GoProgressPlay();
    uObject* NavContext();
    void NavReady(uObject* s);
    void NavUnready(uObject* s);
    void OnNavigationStateChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state) { (((NavigationAnimation_type*)__type)->fp_OnNavigationStateChanged)(this, sender, state); }
    ::g::Fuse::Visual* PageContext();
    float Scale();
    void Scale(float value);
};
// }

}}} // ::g::Fuse::Navigation
