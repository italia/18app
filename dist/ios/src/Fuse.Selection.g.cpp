// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.Marshal.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.Selection.h>
#include <Fuse.Selection.Selection.How.h>
#include <Fuse.Selection.Selection.ListWrapper.h>
#include <Fuse.Selection.SelectionReplace.h>
#include <Fuse.Selection.SelectMode.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Visual.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[18];
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Selection{

// /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.uno
// ----------------------------------------------------------------

// private enum Selection.How :333
uEnumType* Selection__How_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.Selection.How", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "API", 0LL,
        "Observable", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.uno
// ----------------------------------------------------------------

// private sealed class Selection.ListWrapper :339
// {
static void Selection__ListWrapper_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Selection__ListWrapper_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Selection__ListWrapper, _list), 0);
}

Selection__ListWrapper_type* Selection__ListWrapper_typeof()
{
    static uSStrong<Selection__ListWrapper_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Selection__ListWrapper);
    options.TypeSize = sizeof(Selection__ListWrapper_type);
    type = (Selection__ListWrapper_type*)uClassType::New("Fuse.Selection.Selection.ListWrapper", options);
    type->fp_build_ = Selection__ListWrapper_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Selection__ListWrapper__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Selection__ListWrapper__get_Item_fn;
    return type;
}

// public ListWrapper(Uno.Collections.List<string> list) :342
void Selection__ListWrapper__ctor__fn(Selection__ListWrapper* __this, ::g::Uno::Collections::List* list)
{
    __this->ctor_(list);
}

// public object get_Item(int index) :347
void Selection__ListWrapper__get_Item_fn(Selection__ListWrapper* __this, int* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :346
void Selection__ListWrapper__get_Length_fn(Selection__ListWrapper* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public ListWrapper New(Uno.Collections.List<string> list) :342
void Selection__ListWrapper__New1_fn(::g::Uno::Collections::List* list, Selection__ListWrapper** __retval)
{
    *__retval = Selection__ListWrapper::New1(list);
}

// public ListWrapper(Uno.Collections.List<string> list) [instance] :342
void Selection__ListWrapper::ctor_(::g::Uno::Collections::List* list)
{
    _list = list;
}

// public object get_Item(int index) [instance] :347
uObject* Selection__ListWrapper::Item(int index)
{
    uString* ret2;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int>(index), &ret2), ret2);
}

// public int get_Length() [instance] :346
int Selection__ListWrapper::Length()
{
    return uPtr(_list)->Count();
}

// public ListWrapper New(Uno.Collections.List<string> list) [static] :342
Selection__ListWrapper* Selection__ListWrapper::New1(::g::Uno::Collections::List* list)
{
    Selection__ListWrapper* obj1 = (Selection__ListWrapper*)uNew(Selection__ListWrapper_typeof());
    obj1->ctor_(list);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selectable.ScriptClass.uno
// -----------------------------------------------------------------------------

// public partial sealed class Selectable :9
// {
// static Selectable() :11
static void Selectable__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    Selectable::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[0/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[1/*"add"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selectable, object[]>*/], (void*)Selectable__add_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[2/*"remove"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selectable, object[]>*/], (void*)Selectable__remove_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[3/*"toggle"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selectable, object[]>*/], (void*)Selectable__toggle_fn), 2)));
}

static void Selectable_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("add");
    ::STRINGS[2] = uString::Const("remove");
    ::STRINGS[3] = uString::Const("toggle");
    ::STRINGS[4] = uString::Const("add requires 0 arguments");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selectable.ScriptClass.uno");
    ::STRINGS[6] = uString::Const("No selection, perhaps not rooted");
    ::STRINGS[7] = uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selectable.uno");
    ::STRINGS[8] = uString::Const("Add");
    ::STRINGS[9] = uString::Const("Unable to locate `Selection`");
    ::STRINGS[10] = uString::Const("OnRooted");
    ::STRINGS[11] = uString::Const("remove requires 0 arguments");
    ::STRINGS[12] = uString::Const("Remove");
    ::STRINGS[13] = uString::Const("toggle requires 0 arguments");
    ::STRINGS[14] = uString::Const("Toggle");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[2] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[3] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(Selectable, _selection), 0,
        ::g::Uno::String_typeof(), offsetof(Selectable, _value), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Selectable::ValueName_, uFieldFlagsStatic);
}

