// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.LauncherImpl.EmailLauncher.h>
#include <Fuse.LauncherImpl.InterAppLauncher.h>
#include <Fuse.LauncherImpl.MapsLauncher.h>
#include <Fuse.LauncherImpl.PhoneLauncher.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Triggers.Actions.BringIntoView.h>
#include <Fuse.Triggers.Actions.BringToFront.h>
#include <Fuse.Triggers.Actions.Call.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.CancelInteractions.h>
#include <Fuse.Triggers.Actions.Collapse.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.DebugProperty-1.h>
#include <Fuse.Triggers.Actions.EvaluateJS.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.Hide.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions.ITaggedDebugProperty.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.Actions.JSEventArgs.h>
#include <Fuse.Triggers.Actions.JSEventHandler.h>
#include <Fuse.Triggers.Actions.LaunchEmail.h>
#include <Fuse.Triggers.Actions.LaunchMaps.h>
#include <Fuse.Triggers.Actions.LaunchUri.h>
#include <Fuse.Triggers.Actions.LoadHtml.h>
#include <Fuse.Triggers.Actions.LoadUrl.h>
#include <Fuse.Triggers.Actions.Pause.h>
#include <Fuse.Triggers.Actions.Play.h>
#include <Fuse.Triggers.Actions.PlaybackAction.h>
#include <Fuse.Triggers.Actions.PlayTo.h>
#include <Fuse.Triggers.Actions.Pulse.h>
#include <Fuse.Triggers.Actions.PulseBackward.h>
#include <Fuse.Triggers.Actions.PulseForward.h>
#include <Fuse.Triggers.Actions.RaiseUserEvent.h>
#include <Fuse.Triggers.Actions.ReleaseFocus.h>
#include <Fuse.Triggers.Actions.ReleasePage.h>
#include <Fuse.Triggers.Actions.Reload.h>
#include <Fuse.Triggers.Actions.SendToBack.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Show.h>
#include <Fuse.Triggers.Actions.Stop.h>
#include <Fuse.Triggers.Actions.StopLoading.h>
#include <Fuse.Triggers.Actions.TimelineAction.h>
#include <Fuse.Triggers.Actions.TimelineActionHow.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions.TransitionLayout.h>
#include <Fuse.Triggers.Actions.TransitionState.h>
#include <Fuse.Triggers.Actions.TransitionStateType.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerWhen.h>
#include <Fuse.Triggers.Actions.UserEventArg.h>
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.Visual.CancelInteractionsType.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.VisualEventMode.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[21];
static uType* TYPES[31];

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Triggers/Actions/BringIntoView.uno
// ------------------------------------------------------------------------------------

// public sealed class BringIntoView :39
// {
static void BringIntoView_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(BringIntoView);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringIntoView", options);
    type->fp_build_ = BringIntoView_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringIntoView__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :41
void BringIntoView__Perform_fn(BringIntoView* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>((::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]), ::TYPES[0/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        uPtr(elm)->BringIntoView();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/1.3.1/Triggers/BringToFront.uno
// ---------------------------------------------------------------------------

// public sealed class BringToFront :37
// {
static void BringToFront_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::TYPES[2/*Fuse.Visual*/], offsetof(BringToFront, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(BringToFront);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringToFront", options);
    type->fp_build_ = BringToFront_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringToFront__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :41
void BringToFront__Perform_fn(BringToFront* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[2/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->BringToFront(elm);
    }
}

// public generated Fuse.Visual get_Target() :39
void BringToFront__get_Target_fn(BringToFront* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :39
void BringToFront__set_Target_fn(BringToFront* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance] :39
::g::Fuse::Visual* BringToFront::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :39
void BringToFront::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Phone/1.3.1/Phone/PhoneTrigger.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class Call :34
// {
static void Call_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::LauncherImpl::PhoneLauncher_typeof());
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(Call, _Number), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Call_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Call);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Call", options);
    type->fp_build_ = Call_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Call__Perform_fn;
    return type;
}

// public generated string get_Number() :36
void Call__get_Number_fn(Call* __this, uString** __retval)
{
    *__retval = __this->Number();
}

// public generated void set_Number(string value) :36
void Call__set_Number_fn(Call* __this, uString* value)
{
    __this->Number(value);
}

// protected override sealed void Perform(Fuse.Node target) :38
void Call__Perform_fn(Call* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::LauncherImpl::PhoneLauncher::LaunchCall(__this->Number());
}

// public generated string get_Number() [instance] :36
uString* Call::Number()
{
    return _Number;
}

// public generated void set_Number(string value) [instance] :36
void Call::Number(uString* value)
{
    _Number = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Callback.uno
// ----------------------------------------------------------------------

// public sealed class Callback :25
// {
static void Callback_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetFields(8,
        ::g::Uno::Action_typeof(), offsetof(Callback, _Action), 0,
        ::TYPES[3/*Fuse.VisualEventHandler*/], offsetof(Callback, Handler1), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Callback", options);
    type->fp_build_ = Callback_build;
    type->fp_ctor_ = (void*)Callback__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Callback__Perform_fn;
    return type;
}

// public generated Callback() :25
void Callback__ctor_2_fn(Callback* __this)
{
    __this->ctor_2();
}

// public generated Uno.Action get_Action() :28
void Callback__get_Action_fn(Callback* __this, uDelegate** __retval)
{
    *__retval = __this->Action();
}

// public generated void set_Action(Uno.Action value) :28
void Callback__set_Action_fn(Callback* __this, uDelegate* value)
{
    __this->Action(value);
}

// public generated void add_Handler(Fuse.VisualEventHandler value) :31
void Callback__add_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value) :31
void Callback__remove_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Callback New() :25
void Callback__New2_fn(Callback** __retval)
{
    *__retval = Callback::New2();
}

// protected override sealed void Perform(Fuse.Node target) :33
void Callback__Perform_fn(Callback* __this, ::g::Fuse::Node* target)
{
    if (::g::Uno::Delegate::op_Inequality(__this->Action(), NULL))
        uPtr(__this->Action())->InvokeVoid();

    if (::g::Uno::Delegate::op_Inequality(__this->Handler1, NULL))
        uPtr(__this->Handler1)->Invoke(2, target, (::g::Fuse::VisualEventArgs*)::g::Fuse::VisualEventArgs::New2((::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/])));
}

// public generated Callback() [instance] :25
void Callback::ctor_2()
{
    ctor_1();
}

// public generated Uno.Action get_Action() [instance] :28
uDelegate* Callback::Action()
{
    return _Action;
}

// public generated void set_Action(Uno.Action value) [instance] :28
void Callback::Action(uDelegate* value)
{
    _Action = value;
}

// public generated void add_Handler(Fuse.VisualEventHandler value) [instance] :31
void Callback::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[3/*Fuse.VisualEventHandler*/]);
}

// public generated void remove_Handler(Fuse.VisualEventHandler value) [instance] :31
void Callback::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[3/*Fuse.VisualEventHandler*/]);
}

// public generated Callback New() [static] :25
Callback* Callback::New2()
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/CancelInteractions.uno
// --------------------------------------------------------------------------------

// public sealed class CancelInteractions :8
// {
static void CancelInteractions_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetFields(8,
        ::g::Fuse::Visual_typeof(), offsetof(CancelInteractions, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(CancelInteractions);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.CancelInteractions", options);
    type->fp_build_ = CancelInteractions_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))CancelInteractions__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :12
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Visual* t = (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);

    if (t != NULL)
        uPtr(t)->CancelInteractions(1);
}

// public generated Fuse.Visual get_Target() :10
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :10
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance] :10
::g::Fuse::Visual* CancelInteractions::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :10
void CancelInteractions::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Visibility.uno
// ------------------------------------------------------------------------

// public sealed class Collapse :102
// {
static void Collapse_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Cannot find an Element/ICollapse");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Visibility.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[4] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.ICollapse>*/, ::g::Fuse::Triggers::Actions::ICollapse_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::ICollapse_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Collapse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Collapse", options);
    type->fp_build_ = Collapse_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Collapse__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :104
