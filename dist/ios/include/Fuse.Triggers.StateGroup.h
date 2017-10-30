// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/StateGroup.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class StateGroup :8
// {
::g::Fuse::Node_type* StateGroup_typeof();
void StateGroup__get_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval);
void StateGroup__set_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value);
void StateGroup__get_ActiveIndex_fn(StateGroup* __this, int* __retval);
void StateGroup__set_ActiveIndex_fn(StateGroup* __this, int* value);
void StateGroup__CheckAllDone_fn(StateGroup* __this);
void StateGroup__FindObjectByName_fn(StateGroup* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, uObject** __retval);
void StateGroup__Goto_fn(StateGroup* __this, ::g::Fuse::Triggers::State* next);
void StateGroup__goto__fn(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args);
void StateGroup__gotoName_fn(::g::Fuse::Scripting::Context* c, StateGroup* n, uString* name);
void StateGroup__gotoNext_fn(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args);
void StateGroup__GotoNextState_fn(StateGroup* __this);
void StateGroup__OnRooted_fn(StateGroup* __this);
void StateGroup__OnUnrooted_fn(StateGroup* __this);
void StateGroup__StateAcceptor_fn(uObject* o, bool* __retval);
void StateGroup__get_States_fn(StateGroup* __this, uObject** __retval);
void StateGroup__StateStopped_fn(StateGroup* __this);
void StateGroup__get_Transition_fn(StateGroup* __this, int* __retval);
void StateGroup__set_Transition_fn(StateGroup* __this, int* value);

struct StateGroup : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Triggers::State*> _active;
    uStrong<uObject*> _states;
    int _transition;

    ::g::Fuse::Triggers::State* Active();
    void Active(::g::Fuse::Triggers::State* value);
    int ActiveIndex();
    void ActiveIndex(int value);
    void CheckAllDone();
    uObject* FindObjectByName(::g::Uno::UX::Selector name, uDelegate* acceptor);
    void Goto(::g::Fuse::Triggers::State* next);
    void GotoNextState();
    uObject* States();
    void StateStopped();
    int Transition();
    void Transition(int value);
    static void goto_(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args);
    static void gotoName(::g::Fuse::Scripting::Context* c, StateGroup* n, uString* name);
    static void gotoNext(::g::Fuse::Scripting::Context* c, StateGroup* n, uArray* args);
    static bool StateAcceptor(uObject* o);
};
// }

}}} // ::g::Fuse::Triggers