::g::Fuse::Node_type* Selectable_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Selectable);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Selection.Selectable", options);
    type->fp_build_ = Selectable_build;
    type->fp_cctor_ = Selectable__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selectable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selectable__OnUnrooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) :24
void Selectable__add_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable::add(c, s, args);
}

// public void Add() :78
void Selectable__Add1_fn(Selectable* __this)
{
    __this->Add1();
}

// protected override sealed void OnRooted() :35
void Selectable__OnRooted_fn(Selectable* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_selection = ::g::Fuse::Selection::Selection::TryFindSelection(__this->Parent());

    if (__this->_selection == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"Unable to l...*/], __this, ::STRINGS[7/*"/usr/local/...*/], 41, ::STRINGS[10/*"OnRooted"*/], NULL);
}

// protected override sealed void OnUnrooted() :44
void Selectable__OnUnrooted_fn(Selectable* __this)
{
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    __this->_selection = NULL;
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) :42
void Selectable__remove_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable::remove(c, s, args);
}

// public void Remove() :92
void Selectable__Remove1_fn(Selectable* __this)
{
    __this->Remove1();
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) :58
void Selectable__toggle_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable::toggle(c, s, args);
}

// public void Toggle() :106
void Selectable__Toggle_fn(Selectable* __this)
{
    __this->Toggle();
}

// public string get_Value() :60
void Selectable__get_Value_fn(Selectable* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :61
void Selectable__set_Value_fn(Selectable* __this, uString* value)
{
    __this->Value(value);
}

::g::Uno::UX::Selector Selectable::ValueName_;

// public void Add() [instance] :78
void Selectable::Add1()
{
    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"No selectio...*/], this, ::STRINGS[7/*"/usr/local/...*/], 82, ::STRINGS[8/*"Add"*/], NULL);
        return;
    }

    uPtr(_selection)->Add1(this);
}

// public void Remove() [instance] :92
void Selectable::Remove1()
{
    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"No selectio...*/], this, ::STRINGS[7/*"/usr/local/...*/], 96, ::STRINGS[12/*"Remove"*/], NULL);
        return;
    }

    uPtr(_selection)->Remove1(this);
}

// public void Toggle() [instance] :106
void Selectable::Toggle()
{
    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"No selectio...*/], this, ::STRINGS[7/*"/usr/local/...*/], 110, ::STRINGS[14/*"Toggle"*/], NULL);
        return;
    }

    uPtr(_selection)->Toggle(this);
}

// public string get_Value() [instance] :60
uString* Selectable::Value()
{
    return _value;
}

// public void set_Value(string value) [instance] :61
void Selectable::Value(uString* value)
{
    if (::g::Uno::String::op_Equality(_value, value))
        return;

    uString* old = _value;
    _value = value;

    if (_selection != NULL)
        uPtr(_selection)->ModifyValue(old, _value);

    OnPropertyChanged(Selectable::ValueName_);
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) [static] :24
void Selectable::add(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[4/*"add require...*/], s, ::STRINGS[5/*"/usr/local/...*/], 28, ::STRINGS[1/*"add"*/], NULL);
        return;
    }

    uPtr(s)->Add1();
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) [static] :42
void Selectable::remove(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[11/*"remove requ...*/], s, ::STRINGS[5/*"/usr/local/...*/], 46, ::STRINGS[2/*"remove"*/], NULL);
        return;
    }

    uPtr(s)->Remove1();
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) [static] :58
void Selectable::toggle(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[13/*"toggle requ...*/], s, ::STRINGS[5/*"/usr/local/...*/], 62, ::STRINGS[3/*"toggle"*/], NULL);
        return;
    }

    uPtr(s)->Toggle();
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.ScriptClass.uno
// ----------------------------------------------------------------------------