void Collapse__Perform_fn(Collapse* __this, ::g::Fuse::Node* target)
{
    uObject* t = (uObject*)uPtr(target)->FindByType(::TYPES[4/*Fuse.Node.FindByType<Fuse.Triggers.Actions.ICollapse>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::ICollapse::Collapse(uInterface(uPtr(t), ::TYPES[5/*Fuse.Triggers.Actions.ICollapse*/]));
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Cannot find...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 110, ::STRINGS[2/*"Perform"*/], NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/DebugAction.uno
// -------------------------------------------------------------------------

// public sealed class DebugAction :20
// {
static void DebugAction_build(uType* type)
{
    ::STRINGS[3] = uString::Const(" = ");
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(8,
        ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/], NULL), offsetof(DebugAction, _props), 0,
        ::g::Uno::String_typeof(), offsetof(DebugAction, _Message), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DebugAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.DebugAction", options);
    type->fp_build_ = DebugAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))DebugAction__Perform_fn;
    return type;
}

// public generated string get_Message() :22
void DebugAction__get_Message_fn(DebugAction* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value) :22
void DebugAction__set_Message_fn(DebugAction* __this, uString* value)
{
    __this->Message(value);
}

// protected override sealed void Perform(Fuse.Node target) :36
void DebugAction__Perform_fn(DebugAction* __this, ::g::Fuse::Node* target)
{
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret3;

    if (::g::Uno::String::op_Inequality(__this->Message(), NULL))
        ::g::Uno::Diagnostics::Debug::Log3(__this->Message());

    if (__this->_props != NULL)
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_props), &ret3), ret3);

        {
            const auto __finally_fun = [&]()
            {
                enum1.Dispose(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (enum1.MoveNext(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]))
            {
                uObject* prop = enum1.Current(::TYPES[6/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
                ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetTag(uInterface(uPtr(prop), ::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/])), ::STRINGS[3/*" = "*/]), ::g::Fuse::Triggers::Actions::ITaggedDebugProperty::GetStringValue(uInterface(uPtr(prop), ::TYPES[7/*Fuse.Triggers.Actions.ITaggedDebugProperty*/]))));
            }
        }
    }
}

// public generated string get_Message() [instance] :22
uString* DebugAction::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance] :22
void DebugAction::Message(uString* value)
{
    _Message = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/DebugProperty.uno
// ---------------------------------------------------------------------------

// public sealed class DebugProperty<T> :12
// {
static void DebugProperty_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof(), offsetof(DebugProperty_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(DebugProperty, _Tag), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(DebugProperty, _Value), 0);
}

DebugProperty_type* DebugProperty_typeof()
{
    static uSStrong<DebugProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugProperty);
    options.TypeSize = sizeof(DebugProperty_type);
    type = (DebugProperty_type*)uClassType::New("Fuse.Triggers.Actions.DebugProperty`1", options);
    type->fp_build_ = DebugProperty_build;
    type->interface0.fp_GetTag = (void(*)(uObject*, uString**))DebugProperty__GetTag_fn;
    type->interface0.fp_GetStringValue = (void(*)(uObject*, uString**))DebugProperty__GetStringValue_fn;
    return type;
}

// public string GetStringValue() :28
void DebugProperty__GetStringValue_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetStringValue();
}

// public string GetTag() :23
void DebugProperty__GetTag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->GetTag();
}

// public generated string get_Tag() :14
void DebugProperty__get_Tag_fn(DebugProperty* __this, uString** __retval)
{
    *__retval = __this->Tag();
}

// public generated void set_Tag(string value) :14
void DebugProperty__set_Tag_fn(DebugProperty* __this, uString* value)
{
    __this->Tag(value);
}

// public generated Uno.UX.Property<T> get_Value() :15
void DebugProperty__get_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(Uno.UX.Property<T> value) :15
void DebugProperty__set_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1* value)
{
    __this->Value(value);
}

// public string GetStringValue() [instance] :28
uString* DebugProperty::GetStringValue()
{
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    return ::g::Uno::String::op_Addition1(::STRINGS[4/*""*/], uBoxPtr(__type->T(0), (::g::Uno::UX::Property1__Get_fn(uPtr(Value()), &ret2), ret2)));
}

// public string GetTag() [instance] :23
uString* DebugProperty::GetTag()
{
    return Tag();
}

// public generated string get_Tag() [instance] :14
uString* DebugProperty::Tag()
{
    return _Tag;
}

// public generated void set_Tag(string value) [instance] :14
void DebugProperty::Tag(uString* value)
{
    _Tag = value;
}

// public generated Uno.UX.Property<T> get_Value() [instance] :15
::g::Uno::UX::Property1* DebugProperty::Value()
{
    return _Value;
}

// public generated void set_Value(Uno.UX.Property<T> value) [instance] :15
void DebugProperty::Value(::g::Uno::UX::Property1* value)
{
    _Value = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/EvaluateJS.uno
// ------------------------------------------------------------------------

// public sealed class EvaluateJS :104
// {
static void EvaluateJS_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.IWebView>*/, ::TYPES[8/*Fuse.Controls.IWebView*/], NULL);
    ::TYPES[11] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(EvaluateJS, _processedSource), 0,
        ::g::Uno::String_typeof(), offsetof(EvaluateJS, _rawSource), 0,
        ::TYPES[8/*Fuse.Controls.IWebView*/], offsetof(EvaluateJS, _target), 0,
        ::TYPES[11/*Fuse.Triggers.Actions.JSEventHandler*/], offsetof(EvaluateJS, Handler1), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(EvaluateJS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.EvaluateJS", options);
    type->fp_build_ = EvaluateJS_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))EvaluateJS__Perform_fn;
    return type;
}

// private void Execute(Fuse.Controls.IWebView webView) :149
void EvaluateJS__Execute_fn(EvaluateJS* __this, uObject* webView)
{
    __this->Execute(webView);
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) :109
void EvaluateJS__add_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) :109
void EvaluateJS__remove_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// protected override sealed void Perform(Fuse.Node target) :139
void EvaluateJS__Perform_fn(EvaluateJS* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->_target;
    uObject* webView = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[10/*Fuse.Node.FindByType<Fuse.Controls.IWebView>*/]);

    if ((webView != NULL) && !::g::Uno::String::IsNullOrEmpty(__this->_rawSource))
        __this->Execute(webView);
}

// private void ResultHandler(string result) :154
void EvaluateJS__ResultHandler_fn(EvaluateJS* __this, uString* result)
{
    __this->ResultHandler(result);
}

// private void Execute(Fuse.Controls.IWebView webView) [instance] :149
void EvaluateJS::Execute(uObject* webView)
{
    ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(webView), ::TYPES[8/*Fuse.Controls.IWebView*/]), _processedSource, uDelegate::New(::TYPES[9/*Uno.Action<string>*/], (void*)EvaluateJS__ResultHandler_fn, this));
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :109
void EvaluateJS::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[11/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :109
void EvaluateJS::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[11/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// private void ResultHandler(string result) [instance] :154
void EvaluateJS::ResultHandler(uString* result)
{
    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Triggers::Actions::JSEventArgs*)::g::Fuse::Triggers::Actions::JSEventArgs::New2(result));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Focus.uno
// -------------------------------------------------------------------

// public sealed class GiveFocus :25
// {
// static generated GiveFocus() :25
static void GiveFocus__cctor__fn(uType* __type)
{
    GiveFocus::Singleton_ = GiveFocus::New2();
}

static void GiveFocus_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetFields(8,
        ::TYPES[2/*Fuse.Visual*/], offsetof(GiveFocus, _Target), 0,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), (uintptr_t)&GiveFocus::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(GiveFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.GiveFocus", options);
    type->fp_build_ = GiveFocus_build;
    type->fp_ctor_ = (void*)GiveFocus__New2_fn;
    type->fp_cctor_ = GiveFocus__cctor__fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))GiveFocus__Perform_fn;
    return type;
}

// public generated GiveFocus() :25
void GiveFocus__ctor_2_fn(GiveFocus* __this)
{
    __this->ctor_2();
}

// public generated GiveFocus New() :25
void GiveFocus__New2_fn(GiveFocus** __retval)
{
    *__retval = GiveFocus::New2();
}

