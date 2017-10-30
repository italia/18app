// This file was generated based on /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selectable.ScriptClass.uno.
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
namespace g{namespace Fuse{namespace Selection{struct Selectable;}}}
namespace g{namespace Fuse{namespace Selection{struct Selection;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public partial sealed class Selectable :9
// {
::g::Fuse::Node_type* Selectable_typeof();
void Selectable__add_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args);
void Selectable__Add1_fn(Selectable* __this);
void Selectable__OnRooted_fn(Selectable* __this);
void Selectable__OnUnrooted_fn(Selectable* __this);
void Selectable__remove_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args);
void Selectable__Remove1_fn(Selectable* __this);
void Selectable__toggle_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args);
void Selectable__Toggle_fn(Selectable* __this);
void Selectable__get_Value_fn(Selectable* __this, uString** __retval);
void Selectable__set_Value_fn(Selectable* __this, uString* value);

struct Selectable : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Selection::Selection*> _selection;
    uStrong<uString*> _value;
    static ::g::Uno::UX::Selector ValueName_;
    static ::g::Uno::UX::Selector& ValueName() { return Selectable_typeof()->Init(), ValueName_; }

    void Add1();
    void Remove1();
    void Toggle();
    uString* Value();
    void Value(uString* value);
    static void add(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args);
    static void remove(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args);
    static void toggle(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args);
};
// }

}}} // ::g::Fuse::Selection