// public partial sealed class Selection :9
// {
// static Selection() :11
static void Selection__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    Selection::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[0/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 6, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("clear"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)Selection__clear_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), ::STRINGS[1/*"add"*/], uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)Selection__add_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), ::STRINGS[2/*"remove"*/], uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)Selection__remove_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("forceAdd"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)Selection__forceAdd_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("forceRemove"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)Selection__forceRemove_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), ::STRINGS[3/*"toggle"*/], uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, uObject_typeof()->Array(), NULL), (void*)Selection__toggle_fn), 2)));
}

static void Selection_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Selection_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Selection_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Selection_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Selection_type, interface6));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(Selection, _hasMaxCount), 0,
        ::g::Uno::Int_typeof(), offsetof(Selection, _maxCount), 0,
        ::g::Uno::Int_typeof(), offsetof(Selection, _minCount), 0,
        ::g::Fuse::Reactive::IObservable_typeof(), offsetof(Selection, _observableValues), 0,
        ::g::Fuse::Selection::SelectionReplace_typeof(), offsetof(Selection, _replace), 0,
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(Selection, _subscription), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Selection, _values), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(Selection, SelectionChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Selection::ValueName_, uFieldFlagsStatic);
}

Selection_type* Selection_typeof()
{
    static uSStrong<Selection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 7;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Selection);
    options.TypeSize = sizeof(Selection_type);
    type = (Selection_type*)uClassType::New("Fuse.Selection.Selection", options);
    type->fp_build_ = Selection_build;
    type->fp_cctor_ = Selection__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selection__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selection__OnUnrooted_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))Selection__FuseReactiveIObserverOnClear_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Selection__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))Selection__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Selection__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))Selection__FuseReactiveIObserverOnFailed_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :45
void Selection__add_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::add(c, s, args);
}

// public void Add(Fuse.Selection.Selectable b) :192
void Selection__Add1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Add1(b);
}

// private void Add(string value) :308
void Selection__Add2_fn(Selection* __this, uString* value)
{
    __this->Add2(value);
}

// private static void clear(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :27
void Selection__clear_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::clear(c, s, args);
}

// public void Clear() :212
void Selection__Clear_fn(Selection* __this)
{
    __this->Clear();
}

// private void ClearSubscription() :414
void Selection__ClearSubscription_fn(Selection* __this)
{
    __this->ClearSubscription();
}

// private static void forceAdd(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :77
void Selection__forceAdd_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::forceAdd(c, s, args);
}

// private void ForceAdd(string value) :226
void Selection__ForceAdd1_fn(Selection* __this, uString* value)
{
    __this->ForceAdd1(value);
}

// private static void forceRemove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :91
void Selection__forceRemove_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::forceRemove(c, s, args);
}

// private void ForceRemove(string value) :243
void Selection__ForceRemove1_fn(Selection* __this, uString* value)
{
    __this->ForceRemove1(value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :455
void Selection__FuseReactiveIObserverOnAdd_fn(Selection* __this, uObject* addedValue)
{
    uString* ret9;
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), addedValue, &ret9), ret9));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnClear() :423
void Selection__FuseReactiveIObserverOnClear_fn(Selection* __this)
{
    uPtr(__this->_values)->Clear();
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :483
void Selection__FuseReactiveIObserverOnFailed_fn(Selection* __this, uString* message)
{
    ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uAs<uObject*>(__this, ::g::Fuse::Reactive::IObserver_typeof())), ::g::Fuse::Reactive::IObserver_typeof()));
    ::g::Fuse::Diagnostics::InternalError(message, __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.uno"), 486, uString::Const("Fuse.Reactive.IObserver.OnFailed"));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :472
void Selection__FuseReactiveIObserverOnInsertAt_fn(Selection* __this, int* index, uObject* value)
{
    int index_ = *index;
    uString* ret10;

    if ((index_ < 0) || (index_ > uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("removing invalid observable item"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.uno"), 476, uString::Const("Fuse.Reactive.IObserver.OnInsertAt"));
        return;
    }

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_values), uCRef<int>(index_), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), value, &ret10), ret10));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :429
void Selection__FuseReactiveIObserverOnNewAll_fn(Selection* __this, uObject* values)
{
    uString* ret11;
    uPtr(__this->_values)->Clear();

    for (int i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(values), ::g::Fuse::IArray_typeof())); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::g::Fuse::IArray_typeof()), i), &ret11), ret11));

    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :437