// protected override sealed void Perform(Fuse.Node target) :29
void GiveFocus__Perform_fn(GiveFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Input::Focus::GiveTo((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Visual*>(target, ::TYPES[2/*Fuse.Visual*/])));
}

// public generated Fuse.Visual get_Target() :27
void GiveFocus__get_Target_fn(GiveFocus* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :27
void GiveFocus__set_Target_fn(GiveFocus* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> GiveFocus::Singleton_;

// public generated GiveFocus() [instance] :25
void GiveFocus::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Visual get_Target() [instance] :27
::g::Fuse::Visual* GiveFocus::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :27
void GiveFocus::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated GiveFocus New() [static] :25
GiveFocus* GiveFocus::New2()
{
    GiveFocus* obj2 = (GiveFocus*)uNew(GiveFocus_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Visibility.uno
// ------------------------------------------------------------------------

// public sealed class Hide :66
// {
static void Hide_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Cannot find an Element/IHide");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Visibility.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[12] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.IHide>*/, ::g::Fuse::Triggers::Actions::IHide_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Triggers::Actions::IHide_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Hide);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Hide", options);
    type->fp_build_ = Hide_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Hide__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :68
void Hide__Perform_fn(Hide* __this, ::g::Fuse::Node* target)
{
    uObject* t = (uObject*)uPtr(target)->FindByType(::TYPES[12/*Fuse.Node.FindByType<Fuse.Triggers.Actions.IHide>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::IHide::Hide(uInterface(uPtr(t), ::TYPES[13/*Fuse.Triggers.Actions.IHide*/]));
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[5/*"Cannot find...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 74, ::STRINGS[2/*"Perform"*/], NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Visibility.uno
// ------------------------------------------------------------------------

// public abstract interface ICollapse :78
// {
uInterfaceType* ICollapse_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ICollapse", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Visibility.uno
// ------------------------------------------------------------------------

// public abstract interface IHide :42
// {
uInterfaceType* IHide_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IHide", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Visibility.uno
// ------------------------------------------------------------------------

// public abstract interface IShow :5
// {
uInterfaceType* IShow_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IShow", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/DebugProperty.uno
// ---------------------------------------------------------------------------

// public abstract interface ITaggedDebugProperty :6
// {
uInterfaceType* ITaggedDebugProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ITaggedDebugProperty", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Toggle.uno
// --------------------------------------------------------------------

// public abstract interface IToggleable :5
// {
uInterfaceType* IToggleable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IToggleable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/EvaluateJS.uno
// ------------------------------------------------------------------------

// public sealed class JSEventArgs :9
// {
static void JSEventArgs_build(uType* type)
{
    ::STRINGS[6] = uString::Const("json");
    ::TYPES[14] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(JSEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(JSEventArgs, ResultJson), 0);
}

JSEventArgs_type* JSEventArgs_typeof()
{
    static uSStrong<JSEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JSEventArgs);
    options.TypeSize = sizeof(JSEventArgs_type);
    type = (JSEventArgs_type*)uClassType::New("Fuse.Triggers.Actions.JSEventArgs", options);
    type->fp_build_ = JSEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))JSEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public JSEventArgs(string resultJson) :12
void JSEventArgs__ctor_1_fn(JSEventArgs* __this, uString* resultJson)
{
    __this->ctor_1(resultJson);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :17
void JSEventArgs__FuseScriptingIScriptEventSerialize_fn(JSEventArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[14/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[6/*"json"*/], __this->ResultJson);
}

// public JSEventArgs New(string resultJson) :12
void JSEventArgs__New2_fn(uString* resultJson, JSEventArgs** __retval)
{
    *__retval = JSEventArgs::New2(resultJson);
}

// public JSEventArgs(string resultJson) [instance] :12
void JSEventArgs::ctor_1(uString* resultJson)
{
    ctor_();
    ResultJson = resultJson;
}

// public JSEventArgs New(string resultJson) [static] :12
JSEventArgs* JSEventArgs::New2(uString* resultJson)
{
    JSEventArgs* obj1 = (JSEventArgs*)uNew(JSEventArgs_typeof());
    obj1->ctor_1(resultJson);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/EvaluateJS.uno
// ------------------------------------------------------------------------

// public delegate void JSEventHandler(object sender, Fuse.Triggers.Actions.JSEventArgs args) :23
uDelegateType* JSEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.Actions.JSEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::Actions::JSEventArgs_typeof());
    return type;
}

// /Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Email/1.3.1/Email/EmailTrigger.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class LaunchEmail :35
// {
static void LaunchEmail_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::LauncherImpl::EmailLauncher_typeof());
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(LaunchEmail, _BlindCarbonCopy), 0,
        ::g::Uno::String_typeof(), offsetof(LaunchEmail, _CarbonCopy), 0,
        ::g::Uno::String_typeof(), offsetof(LaunchEmail, _Message), 0,
        ::g::Uno::String_typeof(), offsetof(LaunchEmail, _Subject), 0,
        ::g::Uno::String_typeof(), offsetof(LaunchEmail, _To), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchEmail_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LaunchEmail);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchEmail", options);
    type->fp_build_ = LaunchEmail_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchEmail__Perform_fn;
    return type;
}

// public generated string get_BlindCarbonCopy() :39
void LaunchEmail__get_BlindCarbonCopy_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->BlindCarbonCopy();
}

// public generated void set_BlindCarbonCopy(string value) :39
void LaunchEmail__set_BlindCarbonCopy_fn(LaunchEmail* __this, uString* value)
{
    __this->BlindCarbonCopy(value);
}

// public generated string get_CarbonCopy() :38
void LaunchEmail__get_CarbonCopy_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->CarbonCopy();
}

// public generated void set_CarbonCopy(string value) :38
void LaunchEmail__set_CarbonCopy_fn(LaunchEmail* __this, uString* value)
{
    __this->CarbonCopy(value);
}

// public generated string get_Message() :41
void LaunchEmail__get_Message_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value) :41
void LaunchEmail__set_Message_fn(LaunchEmail* __this, uString* value)
{
    __this->Message(value);
}

// protected override sealed void Perform(Fuse.Node target) :43
void LaunchEmail__Perform_fn(LaunchEmail* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::LauncherImpl::EmailLauncher::LaunchEmail(__this->To(), __this->CarbonCopy(), __this->BlindCarbonCopy(), __this->Subject(), __this->Message());
}

// public generated string get_Subject() :40
void LaunchEmail__get_Subject_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->Subject();
}

// public generated void set_Subject(string value) :40
void LaunchEmail__set_Subject_fn(LaunchEmail* __this, uString* value)
{
    __this->Subject(value);
}

// public generated string get_To() :37
void LaunchEmail__get_To_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->To();
}

// public generated void set_To(string value) :37
void LaunchEmail__set_To_fn(LaunchEmail* __this, uString* value)
{
    __this->To(value);
}

// public generated string get_BlindCarbonCopy() [instance] :39
uString* LaunchEmail::BlindCarbonCopy()
{
    return _BlindCarbonCopy;
}

// public generated void set_BlindCarbonCopy(string value) [instance] :39
void LaunchEmail::BlindCarbonCopy(uString* value)
{
    _BlindCarbonCopy = value;
}

// public generated string get_CarbonCopy() [instance] :38
uString* LaunchEmail::CarbonCopy()
{
    return _CarbonCopy;
}

// public generated void set_CarbonCopy(string value) [instance] :38
void LaunchEmail::CarbonCopy(uString* value)
{
    _CarbonCopy = value;
}

// public generated string get_Message() [instance] :41
uString* LaunchEmail::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance] :41
void LaunchEmail::Message(uString* value)
{
    _Message = value;
}

// public generated string get_Subject() [instance] :40
uString* LaunchEmail::Subject()
{
    return _Subject;
}

// public generated void set_Subject(string value) [instance] :40
void LaunchEmail::Subject(uString* value)
{
    _Subject = value;
}

// public generated string get_To() [instance] :37
uString* LaunchEmail::To()
{
    return _To;
}

// public generated void set_To(string value) [instance] :37
void LaunchEmail::To(uString* value)
{
    _To = value;
}
// }

// /Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Maps/1.3.1/Maps/MapsTrigger.uno
// --------------------------------------------------------------------------------------------------------------

