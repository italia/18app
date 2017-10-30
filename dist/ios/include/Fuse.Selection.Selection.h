// This file was generated based on /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Selection{struct Selectable;}}}
namespace g{namespace Fuse{namespace Selection{struct Selection;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public partial sealed class Selection :9
// {
struct Selection_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Reactive::IObserver interface6;
};

Selection_type* Selection_typeof();
void Selection__add_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
void Selection__Add1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b);
void Selection__Add2_fn(Selection* __this, uString* value);
void Selection__clear_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
void Selection__Clear_fn(Selection* __this);
void Selection__ClearSubscription_fn(Selection* __this);
void Selection__forceAdd_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
void Selection__ForceAdd1_fn(Selection* __this, uString* value);
void Selection__forceRemove_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
void Selection__ForceRemove1_fn(Selection* __this, uString* value);
void Selection__FuseReactiveIObserverOnAdd_fn(Selection* __this, uObject* addedValue);
void Selection__FuseReactiveIObserverOnClear_fn(Selection* __this);
void Selection__FuseReactiveIObserverOnFailed_fn(Selection* __this, uString* message);
void Selection__FuseReactiveIObserverOnInsertAt_fn(Selection* __this, int* index, uObject* value);
void Selection__FuseReactiveIObserverOnNewAll_fn(Selection* __this, uObject* values);
void Selection__FuseReactiveIObserverOnNewAt_fn(Selection* __this, int* index, uObject* newValue);
void Selection__FuseReactiveIObserverOnRemoveAt_fn(Selection* __this, int* index);
void Selection__FuseReactiveIObserverOnSet_fn(Selection* __this, uObject* newValue);
void Selection__get_HasMaxCount_fn(Selection* __this, bool* __retval);
void Selection__get_MaxCount_fn(Selection* __this, int* __retval);
void Selection__set_MaxCount_fn(Selection* __this, int* value);
void Selection__get_MinCount_fn(Selection* __this, int* __retval);
void Selection__set_MinCount_fn(Selection* __this, int* value);
void Selection__ModifyValue_fn(Selection* __this, uString* old, uString* nw);
void Selection__OnObservableValuesChanged_fn(Selection* __this);
void Selection__OnRooted_fn(Selection* __this);
void Selection__OnSelectionChanged_fn(Selection* __this, int* how);
void Selection__OnUnrooted_fn(Selection* __this);
void Selection__remove_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
void Selection__Remove1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b);
void Selection__Remove2_fn(Selection* __this, uString* value);
void Selection__get_Replace_fn(Selection* __this, int* __retval);
void Selection__set_Replace_fn(Selection* __this, int* value);
void Selection__add_SelectionChanged_fn(Selection* __this, uDelegate* value);
void Selection__remove_SelectionChanged_fn(Selection* __this, uDelegate* value);
void Selection__toggle_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
void Selection__Toggle_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b);
void Selection__Toggle1_fn(Selection* __this, uString* value);
void Selection__TryFindSelectable_fn(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection, bool* __retval);
void Selection__TryFindSelection_fn(::g::Fuse::Node* v, Selection** __retval);

struct Selection : ::g::Fuse::Behavior
{
    bool _hasMaxCount;
    int _maxCount;
    int _minCount;
    uStrong<uObject*> _observableValues;
    int _replace;
    uStrong<uObject*> _subscription;
    uStrong< ::g::Uno::Collections::List*> _values;
    static ::g::Uno::UX::Selector ValueName_;
    static ::g::Uno::UX::Selector& ValueName() { return Selection_typeof()->Init(), ValueName_; }
    uStrong<uDelegate*> SelectionChanged1;

    void Add1(::g::Fuse::Selection::Selectable* b);
    void Add2(uString* value);
    void Clear();
    void ClearSubscription();
    void ForceAdd1(uString* value);
    void ForceRemove1(uString* value);
    bool HasMaxCount();
    int MaxCount();
    void MaxCount(int value);
    int MinCount();
    void MinCount(int value);
    void ModifyValue(uString* old, uString* nw);
    void OnObservableValuesChanged();
    void OnSelectionChanged(int how);
    void Remove1(::g::Fuse::Selection::Selectable* b);
    void Remove2(uString* value);
    int Replace();
    void Replace(int value);
    void add_SelectionChanged(uDelegate* value);
    void remove_SelectionChanged(uDelegate* value);
    void Toggle(::g::Fuse::Selection::Selectable* b);
    void Toggle1(uString* value);
    static void add(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
    static void clear(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
    static void forceAdd(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
    static void forceRemove(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
    static void remove(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
    static void toggle(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args);
    static bool TryFindSelectable(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection);
    static Selection* TryFindSelection(::g::Fuse::Node* v);
};
// }

}}} // ::g::Fuse::Selection