void Selection__FuseReactiveIObserverOnNewAt_fn(Selection* __this, int* index, uObject* newValue)
{
    int index_ = *index;
    uString* ret12;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("removing invalid observable item"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.uno"), 441, uString::Const("Fuse.Reactive.IObserver.OnNewAt"));
        return;
    }

    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->_values), uCRef<int>(index_), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), newValue, &ret12), ret12));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :461
void Selection__FuseReactiveIObserverOnRemoveAt_fn(Selection* __this, int* index)
{
    int index_ = *index;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("removing invalid observable item"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.uno"), 465, uString::Const("Fuse.Reactive.IObserver.OnRemoveAt"));
        return;
    }

    uPtr(__this->_values)->RemoveAt(index_);
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :448
void Selection__FuseReactiveIObserverOnSet_fn(Selection* __this, uObject* newValue)
{
    uString* ret13;
    uPtr(__this->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), newValue, &ret13), ret13));
    __this->OnSelectionChanged(1);
}

// public bool get_HasMaxCount() :152
void Selection__get_HasMaxCount_fn(Selection* __this, bool* __retval)
{
    *__retval = __this->HasMaxCount();
}

// public int get_MaxCount() :130
void Selection__get_MaxCount_fn(Selection* __this, int* __retval)
{
    *__retval = __this->MaxCount();
}

// public void set_MaxCount(int value) :131
void Selection__set_MaxCount_fn(Selection* __this, int* value)
{
    __this->MaxCount(*value);
}

// public int get_MinCount() :113
void Selection__get_MinCount_fn(Selection* __this, int* __retval)
{
    *__retval = __this->MinCount();
}

// public void set_MinCount(int value) :114
void Selection__set_MinCount_fn(Selection* __this, int* value)
{
    __this->MinCount(*value);
}

// internal void ModifyValue(string old, string nw) :365
void Selection__ModifyValue_fn(Selection* __this, uString* old, uString* nw)
{
    __this->ModifyValue(old, nw);
}

// private void OnObservableValuesChanged() :404
void Selection__OnObservableValuesChanged_fn(Selection* __this)
{
    __this->OnObservableValuesChanged();
}

// protected override sealed void OnRooted() :85
void Selection__OnRooted_fn(Selection* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnObservableValuesChanged();
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how) :350
void Selection__OnSelectionChanged_fn(Selection* __this, int* how)
{
    __this->OnSelectionChanged(*how);
}

// protected override sealed void OnUnrooted() :91
void Selection__OnUnrooted_fn(Selection* __this)
{
    __this->ClearSubscription();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :63
void Selection__remove_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::remove(c, s, args);
}

// public void Remove(Fuse.Selection.Selectable b) :202
void Selection__Remove1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Remove1(b);
}

// private void Remove(string value) :296
void Selection__Remove2_fn(Selection* __this, uString* value)
{
    __this->Remove2(value);
}

// public Fuse.Selection.SelectionReplace get_Replace() :103
void Selection__get_Replace_fn(Selection* __this, int* __retval)
{
    *__retval = __this->Replace();
}