// public sealed class LaunchMaps :34
// {
static void LaunchMaps_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::LauncherImpl::MapsLauncher_typeof());
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(LaunchMaps, _Latitude), 0,
        ::g::Uno::String_typeof(), offsetof(LaunchMaps, _Longitude), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchMaps_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LaunchMaps);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchMaps", options);
    type->fp_build_ = LaunchMaps_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchMaps__Perform_fn;
    return type;
}

// public generated string get_Latitude() :36
void LaunchMaps__get_Latitude_fn(LaunchMaps* __this, uString** __retval)
{
    *__retval = __this->Latitude();
}

// public generated void set_Latitude(string value) :36
void LaunchMaps__set_Latitude_fn(LaunchMaps* __this, uString* value)
{
    __this->Latitude(value);
}

// public generated string get_Longitude() :37
void LaunchMaps__get_Longitude_fn(LaunchMaps* __this, uString** __retval)
{
    *__retval = __this->Longitude();
}

// public generated void set_Longitude(string value) :37
void LaunchMaps__set_Longitude_fn(LaunchMaps* __this, uString* value)
{
    __this->Longitude(value);
}

// protected override sealed void Perform(Fuse.Node target) :39
void LaunchMaps__Perform_fn(LaunchMaps* __this, ::g::Fuse::Node* target)
{
    double lat = 0.0;
    double lon = 0.0;

    if (::g::Uno::Double::TryParse(__this->Latitude(), &lat) && ::g::Uno::Double::TryParse(__this->Longitude(), &lon))
        ::g::Fuse::LauncherImpl::MapsLauncher::LaunchMaps(lat, lon);
}

// public generated string get_Latitude() [instance] :36
uString* LaunchMaps::Latitude()
{
    return _Latitude;
}

// public generated void set_Latitude(string value) [instance] :36
void LaunchMaps::Latitude(uString* value)
{
    _Latitude = value;
}

// public generated string get_Longitude() [instance] :37
uString* LaunchMaps::Longitude()
{
    return _Longitude;
}

// public generated void set_Longitude(string value) [instance] :37
void LaunchMaps::Longitude(uString* value)
{
    _Longitude = value;
}
// }

// /Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.InterApp/1.3.1/InterApp/InterAppTrigger.uno
// --------------------------------------------------------------------------------------------------------------------------

// public sealed class LaunchUri :45
// {
static void LaunchUri_build(uType* type)
{
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(LaunchUri, _Uri), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchUri_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(LaunchUri);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchUri", options);
    type->fp_build_ = LaunchUri_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchUri__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :49
void LaunchUri__Perform_fn(LaunchUri* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::LauncherImpl::InterAppLauncher::LaunchUri(::g::Uno::Net::Http::Uri::New1(__this->Uri()));
}

// public generated string get_Uri() :47
void LaunchUri__get_Uri_fn(LaunchUri* __this, uString** __retval)
{
    *__retval = __this->Uri();
}

// public generated void set_Uri(string value) :47
void LaunchUri__set_Uri_fn(LaunchUri* __this, uString* value)
{
    __this->Uri(value);
}

// public generated string get_Uri() [instance] :47
uString* LaunchUri::Uri()
{
    return _Uri;
}

// public generated void set_Uri(string value) [instance] :47
void LaunchUri::Uri(uString* value)
{
    _Uri = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/WebViewNavActions.uno
// -------------------------------------------------------------------------------

// public sealed class LoadHtml :94
// {
static void LoadHtml_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(LoadHtml_type, interface0));
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(LoadHtml, _BaseUrl), 0,
        ::g::Uno::String_typeof(), offsetof(LoadHtml, _Source), 0);
}

LoadHtml_type* LoadHtml_typeof()
{
    static uSStrong<LoadHtml_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadHtml);
    options.TypeSize = sizeof(LoadHtml_type);
    type = (LoadHtml_type*)uClassType::New("Fuse.Triggers.Actions.LoadHtml", options);
    type->fp_build_ = LoadHtml_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadHtml__Execute_fn;
    type->interface0.fp_get_Source = (void(*)(uObject*, uString**))LoadHtml__get_Source_fn;
    type->interface0.fp_set_Source = (void(*)(uObject*, uString*))LoadHtml__set_Source_fn;
    return type;
}

// public generated string get_BaseUrl() :117
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :117
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value)
{
    __this->BaseUrl(value);
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :119
void LoadHtml__Execute_fn(LoadHtml* __this, ::g::Fuse::Controls::WebView* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Source(), ::STRINGS[4/*""*/]))
        uPtr(webview)->LoadHtml1(__this->Source(), __this->BaseUrl());
}

// public generated string get_Source() :98
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(string value) :98
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value)
{
    __this->Source(value);
}

// public generated string get_BaseUrl() [instance] :117
uString* LoadHtml::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :117
void LoadHtml::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated string get_Source() [instance] :98
uString* LoadHtml::Source()
{
    return _Source;
}

// public generated void set_Source(string value) [instance] :98
void LoadHtml::Source(uString* value)
{
    _Source = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/WebViewNavActions.uno
// -------------------------------------------------------------------------------

// public sealed class LoadUrl :52
// {
static void LoadUrl_build(uType* type)
{
    ::STRINGS[4] = uString::Const("");
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(LoadUrl, _Url), 0);
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(LoadUrl);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.LoadUrl", options);
    type->fp_build_ = LoadUrl_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))LoadUrl__Execute_fn;
    return type;
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :57
void LoadUrl__Execute_fn(LoadUrl* __this, ::g::Fuse::Controls::WebView* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Url(), ::STRINGS[4/*""*/]))
        uPtr(webview)->LoadUrl(__this->Url());
}

// public generated string get_Url() :55
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public generated void set_Url(string value) :55
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value)
{
    __this->Url(value);
}

// public generated string get_Url() [instance] :55
uString* LoadUrl::Url()
{
    return _Url;
}

// public generated void set_Url(string value) [instance] :55
void LoadUrl::Url(uString* value)
{
    _Url = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Playback.uno
// ----------------------------------------------------------------------

// public sealed class Pause :144
// {
static void Pause_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(9);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Pause);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pause", options);
    type->fp_build_ = Pause_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pause__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :146
void Pause__Perform_fn(Pause* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[15/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(t), ::TYPES[16/*Fuse.Triggers.IPlayback*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Playback.uno
// ----------------------------------------------------------------------

// public sealed class Play :213
// {
static void Play_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(9);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Play_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Play);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Play", options);
    type->fp_build_ = Play_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Play__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :215
void Play__Perform_fn(Play* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[15/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(t), ::TYPES[16/*Fuse.Triggers.IPlayback*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Playback.uno
// ----------------------------------------------------------------------

// public abstract class PlaybackAction :41
// {
static void PlaybackAction_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(PlaybackAction, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlaybackAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlaybackAction", options);
    type->fp_build_ = PlaybackAction_build;
    return type;
}

// public generated Fuse.Triggers.IPlayback get_Target() :43
void PlaybackAction__get_Target_fn(PlaybackAction* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) :43
void PlaybackAction__set_Target_fn(PlaybackAction* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.IPlayback get_Target() [instance] :43
uObject* PlaybackAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) [instance] :43
void PlaybackAction::Target(uObject* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Playback.uno
// ----------------------------------------------------------------------

// public sealed class PlayTo :281
// {
static void PlayTo_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(9,
        ::g::Uno::Double_typeof(), offsetof(PlayTo, _Progress), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(PlayTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlayTo", options);
    type->fp_build_ = PlayTo_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PlayTo__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :291
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[15/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::PlayTo(uInterface(uPtr(t), ::TYPES[16/*Fuse.Triggers.IPlayback*/]), __this->Progress());
}

// public generated double get_Progress() :283
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value) :283
void PlayTo__set_Progress_fn(PlayTo* __this, double* value)
{
    __this->Progress(*value);
}

