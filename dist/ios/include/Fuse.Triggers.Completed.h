// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Completed.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.CompletedEventArgs.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct Completed;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class Completed :38
// {
::g::Fuse::Triggers::Trigger_type* Completed_typeof();
void Completed__get_Activation_fn(Completed* __this, int* __retval);
void Completed__set_Activation_fn(Completed* __this, int* value);
void Completed__get_Activity_fn(Completed* __this, int* __retval);
void Completed__set_Activity_fn(Completed* __this, int* value);
void Completed__Cleanup_fn(Completed* __this, bool* unroot);
void Completed__DoPulse_fn(Completed* __this);
void Completed__get_IsBusy_fn(Completed* __this, bool* __retval);
void Completed__get_Match_fn(Completed* __this, int* __retval);
void Completed__set_Match_fn(Completed* __this, int* value);
void Completed__OnRooted_fn(Completed* __this);
void Completed__OnUnrooted_fn(Completed* __this);
void Completed__get_Repeat_fn(Completed* __this, bool* __retval);
void Completed__set_Repeat_fn(Completed* __this, bool* value);
void Completed__reset_fn(::g::Fuse::Scripting::Context* c, Completed* cp, uArray* args);
void Completed__Reset_fn(Completed* __this);
void Completed__Setup_fn(Completed* __this);
void Completed__Update_fn(Completed* __this);

struct Completed : ::g::Fuse::Triggers::PulseTrigger
{
    int _activation;
    int _activity;
    bool _listening;
    int _match;
    bool _pulsed;
    bool _repeat;

    int Activation();
    void Activation(int value);
    int Activity();
    void Activity(int value);
    void Cleanup(bool unroot);
    void DoPulse();
    bool IsBusy();
    int Match();
    void Match(int value);
    bool Repeat();
    void Repeat(bool value);
    void Reset();
    void Setup();
    void Update();
    static void reset(::g::Fuse::Scripting::Context* c, Completed* cp, uArray* args);
};
// }

}}} // ::g::Fuse::Triggers