// public void set_Replace(Fuse.Selection.SelectionReplace value) :104
void Selection__set_Replace_fn(Selection* __this, int* value)
{
    __this->Replace(*value);
}

// public generated void add_SelectionChanged(Uno.EventHandler value) :331
void Selection__add_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->add_SelectionChanged(value);
}

// public generated void remove_SelectionChanged(Uno.EventHandler value) :331
void Selection__remove_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->remove_SelectionChanged(value);
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :107
void Selection__toggle_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::toggle(c, s, args);
}

// public void Toggle(Fuse.Selection.Selectable b) :174
void Selection__Toggle_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Toggle(b);
}

// private void Toggle(string value) :179
void Selection__Toggle1_fn(Selection* __this, uString* value)
{
    __this->Toggle1(value);
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection) :58
void Selection__TryFindSelectable_fn(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection, bool* __retval)
{
    *__retval = Selection::TryFindSelectable(n, selectable, selection);
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v) :41
void Selection__TryFindSelection_fn(::g::Fuse::Node* v, Selection** __retval)
{
    *__retval = Selection::TryFindSelection(v);
}

::g::Uno::UX::Selector Selection::ValueName_;

// public void Add(Fuse.Selection.Selectable b) [instance] :192
void Selection::Add1(::g::Fuse::Selection::Selectable* b)
{
    Add2(uPtr(b)->Value());
}

// private void Add(string value) [instance] :308
void Selection::Add2(uString* value)
{
    bool ret3;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret3), ret3))
        return;

    if (HasMaxCount() && ((uPtr(_values)->Count() + 1) > MaxCount()))
    {
        if ((Replace() == 2) || (MaxCount() < 1))
            return;

        if (Replace() == 0)
            uPtr(_values)->RemoveAt(0);
        else
            uPtr(_values)->RemoveAt(uPtr(_values)->Count() - 1);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
    OnSelectionChanged(0);
}

// public void Clear() [instance] :212
void Selection::Clear()
{
    uPtr(_values)->Clear();
    OnSelectionChanged(0);
}

// private void ClearSubscription() [instance] :414
void Selection::ClearSubscription()
{
    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::g::Uno::IDisposable_typeof()));
        _subscription = NULL;
    }
}

// private void ForceAdd(string value) [instance] :226
void Selection::ForceAdd1(uString* value)
{
    bool ret5;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret5), ret5))
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
        OnSelectionChanged(0);
    }
}

// private void ForceRemove(string value) [instance] :243
void Selection::ForceRemove1(uString* value)
{
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret7), ret7))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret8);
        OnSelectionChanged(0);
    }
}

// public bool get_HasMaxCount() [instance] :152
bool Selection::HasMaxCount()
{
    return _hasMaxCount;
}

// public int get_MaxCount() [instance] :130
int Selection::MaxCount()
{
    return _maxCount;
}

// public void set_MaxCount(int value) [instance] :131
void Selection::MaxCount(int value)
{
    if (_hasMaxCount && (value == _maxCount))
        return;

    if (value < 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("MaxCount must >= 1"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.uno"), 138, uString::Const("set_MaxCount"), NULL);
        return;
    }

    _hasMaxCount = true;
    _maxCount = value;
}

// public int get_MinCount() [instance] :113
int Selection::MinCount()
{
    return _minCount;
}

// public void set_MinCount(int value) [instance] :114
void Selection::MinCount(int value)
{
    if (value == _minCount)
        return;

    _minCount = value;
}

// internal void ModifyValue(string old, string nw) [instance] :365
void Selection::ModifyValue(uString* old, uString* nw)
{
    bool ret15;
    bool ret16;

    if (::g::Uno::String::IsNullOrEmpty(old) || ::g::Uno::String::IsNullOrEmpty(nw))
        return;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), old, &ret15), ret15))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), old, &ret16);
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), nw);
        OnSelectionChanged(0);
    }
}