// public generated double get_Progress() [instance] :283
double PlayTo::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance] :283
void PlayTo::Progress(double value)
{
    _Progress = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Pulse.uno
// -------------------------------------------------------------------

// public sealed class Pulse :21
// {
static void Pulse_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Triggers::IPulseTrigger_typeof();
    type->SetFields(8,
        ::TYPES[17/*Fuse.Triggers.IPulseTrigger*/], offsetof(Pulse, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Pulse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pulse", options);
    type->fp_build_ = Pulse_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pulse__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :25
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target)
{
    uObject* t = __this->Target();

    if (t != NULL)
        ::g::Fuse::Triggers::IPulseTrigger::Pulse(uInterface(uPtr(t), ::TYPES[17/*Fuse.Triggers.IPulseTrigger*/]));
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() :23
void Pulse__get_Target_fn(Pulse* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) :23
void Pulse__set_Target_fn(Pulse* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() [instance] :23
uObject* Pulse::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) [instance] :23
void Pulse::Target(uObject* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Pulse.uno
// -------------------------------------------------------------------

// public sealed class PulseBackward :36
// {
static void PulseBackward_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(PulseBackward, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PulseBackward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseBackward", options);
    type->fp_build_ = PulseBackward_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseBackward__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :40
void PulseBackward__Perform_fn(PulseBackward* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseBackward1();
}

// public generated Fuse.Triggers.Timeline get_Target() :38
void PulseBackward__get_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :38
void PulseBackward__set_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :38
::g::Fuse::Triggers::Timeline* PulseBackward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :38
void PulseBackward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Pulse.uno
// -------------------------------------------------------------------

// public sealed class PulseForward :51
// {
static void PulseForward_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(PulseForward, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PulseForward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseForward", options);
    type->fp_build_ = PulseForward_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseForward__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :55
void PulseForward__Perform_fn(PulseForward* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseForward();
}

// public generated Fuse.Triggers.Timeline get_Target() :53
void PulseForward__get_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :53
void PulseForward__set_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :53
::g::Fuse::Triggers::Timeline* PulseForward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :53
void PulseForward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/RaiseUserEvent.uno
// ----------------------------------------------------------------------

// public sealed class RaiseUserEvent :40
// {
static void RaiseUserEvent_build(uType* type)
{
    ::STRINGS[7] = uString::Const("no UserEvent found: ");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/RaiseUserEvent.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[22] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetFields(8,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof(), NULL), offsetof(RaiseUserEvent, _args), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(RaiseUserEvent, _event), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(RaiseUserEvent, _eventName), 0,
        ::g::Fuse::Node_typeof(), offsetof(RaiseUserEvent, _eventTarget), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(RaiseUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.RaiseUserEvent", options);
    type->fp_build_ = RaiseUserEvent_build;
    type->fp_ctor_ = (void*)RaiseUserEvent__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RaiseUserEvent__Perform_fn;
    return type;
}

// public generated RaiseUserEvent() :40
void RaiseUserEvent__ctor_2_fn(RaiseUserEvent* __this)
{
    __this->ctor_2();
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() :91
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->ConvertArgs();
}

// public Uno.UX.Selector get_EventName() :48
void RaiseUserEvent__get_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->EventName();
}

// public void set_EventName(Uno.UX.Selector value) :49
void RaiseUserEvent__set_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* value)
{
    __this->EventName(*value);
}

// public generated RaiseUserEvent New() :40
void RaiseUserEvent__New2_fn(RaiseUserEvent** __retval)
{
    *__retval = RaiseUserEvent::New2();
}

// protected override sealed void Perform(Fuse.Node target) :76
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target)
{
    if ((__this->_event == NULL) || (__this->_eventTarget != target))
    {
        ::g::Fuse::Visual* n;
        __this->_event = ::g::Fuse::UserEvent::ScanTree(target, __this->EventName(), &n);
        __this->_eventTarget = target;
    }

    if (__this->_event == NULL)
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[7/*"no UserEven...*/], ::g::Uno::UX::Selector__op_Implicit1(__this->EventName())), __this, ::STRINGS[8/*"/usr/local/...*/], 86, ::STRINGS[2/*"Perform"*/], NULL);
    else
        uPtr(__this->_event)->Raise(__this->ConvertArgs());
}

// public generated RaiseUserEvent() [instance] :40
void RaiseUserEvent::ctor_2()
{
    ctor_1();
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() [instance] :91
::g::Uno::Collections::Dictionary* RaiseUserEvent::ConvertArgs()
{
    ::g::Fuse::Triggers::Actions::UserEventArg* ret3;

    if ((_args == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_args), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/])) == 0))
        return NULL;

    ::g::Uno::Collections::Dictionary* d = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[19/*Uno.Collections.Dictionary<string, object>*/]);
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_args), ::TYPES[20/*Uno.Collections.IEnumerable<Fuse.Triggers.Actions.UserEventArg>*/]));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[23/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[21/*Uno.Collections.IEnumerator*/])))
        {
            ::g::Fuse::Triggers::Actions::UserEventArg* arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[22/*Uno.Collections.IEnumerator<Fuse.Triggers.Actions.UserEventArg>*/]), &ret3), ret3);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(d), uPtr(arg)->Name(), uPtr(arg)->Value());
        }
    }

    return d;
}

// public Uno.UX.Selector get_EventName() [instance] :48
::g::Uno::UX::Selector RaiseUserEvent::EventName()
{
    return _eventName;
}

// public void set_EventName(Uno.UX.Selector value) [instance] :49
void RaiseUserEvent::EventName(::g::Uno::UX::Selector value)
{
    _eventName = value;
    _event = NULL;
}

// public generated RaiseUserEvent New() [static] :40
RaiseUserEvent* RaiseUserEvent::New2()
{
    RaiseUserEvent* obj2 = (RaiseUserEvent*)uNew(RaiseUserEvent_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Focus.uno
// -------------------------------------------------------------------

// public sealed class ReleaseFocus :49
// {
static void ReleaseFocus_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ReleaseFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleaseFocus", options);
    type->fp_build_ = ReleaseFocus_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleaseFocus__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :51
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Input::Focus::GiveTo(NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/NavigationActions.uno
// ----------------------------------------------------------------------------------

// public sealed class ReleasePage :16
// {
static void ReleasePage_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Requires a Visual and Navigator parent");
    ::STRINGS[10] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/NavigationActions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[24] = ::g::Fuse::Controls::Navigator_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8,
        ::TYPES[24/*Fuse.Controls.Navigator*/], offsetof(ReleasePage, _pendNavigator), 0,
        ::g::Fuse::Visual_typeof(), offsetof(ReleasePage, _pendVisual), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ReleasePage_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ReleasePage);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleasePage", options);
    type->fp_build_ = ReleasePage_build;
    type->fp_ctor_ = (void*)ReleasePage__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleasePage__Perform_fn;
    return type;
}

// public generated ReleasePage() :16
void ReleasePage__ctor_2_fn(ReleasePage* __this)
{
    __this->ctor_2();
}

// private void DeferredRelease() :35
void ReleasePage__DeferredRelease_fn(ReleasePage* __this)
{
    __this->DeferredRelease();
}

// public generated ReleasePage New() :16
void ReleasePage__New2_fn(ReleasePage** __retval)
{
    *__retval = ReleasePage::New2();
}

// protected override sealed void Perform(Fuse.Node n) :20
void ReleasePage__Perform_fn(ReleasePage* __this, ::g::Fuse::Node* n)
{
    __this->_pendVisual = ((::g::Fuse::Visual*)uPtr(n)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]));
    __this->_pendNavigator = ((__this->_pendVisual == NULL) ? uCast< ::g::Fuse::Controls::Navigator*>(NULL, ::TYPES[24/*Fuse.Controls.Navigator*/]) : uAs< ::g::Fuse::Controls::Navigator*>(uPtr(__this->_pendVisual)->Parent(), ::TYPES[24/*Fuse.Controls.Navigator*/]));

    if ((__this->_pendVisual == NULL) || (__this->_pendNavigator == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"Requires a ...*/], __this, ::STRINGS[10/*"/usr/local/...*/], 26, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)ReleasePage__DeferredRelease_fn, __this), -1, 2);
}

// public generated ReleasePage() [instance] :16
void ReleasePage::ctor_2()
{
    ctor_1();
}

// private void DeferredRelease() [instance] :35
void ReleasePage::DeferredRelease()
{
    if ((_pendNavigator == NULL) || (_pendVisual == NULL))
        return;

    uPtr(_pendNavigator)->ReleasePage(_pendVisual);
    _pendNavigator = NULL;
    _pendVisual = NULL;
}

// public generated ReleasePage New() [static] :16
ReleasePage* ReleasePage::New2()
{
    ReleasePage* obj1 = (ReleasePage*)uNew(ReleasePage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/WebViewNavActions.uno
// -------------------------------------------------------------------------------

// public sealed class Reload :28
// {
static void Reload_build(uType* type)
{
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Reload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.Reload", options);
    type->fp_build_ = Reload_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))Reload__Execute_fn;
    return type;
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :30
void Reload__Execute_fn(Reload* __this, ::g::Fuse::Controls::WebView* webview)
{
    uPtr(webview)->Reload();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/1.3.1/Triggers/BringToFront.uno
// ---------------------------------------------------------------------------

// public sealed class SendToBack :82
// {
static void SendToBack_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::TYPES[2/*Fuse.Visual*/], offsetof(SendToBack, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(SendToBack);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.SendToBack", options);
    type->fp_build_ = SendToBack_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SendToBack__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :86
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Visual* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Visual* elm = (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]);

    if (elm != NULL)
    {
        ::g::Fuse::Visual* panel = uAs< ::g::Fuse::Visual*>(uPtr(elm)->Parent(), ::TYPES[2/*Fuse.Visual*/]);

        if (panel != NULL)
            uPtr(panel)->SendToBack(elm);
    }
}

// public generated Fuse.Visual get_Target() :84
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :84
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance] :84
::g::Fuse::Visual* SendToBack::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :84
void SendToBack::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Set.uno
// -----------------------------------------------------------------

// public sealed class Set<T> :35
// {
static void Set_build(uType* type)
{
    ::STRINGS[11] = uString::Const("target");
    type->SetFields(8,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(Set, _blender), 0,
        ::g::Uno::Bool_typeof(), offsetof(Set, _hasIncrement), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0), NULL), offsetof(Set, _Expression), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(Set, _Target), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 14;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Set);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Set`1", options);
    type->fp_build_ = Set_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Set__Perform_fn;
    return type;
}

// public Set(Uno.UX.Property<T> target) :60
void Set__ctor_2_fn(Set* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_2(target);
}

// public generated Uno.UX.Expression<T> get_Expression() :57
void Set__get_Expression_fn(Set* __this, uDelegate** __retval)
{
    *__retval = __this->Expression();
}

// public generated void set_Expression(Uno.UX.Expression<T> value) :57
void Set__set_Expression_fn(Set* __this, uDelegate* value)
{
    __this->Expression(value);
}

// public Set New(Uno.UX.Property<T> target) :60
void Set__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Set** __retval)
{
    *__retval = Set::New2(__type, target);
}

// protected override sealed void Perform(Fuse.Node target) :72
void Set__Perform_fn(Set* __this, ::g::Fuse::Node* target)
{
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret4(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret5(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));

    if (__this->_hasIncrement)
        Set__Update_fn(__this, (uPtr(__this->_blender)->Add_ex((::g::Uno::UX::Property1__Get_fn(uPtr(__this->Target()), &ret3), ret3), __this->_increment(), &ret2), ret2));
    else if (::g::Uno::Delegate::op_Inequality(__this->Expression(), NULL))
        Set__Update_fn(__this, (uPtr(__this->Expression())->Invoke(&ret4), ret4));
    else
        Set__Update_fn(__this, (Set__get_Value_fn(__this, &ret5), ret5));
}

// public generated Uno.UX.Property<T> get_Target() :48
void Set__get_Target_fn(Set* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :48
void Set__set_Target_fn(Set* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void Update(T value) :67
void Set__Update_fn(Set* __this, void* value)
{
    ::g::Uno::UX::Property1__Set_fn(uPtr(__this->Target()), value, NULL);
}

// public generated T get_Value() :54
void Set__get_Value_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// public generated void set_Value(T value) :54
void Set__set_Value_fn(Set* __this, void* value)
{
    __this->_Value() = value;
}

// public Set(Uno.UX.Property<T> target) [instance] :60
void Set::ctor_2(::g::Uno::UX::Property1* target)
{
    ctor_1();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[11/*"target"*/]));

    Target(target);
}

// public generated Uno.UX.Expression<T> get_Expression() [instance] :57
uDelegate* Set::Expression()
{
    return _Expression;
}

// public generated void set_Expression(Uno.UX.Expression<T> value) [instance] :57
void Set::Expression(uDelegate* value)
{
    _Expression = value;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :48
::g::Uno::UX::Property1* Set::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :48
void Set::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public Set New(Uno.UX.Property<T> target) [static] :60
Set* Set::New2(uType* __type, ::g::Uno::UX::Property1* target)
{
    Set* obj1 = (Set*)uNew(__type);
    obj1->ctor_2(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Visibility.uno
// ------------------------------------------------------------------------

// public sealed class Show :30
// {
static void Show_build(uType* type)
{
    ::STRINGS[12] = uString::Const("Cannot find an Element/IShow");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Visibility.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[26] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.IShow>*/, ::g::Fuse::Triggers::Actions::IShow_typeof(), NULL);
    ::TYPES[27] = ::g::Fuse::Triggers::Actions::IShow_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Show);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Show", options);
    type->fp_build_ = Show_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Show__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :32
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target)
{
    uObject* t = (uObject*)uPtr(target)->FindByType(::TYPES[26/*Fuse.Node.FindByType<Fuse.Triggers.Actions.IShow>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::Actions::IShow::Show(uInterface(uPtr(t), ::TYPES[27/*Fuse.Triggers.Actions.IShow*/]));
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"Cannot find...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 38, ::STRINGS[2/*"Perform"*/], NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Playback.uno
// ----------------------------------------------------------------------

// public sealed class Stop :112
// {
static void Stop_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.IPlayback>*/, ::g::Fuse::Triggers::IPlayback_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(9);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Stop);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Stop", options);
    type->fp_build_ = Stop_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Stop__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :114
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[15/*Fuse.Node.FindByType<Fuse.Triggers.IPlayback>*/]);

    if (t != NULL)
        ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(t), ::TYPES[16/*Fuse.Triggers.IPlayback*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/WebViewNavActions.uno
// -------------------------------------------------------------------------------

// public sealed class StopLoading :40
// {
static void StopLoading_build(uType* type)
{
    type->SetFields(8);
}

::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::WebViewNavAction_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(StopLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.StopLoading", options);
    type->fp_build_ = StopLoading_build;
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*))StopLoading__Execute_fn;
    return type;
}

// private override sealed void Execute(Fuse.Controls.WebView webview) :42
void StopLoading__Execute_fn(StopLoading* __this, ::g::Fuse::Controls::WebView* webview)
{
    uPtr(webview)->Stop();
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/TimelineAction.uno
// ----------------------------------------------------------------------------

// public sealed class TimelineAction :32
// {
static void TimelineAction_build(uType* type)
{
    ::STRINGS[13] = uString::Const("`TimelineAction` called without a `Timeline` `Target`");
    ::STRINGS[14] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/TimelineAction.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8,
        ::g::Fuse::Triggers::Actions::TimelineActionHow_typeof(), offsetof(TimelineAction, _How), 0,
        ::g::Uno::Double_typeof(), offsetof(TimelineAction, _Progress), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(TimelineAction, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TimelineAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TimelineAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TimelineAction", options);
    type->fp_build_ = TimelineAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TimelineAction__Perform_fn;
    return type;
}

// public generated Fuse.Triggers.Actions.TimelineActionHow get_How() :36
void TimelineAction__get_How_fn(TimelineAction* __this, int* __retval)
{
    *__retval = __this->How();
}

// public generated void set_How(Fuse.Triggers.Actions.TimelineActionHow value) :36
void TimelineAction__set_How_fn(TimelineAction* __this, int* value)
{
    __this->How(*value);
}

// protected override sealed void Perform(Fuse.Node target) :43
void TimelineAction__Perform_fn(TimelineAction* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[13/*"`TimelineAc...*/], __this, ::STRINGS[14/*"/usr/local/...*/], 48, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    switch (__this->How())
    {
        case 0:
        {
            uPtr(t)->Pause();
            break;
        }
        case 2:
        {
            uPtr(t)->PlayTo1(__this->Progress());
            break;
        }
        case 3:
        {
            uPtr(t)->Pulse1();
            break;
        }
        case 4:
        {
            uPtr(t)->PulseBackward1();
            break;
        }
        case 5:
        {
            uPtr(t)->PulseForward();
            break;
        }
        case 1:
        case 6:
        {
            uPtr(t)->Resume();
            break;
        }
        case 7:
        {
            uPtr(t)->Progress1(__this->Progress());
            break;
        }
        case 8:
        {
            uPtr(t)->Stop1();
            break;
        }
    }
}