// private void OnObservableValuesChanged() [instance] :404
void Selection::OnObservableValuesChanged()
{
    ClearSubscription();

    if (_observableValues == NULL)
        return;

    _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(_observableValues), ::g::Fuse::Reactive::IObservable_typeof()), (uObject*)this);
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how) [instance] :350
void Selection::OnSelectionChanged(int how)
{
    OnPropertyChanged(Selection::ValueName_);

    if (::g::Uno::Delegate::op_Inequality(SelectionChanged1, NULL))
        uPtr(SelectionChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);

    if ((how == 0) && (_subscription != NULL))
        ::g::Fuse::Reactive::ISubscription::ReplaceAllExclusive(uInterface(uPtr(_subscription), ::g::Fuse::Reactive::ISubscription_typeof()), (uObject*)Selection__ListWrapper::New1(_values));
}

// public void Remove(Fuse.Selection.Selectable b) [instance] :202
void Selection::Remove1(::g::Fuse::Selection::Selectable* b)
{
    Remove2(uPtr(b)->Value());
}

// private void Remove(string value) [instance] :296
void Selection::Remove2(uString* value)
{
    bool ret18;
    bool ret19;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret18), ret18))
        return;

    if ((uPtr(_values)->Count() - 1) < MinCount())
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret19);
    OnSelectionChanged(0);
}

// public Fuse.Selection.SelectionReplace get_Replace() [instance] :103
int Selection::Replace()
{
    return _replace;
}

// public void set_Replace(Fuse.Selection.SelectionReplace value) [instance] :104
void Selection::Replace(int value)
{
    _replace = value;
}

// public generated void add_SelectionChanged(Uno.EventHandler value) [instance] :331
void Selection::add_SelectionChanged(uDelegate* value)
{
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SelectionChanged1, value), ::g::Uno::EventHandler_typeof());
}

// public generated void remove_SelectionChanged(Uno.EventHandler value) [instance] :331
void Selection::remove_SelectionChanged(uDelegate* value)
{
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SelectionChanged1, value), ::g::Uno::EventHandler_typeof());
}

// public void Toggle(Fuse.Selection.Selectable b) [instance] :174
void Selection::Toggle(::g::Fuse::Selection::Selectable* b)
{
    Toggle1(uPtr(b)->Value());
}

// private void Toggle(string value) [instance] :179
void Selection::Toggle1(uString* value)
{
    bool ret24;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret24), ret24))
        Remove2(value);
    else
        Add2(value);
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :45
void Selection::add(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret2;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("add requires 1 argument, the value of the item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.ScriptClass.uno"), 49, ::STRINGS[1/*"add"*/], NULL);
        return;
    }

    uPtr(s)->Add2((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret2), ret2));
}

// private static void clear(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :27
void Selection::clear(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("clear requires 0 arguments"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.ScriptClass.uno"), 31, uString::Const("clear"), NULL);
        return;
    }

    uPtr(s)->Clear();
}

// private static void forceAdd(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :77
void Selection::forceAdd(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret4;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("forceAdd requires 1 argument, the value of the item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.ScriptClass.uno"), 81, uString::Const("forceAdd"), NULL);
        return;
    }

    uPtr(s)->ForceAdd1((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret4), ret4));
}