// public generated double get_Progress() :41
void TimelineAction__get_Progress_fn(TimelineAction* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value) :41
void TimelineAction__set_Progress_fn(TimelineAction* __this, double* value)
{
    __this->Progress(*value);
}

// public generated Fuse.Triggers.Timeline get_Target() :34
void TimelineAction__get_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :34
void TimelineAction__set_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Actions.TimelineActionHow get_How() [instance] :36
int TimelineAction::How()
{
    return _How;
}

// public generated void set_How(Fuse.Triggers.Actions.TimelineActionHow value) [instance] :36
void TimelineAction::How(int value)
{
    _How = value;
}

// public generated double get_Progress() [instance] :41
double TimelineAction::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance] :41
void TimelineAction::Progress(double value)
{
    _Progress = value;
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :34
::g::Fuse::Triggers::Timeline* TimelineAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :34
void TimelineAction::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/TimelineAction.uno
// ----------------------------------------------------------------------------

// public enum TimelineActionHow :5
uEnumType* TimelineActionHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TimelineActionHow", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Pause", 0LL,
        "Play", 1LL,
        "PlayTo", 2LL,
        "Pulse", 3LL,
        "PulseBackward", 4LL,
        "PulseForward", 5LL,
        "Resume", 6LL,
        "Seek", 7LL,
        "Stop", 8LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Toggle.uno
// --------------------------------------------------------------------

// public sealed class Toggle :29
// {
static void Toggle_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Could not find `IToggleable` target");
    ::STRINGS[16] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Toggle.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[28] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Triggers.Actions.IToggleable>*/, ::g::Fuse::Triggers::Actions::IToggleable_typeof(), NULL);
    ::TYPES[29] = ::g::Fuse::Triggers::Actions::IToggleable_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8,
        ::TYPES[29/*Fuse.Triggers.Actions.IToggleable*/], offsetof(Toggle, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Toggle);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Toggle", options);
    type->fp_build_ = Toggle_build;
    type->fp_ctor_ = (void*)Toggle__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Toggle__Perform_fn;
    return type;
}

// public generated Toggle() :29
void Toggle__ctor_2_fn(Toggle* __this)
{
    __this->ctor_2();
}

// public generated Toggle New() :29
void Toggle__New2_fn(Toggle** __retval)
{
    *__retval = Toggle::New2();
}

// protected override sealed void Perform(Fuse.Node target) :36
void Toggle__Perform_fn(Toggle* __this, ::g::Fuse::Node* target)
{
    uObject* ind1;
    ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)uPtr(target)->FindByType(::TYPES[28/*Fuse.Node.FindByType<Fuse.Triggers.Actions.IToggleable>*/]);

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[15/*"Could not f...*/], __this, ::STRINGS[16/*"/usr/local/...*/], 41, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::Triggers::Actions::IToggleable::Toggle(uInterface(uPtr(t), ::TYPES[29/*Fuse.Triggers.Actions.IToggleable*/]));
}

// public generated Fuse.Triggers.Actions.IToggleable get_Target() :34
void Toggle__get_Target_fn(Toggle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Actions.IToggleable value) :34
void Toggle__set_Target_fn(Toggle* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Toggle() [instance] :29
void Toggle::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Triggers.Actions.IToggleable get_Target() [instance] :34
uObject* Toggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Actions.IToggleable value) [instance] :34
void Toggle::Target(uObject* value)
{
    _Target = value;
}

// public generated Toggle New() [static] :29
Toggle* Toggle::New2()
{
    Toggle* obj2 = (Toggle*)uNew(Toggle_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Triggers/LayoutAnimation.uno
// ------------------------------------------------------------------------------

// public sealed class TransitionLayout :342
// {
static void TransitionLayout_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Missing `From` or cannot find `Element` target");
    ::STRINGS[18] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Triggers/LayoutAnimation.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetFields(8,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(TransitionLayout, _perform), 0,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(TransitionLayout, _From), 0,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(TransitionLayout, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TransitionLayout);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionLayout", options);
    type->fp_build_ = TransitionLayout_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionLayout__Perform_fn;
    return type;
}

// public generated Fuse.Elements.Element get_From() :347
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->From();
}

// public generated void set_From(Fuse.Elements.Element value) :347
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->From(value);
}

// protected override sealed void Perform(Fuse.Node target) :349
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Elements::Element* ind1;
    __this->_perform = (ind1 = __this->Target(), ((ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Elements::Element*>((::g::Fuse::Visual*)uPtr(target)->FindByType(::TYPES[1/*Fuse.Node.FindByType<Fuse.Visual>*/]), ::TYPES[0/*Fuse.Elements.Element*/])));

    if ((__this->_perform == NULL) || (__this->From() == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[17/*"Missing `Fr...*/], __this, ::STRINGS[18/*"/usr/local/...*/], 355, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)TransitionLayout__Transition_fn, __this), 1, 3);
}

// public generated Fuse.Elements.Element get_Target() :345
void TransitionLayout__get_Target_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Elements.Element value) :345
void TransitionLayout__set_Target_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// private void Transition() :364
void TransitionLayout__Transition_fn(TransitionLayout* __this)
{
    __this->Transition();
}

// public generated Fuse.Elements.Element get_From() [instance] :347
::g::Fuse::Elements::Element* TransitionLayout::From()
{
    return _From;
}

// public generated void set_From(Fuse.Elements.Element value) [instance] :347
void TransitionLayout::From(::g::Fuse::Elements::Element* value)
{
    _From = value;
}

// public generated Fuse.Elements.Element get_Target() [instance] :345
::g::Fuse::Elements::Element* TransitionLayout::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Elements.Element value) [instance] :345
void TransitionLayout::Target(::g::Fuse::Elements::Element* value)
{
    _Target = value;
}

// private void Transition() [instance] :364
void TransitionLayout::Transition()
{
    ::g::Uno::Float4x4 ind2;
    ind2 = uPtr(From())->LocalTransform();
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind2.M41, ind2.M42);
    ::g::Uno::Float2 oldSize = uPtr(From())->ActualSize();
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(From())->WorldTransform(), uPtr(uPtr(_perform)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_perform)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_perform, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_perform, oldPosition, uPtr(_perform)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_perform, oldSize, uPtr(_perform)->IntendedSize());
    uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned())->RaiseWithoutBubble(::g::Fuse::Triggers::LayoutTransitionedArgs::New3(_perform), 0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/StateTransition.uno
// -----------------------------------------------------------------------------

// public sealed class TransitionState :13
// {
static void TransitionState_build(uType* type)
{
    ::STRINGS[19] = uString::Const("Missing `Target`");
    ::STRINGS[20] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/StateTransition.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(TransitionState, _Target), 0,
        ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), offsetof(TransitionState, _Type), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TransitionState);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionState", options);
    type->fp_build_ = TransitionState_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionState__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :19
void TransitionState__Perform_fn(TransitionState* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::StateGroup* t = __this->Target();

    if (t == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[19/*"Missing `Ta...*/], __this, ::STRINGS[20/*"/usr/local/...*/], 24, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    switch (__this->Type())
    {
        case 0:
        {
            uPtr(t)->GotoNextState();
            break;
        }
    }
}

// public generated Fuse.Triggers.StateGroup get_Target() :15
void TransitionState__get_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) :15
void TransitionState__set_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() :17
void TransitionState__get_Type_fn(TransitionState* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) :17
void TransitionState__set_Type_fn(TransitionState* __this, int* value)
{
    __this->Type(*value);
}

// public generated Fuse.Triggers.StateGroup get_Target() [instance] :15
::g::Fuse::Triggers::StateGroup* TransitionState::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) [instance] :15
void TransitionState::Target(::g::Fuse::Triggers::StateGroup* value)
{
    _Target = value;
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() [instance] :17
int TransitionState::Type()
{
    return _Type;
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) [instance] :17
void TransitionState::Type(int value)
{
    _Type = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/StateTransition.uno
// -----------------------------------------------------------------------------

// public enum TransitionStateType :5
uEnumType* TransitionStateType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TransitionStateType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Next", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/TriggerAction.uno
// ---------------------------------------------------------------------------

// public abstract class TriggerAction :30
// {
static void TriggerAction_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Float_typeof(), offsetof(TriggerAction, _delay), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAction, _hasDelay), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAction, _hasProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAction, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(TriggerAction, _progress), 0,
        ::g::Fuse::Triggers::Actions::TriggerWhen_typeof(), offsetof(TriggerAction, _when), 0,
        ::g::Fuse::Node_typeof(), offsetof(TriggerAction, _TargetNode), 0);
}

TriggerAction_type* TriggerAction_typeof()
{
    static uSStrong<TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TriggerAction);
    options.TypeSize = sizeof(TriggerAction_type);
    type = (TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TriggerAction", options);
    type->fp_build_ = TriggerAction_build;
    type->fp_OnUnrooted = TriggerAction__OnUnrooted_fn;
    return type;
}

// protected generated TriggerAction() :30
void TriggerAction__ctor_1_fn(TriggerAction* __this)
{
    __this->ctor_1();
}

// public float get_AtProgress() :70
void TriggerAction__get_AtProgress_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->AtProgress();
}

// public void set_AtProgress(float value) :71
void TriggerAction__set_AtProgress_fn(TriggerAction* __this, float* value)
{
    __this->AtProgress(*value);
}

// public float get_Delay() :80
void TriggerAction__get_Delay_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->Delay();
}

// public void set_Delay(float value) :81
void TriggerAction__set_Delay_fn(TriggerAction* __this, float* value)
{
    __this->Delay(*value);
}

// public bool get_IsActive() :96
void TriggerAction__get_IsActive_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :97
void TriggerAction__set_IsActive_fn(TriggerAction* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsProgressTriggered() :90
void TriggerAction__get_IsProgressTriggered_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsProgressTriggered();
}

// protected virtual void OnUnrooted() :130
void TriggerAction__OnUnrooted_fn(TriggerAction* __this)
{
}

// public void PerformFromNode(Fuse.Node target) :109
void TriggerAction__PerformFromNode_fn(TriggerAction* __this, ::g::Fuse::Node* target)
{
    __this->PerformFromNode(target);
}

// public float ProgressWhen(float totalDuration) :100
void TriggerAction__ProgressWhen_fn(TriggerAction* __this, float* totalDuration, float* __retval)
{
    *__retval = __this->ProgressWhen(*totalDuration);
}

// public generated Fuse.Node get_TargetNode() :56
void TriggerAction__get_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->TargetNode();
}

// public generated void set_TargetNode(Fuse.Node value) :56
void TriggerAction__set_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node* value)
{
    __this->TargetNode(value);
}

// public void Unroot() :125
void TriggerAction__Unroot_fn(TriggerAction* __this)
{
    __this->Unroot();
}

// public Fuse.Triggers.Actions.TriggerWhen get_When() :35
void TriggerAction__get_When_fn(TriggerAction* __this, int* __retval)
{
    *__retval = __this->When();
}

// public void set_When(Fuse.Triggers.Actions.TriggerWhen value) :36
void TriggerAction__set_When_fn(TriggerAction* __this, int* value)
{
    __this->When(*value);
}

// protected generated TriggerAction() [instance] :30
void TriggerAction::ctor_1()
{
    _isActive = true;
    ctor_();
}

// public float get_AtProgress() [instance] :70
float TriggerAction::AtProgress()
{
    return _progress;
}

// public void set_AtProgress(float value) [instance] :71
void TriggerAction::AtProgress(float value)
{
    _hasProgress = true;
    _progress = value;
}

// public float get_Delay() [instance] :80
float TriggerAction::Delay()
{
    return _delay;
}

// public void set_Delay(float value) [instance] :81
void TriggerAction::Delay(float value)
{
    _hasDelay = true;
    _delay = value;
}

// public bool get_IsActive() [instance] :96
bool TriggerAction::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :97
void TriggerAction::IsActive(bool value)
{
    _isActive = value;
}

// public bool get_IsProgressTriggered() [instance] :90
bool TriggerAction::IsProgressTriggered()
{
    return _hasProgress || _hasDelay;
}

// public void PerformFromNode(Fuse.Node target) [instance] :109
void TriggerAction::PerformFromNode(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1;

    if (IsActive())
        Perform((ind1 = TargetNode(), (ind1 != NULL) ? ind1 : target));
}

// public float ProgressWhen(float totalDuration) [instance] :100
float TriggerAction::ProgressWhen(float totalDuration)
{
    if (_hasProgress)
        return _progress;

    if (_hasDelay)
        return _delay / totalDuration;

    return 0.0f;
}

// public generated Fuse.Node get_TargetNode() [instance] :56
::g::Fuse::Node* TriggerAction::TargetNode()
{
    return _TargetNode;
}

// public generated void set_TargetNode(Fuse.Node value) [instance] :56
void TriggerAction::TargetNode(::g::Fuse::Node* value)
{
    _TargetNode = value;
}

// public void Unroot() [instance] :125
void TriggerAction::Unroot()
{
    OnUnrooted();
}

// public Fuse.Triggers.Actions.TriggerWhen get_When() [instance] :35
int TriggerAction::When()
{
    return _when;
}

// public void set_When(Fuse.Triggers.Actions.TriggerWhen value) [instance] :36
void TriggerAction::When(int value)
{
    _when = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/TriggerAction.uno
// ---------------------------------------------------------------------------

// public enum TriggerWhen :6
uEnumType* TriggerWhen_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TriggerWhen", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL,
        "ForwardAndBackward", 2LL,
        "Start", 3LL,
        "Stop", 4LL,
        "Both", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/RaiseUserEvent.uno
// ----------------------------------------------------------------------

// public sealed class UserEventArg :132
// {
static void UserEventArg_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(UserEventArg, _Name), 0,
        uObject_typeof(), offsetof(UserEventArg, _Value), 0);
}

uType* UserEventArg_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UserEventArg);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.Actions.UserEventArg", options);
    type->fp_build_ = UserEventArg_build;
    return type;
}

// public generated string get_Name() :137
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :137
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value)
{
    __this->Name(value);
}

// public generated object get_Value() :148
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(object value) :148
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value)
{
    __this->Value(value);
}

// public generated string get_Name() [instance] :137
uString* UserEventArg::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :137
void UserEventArg::Name(uString* value)
{
    _Name = value;
}

// public generated object get_Value() [instance] :148
uObject* UserEventArg::Value()
{
    return _Value;
}

// public generated void set_Value(object value) [instance] :148
void UserEventArg::Value(uObject* value)
{
    _Value = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/WebViewNavActions.uno
// -------------------------------------------------------------------------------

// public abstract class WebViewNavAction :9
// {
static void WebViewNavAction_build(uType* type)
{
    ::TYPES[30] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.WebView>*/, ::g::Fuse::Controls::WebView_typeof(), NULL);
    type->SetFields(8);
}

WebViewNavAction_type* WebViewNavAction_typeof()
{
    static uSStrong<WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(WebViewNavAction);
    options.TypeSize = sizeof(WebViewNavAction_type);
    type = (WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.WebViewNavAction", options);
    type->fp_build_ = WebViewNavAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))WebViewNavAction__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :13
void WebViewNavAction__Perform_fn(WebViewNavAction* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Controls::WebView* webView = (::g::Fuse::Controls::WebView*)uPtr(target)->FindByType(::TYPES[30/*Fuse.Node.FindByType<Fuse.Controls.WebView>*/]);

    if (webView != NULL)
        __this->Execute(webView);
}
// }

}}}} // ::g::Fuse::Triggers::Actions