// private static void forceRemove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :91
void Selection::forceRemove(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret6;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("forceRemove requires 1 argument, the value of the item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.ScriptClass.uno"), 95, uString::Const("forceRemove"), NULL);
        return;
    }

    uPtr(s)->ForceRemove1((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret6), ret6));
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :63
void Selection::remove(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret17;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("remove requires 1 argument, the value of the item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.ScriptClass.uno"), 67, ::STRINGS[2/*"remove"*/], NULL);
        return;
    }

    uPtr(s)->Remove2((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret17), ret17));
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :107
void Selection::toggle(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret23;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("toggle requires 1 argument, the value of them item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.ScriptClass.uno"), 111, ::STRINGS[3/*"toggle"*/], NULL);
        return;
    }

    uPtr(s)->Toggle1((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret23), ret23));
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection) [static] :58
bool Selection::TryFindSelectable(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection)
{
    Selection_typeof()->Init();
    *selectable = NULL;
    *selection = NULL;

    while (n != NULL)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(n, ::g::Fuse::Visual_typeof());

        if (vs != NULL)
        {
            if (*selectable == NULL)
                *selectable = (::g::Fuse::Selection::Selectable*)uPtr(vs)->FirstChild(::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Selection.Selectable>*/, ::g::Fuse::Selection::Selectable_typeof(), NULL));
            else
                *selection = (Selection*)uPtr(vs)->FirstChild(::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Selection.Selection>*/, Selection_typeof(), NULL));

            if ((*selectable != NULL) && (*selection != NULL))
                return true;
        }

        n = uPtr(n)->ContextParent();
    }

    *selectable = NULL;
    *selection = NULL;
    return false;
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v) [static] :41
Selection* Selection::TryFindSelection(::g::Fuse::Node* v)
{
    Selection_typeof()->Init();

    while (v != NULL)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(v, ::g::Fuse::Visual_typeof());

        if (vs != NULL)
        {
            Selection* l = (Selection*)uPtr(vs)->FirstChild(::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Selection.Selection>*/, Selection_typeof(), NULL));

            if (l != NULL)
                return l;
        }

        v = uPtr(v)->ContextParent();
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.uno
// ----------------------------------------------------------------

// public enum SelectionReplace :9
uEnumType* SelectionReplace_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.SelectionReplace", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Oldest", 0LL,
        "Newest", 1LL,
        "None", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/ToggleSelection.uno
// ----------------------------------------------------------------------

// public enum SelectMode :8
uEnumType* SelectMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.SelectMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Toggle", 0LL,
        "AddOnly", 1LL,
        "RemoveOnly", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/ToggleSelection.uno
// ----------------------------------------------------------------------

// public sealed class ToggleSelection :26
// {
static void ToggleSelection_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Unable to locate Selectable");
    ::STRINGS[16] = uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.3.1/ToggleSelection.uno");
    ::STRINGS[17] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8,
        ::g::Fuse::Selection::SelectMode_typeof(), offsetof(ToggleSelection, _mode), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSelection_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ToggleSelection);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Selection.ToggleSelection", options);
    type->fp_build_ = ToggleSelection_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSelection__Perform_fn;
    return type;
}

// public Fuse.Selection.SelectMode get_Mode() :36
void ToggleSelection__get_Mode_fn(ToggleSelection* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Selection.SelectMode value) :37
void ToggleSelection__set_Mode_fn(ToggleSelection* __this, int* value)
{
    __this->Mode(*value);
}

// protected override sealed void Perform(Fuse.Node target) :40
void ToggleSelection__Perform_fn(ToggleSelection* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Selection::Selectable* selectable;
    ::g::Fuse::Selection::Selection* selection;

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(target, &selectable, &selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[15/*"Unable to l...*/], __this, ::STRINGS[16/*"/usr/local/...*/], 46, ::STRINGS[17/*"Perform"*/], NULL);
        return;
    }

    switch (__this->Mode())
    {
        case 0:
        {
            uPtr(selection)->Toggle(selectable);
            break;
        }
        case 1:
        {
            uPtr(selection)->Add1(selectable);
            break;
        }
        case 2:
        {
            uPtr(selection)->Remove1(selectable);
            break;
        }
    }
}

// public Fuse.Selection.SelectMode get_Mode() [instance] :36
int ToggleSelection::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Selection.SelectMode value) [instance] :37
void ToggleSelection::Mode(int value)
{
    _mode = value;
}
// }

}}} // ::g::Fuse::Selection
