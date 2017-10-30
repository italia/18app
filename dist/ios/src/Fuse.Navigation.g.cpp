// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.IArray.h>
#include <Fuse.Input.CaptureType.h>
#include <Fuse.Input.Gesture.h>
#include <Fuse.Input.GesturePriority.h>
#include <Fuse.Input.GesturePriorityConfig.h>
#include <Fuse.Input.GestureRequest.h>
#include <Fuse.Input.Gestures.h>
#include <Fuse.Input.GestureType.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Json.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Marshal.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.NameValuePair.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.ActivePageChangedHandler.h>
#include <Fuse.Navigation.AllowedNavigationDirections.h>
#include <Fuse.Navigation.BackButtonAction.h>
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
#include <Fuse.Navigation.DeactivatingAnimation.h>
#include <Fuse.Navigation.DirectNavigation.h>
#include <Fuse.Navigation.DynamicLinearNavigation.Desired.h>
#include <Fuse.Navigation.DynamicLinearNavigation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.EndSeekArgs.h>
#include <Fuse.Navigation.EnterExitAnimation.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Navigation.ExplicitNavigation.h>
#include <Fuse.Navigation.FindRouter.h>
#include <Fuse.Navigation.FindRouter.Subscription.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.GoForward.h>
#include <Fuse.Navigation.GotoRouteCommand.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.IPagePropertyListener.h>
#include <Fuse.Navigation.IPageResourceBinding.h>
#include <Fuse.Navigation.IRouterOutlet.h>
#include <Fuse.Navigation.ISeekableNavigation.h>
#include <Fuse.Navigation.ModifyRouteCommand.h>
#include <Fuse.Navigation.ModifyRouteHow.h>
#include <Fuse.Navigation.NavigatedArgs.h>
#include <Fuse.Navigation.NavigatedHandler.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.Navigation.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.NavigationGotoMode.h>
#include <Fuse.Navigation.NavigationHandler.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageCountHandler.h>
#include <Fuse.Navigation.NavigationPageProperty.h>
#include <Fuse.Navigation.NavigationPageProxy.h>
#include <Fuse.Navigation.NavigationPageProxy.StatusChangedHandler.h>
#include <Fuse.Navigation.NavigationPageState.h>
#include <Fuse.Navigation.NavigationState.h>
#include <Fuse.Navigation.NavigationTriggerAction.h>
#include <Fuse.Navigation.OutletType.h>
#include <Fuse.Navigation.PageData.h>
#include <Fuse.Navigation.PageExpression.h>
#include <Fuse.Navigation.PageExpression.Subscription.h>
#include <Fuse.Navigation.PageResourceBinding-1.h>
#include <Fuse.Navigation.PagesMap.h>
#include <Fuse.Navigation.PushRouteCommand.h>
#include <Fuse.Navigation.Route.h>
#include <Fuse.Navigation.RouteModificationCommand.ArgumentArrayAdapter.h>
#include <Fuse.Navigation.RouteModificationCommand.h>
#include <Fuse.Navigation.RouteModificationCommand.InnerSubscription.h>
#include <Fuse.Navigation.RouteModificationCommand.OuterSubscription.h>
#include <Fuse.Navigation.RoutePagePath.h>
#include <Fuse.Navigation.RoutePageProxy.ActiveChanged.h>
#include <Fuse.Navigation.RoutePageProxy.h>
#include <Fuse.Navigation.RoutePageProxy.Level.h>
#include <Fuse.Navigation.RoutePageProxy.ProgressUpdated.h>
#include <Fuse.Navigation.RoutePageTriggerWhen.h>
#include <Fuse.Navigation.Router.GetHistoryAt.h>
#include <Fuse.Navigation.Router.GetRouteCallback.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.Router.HistoryAction.h>
#include <Fuse.Navigation.Router.ScriptRouterRequest.h>
#include <Fuse.Navigation.RouterCancelNavigation.h>
#include <Fuse.Navigation.RouterModify.Flags.h>
#include <Fuse.Navigation.RouterModify.h>
#include <Fuse.Navigation.RouterPage.h>
#include <Fuse.Navigation.RouterPageChangedHandler.h>
#include <Fuse.Navigation.RouterRequest.Flags.h>
#include <Fuse.Navigation.RouterRequest.h>
#include <Fuse.Navigation.RoutingOperation.h>
#include <Fuse.Navigation.RoutingResult.h>
#include <Fuse.Navigation.SnapTo.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.NavigationStructure.h>
#include <Fuse.Navigation.SwipeDirection.h>
#include <Fuse.Navigation.SwipeNavigate.h>
#include <Fuse.Navigation.UpdateSeekArgs.h>
#include <Fuse.Navigation.VisualNavigation.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileCanGoBack.h>
#include <Fuse.Navigation.WhileCanGoForward.h>
#include <Fuse.Navigation.WhileHistoryTrigger.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Navigation.WhileInEnterState.h>
#include <Fuse.Navigation.WhileInExitState.h>
#include <Fuse.Navigation.WhileNavigating.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.NodeExpressionBinding.h>
#include <Fuse.Reactive.ObserverMap-1.h>
#include <Fuse.Reactive.VarArgFunction.Argument.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[58];
static uType* TYPES[46];

namespace g{
namespace Fuse{
namespace Navigation{

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public sealed class ActivatingAnimation :254
// {
static void ActivatingAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7));
    type->SetFields(41);
}

::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(ActivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ActivatingAnimation", options);
    type->fp_build_ = ActivatingAnimation_build;
    type->fp_ctor_ = (void*)ActivatingAnimation__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))ActivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))ActivatingAnimation__OnNavigationStateChanged_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated ActivatingAnimation() :254
void ActivatingAnimation__ctor_6_fn(ActivatingAnimation* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :256
void ActivatingAnimation__ForceUpdate_fn(ActivatingAnimation* __this)
{
    __this->Seek(__this->InvertProgress((double)(__this->Scale() * ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress)), 0);
}

// private double InvertProgress(double p) :261
void ActivatingAnimation__InvertProgress_fn(ActivatingAnimation* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated ActivatingAnimation New() :254
void ActivatingAnimation__New2_fn(ActivatingAnimation** __retval)
{
    *__retval = ActivatingAnimation::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :266
void ActivatingAnimation__OnNavigationStateChanged_fn(ActivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.Progress) < ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress(__this->InvertProgress((double)(__this->Scale() * ps.Progress)), d, state);
}

// public generated ActivatingAnimation() [instance] :254
void ActivatingAnimation::ctor_6()
{
    ctor_5();
}

// private double InvertProgress(double p) [instance] :261
double ActivatingAnimation::InvertProgress(double p)
{
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(p));
}

// public generated ActivatingAnimation New() [static] :254
ActivatingAnimation* ActivatingAnimation::New2()
{
    ActivatingAnimation* obj1 = (ActivatingAnimation*)uNew(ActivatingAnimation_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RoutePageProxy.uno
// ----------------------------------------------------------------------

// public delegate void RoutePageProxy.ActiveChanged(bool isActive, bool isRoot) :35
uDelegateType* RoutePageProxy__ActiveChanged_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.RoutePageProxy.ActiveChanged", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Bool_typeof(),
        ::g::Uno::Bool_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// public delegate void ActivePageChangedHandler(object sender, Fuse.Visual active) :50
uDelegateType* ActivePageChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.ActivePageChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Visual_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/SwipeNavigate.uno
// ---------------------------------------------------------------------

// public enum AllowedNavigationDirections :76
uEnumType* AllowedNavigationDirections_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.AllowedNavigationDirections", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 1LL,
        "Backward", 2LL,
        "Both", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// protected sealed class RouteModificationCommand.ArgumentArrayAdapter :121
// {
static void RouteModificationCommand__ArgumentArrayAdapter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(RouteModificationCommand__ArgumentArrayAdapter_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::VarArgFunction__Argument_typeof()->Array(), offsetof(RouteModificationCommand__ArgumentArrayAdapter, _args), 0);
}

RouteModificationCommand__ArgumentArrayAdapter_type* RouteModificationCommand__ArgumentArrayAdapter_typeof()
{
    static uSStrong<RouteModificationCommand__ArgumentArrayAdapter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RouteModificationCommand__ArgumentArrayAdapter);
    options.TypeSize = sizeof(RouteModificationCommand__ArgumentArrayAdapter_type);
    type = (RouteModificationCommand__ArgumentArrayAdapter_type*)uClassType::New("Fuse.Navigation.RouteModificationCommand.ArgumentArrayAdapter", options);
    type->fp_build_ = RouteModificationCommand__ArgumentArrayAdapter_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))RouteModificationCommand__ArgumentArrayAdapter__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))RouteModificationCommand__ArgumentArrayAdapter__get_Item_fn;
    return type;
}

// public ArgumentArrayAdapter(Fuse.Reactive.VarArgFunction.Argument[] args) :125
void RouteModificationCommand__ArgumentArrayAdapter__ctor__fn(RouteModificationCommand__ArgumentArrayAdapter* __this, uArray* args)
{
    __this->ctor_(args);
}

// public object get_Item(int index) :131
void RouteModificationCommand__ArgumentArrayAdapter__get_Item_fn(RouteModificationCommand__ArgumentArrayAdapter* __this, int* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :130
void RouteModificationCommand__ArgumentArrayAdapter__get_Length_fn(RouteModificationCommand__ArgumentArrayAdapter* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public ArgumentArrayAdapter New(Fuse.Reactive.VarArgFunction.Argument[] args) :125
void RouteModificationCommand__ArgumentArrayAdapter__New1_fn(uArray* args, RouteModificationCommand__ArgumentArrayAdapter** __retval)
{
    *__retval = RouteModificationCommand__ArgumentArrayAdapter::New1(args);
}

// public ArgumentArrayAdapter(Fuse.Reactive.VarArgFunction.Argument[] args) [instance] :125
void RouteModificationCommand__ArgumentArrayAdapter::ctor_(uArray* args)
{
    _args = args;
}

// public object get_Item(int index) [instance] :131
uObject* RouteModificationCommand__ArgumentArrayAdapter::Item(int index)
{
    return uPtr(uPtr(_args)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(index))->Value();
}

// public int get_Length() [instance] :130
int RouteModificationCommand__ArgumentArrayAdapter::Length()
{
    return uPtr(_args)->Length();
}

// public ArgumentArrayAdapter New(Fuse.Reactive.VarArgFunction.Argument[] args) [static] :125
RouteModificationCommand__ArgumentArrayAdapter* RouteModificationCommand__ArgumentArrayAdapter::New1(uArray* args)
{
    RouteModificationCommand__ArgumentArrayAdapter* obj1 = (RouteModificationCommand__ArgumentArrayAdapter*)uNew(RouteModificationCommand__ArgumentArrayAdapter_typeof());
    obj1->ctor_(args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno
// --------------------------------------------------------------

// public enum BackButtonAction :8
uEnumType* BackButtonAction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.BackButtonAction", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "GoBack", 0LL,
        "None", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno
// ----------------------------------------------------------------------

// public abstract class BackForwardNavigationTriggerAction :123
// {
static void BackForwardNavigationTriggerAction_build(uType* type)
{
    ::STRINGS[0] = uString::Const("No Navigation context was found");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetFields(8,
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(BackForwardNavigationTriggerAction, _NavigationContext), 0);
}

BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof()
{
    static uSStrong<BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(BackForwardNavigationTriggerAction);
    options.TypeSize = sizeof(BackForwardNavigationTriggerAction_type);
    type = (BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.BackForwardNavigationTriggerAction", options);
    type->fp_build_ = BackForwardNavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BackForwardNavigationTriggerAction__Perform_fn;
    return type;
}

// protected generated BackForwardNavigationTriggerAction() :123
void BackForwardNavigationTriggerAction__ctor_2_fn(BackForwardNavigationTriggerAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() :126
void BackForwardNavigationTriggerAction__get_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) :126
void BackForwardNavigationTriggerAction__set_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :128
void BackForwardNavigationTriggerAction__Perform_fn(BackForwardNavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uObject* ind1;
    ind1 = __this->NavigationContext();
    uObject* nav = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(n);

    if (nav != NULL)
        __this->Perform1(nav, n);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"No Navigati...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 135, ::STRINGS[2/*"Perform"*/], NULL);
}

// protected generated BackForwardNavigationTriggerAction() [instance] :123
void BackForwardNavigationTriggerAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() [instance] :126
uObject* BackForwardNavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) [instance] :126
void BackForwardNavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public sealed class DeactivatingAnimation :301
// {
static void DeactivatingAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7));
    type->SetFields(41);
}

::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(DeactivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.DeactivatingAnimation", options);
    type->fp_build_ = DeactivatingAnimation_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))DeactivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))DeactivatingAnimation__OnNavigationStateChanged_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected override sealed void ForceUpdate() :303
void DeactivatingAnimation__ForceUpdate_fn(DeactivatingAnimation* __this)
{
    __this->Seek((double)::g::Uno::Math::Abs1(__this->Scale() * ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress), 0);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :308
void DeactivatingAnimation__OnNavigationStateChanged_fn(DeactivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.Progress) > ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/DynamicLinearNavigation.uno
// -------------------------------------------------------------------------------

// private enum DynamicLinearNavigation.Desired :37
uEnumType* DynamicLinearNavigation__Desired_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.DynamicLinearNavigation.Desired", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Active", 1LL,
        "Index", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/DirectNavigation.uno
// ------------------------------------------------------------------------

// public sealed class DirectNavigation :16
// {
static void DirectNavigation_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Unexpected null page");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/DirectNavigation.uno");
    ::STRINGS[5] = uString::Const("SetProgressState");
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface7),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface8));
    type->SetFields(23,
        ::g::Fuse::Visual_typeof(), offsetof(DirectNavigation, _active), 0);
}

::g::Fuse::Navigation::VisualNavigation_type* DirectNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DirectNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.DirectNavigation", options);
    type->fp_build_ = DirectNavigation_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))DirectNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))DirectNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))DirectNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DirectNavigation__OnRooted_fn;
    type->interface6.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface6.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))DirectNavigation__Goto_fn;
    type->interface6.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface6.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface6.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface6.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface6.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface6.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface6.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface6.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface6.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface6.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface6.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface7.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->interface7.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->interface7.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface8.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface8.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface8.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface8.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface8.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface8.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
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

// public override sealed Fuse.Visual get_Active() :73
void DirectNavigation__get_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :74
void DirectNavigation__set_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual* value)
{
    __this->TransitionTo(value, false);
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :37
void DirectNavigation__Goto_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, int* mode)
{
    int mode_ = *mode;

    if ((mode_ == 1) || (mode_ == 0))
        __this->TransitionTo(visual, mode_ == 1);
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :24
void DirectNavigation__OnChildAddedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->UpdateState(true);
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :30
void DirectNavigation__OnChildRemovedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);

    if (__this->_active == child)
        __this->Goto(NULL, 0);
}

// protected override sealed void OnRooted() :18
void DirectNavigation__OnRooted_fn(DirectNavigation* __this)
{
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);
    __this->UpdateState(true);
}

// private void SetProgressState(Fuse.Visual elm, int progress) :80
void DirectNavigation__SetProgressState_fn(DirectNavigation* __this, ::g::Fuse::Visual* elm, int* progress)
{
    __this->SetProgressState(elm, *progress);
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) :44
void DirectNavigation__TransitionTo_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, bool* bypass)
{
    __this->TransitionTo(visual, *bypass);
}

// private void UpdateState(bool bypass) :57
void DirectNavigation__UpdateState_fn(DirectNavigation* __this, bool* bypass)
{
    __this->UpdateState(*bypass);
}

// private void SetProgressState(Fuse.Visual elm, int progress) [instance] :80
void DirectNavigation::SetProgressState(::g::Fuse::Visual* elm, int progress)
{
    ::g::Fuse::Navigation::PageData* pd = GetPageData(elm);

    if (pd == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[3/*"Unexpected ...*/], elm, ::STRINGS[4/*"/usr/local/...*/], 85, ::STRINGS[5/*"SetProgress...*/]);
        return;
    }

    uPtr(pd)->PreviousProgress = uPtr(pd)->Progress;
    pd->Progress = (float)progress;
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) [instance] :44
void DirectNavigation::TransitionTo(::g::Fuse::Visual* visual, bool bypass)
{
    ::g::Fuse::Visual* oldActive = _active;
    _active = visual;
    UpdateState(bypass);

    if (oldActive != _active)
    {
        OnActiveChanged(_active);
        OnNavigated(_active);
    }
}

// private void UpdateState(bool bypass) [instance] :57
void DirectNavigation::UpdateState(bool bypass)
{
    ::g::Fuse::Navigation::PageData* ret2;

    for (int t = 0; t < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Navigation.PageData>*/])); t++)
    {
        ::g::Fuse::Visual* c = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[2/*Uno.Collections.IList<Fuse.Navigation.PageData>*/]), uCRef<int>(t), &ret2), ret2))->Visual();
        bool active = _active == c;
        int newProgress = active ? 0 : -1;
        SetProgressState(c, newProgress);
    }

    OnPageProgressChanged1(bypass ? 1 : 0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/DynamicLinearNavigation.uno
// -------------------------------------------------------------------------------

// public sealed class DynamicLinearNavigation :13
// {
// static generated DynamicLinearNavigation() :13
static void DynamicLinearNavigation__cctor_2_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    DynamicLinearNavigation::DesiredActiveName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("DesiredActive"));
    DynamicLinearNavigation::DesiredActiveIndexName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("DesiredActiveIndex"));
}

static void DynamicLinearNavigation_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(DynamicLinearNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(DynamicLinearNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(DynamicLinearNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(DynamicLinearNavigation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(DynamicLinearNavigation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(DynamicLinearNavigation_type, interface5),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(DynamicLinearNavigation_type, interface6),
        ::g::Fuse::IParentObserver_typeof(), offsetof(DynamicLinearNavigation_type, interface7),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(DynamicLinearNavigation_type, interface8),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(DynamicLinearNavigation_type, interface9));
    type->SetFields(23,
        ::g::Fuse::Visual_typeof(), offsetof(DynamicLinearNavigation, _active), 0,
        DynamicLinearNavigation__Desired_typeof(), offsetof(DynamicLinearNavigation, _desired), 0,
        ::g::Fuse::Visual_typeof(), offsetof(DynamicLinearNavigation, _desiredActive), 0,
        ::g::Uno::Int_typeof(), offsetof(DynamicLinearNavigation, _desiredIndex), 0,
        ::g::Uno::Bool_typeof(), offsetof(DynamicLinearNavigation, _hasUpdated), 0,
        ::g::Fuse::Visual_typeof(), offsetof(DynamicLinearNavigation, _listenComplete), 0,
        ::g::Fuse::Motion::MotionConfig_typeof(), offsetof(DynamicLinearNavigation, _motion), 0,
        ::g::Uno::Float_typeof(), offsetof(DynamicLinearNavigation, _prevProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(DynamicLinearNavigation, _progress), 0,
        ::g::Uno::Bool_typeof(), offsetof(DynamicLinearNavigation, _queueClearForwardHistory), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(DynamicLinearNavigation, _region), 0,
        ::g::Uno::Bool_typeof(), offsetof(DynamicLinearNavigation, _reuseExistingVisual), 0,
        ::g::Uno::Float_typeof(), offsetof(DynamicLinearNavigation, _seekBase), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DynamicLinearNavigation::DesiredActiveIndexName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DynamicLinearNavigation::DesiredActiveName_, uFieldFlagsStatic);
}

DynamicLinearNavigation_type* DynamicLinearNavigation_typeof()
{
    static uSStrong<DynamicLinearNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DynamicLinearNavigation);
    options.TypeSize = sizeof(DynamicLinearNavigation_type);
    type = (DynamicLinearNavigation_type*)uClassType::New("Fuse.Navigation.DynamicLinearNavigation", options);
    type->fp_build_ = DynamicLinearNavigation_build;
    type->fp_ctor_ = (void*)DynamicLinearNavigation__New2_fn;
    type->fp_cctor_ = DynamicLinearNavigation__cctor_2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))DynamicLinearNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))DynamicLinearNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))DynamicLinearNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))DynamicLinearNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))DynamicLinearNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))DynamicLinearNavigation__GoBack_fn;
    type->fp_GoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*))DynamicLinearNavigation__GoForward_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))DynamicLinearNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DynamicLinearNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DynamicLinearNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DynamicLinearNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))DynamicLinearNavigation__OnUnrooted_fn;
    type->interface9.fp_BeginSeek = (void(*)(uObject*))DynamicLinearNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface9.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))DynamicLinearNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface9.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))DynamicLinearNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface6.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))DynamicLinearNavigation__GetPageState_fn;
    type->interface6.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))DynamicLinearNavigation__Goto_fn;
    type->interface6.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface6.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface6.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface6.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface6.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface6.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface6.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface6.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface6.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface6.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface6.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface8.fp_GoForward = (void(*)(uObject*))DynamicLinearNavigation__GoForward_fn;
    type->interface8.fp_GoBack = (void(*)(uObject*))DynamicLinearNavigation__GoBack_fn;
    type->interface8.fp_get_CanGoBack = (void(*)(uObject*, bool*))DynamicLinearNavigation__get_CanGoBack_fn;
    type->interface8.fp_get_CanGoForward = (void(*)(uObject*, bool*))DynamicLinearNavigation__get_CanGoForward_fn;
    type->interface8.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface8.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface7.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DynamicLinearNavigation__OnChildAddedWhileRooted_fn;
    type->interface7.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DynamicLinearNavigation__OnChildRemovedWhileRooted_fn;
    type->interface7.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
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

// public generated DynamicLinearNavigation() :13
void DynamicLinearNavigation__ctor_4_fn(DynamicLinearNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :401
void DynamicLinearNavigation__get_Active_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :402
void DynamicLinearNavigation__set_Active_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* value)
{
    __this->SetDesiredActive(value);
}

// private void AnimationDone() :385
void DynamicLinearNavigation__AnimationDone_fn(DynamicLinearNavigation* __this)
{
    __this->AnimationDone();
}

// private Fuse.Visual get_Back() :540
void DynamicLinearNavigation__get_Back_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Back();
}

// public override sealed bool get_CanGoBack() :298
void DynamicLinearNavigation__get_CanGoBack_fn(DynamicLinearNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Back()), void();
}

// public override sealed bool get_CanGoForward() :290
void DynamicLinearNavigation__get_CanGoForward_fn(DynamicLinearNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Front()), void();
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) :272
void DynamicLinearNavigation__ChangeProgress_fn(DynamicLinearNavigation* __this, float* prev, float* next, int* mode)
{
    __this->ChangeProgress(*prev, *next, *mode);
}

// private void CheckNeedUpdate([bool off]) :208
void DynamicLinearNavigation__CheckNeedUpdate_fn(DynamicLinearNavigation* __this, bool* off)
{
    __this->CheckNeedUpdate(*off);
}

// private int ClampProgress(int progress) :528
void DynamicLinearNavigation__ClampProgress1_fn(DynamicLinearNavigation* __this, int* progress, int* __retval)
{
    *__retval = __this->ClampProgress1(*progress);
}

// private void CleanupListenComplete() :64
void DynamicLinearNavigation__CleanupListenComplete_fn(DynamicLinearNavigation* __this)
{
    __this->CleanupListenComplete();
}

// private void ClearForwardHistory() :510
void DynamicLinearNavigation__ClearForwardHistory_fn(DynamicLinearNavigation* __this)
{
    __this->ClearForwardHistory();
}

// private void DesiredTransition(Fuse.Visual target) :317
void DynamicLinearNavigation__DesiredTransition_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* target)
{
    __this->DesiredTransition(target);
}

// private void DirectSetActive(Fuse.Visual page) :431
void DynamicLinearNavigation__DirectSetActive_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* page)
{
    __this->DirectSetActive(page);
}

// private Fuse.Visual get_Front() :545
void DynamicLinearNavigation__get_Front_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Front();
}

// private void Fuse.Navigation.ISeekableNavigation.BeginSeek() :442
void DynamicLinearNavigation__FuseNavigationISeekableNavigationBeginSeek_fn(DynamicLinearNavigation* __this)
{
    __this->_seekBase = __this->Progress();

    if (__this->_region != NULL)
    {
        __this->ResetRegionLimits();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()));
    }

    __this->OnStateChanged(1);
}

// private void Fuse.Navigation.ISeekableNavigation.EndSeek(Fuse.Navigation.EndSeekArgs args) :476
void DynamicLinearNavigation__FuseNavigationISeekableNavigationEndSeek_fn(DynamicLinearNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args)
{
    ::g::Uno::Float2 ret6;

    if (!::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
        return;

    int targetIndex = 0;

    switch (uPtr(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = __this->ClampProgress1((int)::g::Uno::Math::Floor1(__this->Progress()));
            break;
        }
        case 2:
        {
            targetIndex = __this->ClampProgress1((int)::g::Uno::Math::Ceil1(__this->Progress()));
            break;
        }
        case 1:
        {
            float diff = __this->Progress() - ::g::Uno::Math::Floor1(__this->Progress());
            targetIndex = __this->ClampProgress1(((double)diff > 0.5) ? (int)::g::Uno::Math::Ceil1(__this->Progress()) : (int)::g::Uno::Math::Floor1(__this->Progress()));
            break;
        }
    }

    if (__this->_region != NULL)
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(uPtr(args)->Velocity(), 0.0f));

    __this->UpdateDesired(NULL, targetIndex);

    if (!__this->TransitionToChild(__this->GetPage(targetIndex), false, true))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret6), ret6));
}

// private void Fuse.Navigation.ISeekableNavigation.Seek(Fuse.Navigation.UpdateSeekArgs args) :462
void DynamicLinearNavigation__FuseNavigationISeekableNavigationSeek_fn(DynamicLinearNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    ::g::Uno::Float2 ret7;

    if (__this->_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Seek being called on an unrooted navigation"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/DynamicLinearNavigation.uno"), 466, uString::Const("Fuse.Navigation.ISeekableNavigation.Seek"));
        return;
    }

    float prev = __this->Progress();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(uPtr(args)->RelativeDelta(), 0.0f));
    __this->ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret7), ret7).X, 2);
    __this->CheckNeedUpdate(false);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :278
void DynamicLinearNavigation__GetPageState_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    ::g::Fuse::Navigation::PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
        return *__retval = (collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection1.Progress = 0.0f, collection1.PreviousProgress = 0.0f, collection1), void();

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = (__this->Progress() - (float)uPtr(pd)->Index);
    collection2.PreviousProgress = (__this->_prevProgress - (float)uPtr(pd)->Index);
    return *__retval = collection2, void();
}

// public override sealed void GoBack() :310
void DynamicLinearNavigation__GoBack_fn(DynamicLinearNavigation* __this)
{
    if (__this->CanGoBack())
        __this->DesiredTransition(__this->Previous());
}

// public override sealed void GoForward() :304
void DynamicLinearNavigation__GoForward_fn(DynamicLinearNavigation* __this)
{
    if (__this->CanGoForward())
        __this->DesiredTransition(__this->Next());
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :136
void DynamicLinearNavigation__Goto_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    int mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    __this->UpdateDesired(element, -1);
    __this->GotoInternal(element, mode_);
}

// private bool GotoDesiredActive() :78
void DynamicLinearNavigation__GotoDesiredActive_fn(DynamicLinearNavigation* __this, bool* __retval)
{
    *__retval = __this->GotoDesiredActive();
}

// private void GotoDesiredActiveAction() :73
void DynamicLinearNavigation__GotoDesiredActiveAction_fn(DynamicLinearNavigation* __this)
{
    __this->GotoDesiredActiveAction();
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :167
void DynamicLinearNavigation__GotoImpl_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    __this->GotoImpl(element, *mode);
}

// private void GotoInternal(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :149
void DynamicLinearNavigation__GotoInternal_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    __this->GotoInternal(element, *mode);
}

// private int get_MaxIndex() :535
void DynamicLinearNavigation__get_MaxIndex_fn(DynamicLinearNavigation* __this, int* __retval)
{
    *__retval = __this->MaxIndex();
}

// public Fuse.Motion.MotionConfig get_Motion() :21
void DynamicLinearNavigation__get_Motion_fn(DynamicLinearNavigation* __this, ::g::Fuse::Motion::MotionConfig** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.MotionConfig value) :27
void DynamicLinearNavigation__set_Motion_fn(DynamicLinearNavigation* __this, ::g::Fuse::Motion::MotionConfig* value)
{
    __this->Motion(value);
}

// public generated DynamicLinearNavigation New() :13
void DynamicLinearNavigation__New2_fn(DynamicLinearNavigation** __retval)
{
    *__retval = DynamicLinearNavigation::New2();
}

// private Fuse.Visual get_Next() :555
void DynamicLinearNavigation__get_Next_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Next();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :350
void DynamicLinearNavigation__OnChildAddedWhileRooted_fn(DynamicLinearNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[10/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active != NULL)
        __this->SetProgress((float)__this->GetPageIndex(__this->_active));

    __this->GotoDesiredActive();
    __this->OnHistoryChanged();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :364
void DynamicLinearNavigation__OnChildRemovedWhileRooted_fn(DynamicLinearNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[10/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active == child)
        __this->DirectSetActive(NULL);

    __this->GotoDesiredActive();
    __this->OnHistoryChanged();
    __this->ChangeProgress(__this->Progress(), __this->Progress(), 1);
}

// protected override sealed void OnRooted() :47
void DynamicLinearNavigation__OnRooted_fn(DynamicLinearNavigation* __this)
{
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if ((__this->_desired == 0) && (__this->PageCount() > 0))
        __this->_desiredActive = __this->GetPage(0);

    __this->_region = uPtr(__this->Motion())->AcquireSimulation();
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(::g::Uno::Float2__New2(__this->_progress, 0.0f)));

    if (!__this->GotoDesiredActive())
        __this->SetProgress((float)__this->GetPageIndex(__this->_active));

    __this->OnHistoryChanged();
}

// protected override sealed void OnUnrooted() :115
void DynamicLinearNavigation__OnUnrooted_fn(DynamicLinearNavigation* __this)
{
    ::g::Uno::Float2 ret8;

    if (__this->_region != NULL)
    {
        __this->_progress = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret8), ret8).X;
        __this->_region = NULL;
        uPtr(__this->Motion())->ReleaseSimulation();
    }

    __this->CheckNeedUpdate(true);
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// private void OnUpdated() :227
void DynamicLinearNavigation__OnUpdated_fn(DynamicLinearNavigation* __this)
{
    __this->OnUpdated();
}

// private Fuse.Visual get_Previous() :550
void DynamicLinearNavigation__get_Previous_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Previous();
}

// public float get_Progress() :381
void DynamicLinearNavigation__get_Progress_fn(DynamicLinearNavigation* __this, float* __retval)
{
    *__retval = __this->Progress();
}

// private void ResetRegionLimits() :246
void DynamicLinearNavigation__ResetRegionLimits_fn(DynamicLinearNavigation* __this)
{
    __this->ResetRegionLimits();
}

// private void SetDesiredActive(Fuse.Visual page) :417
void DynamicLinearNavigation__SetDesiredActive_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* page)
{
    __this->SetDesiredActive(page);
}

// private void SetProgress(float value) :252
void DynamicLinearNavigation__SetProgress_fn(DynamicLinearNavigation* __this, float* value)
{
    __this->SetProgress(*value);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) :181
void DynamicLinearNavigation__TransitionToChild_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, bool* bypass, bool* clamp, bool* __retval)
{
    *__retval = __this->TransitionToChild(element, *bypass, *clamp);
}

// private void UpdateDesired(Fuse.Visual target, int index) :326
void DynamicLinearNavigation__UpdateDesired_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* target, int* index)
{
    __this->UpdateDesired(target, *index);
}

::g::Uno::UX::Selector DynamicLinearNavigation::DesiredActiveIndexName_;
::g::Uno::UX::Selector DynamicLinearNavigation::DesiredActiveName_;

// public generated DynamicLinearNavigation() [instance] :13
void DynamicLinearNavigation::ctor_4()
{
    _reuseExistingVisual = true;
    ctor_3();
}

// private void AnimationDone() [instance] :385
void DynamicLinearNavigation::AnimationDone()
{
    if (_queueClearForwardHistory)
    {
        ClearForwardHistory();
        _queueClearForwardHistory = false;
    }

    OnNavigated(_active);
    OnHistoryChanged();
    OnStateChanged(0);
}

// private Fuse.Visual get_Back() [instance] :540
::g::Fuse::Visual* DynamicLinearNavigation::Back()
{
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(MaxIndex()) : NULL;
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) [instance] :272
void DynamicLinearNavigation::ChangeProgress(float prev, float next, int mode)
{
    _prevProgress = prev;
    OnPageProgressChanged((double)next, (double)prev, mode);
}

// private void CheckNeedUpdate([bool off]) [instance] :208
void DynamicLinearNavigation::CheckNeedUpdate(bool off)
{
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)DynamicLinearNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        AnimationDone();
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)DynamicLinearNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// private int ClampProgress(int progress) [instance] :528
int DynamicLinearNavigation::ClampProgress1(int progress)
{
    return ::g::Uno::Math::Clamp8(progress, 0, MaxIndex());
}

// private void CleanupListenComplete() [instance] :64
void DynamicLinearNavigation::CleanupListenComplete()
{
    if (_listenComplete != NULL)
    {
        uPtr(_listenComplete)->remove_RootingCompleted(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)DynamicLinearNavigation__GotoDesiredActiveAction_fn, this));
        _listenComplete = NULL;
    }
}

// private void ClearForwardHistory() [instance] :510
void DynamicLinearNavigation::ClearForwardHistory()
{
    bool ret5;

    if (HasPages() && (_active != Front()))
    {
        int target = GetPageIndex(_active);

        for (int i = target - 1; i >= 0; i--)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Node*/], NULL)), GetPage(i), &ret5);
    }

    OnHistoryChanged();
}

// private void DesiredTransition(Fuse.Visual target) [instance] :317
void DynamicLinearNavigation::DesiredTransition(::g::Fuse::Visual* target)
{
    UpdateDesired(target, -1);
    TransitionToChild(target, false, false);
}

// private void DirectSetActive(Fuse.Visual page) [instance] :431
void DynamicLinearNavigation::DirectSetActive(::g::Fuse::Visual* page)
{
    if (page == _active)
        return;

    _active = page;
    OnActiveChanged(_active);
    OnHistoryChanged();
}

// private Fuse.Visual get_Front() [instance] :545
::g::Fuse::Visual* DynamicLinearNavigation::Front()
{
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(0) : NULL;
}

// private bool GotoDesiredActive() [instance] :78
bool DynamicLinearNavigation::GotoDesiredActive()
{
    ::g::Fuse::Visual* ind3;
    ::g::Fuse::Visual* desiredPage = NULL;

    switch (_desired)
    {
        case 0:
        {
            desiredPage = (ind3 = _active, (ind3 != NULL) ? ind3 : (::g::Fuse::Visual*)GetPage(0));
            break;
        }
        case 1:
        {
            desiredPage = _desiredActive;
            break;
        }
        case 2:
        {
            desiredPage = GetPage(_desiredIndex);
            break;
        }
    }

    if (desiredPage == NULL)
        return false;

    if (!uPtr(desiredPage)->IsRootingStarted())
    {
        CleanupListenComplete();
        _listenComplete = desiredPage;
        uPtr(_listenComplete)->add_RootingCompleted(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)DynamicLinearNavigation__GotoDesiredActiveAction_fn, this));
        return false;
    }

    UpdateDesired(desiredPage, -1);

    if (desiredPage == _active)
        return false;

    GotoImpl(desiredPage, 1);
    return true;
}

// private void GotoDesiredActiveAction() [instance] :73
void DynamicLinearNavigation::GotoDesiredActiveAction()
{
    GotoDesiredActive();
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) [instance] :167
void DynamicLinearNavigation::GotoImpl(::g::Fuse::Visual* element, int mode)
{
    if (uPtr(element)->Parent() != Parent())
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Attempting to navigate to element with different parent"), element, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/DynamicLinearNavigation.uno"), 171, uString::Const("GotoImpl"), NULL);
        return;
    }

    TransitionToChild(element, (mode & 1) == 1, false);
}

// private void GotoInternal(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) [instance] :149
void DynamicLinearNavigation::GotoInternal(::g::Fuse::Visual* element, int mode)
{
    if (!IsRootingCompleted())
    {
        DirectSetActive(element);
        return;
    }

    if (element == _active)
        return;

    if (element == NULL)
        DirectSetActive(NULL);
    else
        GotoImpl(element, mode);
}

// private int get_MaxIndex() [instance] :535
int DynamicLinearNavigation::MaxIndex()
{
    return PageCount() - 1;
}

// public Fuse.Motion.MotionConfig get_Motion() [instance] :21
::g::Fuse::Motion::MotionConfig* DynamicLinearNavigation::Motion()
{
    if (_motion == NULL)
        _motion = ::g::Fuse::Motion::NavigationMotion::New2();

    return _motion;
}

// public void set_Motion(Fuse.Motion.MotionConfig value) [instance] :27
void DynamicLinearNavigation::Motion(::g::Fuse::Motion::MotionConfig* value)
{
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(uString::Const("Motion should not be changed post-rooting"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/DynamicLinearNavigation.uno"), 31, uString::Const("set_Motion"), NULL);
}

// private Fuse.Visual get_Next() [instance] :555
::g::Fuse::Visual* DynamicLinearNavigation::Next()
{
    return GetPage(GetPageIndex(_active) - 1);
}

// private void OnUpdated() [instance] :227
void DynamicLinearNavigation::OnUpdated()
{
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;

    if (_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Updated called without a region"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/DynamicLinearNavigation.uno"), 231, uString::Const("OnUpdated"));
        return;
    }

    float prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret9), ret9).X;
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()), ::g::Fuse::Time::FrameInterval());
    ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret10), ret10).X, 2);
    CheckNeedUpdate(true);
}

// private Fuse.Visual get_Previous() [instance] :550
::g::Fuse::Visual* DynamicLinearNavigation::Previous()
{
    return GetPage(GetPageIndex(_active) + 1);
}

// public float get_Progress() [instance] :381
float DynamicLinearNavigation::Progress()
{
    ::g::Uno::Float2 ret13;
    return (_region == NULL) ? _progress : (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret13), ret13).X;
}

// private void ResetRegionLimits() [instance] :246
void DynamicLinearNavigation::ResetRegionLimits()
{
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2((float)MaxIndex(), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New1(0.0f));
}

// private void SetDesiredActive(Fuse.Visual page) [instance] :417
void DynamicLinearNavigation::SetDesiredActive(::g::Fuse::Visual* page)
{
    UpdateDesired(page, -1);
    _desired = 1;
    GotoInternal(page, 0);
}

// private void SetProgress(float value) [instance] :252
void DynamicLinearNavigation::SetProgress(float value)
{
    ::g::Uno::Float2 ret11;
    ::g::Uno::Float2 ret12;
    float prev;

    if (_region != NULL)
    {
        ResetRegionLimits();
        prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret11), ret11).X;
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(::g::Uno::Float2__New2(value, 0.0f)));
        value = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret12), ret12).X;
    }
    else
    {
        prev = _progress;
        _progress = value;
    }

    ChangeProgress(prev, value, 1);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) [instance] :181
bool DynamicLinearNavigation::TransitionToChild(::g::Fuse::Visual* element, bool bypass, bool clamp)
{
    float targetProgress = (float)GetPageIndex(element);
    DirectSetActive(element);

    if (bypass || !IsRootingCompleted())
    {
        SetProgress(targetProgress);
        OnNavigated(element);
        return false;
    }

    if (Progress() == targetProgress)
    {
        OnStateChanged(0);
        return false;
    }

    OnStateChanged(2);
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(targetProgress, 0.0f));
    CheckNeedUpdate(false);
    return true;
}

// private void UpdateDesired(Fuse.Visual target, int index) [instance] :326
void DynamicLinearNavigation::UpdateDesired(::g::Fuse::Visual* target, int index)
{
    if (target != NULL)
    {
        ::g::Fuse::Navigation::PageData* pd = GetPageData(target);
        index = (pd == NULL) ? -1 : uPtr(pd)->Index;
    }
    else
        target = GetPage(index);

    if (_desiredActive != target)
    {
        _desiredActive = target;
        OnPropertyChanged(DynamicLinearNavigation::DesiredActiveName_);
    }

    if (_desiredIndex != index)
    {
        _desiredIndex = index;
        OnPropertyChanged(DynamicLinearNavigation::DesiredActiveIndexName_);
    }
}

// public generated DynamicLinearNavigation New() [static] :13
DynamicLinearNavigation* DynamicLinearNavigation::New2()
{
    DynamicLinearNavigation* obj4 = (DynamicLinearNavigation*)uNew(DynamicLinearNavigation_typeof());
    obj4->ctor_4();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/EdgeNavigation.uno
// ----------------------------------------------------------------------

// public sealed class EdgeNavigation :20
// {
// static generated EdgeNavigation() :20
static void EdgeNavigation__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    EdgeNavigation::_edgeHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void EdgeNavigation_build(uType* type)
{
    ::STRINGS[6] = uString::Const("EdgeNavigation may not work as expected with more than one main (non-edge) page.");
    ::STRINGS[7] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/EdgeNavigation.uno");
    ::STRINGS[8] = uString::Const("CheckChildren");
    ::STRINGS[9] = uString::Const("Element");
    ::STRINGS[10] = uString::Const("OnRooted");
    ::STRINGS[11] = uString::Const("EdgeNavigation must be rooted in an Element");
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[6] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof();
    ::TYPES[10] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface7),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface8));
    type->SetFields(23,
        ::TYPES[10/*Fuse.Visual*/], offsetof(EdgeNavigation, _active), 0,
        ::TYPES[4/*Uno.Collections.List<Fuse.Visual>*/], offsetof(EdgeNavigation, _mains), 0,
        ::g::Uno::Double_typeof(), offsetof(EdgeNavigation, _maxProgress), 0,
        ::TYPES[3/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/], offsetof(EdgeNavigation, _swipers), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&EdgeNavigation::_edgeHandle_, uFieldFlagsStatic);
}

::g::Fuse::Navigation::VisualNavigation_type* EdgeNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(EdgeNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.EdgeNavigation", options);
    type->fp_build_ = EdgeNavigation_build;
    type->fp_ctor_ = (void*)EdgeNavigation__New2_fn;
    type->fp_cctor_ = EdgeNavigation__cctor_2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))EdgeNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))EdgeNavigation__GoBack_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))EdgeNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnUnrooted_fn;
    type->fp_Toggle = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface6.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->interface6.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))EdgeNavigation__Goto_fn;
    type->interface6.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface6.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface6.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface6.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface6.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface6.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface6.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface6.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface6.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface6.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface6.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface7.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->interface7.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->interface7.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface8.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface8.fp_GoBack = (void(*)(uObject*))EdgeNavigation__GoBack_fn;
    type->interface8.fp_get_CanGoBack = (void(*)(uObject*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->interface8.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface8.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface8.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
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

// public generated EdgeNavigation() :20
void EdgeNavigation__ctor_4_fn(EdgeNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :74
void EdgeNavigation__get_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual** __retval)
{
    ::g::Fuse::Visual* ret19;

    if ((__this->_active == NULL) && (uPtr(__this->_mains)->Count() > 0))
        return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_mains), uCRef<int>(0), &ret19), ret19), void();

    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :82
void EdgeNavigation__set_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual* value)
{
    __this->Goto(value, 0);
}

// public override sealed bool get_CanGoBack() :225
void EdgeNavigation__get_CanGoBack_fn(EdgeNavigation* __this, bool* __retval)
{
    return *__retval = __this->IsAnyPanelActive(), void();
}

// private void CheckChildren() :133
void EdgeNavigation__CheckChildren_fn(EdgeNavigation* __this)
{
    __this->CheckChildren();
}

// private void ClearChildren() :122
void EdgeNavigation__ClearChildren_fn(EdgeNavigation* __this)
{
    __this->ClearChildren();
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) :31
void EdgeNavigation__GetEdge_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = EdgeNavigation::GetEdge(elm);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :232
void EdgeNavigation__GetPageState_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    ::g::Fuse::Navigation::NavigationPageState collection8;
    ::g::Fuse::Navigation::NavigationPageState collection9;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret13;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum7 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret13), ret13);

    {
        const auto __finally_fun = [&]()
        {
            enum7.Dispose(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum7.MoveNext(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum7.Current(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

            if (uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == page)
                return *__retval = (collection8 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection8.Progress = (1.0f - (float)uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress()), collection8.PreviousProgress = 0.0f, collection8), void();
        }
    }

    collection9 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection9.Progress = (float)-__this->_maxProgress;
    collection9.PreviousProgress = 0.0f;
    return *__retval = collection9, void();
}

// public override sealed void GoBack() :219
void EdgeNavigation__GoBack_fn(EdgeNavigation* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret14;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum6 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret14), ret14);

    {
        const auto __finally_fun = [&]()
        {
            enum6.Dispose(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum6.MoveNext(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum6.Current(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
        }
    }
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :45
void EdgeNavigation__Goto_fn(EdgeNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    int mode_ = *mode;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret15;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret15), ret15);

    {
        const auto __finally_fun = [&]()
        {
            enum1.Dispose(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum1.MoveNext(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum1.Current(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

            if (uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == element)
                uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Enable();
            else
                uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
        }
    }

    __this->_active = element;
    __this->OnActiveChanged(__this->_active);
}

// internal bool IsAnyPanelActive() :209
void EdgeNavigation__IsAnyPanelActive_fn(EdgeNavigation* __this, bool* __retval)
{
    *__retval = __this->IsAnyPanelActive();
}

// internal bool IsDismissPoint(float2 windowPoint) :197
void EdgeNavigation__IsDismissPoint_fn(EdgeNavigation* __this, ::g::Uno::Float2* windowPoint, bool* __retval)
{
    *__retval = __this->IsDismissPoint(*windowPoint);
}

// public generated EdgeNavigation New() :20
void EdgeNavigation__New2_fn(EdgeNavigation** __retval)
{
    *__retval = EdgeNavigation::New2();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :107
void EdgeNavigation__OnChildAddedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :113
void EdgeNavigation__OnChildRemovedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// private void OnProgressChanged(object s, double progress) :166
void EdgeNavigation__OnProgressChanged_fn(EdgeNavigation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged(s, *progress);
}

// protected override sealed void OnRooted() :88
void EdgeNavigation__OnRooted_fn(EdgeNavigation* __this)
{
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (!uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[5/*Fuse.Elements.Element*/]))
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[9/*"Element"*/], __this->Parent(), __this, ::STRINGS[7/*"/usr/local/...*/], 93, ::STRINGS[10/*"OnRooted"*/]);
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"EdgeNavigat...*/]));
    }

    __this->CheckChildren();
}

// protected override sealed void OnUnrooted() :101
void EdgeNavigation__OnUnrooted_fn(EdgeNavigation* __this)
{
    __this->ClearChildren();
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// public static void SetEdge(Fuse.Visual elm, Fuse.Navigation.NavigationEdge edge) :25
void EdgeNavigation__SetEdge_fn(::g::Fuse::Visual* elm, int* edge)
{
    EdgeNavigation::SetEdge(elm, *edge);
}

// public override sealed void Toggle(Fuse.Visual page) :63
void EdgeNavigation__Toggle_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page)
{
    if (__this->Active() == page)
        __this->Active(NULL);
    else
        __this->Active(page);
}

uSStrong< ::g::Fuse::PropertyHandle*> EdgeNavigation::_edgeHandle_;

// public generated EdgeNavigation() [instance] :20
void EdgeNavigation::ctor_4()
{
    _swipers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]));
    _mains = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Fuse.Visual>*/]));
    ctor_3();
}

// private void CheckChildren() [instance] :133
void EdgeNavigation::CheckChildren()
{
    ::g::Fuse::Navigation::PageData* ret11;
    ClearChildren();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Navigation.PageData>*/])); i++)
    {
        ::g::Fuse::Visual* nodeChild = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[2/*Uno.Collections.IList<Fuse.Navigation.PageData>*/]), uCRef<int>(i), &ret11), ret11))->Visual();
        ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(nodeChild, ::TYPES[5/*Fuse.Elements.Element*/]);
        int edge = (element == NULL) ? 4 : EdgeNavigation::GetEdge(element);

        if (edge == 4)
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_mains), nodeChild);

            if (uPtr(_mains)->Count() > 1)
                ::g::Fuse::Diagnostics::UserWarning(::STRINGS[6/*"EdgeNavigat...*/], this, ::STRINGS[7/*"/usr/local/...*/], 148, ::STRINGS[8/*"CheckChildren"*/]);
        }
        else
        {
            ::g::Fuse::Gestures::Internal::EdgeSwiper* s = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
            s->Edge(edge);
            s->Target(element);
            s->add_ProgressChanged(uDelegate::New(::TYPES[6/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
            s->Rooted(uAs< ::g::Fuse::Elements::Element*>(Parent(), ::TYPES[5/*Fuse.Elements.Element*/]));
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_swipers), uCRef<int>(edge), s);
        }
    }

    OnPageProgressChanged1(1);
}

// private void ClearChildren() [instance] :122
void EdgeNavigation::ClearChildren()
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret12;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret12), ret12);

    {
        const auto __finally_fun = [&]()
        {
            enum2.Dispose(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum2.MoveNext(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > s = enum2.Current(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            uPtr(s.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->remove_ProgressChanged(uDelegate::New(::TYPES[6/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
            uPtr(s.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Unrooted();
        }
    }

    uPtr(_swipers)->Clear();
    uPtr(_mains)->Clear();
}

// internal bool IsAnyPanelActive() [instance] :209
bool EdgeNavigation::IsAnyPanelActive()
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret16;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum5 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret16), ret16);

    {
        const auto __finally_fun = [&]()
        {
            enum5.Dispose(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum5.MoveNext(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum5.Current(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

            if (uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > 0.0)
                return true;
        }
    }

    return false;
}

// internal bool IsDismissPoint(float2 windowPoint) [instance] :197
bool EdgeNavigation::IsDismissPoint(::g::Uno::Float2 windowPoint)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret17;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret17), ret17);

    {
        const auto __finally_fun = [&]()
        {
            enum4.Dispose(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum4.MoveNext(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum4.Current(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            ::g::Uno::Float2 local = uPtr(uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->WindowToLocal(windowPoint);

            if (uPtr(uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->IsPointInside(local))
                return false;
        }
    }

    return true;
}

// private void OnProgressChanged(object s, double progress) [instance] :166
void EdgeNavigation::OnProgressChanged(uObject* s, double progress)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret18;
    ::g::Fuse::Gestures::Internal::EdgeSwiper* swiper = uAs< ::g::Fuse::Gestures::Internal::EdgeSwiper*>(s, ::TYPES[9/*Fuse.Gestures.Internal.EdgeSwiper*/]);
    ::g::Fuse::Elements::Element* panel = uPtr(swiper)->Target();

    if ((panel == NULL) || (swiper == NULL))
        return;

    ::g::Fuse::Visual* maxPage = NULL;
    _maxProgress = 0.0;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum3 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret18), ret18);

    {
        const auto __finally_fun = [&]()
        {
            enum3.Dispose(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum3.MoveNext(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum3.Current(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

            if (uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > _maxProgress)
            {
                maxPage = uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target();
                _maxProgress = uPtr(sw.Value(::TYPES[8/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress();
            }
        }
    }

    ::g::Fuse::Visual* newActive = (_maxProgress == 0.0) ? uCast< ::g::Fuse::Visual*>(NULL, ::TYPES[10/*Fuse.Visual*/]) : maxPage;

    if (newActive != _active)
    {
        _active = newActive;
        OnActiveChanged(_active);
    }

    OnPageProgressChanged1(2);
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) [static] :31
int EdgeNavigation::GetEdge(::g::Fuse::Visual* elm)
{
    uObject* res;

    if (uPtr(uPtr(elm)->Properties())->TryGet(EdgeNavigation::_edgeHandle_, &res))
        return uUnbox<int>(::g::Fuse::Navigation::NavigationEdge_typeof(), res);

    return 4;
}

// public generated EdgeNavigation New() [static] :20
EdgeNavigation* EdgeNavigation::New2()
{
    EdgeNavigation* obj10 = (EdgeNavigation*)uNew(EdgeNavigation_typeof());
    obj10->ctor_4();
    return obj10;
}

// public static void SetEdge(Fuse.Visual elm, Fuse.Navigation.NavigationEdge edge) [static] :25
void EdgeNavigation::SetEdge(::g::Fuse::Visual* elm, int edge)
{
    uPtr(uPtr(elm)->Properties())->Set(EdgeNavigation::_edgeHandle_, uBox<int>(::g::Fuse::Navigation::NavigationEdge_typeof(), edge));
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/SwipeNavigate.uno
// ---------------------------------------------------------------------

// internal sealed class EndSeekArgs :50
// {
static void EndSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::SnapTo_typeof(), offsetof(EndSeekArgs, _SnapTo), 0,
        ::g::Uno::Float_typeof(), offsetof(EndSeekArgs, _Velocity), 0);
}

uType* EndSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EndSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.EndSeekArgs", options);
    type->fp_build_ = EndSeekArgs_build;
    return type;
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) :55
void EndSeekArgs__ctor__fn(EndSeekArgs* __this, int* snapTo, float* velocity)
{
    __this->ctor_(*snapTo, *velocity);
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) :55
void EndSeekArgs__New1_fn(int* snapTo, float* velocity, EndSeekArgs** __retval)
{
    *__retval = EndSeekArgs::New1(*snapTo, *velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() :53
void EndSeekArgs__get_SnapTo_fn(EndSeekArgs* __this, int* __retval)
{
    *__retval = __this->SnapTo();
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) :53
void EndSeekArgs__set_SnapTo_fn(EndSeekArgs* __this, int* value)
{
    __this->SnapTo(*value);
}

// public generated float get_Velocity() :52
void EndSeekArgs__get_Velocity_fn(EndSeekArgs* __this, float* __retval)
{
    *__retval = __this->Velocity();
}

// private generated void set_Velocity(float value) :52
void EndSeekArgs__set_Velocity_fn(EndSeekArgs* __this, float* value)
{
    __this->Velocity(*value);
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) [instance] :55
void EndSeekArgs::ctor_(int snapTo, float velocity)
{
    SnapTo(snapTo);
    Velocity(velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() [instance] :53
int EndSeekArgs::SnapTo()
{
    return _SnapTo;
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) [instance] :53
void EndSeekArgs::SnapTo(int value)
{
    _SnapTo = value;
}

// public generated float get_Velocity() [instance] :52
float EndSeekArgs::Velocity()
{
    return _Velocity;
}

// private generated void set_Velocity(float value) [instance] :52
void EndSeekArgs::Velocity(float value)
{
    _Velocity = value;
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) [static] :55
EndSeekArgs* EndSeekArgs::New1(int snapTo, float velocity)
{
    EndSeekArgs* obj1 = (EndSeekArgs*)uNew(EndSeekArgs_typeof());
    obj1->ctor_(snapTo, velocity);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public abstract class EnterExitAnimation :134
// {
static void EnterExitAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7));
    type->SetFields(41,
        ::g::Uno::Bool_typeof(), offsetof(EnterExitAnimation, NegativeProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(EnterExitAnimation, PositiveProgress), 0);
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(EnterExitAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnterExitAnimation", options);
    type->fp_build_ = EnterExitAnimation_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))EnterExitAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))EnterExitAnimation__OnNavigationStateChanged_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated EnterExitAnimation() :134
void EnterExitAnimation__ctor_6_fn(EnterExitAnimation* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :136
void EnterExitAnimation__ForceUpdate_fn(EnterExitAnimation* __this)
{
    float p = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress;

    if (__this->IsMatch((double)p))
        __this->Seek((double)(__this->Scale() * ::g::Uno::Math::Abs1(p)), 0);
}

// private bool IsMatch(double progress) :143
void EnterExitAnimation__IsMatch_fn(EnterExitAnimation* __this, double* progress, bool* __retval)
{
    *__retval = __this->IsMatch(*progress);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :151
void EnterExitAnimation__OnNavigationStateChanged_fn(EnterExitAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.PreviousProgress) < ::g::Uno::Math::Abs1(ps.Progress)) ? 0 : 1;

    if (!__this->IsMatch((double)ps.Progress))
    {
        __this->Seek(0.0, d);
        return;
    }

    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}

// protected generated EnterExitAnimation() [instance] :134
void EnterExitAnimation::ctor_6()
{
    ctor_5();
}

// private bool IsMatch(double progress) [instance] :143
bool EnterExitAnimation::IsMatch(double progress)
{
    return (PositiveProgress && (progress >= 0.0)) || (NegativeProgress && (progress <= 0.0));
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public class EnteringAnimation :226
// {
static void EnteringAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7));
    type->SetFields(43);
}

::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(EnteringAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnteringAnimation", options);
    type->fp_build_ = EnteringAnimation_build;
    type->fp_ctor_ = (void*)EnteringAnimation__New2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public EnteringAnimation() :228
void EnteringAnimation__ctor_7_fn(EnteringAnimation* __this)
{
    __this->ctor_7();
}

// public EnteringAnimation New() :228
void EnteringAnimation__New2_fn(EnteringAnimation** __retval)
{
    *__retval = EnteringAnimation::New2();
}

// public EnteringAnimation() [instance] :228
void EnteringAnimation::ctor_7()
{
    ctor_6();
    PositiveProgress = true;
}

// public EnteringAnimation New() [static] :228
EnteringAnimation* EnteringAnimation::New2()
{
    EnteringAnimation* obj1 = (EnteringAnimation*)uNew(EnteringAnimation_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public class ExitingAnimation :191
// {
static void ExitingAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7));
    type->SetFields(43);
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(ExitingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ExitingAnimation", options);
    type->fp_build_ = ExitingAnimation_build;
    type->fp_ctor_ = (void*)ExitingAnimation__New2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public ExitingAnimation() :193
void ExitingAnimation__ctor_7_fn(ExitingAnimation* __this)
{
    __this->ctor_7();
}

// public ExitingAnimation New() :193
void ExitingAnimation__New2_fn(ExitingAnimation** __retval)
{
    *__retval = ExitingAnimation::New2();
}

// public ExitingAnimation() [instance] :193
void ExitingAnimation::ctor_7()
{
    ctor_6();
    NegativeProgress = true;
}

// public ExitingAnimation New() [static] :193
ExitingAnimation* ExitingAnimation::New2()
{
    ExitingAnimation* obj1 = (ExitingAnimation*)uNew(ExitingAnimation_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ExplicitNavigation.uno
// --------------------------------------------------------------------------

// internal sealed class ExplicitNavigation :9
// {
static void ExplicitNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface7),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface8));
    type->SetFields(23,
        ::g::Fuse::Visual_typeof(), offsetof(ExplicitNavigation, _active), 0);
}

::g::Fuse::Navigation::VisualNavigation_type* ExplicitNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(ExplicitNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.ExplicitNavigation", options);
    type->fp_build_ = ExplicitNavigation_build;
    type->fp_ctor_ = (void*)ExplicitNavigation__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))ExplicitNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))ExplicitNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))ExplicitNavigation__Goto_fn;
    type->interface6.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface6.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))ExplicitNavigation__Goto_fn;
    type->interface6.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface6.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface6.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface6.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface6.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface6.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface6.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface6.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface6.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface6.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface6.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface7.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface7.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface7.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface8.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface8.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface8.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface8.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface8.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface8.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
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

// public generated ExplicitNavigation() :9
void ExplicitNavigation__ctor_4_fn(ExplicitNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :26
void ExplicitNavigation__get_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :27
void ExplicitNavigation__set_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* value)
{
    if (__this->_active != value)
    {
        __this->_active = value;
        __this->OnActiveChanged(__this->_active);
        __this->OnNavigated(__this->_active);
    }
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :11
void ExplicitNavigation__Goto_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* visual, int* mode)
{
    int mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    __this->SetPageProgress(visual, 0.0f, false);
    __this->Active(visual);
    __this->OnPageProgressChanged1((mode_ == 1) ? 1 : 0);
}

// public generated ExplicitNavigation New() :9
void ExplicitNavigation__New2_fn(ExplicitNavigation** __retval)
{
    *__retval = ExplicitNavigation::New2();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) :59
void ExplicitNavigation__SetPageProgress_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, bool* update)
{
    __this->SetPageProgress(page, *progress, *update);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) :54
void ExplicitNavigation__SetPageProgress1_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update)
{
    __this->SetPageProgress1(page, *progress, *previous, *update);
}

// private void SetPageProgress(Fuse.Visual page, float progress, float previous, bool update, bool havPrev) :43
void ExplicitNavigation__SetPageProgress2_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update, bool* havPrev)
{
    __this->SetPageProgress2(page, *progress, *previous, *update, *havPrev);
}

// public void SetState(Fuse.Navigation.NavigationState state) :69
void ExplicitNavigation__SetState_fn(ExplicitNavigation* __this, int* state)
{
    __this->SetState(*state);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) :64
void ExplicitNavigation__UpdateProgress_fn(ExplicitNavigation* __this, int* mode)
{
    __this->UpdateProgress(*mode);
}

// public generated ExplicitNavigation() [instance] :9
void ExplicitNavigation::ctor_4()
{
    ctor_3();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) [instance] :59
void ExplicitNavigation::SetPageProgress(::g::Fuse::Visual* page, float progress, bool update)
{
    SetPageProgress2(page, progress, 0.0f, update, false);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) [instance] :54
void ExplicitNavigation::SetPageProgress1(::g::Fuse::Visual* page, float progress, float previous, bool update)
{
    SetPageProgress2(page, progress, previous, update, true);
}

// private void SetPageProgress(Fuse.Visual page, float progress, float previous, bool update, bool havPrev) [instance] :43
void ExplicitNavigation::SetPageProgress2(::g::Fuse::Visual* page, float progress, float previous, bool update, bool havPrev)
{
    ::g::Fuse::Navigation::PageData* pd = GetPageData(page);

    if (pd == NULL)
        return;

    uPtr(pd)->PreviousProgress = (havPrev ? previous : uPtr(pd)->Progress);
    pd->Progress = progress;

    if (update)
        OnPageProgressChanged1(0);
}

// public void SetState(Fuse.Navigation.NavigationState state) [instance] :69
void ExplicitNavigation::SetState(int state)
{
    OnStateChanged(state);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) [instance] :64
void ExplicitNavigation::UpdateProgress(int mode)
{
    OnPageProgressChanged1(mode);
}

// public generated ExplicitNavigation New() [static] :9
ExplicitNavigation* ExplicitNavigation::New2()
{
    ExplicitNavigation* obj1 = (ExplicitNavigation*)uNew(ExplicitNavigation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/FindRouter.uno
// ------------------------------------------------------------------

// public sealed class FindRouter :25
// {
static void FindRouter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
}

::g::Fuse::Reactive::Expression_type* FindRouter_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FindRouter);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Navigation.FindRouter", options);
    type->fp_build_ = FindRouter_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))FindRouter__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))FindRouter__Subscribe_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :32
void FindRouter__Subscribe_fn(FindRouter* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)FindRouter__Subscription::New1(__this, ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::TYPES[13/*Fuse.Reactive.IContext*/])), listener), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterModify.uno
// --------------------------------------------------------------------

// internal enum RouterModify.Flags :98
uEnumType* RouterModify__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RouterModify.Flags", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "None", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno
// ---------------------------------------------------------------------

// public enum RouterRequest.Flags :23
uEnumType* RouterRequest__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RouterRequest.Flags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "FlatRoute", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno
// --------------------------------------------------------------

// private sealed class Router.GetHistoryAt :718
// {
static void Router__GetHistoryAt_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(Router__GetHistoryAt, At), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(Router__GetHistoryAt, Result), 0);
}

uType* Router__GetHistoryAt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Router__GetHistoryAt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Router.GetHistoryAt", options);
    type->fp_build_ = Router__GetHistoryAt_build;
    type->fp_ctor_ = (void*)Router__GetHistoryAt__New1_fn;
    return type;
}

// public generated GetHistoryAt() :718
void Router__GetHistoryAt__ctor__fn(Router__GetHistoryAt* __this)
{
    __this->ctor_();
}

// public bool HistoryAction(Uno.Collections.List<Fuse.Navigation.RouterPage> stack) :724
void Router__GetHistoryAt__HistoryAction_fn(Router__GetHistoryAt* __this, ::g::Uno::Collections::List* stack, bool* __retval)
{
    *__retval = __this->HistoryAction(stack);
}

// public generated GetHistoryAt New() :718
void Router__GetHistoryAt__New1_fn(Router__GetHistoryAt** __retval)
{
    *__retval = Router__GetHistoryAt::New1();
}

// public generated GetHistoryAt() [instance] :718
void Router__GetHistoryAt::ctor_()
{
}

// public bool HistoryAction(Uno.Collections.List<Fuse.Navigation.RouterPage> stack) [instance] :724
bool Router__GetHistoryAt::HistoryAction(::g::Uno::Collections::List* stack)
{
    ::g::Fuse::Navigation::RouterPage* ret2;
    ::g::Fuse::Navigation::RouterPage* ret3;
    ::g::Fuse::Navigation::RouterPage* ret4;
    ::g::Fuse::Navigation::Route* r = NULL;

    for (int i = uPtr(stack)->Count() - 1; i >= 0; --i)
    {
        r = ::g::Fuse::Navigation::Route::New1(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(stack), uCRef<int>(i), &ret2), ret2))->Path, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(stack), uCRef<int>(i), &ret3), ret3))->Parameter, r);
        r->RouterPage = (::g::Uno::Collections::List__get_Item_fn(stack, uCRef<int>(i), &ret4), ret4);
    }

    if (At == 0)
        Result = r;

    At--;
    return At >= 0;
}

// public generated GetHistoryAt New() [static] :718
Router__GetHistoryAt* Router__GetHistoryAt::New1()
{
    Router__GetHistoryAt* obj1 = (Router__GetHistoryAt*)uNew(Router__GetHistoryAt_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno
// --------------------------------------------------------------------------

// private sealed class Router.GetRouteCallback :348
// {
static void Router__GetRouteCallback_build(uType* type)
{
    ::TYPES[11] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(Router__GetRouteCallback, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(Router__GetRouteCallback, _context), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(Router__GetRouteCallback, _route), 0);
}

uType* Router__GetRouteCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Router__GetRouteCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Router.GetRouteCallback", options);
    type->fp_build_ = Router__GetRouteCallback_build;
    return type;
}

// public GetRouteCallback(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) :353
void Router__GetRouteCallback__ctor__fn(Router__GetRouteCallback* __this, ::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(route, callback, context);
}

// public GetRouteCallback New(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) :353
void Router__GetRouteCallback__New1_fn(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context, Router__GetRouteCallback** __retval)
{
    *__retval = Router__GetRouteCallback::New1(route, callback, context);
}

// public void Run() :359
void Router__GetRouteCallback__Run_fn(Router__GetRouteCallback* __this)
{
    __this->Run();
}

// private Fuse.Scripting.Array ToArray() :362
void Router__GetRouteCallback__ToArray_fn(Router__GetRouteCallback* __this, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray();
}

// public GetRouteCallback(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) [instance] :353
void Router__GetRouteCallback::ctor_(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context)
{
    _route = route;
    _callback = callback;
    _context = context;
}

// public void Run() [instance] :359
void Router__GetRouteCallback::Run()
{
    uPtr(_callback)->Call(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, (::g::Fuse::Scripting::Array*)ToArray()));
}

// private Fuse.Scripting.Array ToArray() [instance] :362
::g::Fuse::Scripting::Array* Router__GetRouteCallback::ToArray()
{
    ::g::Fuse::Navigation::Route* route = _route;
    int len = uPtr(route)->Length();
    ::g::Fuse::Scripting::Array* arr = uPtr(_context)->NewArray(uArray::Init<uObject*>(::TYPES[11/*object[]*/], 1, uBox<int>(::g::Uno::Int_typeof(), len * 2)));

    for (int i = 0; i < len; i++)
    {
        uPtr(arr)->Item(i * 2, uPtr(route)->Path);
        arr->Item((i * 2) + 1, uPtr(_context)->ParseJson(route->Parameter));
        route = uPtr(route)->SubRoute;
    }

    return arr;
}

// public GetRouteCallback New(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) [static] :353
Router__GetRouteCallback* Router__GetRouteCallback::New1(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context)
{
    Router__GetRouteCallback* obj1 = (Router__GetRouteCallback*)uNew(Router__GetRouteCallback_typeof());
    obj1->ctor_(route, callback, context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno
// ----------------------------------------------------------------------

// public sealed class GoBack :168
// {
static void GoBack_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(9);
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoBack", options);
    type->fp_build_ = GoBack_build;
    type->fp_ctor_ = (void*)GoBack__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoBack__Perform1_fn;
    return type;
}

// public generated GoBack() :168
void GoBack__ctor_3_fn(GoBack* __this)
{
    __this->ctor_3();
}

// public generated GoBack New() :168
void GoBack__New2_fn(GoBack** __retval)
{
    *__retval = GoBack::New2();
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :170
void GoBack__Perform1_fn(GoBack* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    if (::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(ctx), ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoBack(uInterface(uPtr(ctx), ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/]));
}

// public generated GoBack() [instance] :168
void GoBack::ctor_3()
{
    ctor_2();
}

// public generated GoBack New() [static] :168
GoBack* GoBack::New2()
{
    GoBack* obj1 = (GoBack*)uNew(GoBack_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno
// ----------------------------------------------------------------------

// public sealed class GoForward :203
// {
static void GoForward_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(9);
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoForward", options);
    type->fp_build_ = GoForward_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoForward__Perform1_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :206
void GoForward__Perform1_fn(GoForward* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    if (::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(ctx), ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoForward(uInterface(uPtr(ctx), ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// public sealed class GotoRouteCommand :179
// {
static void GotoRouteCommand_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Navigation::RouteModificationCommand_type, interface0));
    type->SetFields(1);
}

::g::Fuse::Navigation::RouteModificationCommand_type* GotoRouteCommand_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouteModificationCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouteModificationCommand_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GotoRouteCommand);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouteModificationCommand_type);
    type = (::g::Fuse::Navigation::RouteModificationCommand_type*)uClassType::New("Fuse.Navigation.GotoRouteCommand", options);
    type->fp_build_ = GotoRouteCommand_build;
    type->fp_ProcessArguments = (void(*)(::g::Fuse::Navigation::RouteModificationCommand*, ::g::Fuse::Navigation::RouterRequest*, uArray*, bool*))GotoRouteCommand__ProcessArguments_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Navigation::RouteModificationCommand__Subscribe_fn;
    return type;
}

// protected override sealed bool ProcessArguments(Fuse.Navigation.RouterRequest request, Fuse.Reactive.VarArgFunction.Argument[] args) :181
void GotoRouteCommand__ProcessArguments_fn(GotoRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval)
{
    return *__retval = uPtr(request)->AddHow(1) && uPtr(request)->AddPath(::g::Fuse::Navigation::RouteModificationCommand__ArgumentArrayAdapter::New1(args)), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno
// --------------------------------------------------------------

// private delegate bool Router.HistoryAction(Uno.Collections.List<Fuse.Navigation.RouterPage> stack) :763
uDelegateType* Router__HistoryAction_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.Router.HistoryAction", 1, 0);
    type->SetSignature(::g::Uno::Bool_typeof(),
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::RouterPage_typeof(), NULL));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// public delegate void HistoryChangedHandler(object sender) :47
uDelegateType* HistoryChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.HistoryChangedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// public abstract interface IBaseNavigation :56
// {
uInterfaceType* IBaseNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IBaseNavigation", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// public abstract interface INavigation :77
// {
uInterfaceType* INavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigation", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// private sealed class RouteModificationCommand.InnerSubscription :68
// {
static void RouteModificationCommand__InnerSubscription_build(uType* type)
{
    ::STRINGS[12] = uString::Const("could not find router");
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno");
    ::STRINGS[14] = uString::Const("HandleRequest");
    ::TYPES[13] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[14] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription_typeof(), offsetof(RouteModificationCommand__InnerSubscription, _outSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(RouteModificationCommand__InnerSubscription, _triggered), 0);
}

::g::Fuse::Reactive::VarArgFunction__Subscription_type* RouteModificationCommand__InnerSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::VarArgFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction__Subscription_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RouteModificationCommand__InnerSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::VarArgFunction__Subscription_type);
    type = (::g::Fuse::Reactive::VarArgFunction__Subscription_type*)uClassType::New("Fuse.Navigation.RouteModificationCommand.InnerSubscription", options);
    type->fp_build_ = RouteModificationCommand__InnerSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))RouteModificationCommand__InnerSubscription__Dispose_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))RouteModificationCommand__InnerSubscription__OnNewArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))RouteModificationCommand__InnerSubscription__Dispose_fn;
    return type;
}

// public InnerSubscription(Fuse.Navigation.RouteModificationCommand.OuterSubscription outSub) :73
void RouteModificationCommand__InnerSubscription__ctor_2_fn(RouteModificationCommand__InnerSubscription* __this, ::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub)
{
    __this->ctor_2(outSub);
}

// public override sealed void Dispose() :108
void RouteModificationCommand__InnerSubscription__Dispose_fn(RouteModificationCommand__InnerSubscription* __this)
{
    if (__this->_outSub != NULL)
    {
        uPtr(__this->_outSub)->DisposeInner(true);
        __this->_outSub = NULL;
    }

    ::g::Fuse::Reactive::VarArgFunction__Subscription__Dispose_fn(__this);
}

// private void HandleRequest(Fuse.Reactive.VarArgFunction.Argument[] args) :92
void RouteModificationCommand__InnerSubscription__HandleRequest_fn(RouteModificationCommand__InnerSubscription* __this, uArray* args)
{
    __this->HandleRequest(args);
}

// public InnerSubscription New(Fuse.Navigation.RouteModificationCommand.OuterSubscription outSub) :73
void RouteModificationCommand__InnerSubscription__New1_fn(::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub, RouteModificationCommand__InnerSubscription** __retval)
{
    *__retval = RouteModificationCommand__InnerSubscription::New1(outSub);
}

// protected override sealed void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args) :80
void RouteModificationCommand__InnerSubscription__OnNewArguments_fn(RouteModificationCommand__InnerSubscription* __this, uArray* args)
{
    if ((__this->_outSub == NULL) || __this->_triggered)
        return;

    __this->_triggered = true;
    __this->HandleRequest(args);
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[14/*Uno.Action*/], __this, offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, fp_Dispose)), -1, 2);
}

// public InnerSubscription(Fuse.Navigation.RouteModificationCommand.OuterSubscription outSub) [instance] :73
void RouteModificationCommand__InnerSubscription::ctor_2(::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub)
{
    ctor_1(uPtr(outSub)->_expr, uPtr(outSub)->_context);
    _outSub = outSub;
    Init();
}

// private void HandleRequest(Fuse.Reactive.VarArgFunction.Argument[] args) [instance] :92
void RouteModificationCommand__InnerSubscription::HandleRequest(uArray* args)
{
    ::g::Fuse::Navigation::RouterRequest* request = ::g::Fuse::Navigation::RouterRequest::New1(0);

    if (!uPtr(uPtr(_outSub)->_expr)->ProcessArguments(request, args))
        return;

    ::g::Fuse::Navigation::Router* router = ::g::Fuse::Navigation::Router::TryFindRouter(::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(uPtr(_outSub)->_context), ::TYPES[13/*Fuse.Reactive.IContext*/])));

    if (router == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"could not f...*/], this, ::STRINGS[13/*"/usr/local/...*/], 101, ::STRINGS[14/*"HandleRequest"*/], NULL);
        return;
    }

    request->MakeRequest(router);
}

// public InnerSubscription New(Fuse.Navigation.RouteModificationCommand.OuterSubscription outSub) [static] :73
RouteModificationCommand__InnerSubscription* RouteModificationCommand__InnerSubscription::New1(::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub)
{
    RouteModificationCommand__InnerSubscription* obj1 = (RouteModificationCommand__InnerSubscription*)uNew(RouteModificationCommand__InnerSubscription_typeof());
    obj1->ctor_2(outSub);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno
// -------------------------------------------------------------------

// internal abstract interface IPagePropertyListener :320
// {
uInterfaceType* IPagePropertyListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPagePropertyListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno
// -------------------------------------------------------------------

// internal abstract interface IPageResourceBinding :9
// {
uInterfaceType* IPageResourceBinding_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPageResourceBinding", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal abstract interface IRouterOutlet :124
// {
uInterfaceType* IRouterOutlet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IRouterOutlet", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// internal abstract interface ISeekableNavigation :102
// {
uInterfaceType* ISeekableNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.ISeekableNavigation", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RoutePageProxy.uno
// ----------------------------------------------------------------------

// private struct RoutePageProxy.Level :61
// {
static void RoutePageProxy__Level_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(RoutePageProxy__Level, PageProxy), 0,
        ::g::Uno::Bool_typeof(), offsetof(RoutePageProxy__Level, Listening), 0);
}

uStructType* RoutePageProxy__Level_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(RoutePageProxy__Level);
    options.ValueSize = sizeof(RoutePageProxy__Level);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Navigation.RoutePageProxy.Level", options);
    type->fp_build_ = RoutePageProxy__Level_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// public sealed class ModifyRouteCommand :150
// {
static void ModifyRouteCommand_build(uType* type)
{
    ::STRINGS[15] = uString::Const("arguments to modifyRoute must be name-value-pairs");
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno");
    ::STRINGS[16] = uString::Const("ProcessArguments");
    ::TYPES[15] = ::g::Fuse::NameValuePair_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Navigation::RouteModificationCommand_type, interface0));
    type->SetFields(1);
}

::g::Fuse::Navigation::RouteModificationCommand_type* ModifyRouteCommand_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouteModificationCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouteModificationCommand_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ModifyRouteCommand);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouteModificationCommand_type);
    type = (::g::Fuse::Navigation::RouteModificationCommand_type*)uClassType::New("Fuse.Navigation.ModifyRouteCommand", options);
    type->fp_build_ = ModifyRouteCommand_build;
    type->fp_ProcessArguments = (void(*)(::g::Fuse::Navigation::RouteModificationCommand*, ::g::Fuse::Navigation::RouterRequest*, uArray*, bool*))ModifyRouteCommand__ProcessArguments_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Navigation::RouteModificationCommand__Subscribe_fn;
    return type;
}

// protected override sealed bool ProcessArguments(Fuse.Navigation.RouterRequest request, Fuse.Reactive.VarArgFunction.Argument[] args) :152
void ModifyRouteCommand__ProcessArguments_fn(ModifyRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval)
{
    for (int i = 0; i < uPtr(args)->Length(); ++i)
    {
        ::g::Fuse::NameValuePair* nvp = uAs< ::g::Fuse::NameValuePair*>(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Value(), ::TYPES[15/*Fuse.NameValuePair*/]);

        if (nvp == NULL)
        {
            ::g::Fuse::Diagnostics::UserError(::STRINGS[15/*"arguments t...*/], __this, ::STRINGS[13/*"/usr/local/...*/], 159, ::STRINGS[16/*"ProcessArgu...*/], NULL);
            return *__retval = false, void();
        }

        if (!uPtr(request)->AddArgument(uPtr(nvp)->Name(), uPtr(nvp)->Value()))
            return *__retval = false, void();
    }

    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno
// --------------------------------------------------------------

// public enum ModifyRouteHow :16
uEnumType* ModifyRouteHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.ModifyRouteHow", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Push", 0LL,
        "Goto", 1LL,
        "Replace", 2LL,
        "GoBack", 3LL,
        "PrepareBack", 4LL,
        "PreparePush", 5LL,
        "PrepareGoto", 6LL,
        "FinishPrepared", 7LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// public sealed class NavigatedArgs :30
// {
static void NavigatedArgs_build(uType* type)
{
    ::STRINGS[17] = uString::Const("name");
    ::STRINGS[18] = uString::Const("");
    ::TYPES[16] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(NavigatedArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigatedArgs, _NewVisual), 0);
}

NavigatedArgs_type* NavigatedArgs_typeof()
{
    static uSStrong<NavigatedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NavigatedArgs);
    options.TypeSize = sizeof(NavigatedArgs_type);
    type = (NavigatedArgs_type*)uClassType::New("Fuse.Navigation.NavigatedArgs", options);
    type->fp_build_ = NavigatedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))NavigatedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public NavigatedArgs(Fuse.Visual newVisual) :34
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Visual* newVisual)
{
    __this->ctor_1(newVisual);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :39
void NavigatedArgs__FuseScriptingIScriptEventSerialize_fn(NavigatedArgs* __this, uObject* s)
{
    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->NewVisual())->Name()), NULL))
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[16/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[17/*"name"*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->NewVisual())->Name()));
    else
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[16/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[17/*"name"*/], ::STRINGS[18/*""*/]);
}

// public NavigatedArgs New(Fuse.Visual newVisual) :34
void NavigatedArgs__New2_fn(::g::Fuse::Visual* newVisual, NavigatedArgs** __retval)
{
    *__retval = NavigatedArgs::New2(newVisual);
}

// public generated Fuse.Visual get_NewVisual() :32
void NavigatedArgs__get_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->NewVisual();
}

// private generated void set_NewVisual(Fuse.Visual value) :32
void NavigatedArgs__set_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual* value)
{
    __this->NewVisual(value);
}

// public NavigatedArgs(Fuse.Visual newVisual) [instance] :34
void NavigatedArgs::ctor_1(::g::Fuse::Visual* newVisual)
{
    ctor_();
    NewVisual(newVisual);
}

// public generated Fuse.Visual get_NewVisual() [instance] :32
::g::Fuse::Visual* NavigatedArgs::NewVisual()
{
    return _NewVisual;
}

// private generated void set_NewVisual(Fuse.Visual value) [instance] :32
void NavigatedArgs::NewVisual(::g::Fuse::Visual* value)
{
    _NewVisual = value;
}

// public NavigatedArgs New(Fuse.Visual newVisual) [static] :34
NavigatedArgs* NavigatedArgs::New2(::g::Fuse::Visual* newVisual)
{
    NavigatedArgs* obj1 = (NavigatedArgs*)uNew(NavigatedArgs_typeof());
    obj1->ctor_1(newVisual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// public delegate void NavigatedHandler(object sender, Fuse.Navigation.NavigatedArgs args) :46
uDelegateType* NavigatedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigatedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigatedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno
// ----------------------------------------------------------------------

// public sealed class NavigateTo :53
// {
static void NavigateTo_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[17] = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(NavigateTo, _Bypass), 0,
        ::g::Uno::Bool_typeof(), offsetof(NavigateTo, _ClearForwardHistory), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigateTo, _Target), 0);
}

::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTriggerAction_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(NavigateTo);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateTo", options);
    type->fp_build_ = NavigateTo_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateTo__Perform1_fn;
    return type;
}

// public generated bool get_Bypass() :63
void NavigateTo__get_Bypass_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :63
void NavigateTo__set_Bypass_fn(NavigateTo* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated bool get_ClearForwardHistory() :68
void NavigateTo__get_ClearForwardHistory_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->ClearForwardHistory();
}

// public generated void set_ClearForwardHistory(bool value) :68
void NavigateTo__set_ClearForwardHistory_fn(NavigateTo* __this, bool* value)
{
    __this->ClearForwardHistory(*value);
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :70
void NavigateTo__Perform1_fn(NavigateTo* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    int mode = __this->Bypass() ? 1 : 0;

    if (__this->Target() != NULL)
    {
        ::g::Fuse::Navigation::INavigation::Goto(uInterface(uPtr(ctx), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->Target(), mode);

        if (__this->ClearForwardHistory() && uIs(ctx, ::TYPES[17/*Fuse.Navigation.StructuredNavigation*/]))
            uPtr(uAs< ::g::Fuse::Navigation::StructuredNavigation*>(ctx, ::TYPES[17/*Fuse.Navigation.StructuredNavigation*/]))->QueueClearForwardHistory();
    }
}

// public generated Fuse.Visual get_Target() :58
void NavigateTo__get_Target_fn(NavigateTo* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :58
void NavigateTo__set_Target_fn(NavigateTo* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated bool get_Bypass() [instance] :63
bool NavigateTo::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :63
void NavigateTo::Bypass(bool value)
{
    _Bypass = value;
}

// public generated bool get_ClearForwardHistory() [instance] :68
bool NavigateTo::ClearForwardHistory()
{
    return _ClearForwardHistory;
}

// public generated void set_ClearForwardHistory(bool value) [instance] :68
void NavigateTo::ClearForwardHistory(bool value)
{
    _ClearForwardHistory = value;
}

// public generated Fuse.Visual get_Target() [instance] :58
::g::Fuse::Visual* NavigateTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :58
void NavigateTo::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno
// ----------------------------------------------------------------------

// public sealed class NavigateToggle :108
// {
static void NavigateToggle_build(uType* type)
{
    ::STRINGS[19] = uString::Const("No Page was found");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetFields(9,
        ::g::Fuse::Visual_typeof(), offsetof(NavigateToggle, _Target), 0);
}

::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTriggerAction_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(NavigateToggle);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateToggle", options);
    type->fp_build_ = NavigateToggle_build;
    type->fp_ctor_ = (void*)NavigateToggle__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateToggle__Perform1_fn;
    return type;
}

// public generated NavigateToggle() :108
void NavigateToggle__ctor_3_fn(NavigateToggle* __this)
{
    __this->ctor_3();
}

// public generated NavigateToggle New() :108
void NavigateToggle__New2_fn(NavigateToggle** __retval)
{
    *__retval = NavigateToggle::New2();
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :113
void NavigateToggle__Perform1_fn(NavigateToggle* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    ::g::Fuse::Node* ind1;
    ::g::Fuse::Visual* page = ::g::Fuse::Navigation::Navigation::TryFindPage((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : n));

    if (page != NULL)
        ::g::Fuse::Navigation::INavigation::Toggle(uInterface(uPtr(ctx), ::TYPES[0/*Fuse.Navigation.INavigation*/]), page);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[19/*"No Page was...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 119, ::STRINGS[2/*"Perform"*/], NULL);
}

// public generated Fuse.Visual get_Target() :111
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :111
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated NavigateToggle() [instance] :108
void NavigateToggle::ctor_3()
{
    ctor_2();
}

// public generated Fuse.Visual get_Target() [instance] :111
::g::Fuse::Visual* NavigateToggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :111
void NavigateToggle::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated NavigateToggle New() [static] :108
NavigateToggle* NavigateToggle::New2()
{
    NavigateToggle* obj2 = (NavigateToggle*)uNew(NavigateToggle_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Navigation.Locators.uno
// ---------------------------------------------------------------------------

// public interfacemodifiers class Navigation :17
// {
// static generated Navigation() :17
static void Navigation__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Navigation::_contextHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Navigation_build(uType* type)
{
    ::STRINGS[20] = uString::Const("TryFindBaseNavigation requires rooting to have started");
    ::STRINGS[21] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Navigation.Locators.uno");
    ::STRINGS[22] = uString::Const("TryFindBaseNavigation");
    ::STRINGS[23] = uString::Const("TryFindPage requires rooting to have started");
    ::STRINGS[24] = uString::Const("TryFindPage");
    ::STRINGS[25] = uString::Const("`Page` set to a value that is not within an navigation");
    ::TYPES[12] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[18] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Visual_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::NavigationPageProperty_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Navigation::_contextHandle_, uFieldFlagsStatic);
}

uType* Navigation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Navigation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Navigation", options);
    type->fp_build_ = Navigation_build;
    type->fp_cctor_ = Navigation__cctor__fn;
    return type;
}

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) :19
void Navigation__GetLocalNavigation_fn(::g::Fuse::Visual* node, uObject** __retval)
{
    *__retval = Navigation::GetLocalNavigation(node);
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) :172
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject** __retval)
{
    *__retval = Navigation::GetNavigationNavigation(n);
}

// public static bool IsPage(Fuse.Node n) :186
void Navigation__IsPage_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Navigation::IsPage(n);
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Node node) :38
void Navigation__TryFind_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::TryFind(node);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node) :72
void Navigation__TryFindBaseNavigation_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::TryFindBaseNavigation(node);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node, Fuse.Visual& parent) :45
void Navigation__TryFindBaseNavigation1_fn(::g::Fuse::Node* node, ::g::Fuse::Visual** parent, uObject** __retval)
{
    *__retval = Navigation::TryFindBaseNavigation1(node, parent);
}

// public static Fuse.Visual TryFindPage(Fuse.Node node) :82
void Navigation__TryFindPage_fn(::g::Fuse::Node* node, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage(node);
}

// internal static Fuse.Visual TryFindPage(Fuse.Node node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) :103
void Navigation__TryFindPage1_fn(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage1(node, nav, pageBind);
}

uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_contextHandle_;

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) [static] :19
uObject* Navigation::GetLocalNavigation(::g::Fuse::Visual* node)
{
    uObject* n = Navigation::GetNavigationNavigation(node);

    if (n != NULL)
        return n;

    uObject* t = uAs<uObject*>(node, ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/]);

    if (t != NULL)
        return t;

    for (::g::Fuse::Node* x = (::g::Fuse::Node*)uPtr(node)->FirstChild(::TYPES[18/*Fuse.Visual.FirstChild<Fuse.Node>*/]); x != NULL; x = (::g::Fuse::Node*)uPtr(x)->NextSibling(::TYPES[19/*Fuse.Node.NextSibling<Fuse.Node>*/]))
    {
        uObject* c = uAs<uObject*>(x, ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/]);

        if ((c != NULL) && !uIs(c, ::TYPES[10/*Fuse.Visual*/]))
            return c;
    }

    return NULL;
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) [static] :172
uObject* Navigation::GetNavigationNavigation(::g::Fuse::Visual* n)
{
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Navigation::_contextHandle_, &v))
        return (uObject*)v;

    return NULL;
}

// public static bool IsPage(Fuse.Node n) [static] :186
bool Navigation::IsPage(::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[10/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    return uPtr(v)->LayoutRole() == 0;
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Node node) [static] :38
uObject* Navigation::TryFind(::g::Fuse::Node* node)
{
    return uAs<uObject*>(Navigation::TryFindBaseNavigation(node), ::TYPES[0/*Fuse.Navigation.INavigation*/]);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node) [static] :72
uObject* Navigation::TryFindBaseNavigation(::g::Fuse::Node* node)
{
    ::g::Fuse::Visual* v;
    return Navigation::TryFindBaseNavigation1(node, &v);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node, Fuse.Visual& parent) [static] :45
uObject* Navigation::TryFindBaseNavigation1(::g::Fuse::Node* node, ::g::Fuse::Visual** parent)
{
    *parent = NULL;

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[20/*"TryFindBase...*/], node, ::STRINGS[21/*"/usr/local/...*/], 50, ::STRINGS[22/*"TryFindBase...*/]);
        return NULL;
    }

    while (node != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[10/*Fuse.Visual*/]);

        if (v != NULL)
        {
            uObject* n = Navigation::GetLocalNavigation(v);

            if (n != NULL)
            {
                *parent = v;
                return n;
            }
        }

        node = uPtr(node)->ContextParent();
    }

    return NULL;
}

// public static Fuse.Visual TryFindPage(Fuse.Node node) [static] :82
::g::Fuse::Visual* Navigation::TryFindPage(::g::Fuse::Node* node)
{
    uObject* nav;
    ::g::Fuse::Visual* bind;
    return Navigation::TryFindPage1(node, &nav, &bind);
}

// internal static Fuse.Visual TryFindPage(Fuse.Node node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) [static] :103
::g::Fuse::Visual* Navigation::TryFindPage1(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind)
{
    ::g::Fuse::Visual* prev = uAs< ::g::Fuse::Visual*>(node, ::TYPES[10/*Fuse.Visual*/]);
    *nav = NULL;
    *pageBind = NULL;

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[23/*"TryFindPage...*/], node, ::STRINGS[21/*"/usr/local/...*/], 111, ::STRINGS[24/*"TryFindPage"*/]);
        return NULL;
    }

    bool first = true;

    while (node != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[10/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* p = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (p != NULL)
            {
                *pageBind = v;

                if (uPtr(p)->IsRootingStarted())
                {
                    *nav = Navigation::TryFind(p);

                    if (*nav == NULL)
                    {
                        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[25/*"`Page` set ...*/], p, ::STRINGS[21/*"/usr/local/...*/], 132, ::STRINGS[24/*"TryFindPage"*/]);
                        return NULL;
                    }
                }

                return p;
            }

            if (!first)
            {
                uObject* n = Navigation::GetLocalNavigation(v);

                if (n != NULL)
                {
                    *nav = uAs<uObject*>(n, ::TYPES[0/*Fuse.Navigation.INavigation*/]);

                    if (*nav == NULL)
                        return NULL;

                    return prev;
                }
            }

            prev = v;
        }

        first = false;
        node = uPtr(node)->ContextParent();
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public abstract class NavigationAnimation :37
// {
static void NavigationAnimation_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[20] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[21] = ::g::Fuse::Navigation::NavigationPageProxy__StatusChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(NavigationAnimation_type, interface7));
    type->SetFields(36,
        ::g::Uno::Bool_typeof(), offsetof(NavigationAnimation, _delay), 0,
        ::g::Uno::Double_typeof(), offsetof(NavigationAnimation, _delayProgress), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(NavigationAnimation, _delayVariant), 0,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(NavigationAnimation, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(NavigationAnimation, _scale), 0);
}

NavigationAnimation_type* NavigationAnimation_typeof()
{
    static uSStrong<NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(NavigationAnimation);
    options.TypeSize = sizeof(NavigationAnimation_type);
    type = (NavigationAnimation_type*)uClassType::New("Fuse.Navigation.NavigationAnimation", options);
    type->fp_build_ = NavigationAnimation_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// internal NavigationAnimation() :39
void NavigationAnimation__ctor_5_fn(NavigationAnimation* __this)
{
    __this->ctor_5();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) :93
void NavigationAnimation__GoProgress_fn(NavigationAnimation* __this, double* p, int* variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(*p, *variant, state);
}

// private void GoProgressPlay() :122
void NavigationAnimation__GoProgressPlay_fn(NavigationAnimation* __this)
{
    __this->GoProgressPlay();
}

// protected Fuse.Navigation.INavigation get_NavContext() :42
void NavigationAnimation__get_NavContext_fn(NavigationAnimation* __this, uObject** __retval)
{
    *__retval = __this->NavContext();
}

// private void NavReady(object s) :52
void NavigationAnimation__NavReady_fn(NavigationAnimation* __this, uObject* s)
{
    __this->NavReady(s);
}

// private void NavUnready(object s) :66
void NavigationAnimation__NavUnready_fn(NavigationAnimation* __this, uObject* s)
{
    __this->NavUnready(s);
}

// protected override sealed void OnRooted() :45
void NavigationAnimation__OnRooted_fn(NavigationAnimation* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::NavigationPageProxy::New1();
    uPtr(__this->_proxy)->Init(uDelegate::New(::TYPES[21/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)NavigationAnimation__NavReady_fn, __this), uDelegate::New(::TYPES[21/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)NavigationAnimation__NavUnready_fn, __this), __this->Parent());
}

// protected override sealed void OnUnrooted() :58
void NavigationAnimation__OnUnrooted_fn(NavigationAnimation* __this)
{
    uPtr(__this->_proxy)->Dispose();
    __this->_proxy = NULL;
    __this->_delay = false;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected Fuse.Visual get_PageContext() :41
void NavigationAnimation__get_PageContext_fn(NavigationAnimation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Scale() :86
void NavigationAnimation__get_Scale_fn(NavigationAnimation* __this, float* __retval)
{
    *__retval = __this->Scale();
}

// public void set_Scale(float value) :87
void NavigationAnimation__set_Scale_fn(NavigationAnimation* __this, float* value)
{
    __this->Scale(*value);
}

// internal NavigationAnimation() [instance] :39
void NavigationAnimation::ctor_5()
{
    _scale = 1.0f;
    ctor_4();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) [instance] :93
void NavigationAnimation::GoProgress(double p, int variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    if (uPtr(state)->Mode() == 0)
    {
        _delayVariant = variant;
        _delayProgress = p;

        if (!_delay)
        {
            _delay = true;
            ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)NavigationAnimation__GoProgressPlay_fn, this), 0);
        }
    }
    else if (uPtr(state)->Mode() == 2)
    {
        _delay = false;
        DirectSeek(p, variant);
    }
    else
    {
        _delay = false;
        BypassSeek(p, variant);
    }
}

// private void GoProgressPlay() [instance] :122
void NavigationAnimation::GoProgressPlay()
{
    if (!_delay)
        return;

    _delay = false;
    PlayTo(_delayProgress, _delayVariant);
}

// protected Fuse.Navigation.INavigation get_NavContext() [instance] :42
uObject* NavigationAnimation::NavContext()
{
    return uPtr(_proxy)->Navigation();
}

// private void NavReady(object s) [instance] :52
void NavigationAnimation::NavReady(uObject* s)
{
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[20/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
    ForceUpdate();
}

// private void NavUnready(object s) [instance] :66
void NavigationAnimation::NavUnready(uObject* s)
{
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[20/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
}

// protected Fuse.Visual get_PageContext() [instance] :41
::g::Fuse::Visual* NavigationAnimation::PageContext()
{
    return uPtr(_proxy)->Page();
}

// public float get_Scale() [instance] :86
float NavigationAnimation::Scale()
{
    return _scale;
}

// public void set_Scale(float value) [instance] :87
void NavigationAnimation::Scale(float value)
{
    _scale = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Navigation.Events.uno
// -------------------------------------------------------------------------

// public sealed class NavigationArgs :13
// {
static void NavigationArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationMode_typeof(), offsetof(NavigationArgs, _Mode), 0,
        ::g::Uno::Double_typeof(), offsetof(NavigationArgs, _PreviousProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(NavigationArgs, _Progress), 0);
}

uType* NavigationArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NavigationArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationArgs", options);
    type->fp_build_ = NavigationArgs_build;
    return type;
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :19
void NavigationArgs__ctor_1_fn(NavigationArgs* __this, double* progress, double* prevProgress, int* mode)
{
    __this->ctor_1(*progress, *prevProgress, *mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() :15
void NavigationArgs__get_Mode_fn(NavigationArgs* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) :15
void NavigationArgs__set_Mode_fn(NavigationArgs* __this, int* value)
{
    __this->Mode(*value);
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :19
void NavigationArgs__New2_fn(double* progress, double* prevProgress, int* mode, NavigationArgs** __retval)
{
    *__retval = NavigationArgs::New2(*progress, *prevProgress, *mode);
}

// public generated double get_PreviousProgress() :17
void NavigationArgs__get_PreviousProgress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// private generated void set_PreviousProgress(double value) :17
void NavigationArgs__set_PreviousProgress_fn(NavigationArgs* __this, double* value)
{
    __this->PreviousProgress(*value);
}

// public generated double get_Progress() :16
void NavigationArgs__get_Progress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private generated void set_Progress(double value) :16
void NavigationArgs__set_Progress_fn(NavigationArgs* __this, double* value)
{
    __this->Progress(*value);
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [instance] :19
void NavigationArgs::ctor_1(double progress, double prevProgress, int mode)
{
    ctor_();
    Progress(progress);
    PreviousProgress(prevProgress);
    Mode(mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() [instance] :15
int NavigationArgs::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) [instance] :15
void NavigationArgs::Mode(int value)
{
    _Mode = value;
}

// public generated double get_PreviousProgress() [instance] :17
double NavigationArgs::PreviousProgress()
{
    return _PreviousProgress;
}

// private generated void set_PreviousProgress(double value) [instance] :17
void NavigationArgs::PreviousProgress(double value)
{
    _PreviousProgress = value;
}

// public generated double get_Progress() [instance] :16
double NavigationArgs::Progress()
{
    return _Progress;
}

// private generated void set_Progress(double value) [instance] :16
void NavigationArgs::Progress(double value)
{
    _Progress = value;
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [static] :19
NavigationArgs* NavigationArgs::New2(double progress, double prevProgress, int mode)
{
    NavigationArgs* obj1 = (NavigationArgs*)uNew(NavigationArgs_typeof());
    obj1->ctor_1(progress, prevProgress, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/EdgeNavigation.uno
// ----------------------------------------------------------------------

// public enum NavigationEdge :11
uEnumType* NavigationEdge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationEdge", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "None", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// public enum NavigationGotoMode :18
uEnumType* NavigationGotoMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationGotoMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Transition", 0LL,
        "Bypass", 1LL,
        "Prepare", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Navigation.Events.uno
// -------------------------------------------------------------------------

// public delegate void NavigationHandler(object sender, Fuse.Navigation.NavigationArgs state) :28
uDelegateType* NavigationHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Navigation.Events.uno
// -------------------------------------------------------------------------

// public enum NavigationMode :6
uEnumType* NavigationMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Switch", 0LL,
        "Bypass", 1LL,
        "Seek", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// public delegate void NavigationPageCountHandler(object sender) :48
uDelegateType* NavigationPageCountHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageCountHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno
// -------------------------------------------------------------------

// public static class NavigationPageProperty :325
// {
// static generated NavigationPageProperty() :325
static void NavigationPageProperty__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    NavigationPageProperty::_pageProperty_ = ::g::Fuse::Properties::CreateHandle();
    NavigationPageProperty::RootedBindings_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[22/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/]));
    NavigationPageProperty::_watchers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[23/*Uno.Collections.Dictionary<Fuse.Visual, Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>>*/]));
}

static void NavigationPageProperty_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Fuse::Visual_typeof();
    ::TYPES[24] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&NavigationPageProperty::_pageProperty_, uFieldFlagsStatic,
        ::TYPES[23/*Uno.Collections.Dictionary<Fuse.Visual, Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>>*/], (uintptr_t)&NavigationPageProperty::_watchers_, uFieldFlagsStatic,
        ::TYPES[22/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/], (uintptr_t)&NavigationPageProperty::RootedBindings_, uFieldFlagsStatic);
}

uClassType* NavigationPageProperty_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavigationPageProperty", options);
    type->fp_build_ = NavigationPageProperty_build;
    type->fp_cctor_ = NavigationPageProperty__cctor__fn;
    return type;
}

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :348
void NavigationPageProperty__AddPageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::AddPageWatcher(where, callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) :402
void NavigationPageProperty__GetNavigationPage_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval)
{
    *__retval = NavigationPageProperty::GetNavigationPage(n);
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) :334
void NavigationPageProperty__GetWatcherList_fn(::g::Fuse::Visual* where, bool* optional, ::g::Uno::Collections::List** __retval)
{
    *__retval = NavigationPageProperty::GetWatcherList(where, *optional);
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :353
void NavigationPageProperty__RemovePageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::RemovePageWatcher(where, callback);
}

uSStrong< ::g::Fuse::PropertyHandle*> NavigationPageProperty::_pageProperty_;
uSStrong< ::g::Uno::Collections::Dictionary*> NavigationPageProperty::_watchers_;
uSStrong< ::g::Uno::Collections::List*> NavigationPageProperty::RootedBindings_;

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :348
void NavigationPageProperty::AddPageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(NavigationPageProperty::GetWatcherList(where, false)), callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) [static] :402
::g::Fuse::Visual* NavigationPageProperty::GetNavigationPage(::g::Fuse::Visual* n)
{
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(NavigationPageProperty::_pageProperty_, &v))
        return uCast< ::g::Fuse::Visual*>(v, ::TYPES[10/*Fuse.Visual*/]);

    return NULL;
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) [static] :334
::g::Uno::Collections::List* NavigationPageProperty::GetWatcherList(::g::Fuse::Visual* where, bool optional)
{
    bool ret2;
    ::g::Uno::Collections::List* o;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NavigationPageProperty::_watchers_), where, (void**)(&o), &ret2), ret2))
        return o;

    if (optional)
        return NULL;

    ::g::Uno::Collections::List* q = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[24/*Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>*/]);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NavigationPageProperty::_watchers_), where, q);
    return q;
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :353
void NavigationPageProperty::RemovePageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    bool ret3;
    bool ret4;
    ::g::Uno::Collections::List* list = NavigationPageProperty::GetWatcherList(where, true);

    if (list == NULL)
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(list), callback, &ret3);

    if (list->Count() == 0)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NavigationPageProperty::_watchers_), where, &ret4);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationPageProxy.uno
// ---------------------------------------------------------------------------

// public sealed class NavigationPageProxy :14
// {
static void NavigationPageProxy_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof(),
        ::g::Fuse::Navigation::NavigationPageProperty_typeof());
    type->SetInterfaces(
        ::g::Fuse::Navigation::IPagePropertyListener_typeof(), offsetof(NavigationPageProxy_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(NavigationPageProxy, _navigation), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigationPageProxy, _pageBind), 0,
        NavigationPageProxy__StatusChangedHandler_typeof(), offsetof(NavigationPageProxy, _ready), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigationPageProxy, _source), 0,
        NavigationPageProxy__StatusChangedHandler_typeof(), offsetof(NavigationPageProxy, _unready), 0,
        ::g::Uno::Bool_typeof(), offsetof(NavigationPageProxy, _waitRootingCompleted), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigationPageProxy, _Page), 0);
}

NavigationPageProxy_type* NavigationPageProxy_typeof()
{
    static uSStrong<NavigationPageProxy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(NavigationPageProxy);
    options.TypeSize = sizeof(NavigationPageProxy_type);
    type = (NavigationPageProxy_type*)uClassType::New("Fuse.Navigation.NavigationPageProxy", options);
    type->fp_build_ = NavigationPageProxy_build;
    type->fp_ctor_ = (void*)NavigationPageProxy__New1_fn;
    return type;
}

// internal NavigationPageProxy() :32
void NavigationPageProxy__ctor__fn(NavigationPageProxy* __this)
{
    __this->ctor_();
}

// public void Dispose() :100
void NavigationPageProxy__Dispose_fn(NavigationPageProxy* __this)
{
    __this->Dispose();
}

// internal void Init(Fuse.Navigation.NavigationPageProxy.StatusChangedHandler ready, Fuse.Navigation.NavigationPageProxy.StatusChangedHandler unready, Fuse.Visual source) :34
void NavigationPageProxy__Init_fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready, ::g::Fuse::Visual* source)
{
    __this->Init(ready, unready, source);
}

// public bool get_IsReady() :83
void NavigationPageProxy__get_IsReady_fn(NavigationPageProxy* __this, bool* __retval)
{
    *__retval = __this->IsReady();
}

// public Fuse.Navigation.INavigation get_Navigation() :24
void NavigationPageProxy__get_Navigation_fn(NavigationPageProxy* __this, uObject** __retval)
{
    *__retval = __this->Navigation();
}

// internal NavigationPageProxy New() :32
void NavigationPageProxy__New1_fn(NavigationPageProxy** __retval)
{
    *__retval = NavigationPageProxy::New1();
}

// private void OnPageRootingCompleted() :86
void NavigationPageProxy__OnPageRootingCompleted_fn(NavigationPageProxy* __this)
{
    __this->OnPageRootingCompleted();
}

// public generated Fuse.Visual get_Page() :21
void NavigationPageProxy__get_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Page();
}

// private generated void set_Page(Fuse.Visual value) :21
void NavigationPageProxy__set_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* value)
{
    __this->Page(value);
}

// private void RootImpl(Fuse.Visual source) :41
void NavigationPageProxy__RootImpl_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source)
{
    __this->RootImpl(source);
}

// private void UnrootImpl() :107
void NavigationPageProxy__UnrootImpl_fn(NavigationPageProxy* __this)
{
    __this->UnrootImpl();
}

// internal NavigationPageProxy() [instance] :32
void NavigationPageProxy::ctor_()
{
}

// public void Dispose() [instance] :100
void NavigationPageProxy::Dispose()
{
    UnrootImpl();
    _ready = NULL;
    _unready = NULL;
}

// internal void Init(Fuse.Navigation.NavigationPageProxy.StatusChangedHandler ready, Fuse.Navigation.NavigationPageProxy.StatusChangedHandler unready, Fuse.Visual source) [instance] :34
void NavigationPageProxy::Init(uDelegate* ready, uDelegate* unready, ::g::Fuse::Visual* source)
{
    _ready = ready;
    _unready = unready;
    RootImpl(source);
}

// public bool get_IsReady() [instance] :83
bool NavigationPageProxy::IsReady()
{
    return _navigation != NULL;
}

// public Fuse.Navigation.INavigation get_Navigation() [instance] :24
uObject* NavigationPageProxy::Navigation()
{
    return _navigation;
}

// private void OnPageRootingCompleted() [instance] :86
void NavigationPageProxy::OnPageRootingCompleted()
{
    if ((!_waitRootingCompleted || (Page() == NULL)) || (_source == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Got an undesired ready event"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationPageProxy.uno"), 90, uString::Const("OnPageRootingCompleted"));
        return;
    }

    uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
    _waitRootingCompleted = false;
    RootImpl(_source);
}

// public generated Fuse.Visual get_Page() [instance] :21
::g::Fuse::Visual* NavigationPageProxy::Page()
{
    return _Page;
}

// private generated void set_Page(Fuse.Visual value) [instance] :21
void NavigationPageProxy::Page(::g::Fuse::Visual* value)
{
    _Page = value;
}

// private void RootImpl(Fuse.Visual source) [instance] :41
void NavigationPageProxy::RootImpl(::g::Fuse::Visual* source)
{
    _source = source;

    if (_source == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Attempting rooting to null source"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationPageProxy.uno"), 46, uString::Const("RootImpl"));
        return;
    }

    Page(::g::Fuse::Navigation::Navigation::TryFindPage1(_source, &_navigation, &_pageBind));

    if (Page() == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Unable to locate Page"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationPageProxy.uno"), 53, uString::Const("RootImpl"), NULL);
        return;
    }

    if (!uPtr(Page())->IsRootingStarted())
    {
        uPtr(Page())->add_RootingCompleted(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
        _waitRootingCompleted = true;
        _navigation = NULL;
        _pageBind = NULL;
        return;
    }

    if (_navigation == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Something went wrong locating a Navigator"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationPageProxy.uno"), 70, uString::Const("RootImpl"));
        return;
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::AddPageWatcher(_pageBind, (uObject*)this);

    if (::g::Uno::Delegate::op_Inequality(_ready, NULL) && (_navigation != NULL))
        uPtr(_ready)->InvokeVoid(this);
}

// private void UnrootImpl() [instance] :107
void NavigationPageProxy::UnrootImpl()
{
    if (Page() != NULL)
    {
        if (_navigation != NULL)
            uPtr(_unready)->InvokeVoid(this);

        if (_waitRootingCompleted)
        {
            uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
            _waitRootingCompleted = false;
        }
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::RemovePageWatcher(_pageBind, (uObject*)this);

    Page(NULL);
    _navigation = NULL;
    _source = NULL;
}

// internal NavigationPageProxy New() [static] :32
NavigationPageProxy* NavigationPageProxy::New1()
{
    NavigationPageProxy* obj2 = (NavigationPageProxy*)uNew(NavigationPageProxy_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno
// -------------------------------------------------------------------

// public struct NavigationPageState :65
// {
static void NavigationPageState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(NavigationPageState, Progress), 0,
        ::g::Uno::Float_typeof(), offsetof(NavigationPageState, PreviousProgress), 0);
}

uStructType* NavigationPageState_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(NavigationPageState);
    options.ValueSize = sizeof(NavigationPageState);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Navigation.NavigationPageState", options);
    type->fp_build_ = NavigationPageState_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Navigation.Events.uno
// -------------------------------------------------------------------------

// public enum NavigationState :30
uEnumType* NavigationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Stable", 0LL,
        "Seek", 1LL,
        "Transition", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/StructuredNavigation.uno
// ----------------------------------------------------------------------------

// internal enum StructuredNavigation.NavigationStructure :15
uEnumType* StructuredNavigation__NavigationStructure_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.StructuredNavigation.NavigationStructure", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Linear", 0LL,
        "Hierarchical", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno
// ----------------------------------------------------------------------

// public abstract class NavigationTriggerAction :9
// {
static void NavigationTriggerAction_build(uType* type)
{
    ::STRINGS[26] = uString::Const("No navigation context was found");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/TriggerActions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetFields(8,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(NavigationTriggerAction, _NavigationContext), 0);
}

NavigationTriggerAction_type* NavigationTriggerAction_typeof()
{
    static uSStrong<NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(NavigationTriggerAction);
    options.TypeSize = sizeof(NavigationTriggerAction_type);
    type = (NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigationTriggerAction", options);
    type->fp_build_ = NavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))NavigationTriggerAction__Perform_fn;
    return type;
}

// protected generated NavigationTriggerAction() :9
void NavigationTriggerAction__ctor_2_fn(NavigationTriggerAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() :11
void NavigationTriggerAction__get_NavigationContext_fn(NavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) :11
void NavigationTriggerAction__set_NavigationContext_fn(NavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :13
void NavigationTriggerAction__Perform_fn(NavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uObject* ind1;
    ind1 = __this->NavigationContext();
    uObject* ctx = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFind(n);

    if (ctx == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[26/*"No navigati...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 18, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    __this->Perform1(ctx, n);
}

// protected generated NavigationTriggerAction() [instance] :9
void NavigationTriggerAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() [instance] :11
uObject* NavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) [instance] :11
void NavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// private sealed class RouteModificationCommand.OuterSubscription :17
// {
static void RouteModificationCommand__OuterSubscription_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(RouteModificationCommand__OuterSubscription_type, interface0),
        ::TYPES[25/*Fuse.Reactive.IListener*/], offsetof(RouteModificationCommand__OuterSubscription_type, interface1),
        ::g::Fuse::Reactive::IEventHandler_typeof(), offsetof(RouteModificationCommand__OuterSubscription_type, interface2));
    type->SetFields(2,
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(RouteModificationCommand__OuterSubscription, _context), 0,
        ::g::Fuse::Navigation::RouteModificationCommand_typeof(), offsetof(RouteModificationCommand__OuterSubscription, _expr), 0,
        ::g::Fuse::Navigation::RouteModificationCommand__InnerSubscription_typeof(), offsetof(RouteModificationCommand__OuterSubscription, _innerSub), 0,
        ::TYPES[25/*Fuse.Reactive.IListener*/], offsetof(RouteModificationCommand__OuterSubscription, _listener), 0);
}

RouteModificationCommand__OuterSubscription_type* RouteModificationCommand__OuterSubscription_typeof()
{
    static uSStrong<RouteModificationCommand__OuterSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(RouteModificationCommand__OuterSubscription);
    options.TypeSize = sizeof(RouteModificationCommand__OuterSubscription_type);
    type = (RouteModificationCommand__OuterSubscription_type*)uClassType::New("Fuse.Navigation.RouteModificationCommand.OuterSubscription", options);
    type->fp_build_ = RouteModificationCommand__OuterSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))RouteModificationCommand__OuterSubscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))RouteModificationCommand__OuterSubscription__OnNewData_fn;
    type->interface2.fp_Dispatch = (void(*)(uObject*, uObject*))RouteModificationCommand__OuterSubscription__FuseReactiveIEventHandlerDispatch_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))RouteModificationCommand__OuterSubscription__Dispose_fn;
    return type;
}

// public OuterSubscription(Fuse.Navigation.RouteModificationCommand expr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :24
void RouteModificationCommand__OuterSubscription__ctor_1_fn(RouteModificationCommand__OuterSubscription* __this, ::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener)
{
    __this->ctor_1(expr, context, listener);
}

// public override sealed void Dispose() :32
void RouteModificationCommand__OuterSubscription__Dispose_fn(RouteModificationCommand__OuterSubscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
    __this->_expr = NULL;
    __this->_listener = NULL;
    __this->_context = NULL;
    __this->DisposeInner(false);
}

// internal void DisposeInner([bool fromInner]) :41
void RouteModificationCommand__OuterSubscription__DisposeInner_fn(RouteModificationCommand__OuterSubscription* __this, bool* fromInner)
{
    __this->DisposeInner(*fromInner);
}

// private void Fuse.Reactive.IEventHandler.Dispatch(Fuse.Reactive.IEventRecord e) :52
void RouteModificationCommand__OuterSubscription__FuseReactiveIEventHandlerDispatch_fn(RouteModificationCommand__OuterSubscription* __this, uObject* e)
{
    if (__this->_innerSub != NULL)
        return;

    __this->_innerSub = ::g::Fuse::Navigation::RouteModificationCommand__InnerSubscription::New1(__this);
}

// public OuterSubscription New(Fuse.Navigation.RouteModificationCommand expr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :24
void RouteModificationCommand__OuterSubscription__New1_fn(::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener, RouteModificationCommand__OuterSubscription** __retval)
{
    *__retval = RouteModificationCommand__OuterSubscription::New1(expr, context, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression expr, object value) :62
void RouteModificationCommand__OuterSubscription__OnNewData_fn(RouteModificationCommand__OuterSubscription* __this, uObject* expr, uObject* value)
{
}

// public OuterSubscription(Fuse.Navigation.RouteModificationCommand expr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :24
void RouteModificationCommand__OuterSubscription::ctor_1(::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener)
{
    ctor_();
    _expr = expr;
    _context = context;
    _listener = listener;
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[25/*Fuse.Reactive.IListener*/]), (uObject*)_expr, this);
}

// internal void DisposeInner([bool fromInner]) [instance] :41
void RouteModificationCommand__OuterSubscription::DisposeInner(bool fromInner)
{
    if (_innerSub != NULL)
    {
        if (!fromInner)
            uPtr(_innerSub)->Dispose();

        _innerSub = NULL;
    }
}

// public OuterSubscription New(Fuse.Navigation.RouteModificationCommand expr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :24
RouteModificationCommand__OuterSubscription* RouteModificationCommand__OuterSubscription::New1(::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener)
{
    RouteModificationCommand__OuterSubscription* obj1 = (RouteModificationCommand__OuterSubscription*)uNew(RouteModificationCommand__OuterSubscription_typeof());
    obj1->ctor_1(expr, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal enum OutletType :17
uEnumType* OutletType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.OutletType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Outlet", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageData.uno
// ----------------------------------------------------------------

// internal sealed class PageData :12
// {
// static generated PageData() :12
static void PageData__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    PageData::_propPageData_ = ::g::Fuse::Properties::CreateHandle();
}

static void PageData_build(uType* type)
{
    ::STRINGS[27] = uString::Const("Attaching to null page");
    ::STRINGS[28] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageData.uno");
    ::STRINGS[29] = uString::Const("AttachRouterPage");
    ::STRINGS[30] = uString::Const("Mismatched page visual");
    ::TYPES[26] = ::g::Fuse::Navigation::RouterPageChangedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(0,
        uObject_typeof(), offsetof(PageData, ControlPageData), 0,
        ::g::Uno::Int_typeof(), offsetof(PageData, Index), 0,
        ::g::Uno::Float_typeof(), offsetof(PageData, PreviousProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(PageData, Progress), 0,
        uObject_typeof(), offsetof(PageData, _Context), 0,
        ::g::Fuse::Navigation::RouterPage_typeof(), offsetof(PageData, _RouterPage), 0,
        ::g::Fuse::Visual_typeof(), offsetof(PageData, _Visual), uFieldFlagsWeak,
        ::TYPES[26/*Fuse.Navigation.RouterPageChangedHandler*/], offsetof(PageData, RouterPageChanged1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&PageData::_propPageData_, uFieldFlagsStatic);
}

uType* PageData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PageData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.PageData", options);
    type->fp_build_ = PageData_build;
    type->fp_cctor_ = PageData__cctor__fn;
    return type;
}

// public PageData(Fuse.Visual visual) :33
void PageData__ctor__fn(PageData* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public void AttachRouterPage(Fuse.Navigation.RouterPage rp) :38
void PageData__AttachRouterPage_fn(PageData* __this, ::g::Fuse::Navigation::RouterPage* rp)
{
    __this->AttachRouterPage(rp);
}

// public generated object get_Context() :31
void PageData__get_Context_fn(PageData* __this, uObject** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(object value) :31
void PageData__set_Context_fn(PageData* __this, uObject* value)
{
    __this->Context(value);
}

// public static Fuse.Navigation.PageData Get(Fuse.Visual v) :91
void PageData__Get_fn(::g::Fuse::Visual* v, PageData** __retval)
{
    *__retval = PageData::Get(v);
}

// public static Fuse.Navigation.PageData GetOrCreate(Fuse.Visual v, [bool allowCreate]) :77
void PageData__GetOrCreate_fn(::g::Fuse::Visual* v, bool* allowCreate, PageData** __retval)
{
    *__retval = PageData::GetOrCreate(v, *allowCreate);
}

// public PageData New(Fuse.Visual visual) :33
void PageData__New1_fn(::g::Fuse::Visual* visual, PageData** __retval)
{
    *__retval = PageData::New1(visual);
}

// public generated Fuse.Navigation.RouterPage get_RouterPage() :27
void PageData__get_RouterPage_fn(PageData* __this, ::g::Fuse::Navigation::RouterPage** __retval)
{
    *__retval = __this->RouterPage();
}

// private generated void set_RouterPage(Fuse.Navigation.RouterPage value) :27
void PageData__set_RouterPage_fn(PageData* __this, ::g::Fuse::Navigation::RouterPage* value)
{
    __this->RouterPage(value);
}

// public generated void add_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler value) :29
void PageData__add_RouterPageChanged_fn(PageData* __this, uDelegate* value)
{
    __this->add_RouterPageChanged(value);
}

// public generated void remove_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler value) :29
void PageData__remove_RouterPageChanged_fn(PageData* __this, uDelegate* value)
{
    __this->remove_RouterPageChanged(value);
}

// public void SetContext(object data) :70
void PageData__SetContext_fn(PageData* __this, uObject* data)
{
    __this->SetContext(data);
}

// private void UpdateContextData(Fuse.Visual page, object data) :62
void PageData__UpdateContextData_fn(PageData* __this, ::g::Fuse::Visual* page, uObject* data)
{
    __this->UpdateContextData(page, data);
}

// public generated Fuse.Visual get_Visual() :15
void PageData__get_Visual_fn(PageData* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :15
void PageData__set_Visual_fn(PageData* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

uSStrong< ::g::Fuse::PropertyHandle*> PageData::_propPageData_;

// public PageData(Fuse.Visual visual) [instance] :33
void PageData::ctor_(::g::Fuse::Visual* visual)
{
    Visual(visual);
}

// public void AttachRouterPage(Fuse.Navigation.RouterPage rp) [instance] :38
void PageData::AttachRouterPage(::g::Fuse::Navigation::RouterPage* rp)
{
    ::g::Fuse::Visual* visual = Visual();

    if (visual == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[27/*"Attaching t...*/], this, ::STRINGS[28/*"/usr/local/...*/], 43, ::STRINGS[29/*"AttachRoute...*/]);
        return;
    }

    if ((uPtr(rp)->Node != NULL) && (visual != uPtr(rp)->Node))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[30/*"Mismatched ...*/], this, ::STRINGS[28/*"/usr/local/...*/], 49, ::STRINGS[29/*"AttachRoute...*/]);
        return;
    }

    uPtr(rp)->Node = visual;
    RouterPage(rp);
    uPtr(visual)->Prepare(rp->Parameter);
    UpdateContextData(visual, rp->Context);

    if (::g::Uno::Delegate::op_Inequality(RouterPageChanged1, NULL))
        uPtr(RouterPageChanged1)->Invoke(2, this, rp);
}

// public generated object get_Context() [instance] :31
uObject* PageData::Context()
{
    return _Context;
}

// private generated void set_Context(object value) [instance] :31
void PageData::Context(uObject* value)
{
    _Context = value;
}

// public generated Fuse.Navigation.RouterPage get_RouterPage() [instance] :27
::g::Fuse::Navigation::RouterPage* PageData::RouterPage()
{
    return _RouterPage;
}

// private generated void set_RouterPage(Fuse.Navigation.RouterPage value) [instance] :27
void PageData::RouterPage(::g::Fuse::Navigation::RouterPage* value)
{
    _RouterPage = value;
}

// public generated void add_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler value) [instance] :29
void PageData::add_RouterPageChanged(uDelegate* value)
{
    RouterPageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RouterPageChanged1, value), ::TYPES[26/*Fuse.Navigation.RouterPageChangedHandler*/]);
}

// public generated void remove_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler value) [instance] :29
void PageData::remove_RouterPageChanged(uDelegate* value)
{
    RouterPageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RouterPageChanged1, value), ::TYPES[26/*Fuse.Navigation.RouterPageChangedHandler*/]);
}

// public void SetContext(object data) [instance] :70
void PageData::SetContext(uObject* data)
{
    UpdateContextData(Visual(), data);
}

// private void UpdateContextData(Fuse.Visual page, object data) [instance] :62
void PageData::UpdateContextData(::g::Fuse::Visual* page, uObject* data)
{
    uObject* oldData = Context();
    Context(data);
    uPtr(page)->BroadcastDataChange(oldData, data);
}

// public generated Fuse.Visual get_Visual() [instance] :15
::g::Fuse::Visual* PageData::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :15
void PageData::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public static Fuse.Navigation.PageData Get(Fuse.Visual v) [static] :91
PageData* PageData::Get(::g::Fuse::Visual* v)
{
    return PageData::GetOrCreate(v, false);
}

// public static Fuse.Navigation.PageData GetOrCreate(Fuse.Visual v, [bool allowCreate]) [static] :77
PageData* PageData::GetOrCreate(::g::Fuse::Visual* v, bool allowCreate)
{
    uObject* res;

    if (uPtr(uPtr(v)->Properties())->TryGet(PageData::_propPageData_, &res))
        return uCast<PageData*>(res, PageData_typeof());

    if (!allowCreate)
        return NULL;

    PageData* pd = PageData::New1(v);
    uPtr(uPtr(v)->Properties())->Set(PageData::_propPageData_, pd);
    return pd;
}

// public PageData New(Fuse.Visual visual) [static] :33
PageData* PageData::New1(::g::Fuse::Visual* visual)
{
    PageData* obj1 = (PageData*)uNew(PageData_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno
// -------------------------------------------------------------------

// public sealed class PageExpression :15
// {
static void PageExpression_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(PageExpression, _Key), 0);
}

::g::Fuse::Reactive::Expression_type* PageExpression_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PageExpression);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Navigation.PageExpression", options);
    type->fp_build_ = PageExpression_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))PageExpression__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))PageExpression__Subscribe_fn;
    return type;
}

// public generated string get_Key() :18
void PageExpression__get_Key_fn(PageExpression* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :18
void PageExpression__set_Key_fn(PageExpression* __this, uString* value)
{
    __this->Key(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext dc, Fuse.Reactive.IListener listener) :26
void PageExpression__Subscribe_fn(PageExpression* __this, uObject* dc, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)PageExpression__Subscription::New1(__this, ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(dc), ::TYPES[13/*Fuse.Reactive.IContext*/])), listener), void();
}

// public generated string get_Key() [instance] :18
uString* PageExpression::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :18
void PageExpression::Key(uString* value)
{
    _Key = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno
// -------------------------------------------------------------------

// public sealed class PageResourceBinding<T> :160
// {
static void PageResourceBinding_build(uType* type)
{
    ::STRINGS[31] = uString::Const("Visual");
    ::STRINGS[32] = uString::Const("Node");
    ::TYPES[27] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[28] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[10] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof(),
        ::g::Fuse::Navigation::NavigationPageProperty_typeof(),
        ::g::Fuse::Resources::ResourceRegistry_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PageResourceBinding_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(PageResourceBinding_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(PageResourceBinding_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface5),
        ::g::Fuse::Navigation::IPageResourceBinding_typeof(), offsetof(PageResourceBinding_type, interface6));
    type->SetFields(15,
        ::TYPES[10/*Fuse.Visual*/], offsetof(PageResourceBinding, _currentPage), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(PageResourceBinding, _hasDefault), 0,
        ::TYPES[0/*Fuse.Navigation.INavigation*/], offsetof(PageResourceBinding, _nav), 0,
        ::g::Uno::String_typeof(), offsetof(PageResourceBinding, _Key), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(PageResourceBinding, _Target), 0);
}

PageResourceBinding_type* PageResourceBinding_typeof()
{
    static uSStrong<PageResourceBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 21;
    options.GenericCount = 1;
    options.InterfaceCount = 7;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(PageResourceBinding);
    options.TypeSize = sizeof(PageResourceBinding_type);
    type = (PageResourceBinding_type*)uClassType::New("Fuse.Navigation.PageResourceBinding`1", options);
    type->fp_build_ = PageResourceBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnUnrooted_fn;
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

// private bool Acceptor(object obj) :314
void PageResourceBinding__Acceptor_fn(PageResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private void GotoPage(Fuse.Visual page) :284
void PageResourceBinding__GotoPage_fn(PageResourceBinding* __this, ::g::Fuse::Visual* page)
{
    __this->GotoPage(page);
}

// public generated string get_Key() :166
void PageResourceBinding__get_Key_fn(PageResourceBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :166
void PageResourceBinding__set_Key_fn(PageResourceBinding* __this, uString* value)
{
    __this->Key(value);
}

// private object get_LocalObject() :255
void PageResourceBinding__get_LocalObject_fn(PageResourceBinding* __this, uObject** __retval)
{
    *__retval = __this->LocalObject();
}

// private void OnChanged() :293
void PageResourceBinding__OnChanged_fn(PageResourceBinding* __this)
{
    __this->OnChanged();
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) :279
void PageResourceBinding__OnNavigated_fn(PageResourceBinding* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    __this->OnNavigated(s, args);
}

// protected override sealed void OnRooted() :203
void PageResourceBinding__OnRooted_fn(PageResourceBinding* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Uno::Collections::List__Add_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings_), (uObject*)__this);
    __this->UpdateSource();
}

// protected override sealed void OnUnrooted() :244
void PageResourceBinding__OnUnrooted_fn(PageResourceBinding* __this)
{
    bool ret2;
    __this->ReleaseCurrent();
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings_), (uObject*)__this, &ret2);
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseCurrent() :234
void PageResourceBinding__ReleaseCurrent_fn(PageResourceBinding* __this)
{
    __this->ReleaseCurrent();
}

// public generated Uno.UX.Property<T> get_Target() :163
void PageResourceBinding__get_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :163
void PageResourceBinding__set_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void UpdateSource() :212
void PageResourceBinding__UpdateSource_fn(PageResourceBinding* __this)
{
    __this->UpdateSource();
}

// private bool Acceptor(object obj) [instance] :314
bool PageResourceBinding::Acceptor(uObject* obj)
{
    return uIs(obj, __type->T(0));
}

// private void GotoPage(Fuse.Visual page) [instance] :284
void PageResourceBinding::GotoPage(::g::Fuse::Visual* page)
{
    if (page == _currentPage)
        return;

    _currentPage = page;
    OnChanged();
}

// public generated string get_Key() [instance] :166
uString* PageResourceBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :166
void PageResourceBinding::Key(uString* value)
{
    _Key = value;
}

// private object get_LocalObject() [instance] :255
uObject* PageResourceBinding::LocalObject()
{
    ::g::Fuse::Node* n = Parent();

    while (n != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[10/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* page = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (page != NULL)
                return page;

            uObject* navi = ::g::Fuse::Navigation::Navigation::GetLocalNavigation(v);

            if (navi != NULL)
                return navi;
        }

        n = uPtr(n)->ContextParent();
    }

    return NULL;
}

// private void OnChanged() [instance] :293
void PageResourceBinding::OnChanged()
{
    ::g::Fuse::Visual* page = _currentPage;

    if (page != NULL)
    {
        if ((::g::Uno::String::op_Equality(Key(), ::STRINGS[31/*"Visual"*/]) || ::g::Uno::String::op_Equality(Key(), ::STRINGS[32/*"Node"*/])) && uIs(page, __type->T(0)))
            ::g::Uno::UX::Property1__Set_fn(uPtr(Target()), uUnboxAny(__type->T(0), page), NULL);
        else
        {
            uObject* resource;

            if (uPtr(page)->TryGetResource(Key(), uDelegate::New(::TYPES[27/*Uno.Predicate<object>*/], (void*)PageResourceBinding__Acceptor_fn, this), &resource))
                ::g::Uno::UX::Property1__Set_fn(uPtr(Target()), uUnboxAny(__type->T(0), resource), NULL);
            else if (_hasDefault)
                ::g::Uno::UX::Property1__Set_fn(uPtr(Target()), _default(), NULL);
        }
    }
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) [instance] :279
void PageResourceBinding::OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    GotoPage(uPtr(args)->NewVisual());
}

// private void ReleaseCurrent() [instance] :234
void PageResourceBinding::ReleaseCurrent()
{
    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_Navigated(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[28/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        _nav = NULL;
    }

    _currentPage = NULL;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :163
::g::Uno::UX::Property1* PageResourceBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :163
void PageResourceBinding::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// private void UpdateSource() [instance] :212
void PageResourceBinding::UpdateSource()
{
    uObject* local = LocalObject();

    if ((local == _nav) || (local == _currentPage))
        return;

    ReleaseCurrent();
    _nav = uAs<uObject*>(local, ::TYPES[0/*Fuse.Navigation.INavigation*/]);
    _currentPage = uAs< ::g::Fuse::Visual*>(local, ::TYPES[10/*Fuse.Visual*/]);

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::add_Navigated(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[28/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        GotoPage(::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/])));
    }
    else
        OnChanged();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal sealed class PagesMap :92
// {
static void PagesMap_build(uType* type)
{
    type->SetBase(::g::Fuse::Reactive::ObserverMap_typeof()->MakeType(::g::Fuse::Navigation::RouterPage_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ObserverMap_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Navigation::RouterPage_typeof(), offsetof(PagesMap, _owner), uFieldFlagsWeak);
}

::g::Fuse::Reactive::ObserverMap_type* PagesMap_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ObserverMap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ObserverMap_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PagesMap);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ObserverMap_type);
    type = (::g::Fuse::Reactive::ObserverMap_type*)uClassType::New("Fuse.Navigation.PagesMap", options);
    type->fp_build_ = PagesMap_build;
    type->fp_Map = (void(*)(::g::Fuse::Reactive::ObserverMap*, uObject*, uObject**))PagesMap__Map_fn;
    type->fp_OnUpdated = (void(*)(::g::Fuse::Reactive::ObserverMap*))PagesMap__OnUpdated_fn;
    type->fp_Unmap = (void(*)(::g::Fuse::Reactive::ObserverMap*, uObject*, uObject**))PagesMap__Unmap_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnFailed_fn;
    return type;
}

// public PagesMap(Fuse.Navigation.RouterPage owner) :97
void PagesMap__ctor_1_fn(PagesMap* __this, ::g::Fuse::Navigation::RouterPage* owner)
{
    __this->ctor_1(owner);
}

// protected override sealed Fuse.Navigation.RouterPage Map(object v) :102
void PagesMap__Map_fn(PagesMap* __this, uObject* v, ::g::Fuse::Navigation::RouterPage** __retval)
{
    ::g::Fuse::Navigation::RouterPage* collection1;
    collection1 = ::g::Fuse::Navigation::RouterPage::New1();
    uPtr(collection1)->Context = v;
    return *__retval = collection1, void();
}

// public PagesMap New(Fuse.Navigation.RouterPage owner) :97
void PagesMap__New1_fn(::g::Fuse::Navigation::RouterPage* owner, PagesMap** __retval)
{
    *__retval = PagesMap::New1(owner);
}

// protected override sealed void OnUpdated() :112
void PagesMap__OnUpdated_fn(PagesMap* __this)
{
    if ((__this->_owner == NULL) || (uPtr(__this->_owner)->Node == NULL))
        return;

    ::g::Fuse::Navigation::RouterPage::BubbleHistoryChanged(uPtr(__this->_owner)->Node);
}

// protected override sealed object Unmap(Fuse.Navigation.RouterPage mv) :107
void PagesMap__Unmap_fn(PagesMap* __this, ::g::Fuse::Navigation::RouterPage* mv, uObject** __retval)
{
    return *__retval = uPtr(mv)->Context, void();
}

// public PagesMap(Fuse.Navigation.RouterPage owner) [instance] :97
void PagesMap::ctor_1(::g::Fuse::Navigation::RouterPage* owner)
{
    ctor_();
    _owner = owner;
}

// public PagesMap New(Fuse.Navigation.RouterPage owner) [static] :97
PagesMap* PagesMap::New1(::g::Fuse::Navigation::RouterPage* owner)
{
    PagesMap* obj2 = (PagesMap*)uNew(PagesMap_typeof());
    obj2->ctor_1(owner);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RoutePageProxy.uno
// ----------------------------------------------------------------------

// public delegate void RoutePageProxy.ProgressUpdated(double progress) :34
uDelegateType* RoutePageProxy__ProgressUpdated_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.RoutePageProxy.ProgressUpdated", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// public sealed class PushRouteCommand :194
// {
static void PushRouteCommand_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Navigation::RouteModificationCommand_type, interface0));
    type->SetFields(1);
}

::g::Fuse::Navigation::RouteModificationCommand_type* PushRouteCommand_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouteModificationCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouteModificationCommand_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PushRouteCommand);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouteModificationCommand_type);
    type = (::g::Fuse::Navigation::RouteModificationCommand_type*)uClassType::New("Fuse.Navigation.PushRouteCommand", options);
    type->fp_build_ = PushRouteCommand_build;
    type->fp_ProcessArguments = (void(*)(::g::Fuse::Navigation::RouteModificationCommand*, ::g::Fuse::Navigation::RouterRequest*, uArray*, bool*))PushRouteCommand__ProcessArguments_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Navigation::RouteModificationCommand__Subscribe_fn;
    return type;
}

// protected override sealed bool ProcessArguments(Fuse.Navigation.RouterRequest request, Fuse.Reactive.VarArgFunction.Argument[] args) :196
void PushRouteCommand__ProcessArguments_fn(PushRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval)
{
    return *__retval = uPtr(request)->AddHow(0) && uPtr(request)->AddPath(::g::Fuse::Navigation::RouteModificationCommand__ArgumentArrayAdapter::New1(args)), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Route.uno
// -------------------------------------------------------------

// public sealed class Route :13
// {
static void Route_build(uType* type)
{
    ::STRINGS[18] = uString::Const("");
    ::STRINGS[33] = uString::Const("?");
    ::STRINGS[34] = uString::Const("/");
    ::STRINGS[35] = uString::Const("count can't be < 0");
    ::STRINGS[36] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Route.uno");
    ::STRINGS[37] = uString::Const("SubDepth");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Route, Parameter), 0,
        ::g::Uno::String_typeof(), offsetof(Route, Path), 0,
        ::g::Fuse::Navigation::RouterPage_typeof(), offsetof(Route, RouterPage), 0,
        type, offsetof(Route, SubRoute), 0);
}

uType* Route_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Route);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Route", options);
    type->fp_build_ = Route_build;
    return type;
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :33
void Route__ctor__fn(Route* __this, uString* path, uString* parameter, Route* subRoute)
{
    __this->ctor_(path, parameter, subRoute);
}

// public Fuse.Navigation.Route Append(Fuse.Navigation.Route subRoute) :51
void Route__Append_fn(Route* __this, Route* subRoute, Route** __retval)
{
    *__retval = __this->Append(subRoute);
}

// internal string Format() :75
void Route__Format_fn(Route* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// public int get_Length() :43
void Route__get_Length_fn(Route* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :33
void Route__New1_fn(uString* path, uString* parameter, Route* subRoute, Route** __retval)
{
    *__retval = Route::New1(path, parameter, subRoute);
}

// internal Fuse.Navigation.Route SubDepth(int count) :167
void Route__SubDepth_fn(Route* __this, int* count, Route** __retval)
{
    *__retval = __this->SubDepth(*count);
}

// internal Fuse.Navigation.Route Up() :63
void Route__Up_fn(Route* __this, Route** __retval)
{
    *__retval = __this->Up();
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [instance] :33
void Route::ctor_(uString* path, uString* parameter, Route* subRoute)
{
    Path = path;
    Parameter = parameter;
    SubRoute = subRoute;
}

// public Fuse.Navigation.Route Append(Fuse.Navigation.Route subRoute) [instance] :51
Route* Route::Append(Route* subRoute)
{
    Route* sub = (SubRoute == NULL) ? subRoute : (Route*)uPtr(SubRoute)->Append(subRoute);
    return Route::New1(Path, Parameter, sub);
}

// internal string Format() [instance] :75
uString* Route::Format()
{
    uString* ind1;
    ind1 = Path;
    uString* q = (ind1 != NULL) ? ind1 : ::STRINGS[18/*""*/];

    if (::g::Uno::String::op_Inequality(Parameter, NULL))
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[33/*"?"*/], Parameter));

    if (SubRoute != NULL)
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[34/*"/"*/], uPtr(SubRoute)->Format()));

    return q;
}

// public int get_Length() [instance] :43
int Route::Length()
{
    if (SubRoute == NULL)
        return 1;
    else
        return uPtr(SubRoute)->Length() + 1;
}

// internal Fuse.Navigation.Route SubDepth(int count) [instance] :167
Route* Route::SubDepth(int count)
{
    if (count < 0)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[35/*"count can't...*/], this, ::STRINGS[36/*"/usr/local/...*/], 171, ::STRINGS[37/*"SubDepth"*/]);
        return NULL;
    }

    if (count == 0)
        return this;

    if (SubRoute == NULL)
        return NULL;

    return uPtr(SubRoute)->SubDepth(count - 1);
}

// internal Fuse.Navigation.Route Up() [instance] :63
Route* Route::Up()
{
    if (SubRoute == NULL)
        return this;
    else if (uPtr(SubRoute)->SubRoute == NULL)
        return Route::New1(Path, Parameter, NULL);

    return Route::New1(Path, Parameter, uPtr(SubRoute)->Up());
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [static] :33
Route* Route::New1(uString* path, uString* parameter, Route* subRoute)
{
    Route* obj3 = (Route*)uNew(Route_typeof());
    obj3->ctor_(path, parameter, subRoute);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// public abstract class RouteModificationCommand :8
// {
static void RouteModificationCommand_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(RouteModificationCommand_type, interface0));
    type->SetFields(1);
}

RouteModificationCommand_type* RouteModificationCommand_typeof()
{
    static uSStrong<RouteModificationCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RouteModificationCommand);
    options.TypeSize = sizeof(RouteModificationCommand_type);
    type = (RouteModificationCommand_type*)uClassType::New("Fuse.Navigation.RouteModificationCommand", options);
    type->fp_build_ = RouteModificationCommand_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))RouteModificationCommand__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))RouteModificationCommand__Subscribe_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :12
void RouteModificationCommand__Subscribe_fn(RouteModificationCommand* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)RouteModificationCommand__OuterSubscription::New1(__this, context, listener), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RoutePageProxy.uno
// ----------------------------------------------------------------------

// public enum RoutePagePath :10
uEnumType* RoutePagePath_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutePagePath", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Full", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RoutePageProxy.uno
// ----------------------------------------------------------------------

// internal sealed class RoutePageProxy :32
// {
static void RoutePageProxy_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetFields(0,
        RoutePageProxy__ActiveChanged_typeof(), offsetof(RoutePageProxy, _activeChanged), 0,
        ::g::Uno::Bool_typeof(), offsetof(RoutePageProxy, _activeChangedPending), 0,
        ::g::Uno::Bool_typeof(), offsetof(RoutePageProxy, _isActive), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(RoutePageProxy__Level_typeof(), NULL), offsetof(RoutePageProxy, _levels), 0,
        ::g::Fuse::Navigation::RoutePagePath_typeof(), offsetof(RoutePageProxy, _path), 0,
        RoutePageProxy__ProgressUpdated_typeof(), offsetof(RoutePageProxy, _progressUpdated), 0,
        ::g::Fuse::Visual_typeof(), offsetof(RoutePageProxy, _source), 0,
        ::g::Fuse::Navigation::RoutePageTriggerWhen_typeof(), offsetof(RoutePageProxy, _triggerWhen), 0);
}

uType* RoutePageProxy_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(RoutePageProxy);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.RoutePageProxy", options);
    type->fp_build_ = RoutePageProxy_build;
    return type;
}

// public RoutePageProxy(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ProgressUpdated progressUpdated) :69
void RoutePageProxy__ctor_1_fn(RoutePageProxy* __this, ::g::Fuse::Visual* source, uDelegate* progressUpdated)
{
    __this->ctor_1(source, progressUpdated);
}

// private void DiscardLevels(int start) :194
void RoutePageProxy__DiscardLevels_fn(RoutePageProxy* __this, int* start)
{
    __this->DiscardLevels(*start);
}

// public void Dispose() :92
void RoutePageProxy__Dispose_fn(RoutePageProxy* __this)
{
    __this->Dispose();
}

// private void Dispose(Fuse.Navigation.RoutePageProxy.Level level) :102
void RoutePageProxy__Dispose1_fn(RoutePageProxy* __this, RoutePageProxy__Level* level)
{
    __this->Dispose1(*level);
}

// private bool ExtendListen(Fuse.Navigation.RoutePageProxy.Level level) :141
void RoutePageProxy__ExtendListen_fn(RoutePageProxy* __this, RoutePageProxy__Level* level, bool* __retval)
{
    *__retval = __this->ExtendListen(*level);
}

// private int GetLevel(object sender) :112
void RoutePageProxy__GetLevel_fn(RoutePageProxy* __this, uObject* sender, int* __retval)
{
    *__retval = __this->GetLevel(sender);
}

// private double GetProgress() :213
void RoutePageProxy__GetProgress_fn(RoutePageProxy* __this, double* __retval)
{
    *__retval = __this->GetProgress();
}

// private void GetState(bool& isActive, bool& isStable) :250
void RoutePageProxy__GetState_fn(RoutePageProxy* __this, bool* isActive, bool* isStable)
{
    __this->GetState(isActive, isStable);
}

// public void Init() :83
void RoutePageProxy__Init_fn(RoutePageProxy* __this)
{
    __this->Init();
}

// private void InitialUpdate() :231
void RoutePageProxy__InitialUpdate_fn(RoutePageProxy* __this)
{
    __this->InitialUpdate();
}

// private void Listen(Fuse.Navigation.RoutePageProxy.Level level) :164
void RoutePageProxy__Listen_fn(RoutePageProxy* __this, RoutePageProxy__Level* level)
{
    __this->Listen(*level);
}

// private void NavReady(object sender) :123
void RoutePageProxy__NavReady_fn(RoutePageProxy* __this, uObject* sender)
{
    __this->NavReady(sender);
}

// private void NavUnready(object sender) :203
void RoutePageProxy__NavUnready_fn(RoutePageProxy* __this, uObject* sender)
{
    __this->NavUnready(sender);
}

// public RoutePageProxy New(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ProgressUpdated progressUpdated) :69
void RoutePageProxy__New2_fn(::g::Fuse::Visual* source, uDelegate* progressUpdated, RoutePageProxy** __retval)
{
    *__retval = RoutePageProxy::New2(source, progressUpdated);
}

// private void OnActivePageChanged(object s, Fuse.Visual active) :269
void RoutePageProxy__OnActivePageChanged_fn(RoutePageProxy* __this, uObject* s, ::g::Fuse::Visual* active)
{
    __this->OnActivePageChanged(s, active);
}

// private void OnNavigationProgressChanged(object sender, Fuse.Navigation.NavigationArgs state) :244
void RoutePageProxy__OnNavigationProgressChanged_fn(RoutePageProxy* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->OnNavigationProgressChanged(sender, state);
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> state) :284
void RoutePageProxy__OnStateChanged_fn(RoutePageProxy* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* state)
{
    __this->OnStateChanged(s, state);
}

// public Fuse.Navigation.RoutePagePath get_Path() :40
void RoutePageProxy__get_Path_fn(RoutePageProxy* __this, int* __retval)
{
    *__retval = __this->Path();
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) :41
void RoutePageProxy__set_Path_fn(RoutePageProxy* __this, int* value)
{
    __this->Path(*value);
}

// private void ScheduleActiveChanged() :274
void RoutePageProxy__ScheduleActiveChanged_fn(RoutePageProxy* __this)
{
    __this->ScheduleActiveChanged();
}

// public Fuse.Navigation.RoutePageTriggerWhen get_TriggerWhen() :47
void RoutePageProxy__get_TriggerWhen_fn(RoutePageProxy* __this, int* __retval)
{
    *__retval = __this->TriggerWhen();
}

// public void set_TriggerWhen(Fuse.Navigation.RoutePageTriggerWhen value) :48
void RoutePageProxy__set_TriggerWhen_fn(RoutePageProxy* __this, int* value)
{
    __this->TriggerWhen(*value);
}

// private void Unlisten(Fuse.Navigation.RoutePageProxy.Level level) :179
void RoutePageProxy__Unlisten_fn(RoutePageProxy* __this, RoutePageProxy__Level* level)
{
    __this->Unlisten(*level);
}

// private void UpdateActive() :289
void RoutePageProxy__UpdateActive_fn(RoutePageProxy* __this)
{
    __this->UpdateActive();
}

// public RoutePageProxy(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ProgressUpdated progressUpdated) [instance] :69
void RoutePageProxy::ctor_1(::g::Fuse::Visual* source, uDelegate* progressUpdated)
{
    _path = 1;
    _triggerWhen = 1;
    _levels = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(RoutePageProxy__Level_typeof(), NULL)));
    _progressUpdated = progressUpdated;
    _source = source;
}

// private void DiscardLevels(int start) [instance] :194
void RoutePageProxy::DiscardLevels(int start)
{
    RoutePageProxy__Level ret5;

    for (int i = uPtr(_levels)->Count() - 1; i >= start; --i)
    {
        Dispose1((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int>(i), &ret5), ret5));
        uPtr(_levels)->RemoveAt(i);
    }
}

// public void Dispose() [instance] :92
void RoutePageProxy::Dispose()
{
    RoutePageProxy__Level ret6;

    for (int i = 0; i < uPtr(_levels)->Count(); ++i)
        Dispose1((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int>(i), &ret6), ret6));

    uPtr(_levels)->Clear();
    _source = NULL;
    _progressUpdated = NULL;
    _activeChangedPending = false;
}

// private void Dispose(Fuse.Navigation.RoutePageProxy.Level level) [instance] :102
void RoutePageProxy::Dispose1(RoutePageProxy__Level level)
{
    Unlisten(level);

    if (level.PageProxy != NULL)
    {
        uPtr(level.PageProxy)->Dispose();
        level.PageProxy = NULL;
    }
}

// private bool ExtendListen(Fuse.Navigation.RoutePageProxy.Level level) [instance] :141
bool RoutePageProxy::ExtendListen(RoutePageProxy__Level level)
{
    RoutePageProxy__Level collection2;
    ::g::Fuse::Visual* nav = uPtr(uPtr(level.PageProxy)->Page())->Parent();
    uObject* outlet = uAs<uObject*>(nav, ::g::Fuse::Navigation::IRouterOutlet_typeof());

    if ((outlet == NULL) || (::g::Fuse::Navigation::IRouterOutlet::Type(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof())) == 0))
        return false;

    uObject* ignoreNav;
    ::g::Fuse::Visual* ignorePage;
    ::g::Fuse::Visual* q = ::g::Fuse::Navigation::Navigation::TryFindPage1(nav, &ignoreNav, &ignorePage);

    if (q == NULL)
        return false;

    collection2 = uDefault<RoutePageProxy__Level>();
    collection2.PageProxy = ::g::Fuse::Navigation::NavigationPageProxy::New1();
    RoutePageProxy__Level nextLevel = collection2;
    ::g::Uno::Collections::List__Add_fn(uPtr(_levels), uCRef(nextLevel));
    uPtr(nextLevel.PageProxy)->Init(uDelegate::New(::TYPES[21/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)RoutePageProxy__NavReady_fn, this), uDelegate::New(::TYPES[21/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)RoutePageProxy__NavUnready_fn, this), nav);
    return true;
}

// private int GetLevel(object sender) [instance] :112
int RoutePageProxy::GetLevel(uObject* sender)
{
    RoutePageProxy__Level ret7;

    for (int i = 0; i < uPtr(_levels)->Count(); ++i)
        if (sender == (::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int>(i), &ret7), ret7).PageProxy)
            return i;

    ::g::Fuse::Diagnostics::InternalError(uString::Const("Unexpected sender"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RoutePageProxy.uno"), 119, uString::Const("GetLevel"));
    return -1;
}

// private double GetProgress() [instance] :213
double RoutePageProxy::GetProgress()
{
    RoutePageProxy__Level ret8;
    float p = 1.0f;

    for (int i = 0; i < uPtr(_levels)->Count(); ++i)
    {
        RoutePageProxy__Level level = (::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int>(i), &ret8), ret8);

        if (!uPtr(level.PageProxy)->IsReady())
            return 1.0;

        ::g::Fuse::Navigation::NavigationPageState pp = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uPtr(level.PageProxy)->Page());
        float lp = pp.Progress;

        if ((i == 0) || (::g::Uno::Math::Abs1(lp) > ::g::Uno::Math::Abs1(p)))
            p = lp;
    }

    return (double)p;
}

// private void GetState(bool& isActive, bool& isStable) [instance] :250
void RoutePageProxy::GetState(bool* isActive, bool* isStable)
{
    RoutePageProxy__Level ret9;
    RoutePageProxy__Level ret10;
    RoutePageProxy__Level ret11;
    *isActive = false;
    *isStable = true;

    if (uPtr(_levels)->Count() == 0)
        return;

    *isActive = true;

    for (int i = 0; i < uPtr(_levels)->Count(); ++i)
    {
        bool la = ::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int>(i), &ret9), ret9).PageProxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/])) == uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int>(i), &ret10), ret10).PageProxy)->Page();
        *isActive = *isActive && la;
        bool s = ::g::Fuse::Navigation::INavigation::State(uInterface(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int>(i), &ret11), ret11).PageProxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/])) == 0;
        *isStable = *isStable && s;
    }
}

// public void Init() [instance] :83
void RoutePageProxy::Init()
{
    RoutePageProxy__Level collection1;
    collection1 = uDefault<RoutePageProxy__Level>();
    collection1.PageProxy = ::g::Fuse::Navigation::NavigationPageProxy::New1();
    RoutePageProxy__Level level = collection1;
    ::g::Uno::Collections::List__Add_fn(uPtr(_levels), uCRef(level));
    uPtr(level.PageProxy)->Init(uDelegate::New(::TYPES[21/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)RoutePageProxy__NavReady_fn, this), uDelegate::New(::TYPES[21/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)RoutePageProxy__NavUnready_fn, this), _source);
}

// private void InitialUpdate() [instance] :231
void RoutePageProxy::InitialUpdate()
{
    if (::g::Uno::Delegate::op_Inequality(_progressUpdated, NULL))
        uPtr(_progressUpdated)->InvokeVoid(uCRef(GetProgress()));

    if (::g::Uno::Delegate::op_Inequality(_activeChanged, NULL))
    {
        bool ignoreStable;
        GetState(&_isActive, &ignoreStable);
        uPtr(_activeChanged)->Invoke(2, uCRef(_isActive), uCRef(true));
    }
}

// private void Listen(Fuse.Navigation.RoutePageProxy.Level level) [instance] :164
void RoutePageProxy::Listen(RoutePageProxy__Level level)
{
    if (!level.Listening)
    {
        if (::g::Uno::Delegate::op_Inequality(_progressUpdated, NULL))
            ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[20/*Fuse.Navigation.NavigationHandler*/], (void*)RoutePageProxy__OnNavigationProgressChanged_fn, this));

        if (::g::Uno::Delegate::op_Inequality(_activeChanged, NULL))
        {
            ::g::Fuse::Navigation::INavigation::add_ActivePageChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[41/*Fuse.Navigation.ActivePageChangedHandler*/], (void*)RoutePageProxy__OnActivePageChanged_fn, this));
            ::g::Fuse::Navigation::INavigation::add_StateChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[44/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)RoutePageProxy__OnStateChanged_fn, this));
        }

        level.Listening = true;
    }
}

// private void NavReady(object sender) [instance] :123
void RoutePageProxy::NavReady(uObject* sender)
{
    RoutePageProxy__Level ret12;
    int levelNdx = GetLevel(sender);

    if (levelNdx == -1)
        return;

    RoutePageProxy__Level level = (::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int>(levelNdx), &ret12), ret12);
    Listen(level);
    DiscardLevels(levelNdx + 1);

    if (Path() == 1)
    {
        if (ExtendListen(level))
            return;
    }

    InitialUpdate();
}

// private void NavUnready(object sender) [instance] :203
void RoutePageProxy::NavUnready(uObject* sender)
{
    RoutePageProxy__Level ret13;
    int level = GetLevel(sender);

    if (level == -1)
        return;

    Unlisten((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int>(level), &ret13), ret13));
    DiscardLevels(level + 1);
}

// private void OnActivePageChanged(object s, Fuse.Visual active) [instance] :269
void RoutePageProxy::OnActivePageChanged(uObject* s, ::g::Fuse::Visual* active)
{
    ScheduleActiveChanged();
}

// private void OnNavigationProgressChanged(object sender, Fuse.Navigation.NavigationArgs state) [instance] :244
void RoutePageProxy::OnNavigationProgressChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    if (::g::Uno::Delegate::op_Inequality(_progressUpdated, NULL))
        uPtr(_progressUpdated)->InvokeVoid(uCRef(GetProgress()));
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> state) [instance] :284
void RoutePageProxy::OnStateChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* state)
{
    ScheduleActiveChanged();
}

// public Fuse.Navigation.RoutePagePath get_Path() [instance] :40
int RoutePageProxy::Path()
{
    return _path;
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) [instance] :41
void RoutePageProxy::Path(int value)
{
    _path = value;
}

// private void ScheduleActiveChanged() [instance] :274
void RoutePageProxy::ScheduleActiveChanged()
{
    if (_activeChangedPending)
        return;

    _activeChangedPending = true;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)RoutePageProxy__UpdateActive_fn, this), -1, 2);
}

// public Fuse.Navigation.RoutePageTriggerWhen get_TriggerWhen() [instance] :47
int RoutePageProxy::TriggerWhen()
{
    return _triggerWhen;
}

// public void set_TriggerWhen(Fuse.Navigation.RoutePageTriggerWhen value) [instance] :48
void RoutePageProxy::TriggerWhen(int value)
{
    _triggerWhen = value;
}

// private void Unlisten(Fuse.Navigation.RoutePageProxy.Level level) [instance] :179
void RoutePageProxy::Unlisten(RoutePageProxy__Level level)
{
    if (level.Listening)
    {
        if (::g::Uno::Delegate::op_Inequality(_progressUpdated, NULL))
            ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[20/*Fuse.Navigation.NavigationHandler*/], (void*)RoutePageProxy__OnNavigationProgressChanged_fn, this));

        if (::g::Uno::Delegate::op_Inequality(_activeChanged, NULL))
        {
            ::g::Fuse::Navigation::INavigation::remove_ActivePageChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[41/*Fuse.Navigation.ActivePageChangedHandler*/], (void*)RoutePageProxy__OnActivePageChanged_fn, this));
            ::g::Fuse::Navigation::INavigation::remove_StateChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[44/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)RoutePageProxy__OnStateChanged_fn, this));
        }

        level.Listening = false;
    }
}

// private void UpdateActive() [instance] :289
void RoutePageProxy::UpdateActive()
{
    if (!_activeChangedPending)
        return;

    _activeChangedPending = false;
    bool newActive, stable;
    GetState(&newActive, &stable);

    if ((newActive == _isActive) || (!stable && (TriggerWhen() == 1)))
        return;

    _isActive = newActive;
    uPtr(_activeChanged)->Invoke(2, uCRef(_isActive), uCRef(false));
}

// public RoutePageProxy New(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ProgressUpdated progressUpdated) [static] :69
RoutePageProxy* RoutePageProxy::New2(::g::Fuse::Visual* source, uDelegate* progressUpdated)
{
    RoutePageProxy* obj3 = (RoutePageProxy*)uNew(RoutePageProxy_typeof());
    obj3->ctor_1(source, progressUpdated);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RoutePageProxy.uno
// ----------------------------------------------------------------------

// public enum RoutePageTriggerWhen :21
uEnumType* RoutePageTriggerWhen_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutePageTriggerWhen", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Immediate", 0LL,
        "Stable", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno
// --------------------------------------------------------------------------

// public partial sealed class Router :5
// {
// static Router() :7
static void Router__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[34/*Fuse.Scripting.ScriptMember[]*/], 8, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("bookmark"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[11/*object[]*/], NULL), (void*)Router__Bookmark_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("getRoute"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[11/*object[]*/], NULL), (void*)Router__GetRoute_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("goBack"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[11/*object[]*/], NULL), (void*)Router__GoBack1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), ::STRINGS[50/*"goto"*/], uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[11/*object[]*/], NULL), (void*)Router__Goto1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("gotoRelative"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[11/*object[]*/], NULL), (void*)Router__GotoRelative_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("modify"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[11/*object[]*/], NULL), (void*)Router__Modify1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("push"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[11/*object[]*/], NULL), (void*)Router__Push1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("pushRelative"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[11/*object[]*/], NULL), (void*)Router__PushRelative_fn), 2)));
}

static void Router_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Input::Keyboard_typeof(),
        ::g::Fuse::Navigation::PageData_typeof(),
        ::g::Fuse::Navigation::RouterRequest_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Router_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Router_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Router_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(Router_type, interface6));
    type->SetFields(15,
        ::g::Fuse::Navigation::BackButtonAction_typeof(), offsetof(Router, _backButtonAction), 0,
        ::g::Uno::Bool_typeof(), offsetof(Router, _isMasterRouter), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(Router, _prepareCurrent), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(Router, _prepareNext), 0,
        ::g::Fuse::Navigation::RoutingOperation_typeof(), offsetof(Router, _prepareOperation), 0,
        ::g::Uno::String_typeof(), offsetof(Router, _prepareOperationStyle), 0,
        ::g::Fuse::Navigation::IRouterOutlet_typeof(), offsetof(Router, _prepareOutlet), 0,
        ::g::Uno::Double_typeof(), offsetof(Router, _prepareProgress), 0,
        ::g::Fuse::Navigation::RouterPage_typeof(), offsetof(Router, _rootPage), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Navigation::Route_typeof(), NULL), offsetof(Router, Bookmarks), 0,
        ::g::Fuse::Navigation::HistoryChangedHandler_typeof(), offsetof(Router, HistoryChanged1), 0,
        ::g::Fuse::Navigation::RouterPage_typeof(), (uintptr_t)&Router::_masterRootPage_, uFieldFlagsStatic);
}

Router_type* Router_typeof()
{
    static uSStrong<Router_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 7;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(Router);
    options.TypeSize = sizeof(Router_type);
    type = (Router_type*)uClassType::New("Fuse.Navigation.Router", options);
    type->fp_build_ = Router_build;
    type->fp_ctor_ = (void*)Router__New2_fn;
    type->fp_cctor_ = Router__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Router__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Router__OnUnrooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))Router__FuseNavigationIBaseNavigationGoForward_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))Router__FuseNavigationIBaseNavigationget_CanGoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))Router__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))Router__get_CanGoBack_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))Router__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))Router__remove_HistoryChanged_fn;
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

// public generated Router() :5
void Router__ctor_2_fn(Router* __this)
{
    __this->ctor_2();
}

// private static Fuse.Navigation.IRouterOutlet AsRouterOutlet(Fuse.Node n) :606
void Router__AsRouterOutlet_fn(::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = Router::AsRouterOutlet(n);
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() :151
void Router__get_BackButtonAction_fn(Router* __this, int* __retval)
{
    *__retval = __this->BackButtonAction();
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) :152
void Router__set_BackButtonAction_fn(Router* __this, int* value)
{
    __this->BackButtonAction(*value);
}

// private static void Bookmark(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :240
void Router__Bookmark_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Bookmark(c, r, args);
}

// public void CancelNavigation() :346
void Router__CancelNavigation_fn(Router* __this)
{
    __this->CancelNavigation();
}

// public bool get_CanGoBack() :252
void Router__get_CanGoBack_fn(Router* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// private void ClearPrepared() :314
void Router__ClearPrepared_fn(Router* __this)
{
    __this->ClearPrepared();
}

// private bool EnumerateHistory(Fuse.Navigation.Router.HistoryAction action, Uno.Collections.List<Fuse.Navigation.RouterPage> stack, Fuse.Navigation.RouterPage rp) :765
void Router__EnumerateHistory_fn(Router* __this, uDelegate* action, ::g::Uno::Collections::List* stack, ::g::Fuse::Navigation::RouterPage* rp, bool* __retval)
{
    *__retval = __this->EnumerateHistory(action, stack, rp);
}

// private Fuse.Navigation.IRouterOutlet FindOutletDown(Fuse.Node active) :584
void Router__FindOutletDown_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval)
{
    *__retval = __this->FindOutletDown(active);
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active) :613
void Router__FindOutletUp_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval)
{
    *__retval = __this->FindOutletUp(active);
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active, Fuse.Node& page) :619
void Router__FindOutletUp1_fn(Router* __this, ::g::Fuse::Node* active, ::g::Fuse::Node** page, uObject** __retval)
{
    *__retval = __this->FindOutletUp1(active, page);
}

// internal static Fuse.Visual FindRouterOutletPage(Fuse.Node from) :548
void Router__FindRouterOutletPage_fn(::g::Fuse::Node* from, ::g::Fuse::Visual** __retval)
{
    *__retval = Router::FindRouterOutletPage(from);
}

// private void FinishPrepared() :305
void Router__FinishPrepared_fn(Router* __this)
{
    __this->FinishPrepared();
}

// private bool Fuse.Navigation.IBaseNavigation.get_CanGoForward() :674
void Router__FuseNavigationIBaseNavigationget_CanGoForward_fn(Router* __this, bool* __retval)
{
    return *__retval = false, void();
}

// private void Fuse.Navigation.IBaseNavigation.GoForward() :673
void Router__FuseNavigationIBaseNavigationGoForward_fn(Router* __this)
{
}

// private Fuse.Navigation.Route GetCurrent(Fuse.Visual from, [Fuse.Navigation.IRouterOutlet to]) :499
void Router__GetCurrent_fn(Router* __this, ::g::Fuse::Visual* from, uObject* to, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetCurrent(from, to);
}

// public Fuse.Navigation.Route GetCurrentRoute() :167
void Router__GetCurrentRoute_fn(Router* __this, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetCurrentRoute();
}

// internal Fuse.Navigation.Route GetHistoryRoute(int at) :710
void Router__GetHistoryRoute_fn(Router* __this, int* at, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetHistoryRoute(*at);
}

// private int GetOutletDepth(Fuse.Navigation.IRouterOutlet outlet) :569
void Router__GetOutletDepth_fn(Router* __this, uObject* outlet, int* __retval)
{
    *__retval = __this->GetOutletDepth(outlet);
}

// private static Fuse.Navigation.Route GetRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :92
void Router__GetRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = Router::GetRelative(c, r, args);
}

// internal Fuse.Navigation.Route GetRelativeRoute(Fuse.Node from, Fuse.Navigation.Route rel) :638
void Router__GetRelativeRoute_fn(Router* __this, ::g::Fuse::Node* from, ::g::Fuse::Navigation::Route* rel, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetRelativeRoute(from, rel);
}

// private static void GetRoute(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :331
void Router__GetRoute_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::GetRoute(c, r, args);
}

// private Fuse.Navigation.Route GetRouteUpToRouter(Fuse.Node from) :512
void Router__GetRouteUpToRouter_fn(Router* __this, ::g::Fuse::Node* from, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetRouteUpToRouter(from);
}

// public void GoBack() :244
void Router__GoBack_fn(Router* __this)
{
    __this->GoBack();
}

// private static void GoBack(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :135
void Router__GoBack1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::GoBack1(c, r, args);
}

// public void Goto(Fuse.Navigation.Route route, [string operationStyle]) :173
void Router__Goto_fn(Router* __this, ::g::Fuse::Navigation::Route* route, uString* operationStyle)
{
    __this->Goto(route, operationStyle);
}

// private static void Goto(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :34
void Router__Goto1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Goto1(c, r, args);
}

// private static void GotoRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :70
void Router__GotoRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::GotoRelative(c, r, args);
}

// private void GoUp() :259
void Router__GoUp_fn(Router* __this)
{
    __this->GoUp();
}

// private bool HasOtherRouter(Fuse.Visual n) :659
void Router__HasOtherRouter_fn(Router* __this, ::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = __this->HasOtherRouter(n);
}

// private static bool HasRouter(Fuse.Node n) :665
void Router__HasRouter_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Router::HasRouter(n);
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :676
void Router__add_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :676
void Router__remove_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public bool get_IsMasterRouter() :132
void Router__get_IsMasterRouter_fn(Router* __this, bool* __retval)
{
    *__retval = __this->IsMasterRouter();
}

// public void set_IsMasterRouter(bool value) :133
void Router__set_IsMasterRouter_fn(Router* __this, bool* value)
{
    __this->IsMasterRouter(*value);
}

// internal void Modify(Fuse.Navigation.ModifyRouteHow how, Fuse.Navigation.Route route, Fuse.Navigation.NavigationGotoMode mode, string operationStyle) :184
void Router__Modify_fn(Router* __this, int* how, ::g::Fuse::Navigation::Route* route, int* mode, uString* operationStyle)
{
    __this->Modify(*how, route, *mode, operationStyle);
}

// private static void Modify(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :178
void Router__Modify1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Modify1(c, r, args);
}

// public generated Router New() :5
void Router__New2_fn(Router** __retval)
{
    *__retval = Router::New2();
}

// internal void OnHistoryChanged() :677
void Router__OnHistoryChanged_fn(Router* __this)
{
    __this->OnHistoryChanged();
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) :136
void Router__OnKeyPressed_fn(Router* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// protected override sealed void OnRooted() :85
void Router__OnRooted_fn(Router* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::g::Fuse::Input::KeyPressedHandler_typeof(), (void*)Router__OnKeyPressed_fn, __this));

    if (__this->IsMasterRouter())
    {
        ::g::Fuse::Visual* n = __this->Parent();
        bool root = true;

        while (n != NULL)
        {
            if (__this->HasOtherRouter(n))
            {
                root = false;
                break;
            }

            n = uPtr(n)->Parent();
        }

        if (root)
        {
            if (Router::_masterRootPage_ != NULL)
                __this->_rootPage = Router::_masterRootPage_;
            else
                Router::_masterRootPage_ = __this->_rootPage;
        }
    }

    uPtr(__this->_rootPage)->Node = __this->Parent();

    if (uPtr(__this->_rootPage)->Node == NULL)
        ::g::Fuse::Diagnostics::UserError(uString::Const("No visual routing outlet was found"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 117, ::STRINGS[10/*"OnRooted"*/], NULL);
}

// protected override sealed void OnUnrooted() :120
void Router__OnUnrooted_fn(Router* __this)
{
    ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::g::Fuse::Input::KeyPressedHandler_typeof(), (void*)Router__OnKeyPressed_fn, __this));
}

// private void OnUpFromRoot() :273
void Router__OnUpFromRoot_fn(Router* __this)
{
    __this->OnUpFromRoot();
}

// private void Pop() :279
void Router__Pop_fn(Router* __this)
{
    __this->Pop();
}

// public double get_PrepareProgress() :323
void Router__get_PrepareProgress_fn(Router* __this, double* __retval)
{
    *__retval = __this->PrepareProgress();
}

// public void set_PrepareProgress(double value) :324
void Router__set_PrepareProgress_fn(Router* __this, double* value)
{
    __this->PrepareProgress(*value);
}

// private void PrepareRoute(Fuse.Navigation.Route r, Fuse.Navigation.RoutingOperation operation, string operationStyle) :295
void Router__PrepareRoute_fn(Router* __this, ::g::Fuse::Navigation::Route* r, int* operation, uString* operationStyle)
{
    __this->PrepareRoute(r, *operation, operationStyle);
}

// public void Push(Fuse.Navigation.Route route, [string operationStyle]) :179
void Router__Push_fn(Router* __this, ::g::Fuse::Navigation::Route* route, uString* operationStyle)
{
    __this->Push(route, operationStyle);
}

// private static void Push(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :121
void Router__Push1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Push1(c, r, args);
}

// private static void PushRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :85
void Router__PushRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::PushRelative(c, r, args);
}

// internal Fuse.Navigation.RouterPage get_RootPage() :706
void Router__get_RootPage_fn(Router* __this, ::g::Fuse::Navigation::RouterPage** __retval)
{
    *__retval = __this->RootPage();
}

// private void SetPrepareProgress(double value) :327
void Router__SetPrepareProgress_fn(Router* __this, double* value)
{
    __this->SetPrepareProgress(*value);
}

// private Fuse.Navigation.Route SetRoute(Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, string operationStyle, [bool userRequest]) :361
void Router__SetRoute_fn(Router* __this, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, uString* operationStyle, bool* userRequest, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->SetRoute(r, *gotoMode, *operation, operationStyle, *userRequest);
}

// private Fuse.Navigation.Route SetRouteImpl(Fuse.Visual root, Fuse.Navigation.RouterPage rootPage, Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, string operationStyle, Fuse.Navigation.IRouterOutlet& majorChange, [bool canReuse]) :392
void Router__SetRouteImpl_fn(Router* __this, ::g::Fuse::Visual* root, ::g::Fuse::Navigation::RouterPage* rootPage, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, uString* operationStyle, uObject** majorChange, bool* canReuse, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->SetRouteImpl(root, rootPage, r, *gotoMode, *operation, operationStyle, majorChange, *canReuse);
}

// internal static Fuse.Navigation.Router TryFindRouter(Fuse.Node n) :683
void Router__TryFindRouter_fn(::g::Fuse::Node* n, Router** __retval)
{
    *__retval = Router::TryFindRouter(n);
}

uSStrong< ::g::Fuse::Navigation::RouterPage*> Router::_masterRootPage_;

// public generated Router() [instance] :5
void Router::ctor_2()
{
    _isMasterRouter = true;
    Bookmarks = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Navigation::Route_typeof(), NULL)));
    _prepareProgress = 0.0;
    _rootPage = ::g::Fuse::Navigation::RouterPage::New1();
    ctor_1();
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() [instance] :151
int Router::BackButtonAction()
{
    return _backButtonAction;
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) [instance] :152
void Router::BackButtonAction(int value)
{
    _backButtonAction = value;
}

// public void CancelNavigation() [instance] :346
void Router::CancelNavigation()
{
    if (_prepareOutlet != NULL)
    {
        ::g::Fuse::Navigation::IRouterOutlet::CancelPrepare(uInterface(uPtr(_prepareOutlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()));
        ClearPrepared();
    }
    else
        ::g::Fuse::Diagnostics::InternalError(uString::Const("No active navigation that can be cancelled"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 357, uString::Const("CancelNavigation"));
}

// public bool get_CanGoBack() [instance] :252
bool Router::CanGoBack()
{
    return GetHistoryRoute(1) != NULL;
}

// private void ClearPrepared() [instance] :314
void Router::ClearPrepared()
{
    _prepareOutlet = NULL;
    _prepareCurrent = NULL;
    _prepareNext = NULL;
}

// private bool EnumerateHistory(Fuse.Navigation.Router.HistoryAction action, Uno.Collections.List<Fuse.Navigation.RouterPage> stack, Fuse.Navigation.RouterPage rp) [instance] :765
bool Router::EnumerateHistory(uDelegate* action, ::g::Uno::Collections::List* stack, ::g::Fuse::Navigation::RouterPage* rp)
{
    bool ret5;

    if (rp == NULL)
        return true;

    ::g::Fuse::Reactive::ObserverMap* cp = uPtr(rp)->ChildRouterPages();

    if ((cp == NULL) || (uPtr(cp)->Count() == 0))
        return (uPtr(action)->Invoke(&ret5, 1, stack), ret5);

    for (int i = uPtr(cp)->Count() - 1; i >= 0; --i)
    {
        ::g::Fuse::Navigation::RouterPage* childPage = (::g::Fuse::Navigation::RouterPage*)uPtr(cp)->Item(i);
        ::g::Uno::Collections::List__Add_fn(uPtr(stack), childPage);
        bool q = EnumerateHistory(action, stack, childPage);
        stack->RemoveAt(stack->Count() - 1);

        if (!q)
            return false;
    }

    return true;
}

// private Fuse.Navigation.IRouterOutlet FindOutletDown(Fuse.Node active) [instance] :584
uObject* Router::FindOutletDown(::g::Fuse::Node* active)
{
    uObject* ro = Router::AsRouterOutlet(active);

    if (ro != NULL)
        return ro;

    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(active, ::TYPES[10/*Fuse.Visual*/]);

    if (v != NULL)
    {
        if (HasOtherRouter(v))
            return NULL;

        for (::g::Fuse::Node* ue = (::g::Fuse::Node*)uPtr(v)->FirstChild(::TYPES[18/*Fuse.Visual.FirstChild<Fuse.Node>*/]); ue != NULL; ue = (::g::Fuse::Node*)uPtr(ue)->NextSibling(::TYPES[19/*Fuse.Node.NextSibling<Fuse.Node>*/]))
        {
            ro = FindOutletDown(ue);

            if (ro != NULL)
                return ro;
        }
    }

    return NULL;
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active) [instance] :613
uObject* Router::FindOutletUp(::g::Fuse::Node* active)
{
    ::g::Fuse::Node* ignore;
    return FindOutletUp1(active, &ignore);
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active, Fuse.Node& page) [instance] :619
uObject* Router::FindOutletUp1(::g::Fuse::Node* active, ::g::Fuse::Node** page)
{
    *page = active;

    while (active != NULL)
    {
        uObject* ro = Router::AsRouterOutlet(active);

        if (ro != NULL)
            return ro;

        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(active, ::TYPES[10/*Fuse.Visual*/]);

        if ((v != NULL) && Router::HasRouter(v))
            return NULL;

        *page = active;
        active = uPtr(active)->Parent();
    }

    return NULL;
}

// private void FinishPrepared() [instance] :305
void Router::FinishPrepared()
{
    if (_prepareOutlet == NULL)
        return;

    SetRoute(_prepareNext, 0, _prepareOperation, _prepareOperationStyle, true);
    ClearPrepared();
}

// private Fuse.Navigation.Route GetCurrent(Fuse.Visual from, [Fuse.Navigation.IRouterOutlet to]) [instance] :499
::g::Fuse::Navigation::Route* Router::GetCurrent(::g::Fuse::Visual* from, uObject* to)
{
    if (from == NULL)
        return NULL;

    uObject* outlet = FindOutletDown(from);

    if ((outlet == NULL) || (outlet == to))
        return NULL;

    ::g::Fuse::Navigation::RouterPage* page = ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()));
    return ::g::Fuse::Navigation::Route::New1(uPtr(page)->Path, uPtr(page)->Parameter, GetCurrent(uPtr(page)->Visual(), to));
}

// public Fuse.Navigation.Route GetCurrentRoute() [instance] :167
::g::Fuse::Navigation::Route* Router::GetCurrentRoute()
{
    return GetHistoryRoute(0);
}

// internal Fuse.Navigation.Route GetHistoryRoute(int at) [instance] :710
::g::Fuse::Navigation::Route* Router::GetHistoryRoute(int at)
{
    Router__GetHistoryAt* collection2;
    collection2 = Router__GetHistoryAt::New1();
    uPtr(collection2)->At = at;
    Router__GetHistoryAt* gha = collection2;
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::RouterPage_typeof(), NULL));
    EnumerateHistory(uDelegate::New(Router__HistoryAction_typeof(), (void*)Router__GetHistoryAt__HistoryAction_fn, uPtr(gha)), list, _rootPage);
    return gha->Result;
}

// private int GetOutletDepth(Fuse.Navigation.IRouterOutlet outlet) [instance] :569
int Router::GetOutletDepth(uObject* outlet)
{
    int c = 0;
    ::g::Fuse::Visual* n = uPtr(uAs< ::g::Fuse::Node*>(outlet, ::TYPES[30/*Fuse.Node*/]))->Parent();

    while ((n != NULL) && (n != Parent()))
    {
        n = uPtr(n)->Parent();

        if (uIs(n, ::g::Fuse::Navigation::IRouterOutlet_typeof()))
            c++;
    }

    return c;
}

// internal Fuse.Navigation.Route GetRelativeRoute(Fuse.Node from, Fuse.Navigation.Route rel) [instance] :638
::g::Fuse::Navigation::Route* Router::GetRelativeRoute(::g::Fuse::Node* from, ::g::Fuse::Navigation::Route* rel)
{
    if (!IsRootingCompleted() || !uPtr(from)->IsRootingCompleted())
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Cannot calculate relative node if not rooted"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 642, uString::Const("GetRelativeRoute"), NULL);
        return NULL;
    }

    uObject* outlet = FindOutletUp(from);

    if (outlet == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Did not find an outlet relative to the provided Node"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 649, uString::Const("GetRelativeRoute"), NULL);
        return NULL;
    }

    ::g::Fuse::Navigation::Route* current = GetRouteUpToRouter(uPtr(uAs< ::g::Fuse::Node*>(outlet, ::TYPES[30/*Fuse.Node*/]))->Parent());
    ::g::Fuse::Navigation::Route* route = (current == NULL) ? rel : (::g::Fuse::Navigation::Route*)uPtr(current)->Append(rel);
    return route;
}

// private Fuse.Navigation.Route GetRouteUpToRouter(Fuse.Node from) [instance] :512
::g::Fuse::Navigation::Route* Router::GetRouteUpToRouter(::g::Fuse::Node* from)
{
    ::g::Fuse::Navigation::Route* route = NULL;

    while (from != NULL)
    {
        ::g::Fuse::Node* page;
        uObject* outlet = FindOutletUp1(from, &page);

        if (outlet == NULL)
            break;

        uString* opath = ::STRINGS[18/*""*/];
        uString* oparameter = ::STRINGS[18/*""*/];
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(page, ::TYPES[10/*Fuse.Visual*/]);
        ::g::Fuse::Navigation::PageData* pd = (v != NULL) ? (::g::Fuse::Navigation::PageData*)::g::Fuse::Navigation::PageData::Get(v) : NULL;

        if ((pd == NULL) || (uPtr(pd)->RouterPage() == NULL))
        {
            ::g::Fuse::Navigation::RouterPage* opage = ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()));
            opath = uPtr(opage)->Path;
            oparameter = opage->Parameter;
            v = opage->Visual();
        }
        else
        {
            opath = uPtr(uPtr(pd)->RouterPage())->Path;
            oparameter = uPtr(pd->RouterPage())->Parameter;
        }

        route = ::g::Fuse::Navigation::Route::New1(opath, oparameter, route);
        from = uPtr(uAs< ::g::Fuse::Node*>(outlet, ::TYPES[30/*Fuse.Node*/]))->Parent();
    }

    return route;
}

// public void GoBack() [instance] :244
void Router::GoBack()
{
    if (CanGoBack())
        Pop();
    else
        GoUp();
}

// public void Goto(Fuse.Navigation.Route route, [string operationStyle]) [instance] :173
void Router::Goto(::g::Fuse::Navigation::Route* route, uString* operationStyle)
{
    Modify(1, route, 0, operationStyle);
}

// private void GoUp() [instance] :259
void Router::GoUp()
{
    ::g::Fuse::Navigation::Route* cur = GetCurrentRoute();
    ::g::Fuse::Navigation::Route* up = uPtr(cur)->Up();

    if (up == cur)
        OnUpFromRoot();
    else
        SetRoute(up, 0, 3, ::STRINGS[18/*""*/], true);
}

// private bool HasOtherRouter(Fuse.Visual n) [instance] :659
bool Router::HasOtherRouter(::g::Fuse::Visual* n)
{
    Router* r = (Router*)uPtr(n)->FirstChild(::TYPES[10/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Navigation.Router>*/, __type, NULL));
    return (r != NULL) && (r != this);
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :676
void Router::add_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :676
void Router::remove_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public bool get_IsMasterRouter() [instance] :132
bool Router::IsMasterRouter()
{
    return _isMasterRouter;
}

// public void set_IsMasterRouter(bool value) [instance] :133
void Router::IsMasterRouter(bool value)
{
    _isMasterRouter = value;
}

// internal void Modify(Fuse.Navigation.ModifyRouteHow how, Fuse.Navigation.Route route, Fuse.Navigation.NavigationGotoMode mode, string operationStyle) [instance] :184
void Router::Modify(int how, ::g::Fuse::Navigation::Route* route, int mode, uString* operationStyle)
{
    switch (how)
    {
        case 1:
        {
            SetRoute(route, mode, 0, operationStyle, true);
            break;
        }
        case 0:
        {
            SetRoute(route, mode, 1, operationStyle, true);
            break;
        }
        case 2:
        {
            SetRoute(route, mode, 2, operationStyle, true);
            break;
        }
        case 3:
        {
            Pop();
            break;
        }
        case 4:
        {
            if (route != NULL)
                ::g::Fuse::Diagnostics::UserWarning(uString::Const("PrepareBack does not support an explicit route"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 207, uString::Const("Modify"));

            ::g::Fuse::Navigation::Route* popRoute = GetHistoryRoute(1);

            if (popRoute == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(uString::Const("There is no history for PrepareBack"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 212, uString::Const("Modify"), NULL);
                return;
            }

            PrepareRoute(popRoute, 3, operationStyle);
            break;
        }
        case 5:
        {
            PrepareRoute(route, 1, operationStyle);
            break;
        }
        case 6:
        {
            PrepareRoute(route, 0, operationStyle);
            break;
        }
        case 7:
        {
            FinishPrepared();
            break;
        }
    }
}

// internal void OnHistoryChanged() [instance] :677
void Router::OnHistoryChanged()
{
    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) [instance] :136
void Router::OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    if (uPtr(args)->Key() == 201)
    {
        if (BackButtonAction() == 0)
            GoBack();
    }
}

// private void OnUpFromRoot() [instance] :273
void Router::OnUpFromRoot()
{
}

// private void Pop() [instance] :279
void Router::Pop()
{
    ::g::Fuse::Navigation::Route* route = GetHistoryRoute(1);

    if (route == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Cannot pop() - history is empty"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 284, uString::Const("Pop"), NULL);
        return;
    }

    SetRoute(route, 0, 3, ::STRINGS[18/*""*/], true);
}

// public double get_PrepareProgress() [instance] :323
double Router::PrepareProgress()
{
    return _prepareProgress;
}

// public void set_PrepareProgress(double value) [instance] :324
void Router::PrepareProgress(double value)
{
    SetPrepareProgress(value);
}

// private void PrepareRoute(Fuse.Navigation.Route r, Fuse.Navigation.RoutingOperation operation, string operationStyle) [instance] :295
void Router::PrepareRoute(::g::Fuse::Navigation::Route* r, int operation, uString* operationStyle)
{
    _prepareCurrent = GetCurrentRoute();
    _prepareNext = SetRouteImpl(Parent(), _rootPage, r, 2, operation, operationStyle, &_prepareOutlet, true);
    _prepareOperation = operation;
    _prepareProgress = 0.0;
    _prepareOperationStyle = operationStyle;
}

// public void Push(Fuse.Navigation.Route route, [string operationStyle]) [instance] :179
void Router::Push(::g::Fuse::Navigation::Route* route, uString* operationStyle)
{
    Modify(0, route, 0, operationStyle);
}

// internal Fuse.Navigation.RouterPage get_RootPage() [instance] :706
::g::Fuse::Navigation::RouterPage* Router::RootPage()
{
    return _rootPage;
}

// private void SetPrepareProgress(double value) [instance] :327
void Router::SetPrepareProgress(double value)
{
    if (((_prepareCurrent == NULL) || (_prepareNext == NULL)) || (_prepareOutlet == NULL))
        return;

    int depth = GetOutletDepth(_prepareOutlet);
    ::g::Fuse::Navigation::Route* pc = uPtr(_prepareCurrent)->SubDepth(depth);
    ::g::Fuse::Navigation::Route* pn = uPtr(_prepareNext)->SubDepth(depth);

    if ((pc == NULL) || (pn == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Invalid outlet depth in prepare progress"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 338, uString::Const("SetPrepareProgress"));
        return;
    }

    _prepareProgress = value;
    ::g::Fuse::Navigation::IRouterOutlet::PartialPrepareGoto(uInterface(uPtr(_prepareOutlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()), _prepareProgress);
}

// private Fuse.Navigation.Route SetRoute(Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, string operationStyle, [bool userRequest]) [instance] :361
::g::Fuse::Navigation::Route* Router::SetRoute(::g::Fuse::Navigation::Route* r, int gotoMode, int operation, uString* operationStyle, bool userRequest)
{
    if (r == NULL)
        U_THROW(::g::Uno::Exception::New2(uString::Const("Route cannot be null")));

    ClearPrepared();
    ::g::Fuse::Navigation::Route* current = GetCurrentRoute();
    uObject* ignore;
    ::g::Fuse::Navigation::Route* outR = SetRouteImpl(Parent(), _rootPage, r, gotoMode, operation, operationStyle, &ignore, true);

    if (outR == NULL)
    {
        uString* msg = ::g::Uno::String::op_Addition2(uString::Const("Unable to navigate to route: "), uPtr(r)->Format());

        if (userRequest)
            ::g::Fuse::Diagnostics::UserError(msg, this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 378, uString::Const("SetRoute"), NULL);
        else
            ::g::Fuse::Diagnostics::InternalError(msg, this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 380, uString::Const("SetRoute"));

        SetRouteImpl(Parent(), _rootPage, current, 1, 0, ::STRINGS[18/*""*/], &ignore, true);
    }

    OnHistoryChanged();
    return outR;
}

// private Fuse.Navigation.Route SetRouteImpl(Fuse.Visual root, Fuse.Navigation.RouterPage rootPage, Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, string operationStyle, Fuse.Navigation.IRouterOutlet& majorChange, [bool canReuse]) [instance] :392
::g::Fuse::Navigation::Route* Router::SetRouteImpl(::g::Fuse::Visual* root, ::g::Fuse::Navigation::RouterPage* rootPage, ::g::Fuse::Navigation::Route* r, int gotoMode, int operation, uString* operationStyle, uObject** majorChange, bool canReuse)
{
    ::g::Fuse::Navigation::RouterPage* collection1;
    ::g::Fuse::Reactive::ObserverMap* pages = uPtr(rootPage)->ChildRouterPages();
    *majorChange = NULL;
    uObject* outlet = FindOutletDown(root);

    if (outlet == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(uString::Const("No router outlet found to handle route: "), r), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 401, uString::Const("SetRouteImpl"));
        return NULL;
    }

    ::g::Fuse::Navigation::RouterPage* page;

    if (uPtr(r)->RouterPage != NULL)
        page = uPtr(r)->RouterPage;
    else
        page = (collection1 = ::g::Fuse::Navigation::RouterPage::New1(), uPtr(collection1)->Path = uPtr(r)->Path, uPtr(collection1)->Parameter = uPtr(r)->Parameter, collection1);

    int didTransition = ::g::Fuse::Navigation::IRouterOutlet::CompareCurrent(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()), page);

    if (didTransition == 3)
        return NULL;

    bool leafPush = (uPtr(r)->SubRoute == NULL) && (operation == 1);
    bool reusePage = (canReuse && (didTransition == 0)) && !leafPush;

    if (reusePage)
        page = ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()));

    if (gotoMode != 2)

        switch (operation)
        {
            case 0:
            {
                uPtr(pages)->Clear();
                pages->Add(page);
                break;
            }
            case 1:
            {
                if (!canReuse)
                {
                    uPtr(pages)->Clear();
                    pages->Add(page);
                }
                else if (!reusePage)
                    uPtr(pages)->Add(page);

                break;
            }
            case 2:
            {
                if (!reusePage)
                {
                    if (uPtr(pages)->Count() > 0)
                        uPtr(pages)->Item(uPtr(pages)->Count() - 1, page);
                    else
                        uPtr(pages)->Add(page);
                }

                break;
            }
            case 3:
            {
                if (canReuse && !reusePage)
                {
                    if (uPtr(pages)->Count() > 0)
                        uPtr(pages)->RemoveAt(uPtr(pages)->Count() - 1);
                }

                break;
            }
        }

    if (didTransition != 0)
    {
        didTransition = ::g::Fuse::Navigation::IRouterOutlet::Goto(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()), page, gotoMode, operation, operationStyle);

        if (didTransition == 3)
            return NULL;
    }

    bool trackMajorChange = true;

    if (didTransition == 2)
    {
        gotoMode = 1;
        *majorChange = outlet;
        trackMajorChange = false;
    }

    ::g::Fuse::Navigation::Route* outSubRoute = NULL;

    if (r->SubRoute != NULL)
    {
        if (uPtr(page)->Visual() == NULL)
        {
            ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(uString::Const("SubRoute requested but outlet has no active path: "), r), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 479, uString::Const("SetRouteImpl"));
            return NULL;
        }

        uObject* subMajorChange;
        outSubRoute = SetRouteImpl(uPtr(page)->Visual(), page, uPtr(r)->SubRoute, gotoMode, operation, operationStyle, &subMajorChange, reusePage);

        if (trackMajorChange)
            *majorChange = subMajorChange;

        if (outSubRoute == NULL)
            return NULL;
    }
    else
        outSubRoute = GetCurrent(uPtr(page)->Visual(), NULL);

    return ::g::Fuse::Navigation::Route::New1(uPtr(page)->Path, uPtr(page)->Parameter, outSubRoute);
}

// private static Fuse.Navigation.IRouterOutlet AsRouterOutlet(Fuse.Node n) [static] :606
uObject* Router::AsRouterOutlet(::g::Fuse::Node* n)
{
    Router_typeof()->Init();
    uObject* ro = uAs<uObject*>(n, ::g::Fuse::Navigation::IRouterOutlet_typeof());

    if ((ro != NULL) && ((::g::Fuse::Navigation::IRouterOutlet::Type(uInterface(uPtr(ro), ::g::Fuse::Navigation::IRouterOutlet_typeof())) & 2) == 2))
        return ro;

    return NULL;
}

// private static void Bookmark(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :240
void Router::Bookmark(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();
    uString* ret4;

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("`Router.bookmark` takes one argument"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 246, uString::Const("Bookmark"), NULL);
        return;
    }

    ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::Object_typeof());

    if (obj == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("`Router.bookmark` should be passed an object"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 253, uString::Const("Bookmark"), NULL);
        return;
    }

    uString* name = NULL;
    uObject* relative = NULL;
    ::g::Fuse::Navigation::Route* route = NULL;
    uArray* keys = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(keys)->Length(); ++i)
    {
        uString* p = uPtr(keys)->Strong<uString*>(i);
        uObject* o = uPtr(obj)->Item(p);

        if (::g::Uno::String::op_Equality(p, ::STRINGS[17/*"name"*/]))
            name = (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), o, &ret4), ret4);
        else if (::g::Uno::String::op_Equality(p, uString::Const("relative")))
        {
            uObject* node = uPtr(c)->Wrap(o);
            relative = uPtr(r)->FindOutletUp(uAs< ::g::Fuse::Node*>(node, ::TYPES[30/*Fuse.Node*/]));

            if (relative == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(uString::Const("Could not find an outlet from the `relative` node"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 278, uString::Const("Bookmark"), NULL);
                return;
            }
        }
        else if (::g::Uno::String::op_Equality(p, uString::Const("path")))
        {
            ::g::Fuse::Scripting::Array* path = uAs< ::g::Fuse::Scripting::Array*>(o, ::g::Fuse::Scripting::Array_typeof());

            if (path == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(uString::Const("`path` should be an array"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 287, uString::Const("Bookmark"), NULL);
                return;
            }

            route = ::g::Fuse::Navigation::RouterRequest::ParseFlatRoute((uObject*)path);
        }
        else
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("Unrecognized argument: "), p), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 295, uString::Const("Bookmark"), NULL);
            return;
        }
    }

    if (relative != NULL)
    {
        ::g::Fuse::Navigation::Route* current = uPtr(r)->GetCurrent(uPtr(r)->Parent(), relative);
        route = (current == NULL) ? route : (::g::Fuse::Navigation::Route*)uPtr(current)->Append(route);
    }

    if (::g::Uno::String::op_Equality(name, NULL))
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("A `name` is required for the bookmark"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 308, uString::Const("Bookmark"), NULL);
        return;
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(uPtr(r)->Bookmarks), name, route);
}

// internal static Fuse.Visual FindRouterOutletPage(Fuse.Node from) [static] :548
::g::Fuse::Visual* Router::FindRouterOutletPage(::g::Fuse::Node* from)
{
    Router_typeof()->Init();

    while ((from != NULL) && (uPtr(from)->Parent() != NULL))
    {
        if (Router::HasRouter(from))
            return NULL;

        uObject* ro = Router::AsRouterOutlet(uPtr(from)->Parent());

        if (ro != NULL)
        {
            ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(from, ::TYPES[10/*Fuse.Visual*/]);

            if (v != NULL)
                return v;

            ::g::Fuse::Diagnostics::InternalError(uString::Const("Unexpected request for RouterOutlet page"), from, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.uno"), 560, uString::Const("FindRouterOutletPage"));
        }

        from = uPtr(from)->Parent();
    }

    return NULL;
}

// private static Fuse.Navigation.Route GetRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :92
::g::Fuse::Navigation::Route* Router::GetRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (uPtr(args)->Length() < 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Router.gotoRelative(): requires 1+ parameters"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 96, uString::Const("GetRelative"), NULL);
        return NULL;
    }

    ::g::Fuse::Node* node = uAs< ::g::Fuse::Node*>(uPtr(c)->Wrap(uPtr(args)->Strong<uObject*>(0)), ::TYPES[30/*Fuse.Node*/]);
    ::g::Fuse::Navigation::Route* where = ::g::Fuse::Navigation::RouterRequest::ParseFlatRoute1(args, 1);
    return uPtr(r)->GetRelativeRoute(node, where);
}

// private static void GetRoute(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :331
void Router::GetRoute(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Router.getRoute(): must provide exactly 1 argument."), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 335, uString::Const("GetRoute"), NULL);
        return;
    }

    ::g::Fuse::Scripting::Function* callback = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::Function_typeof());

    if (callback == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Router.getRoute(): argument must be a function."), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 341, uString::Const("GetRoute"), NULL);
        return;
    }

    ::g::Fuse::Navigation::Route* route = uPtr(r)->GetCurrentRoute();
    uPtr(c)->Invoke(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Router__GetRouteCallback__Run_fn, Router__GetRouteCallback::New1(route, callback, c)));
}

// private static void GoBack(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :135
void Router::GoBack1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Router.goBack takes no parameters"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 141, uString::Const("GoBack"), NULL);
        return;
    }

    uPtr(r)->GoBack();
}

// private static void Goto(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :34
void Router::Goto1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    ::g::Fuse::Navigation::Route* where = ::g::Fuse::Navigation::RouterRequest::ParseFlatRoute1(args, 0);

    if (where != NULL)
        uPtr(r)->Goto(where, ::STRINGS[18/*""*/]);
    else
        ::g::Fuse::Diagnostics::UserError(uString::Const("Router.goto(): invalid route provided"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 45, uString::Const("Goto"), NULL);
}

// private static void GotoRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :70
void Router::GotoRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();
    ::g::Fuse::Navigation::Route* route = Router::GetRelative(c, r, args);

    if (route != NULL)
        uPtr(r)->Goto(route, ::STRINGS[18/*""*/]);
}

// private static bool HasRouter(Fuse.Node n) [static] :665
bool Router::HasRouter(::g::Fuse::Node* n)
{
    Router_typeof()->Init();
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[10/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    return ((Router*)uPtr(v)->FirstChild(::TYPES[10/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Navigation.Router>*/, Router_typeof(), NULL))) != NULL;
}

// private static void Modify(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :178
void Router::Modify1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("`Router.modify` takes one argument"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 184, uString::Const("Modify"), NULL);
        return;
    }

    ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::Object_typeof());

    if (obj == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("`Router.modify` should be passed an object"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno"), 191, uString::Const("Modify"), NULL);
        return;
    }

    Router__ScriptRouterRequest* request = Router__ScriptRouterRequest::New2(c);
    uArray* keys = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(keys)->Length(); ++i)
    {
        uString* key = uPtr(keys)->Strong<uString*>(i);

        if (!uPtr(request)->AddArgument(key, uPtr(obj)->Item(key)))
            return;
    }

    request->MakeRequest(r);
}

// public generated Router New() [static] :5
Router* Router::New2()
{
    Router* obj3 = (Router*)uNew(Router_typeof());
    obj3->ctor_2();
    return obj3;
}

// private static void Push(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :121
void Router::Push1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    ::g::Fuse::Navigation::Route* where = ::g::Fuse::Navigation::RouterRequest::ParseFlatRoute1(args, 0);
    uPtr(r)->Push(where, ::STRINGS[18/*""*/]);
}

// private static void PushRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :85
void Router::PushRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();
    ::g::Fuse::Navigation::Route* route = Router::GetRelative(c, r, args);

    if (route != NULL)
        uPtr(r)->Push(route, ::STRINGS[18/*""*/]);
}

// internal static Fuse.Navigation.Router TryFindRouter(Fuse.Node n) [static] :683
Router* Router::TryFindRouter(::g::Fuse::Node* n)
{
    Router_typeof()->Init();
    ::g::Fuse::Node* p = n;

    while (p != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(p, ::TYPES[10/*Fuse.Visual*/]);

        if (v != NULL)
        {
            Router* r = (Router*)uPtr(v)->FirstChild(::TYPES[10/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Navigation.Router>*/, Router_typeof(), NULL));

            if (r != NULL)
                return r;
        }

        p = uPtr(p)->Parent();
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterCancelNavigation.uno
// ------------------------------------------------------------------------------

// public sealed class RouterCancelNavigation :10
// {
static void RouterCancelNavigation_build(uType* type)
{
    ::STRINGS[38] = uString::Const("Router not set and none could be found");
    ::STRINGS[39] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterCancelNavigation.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(RouterCancelNavigation, _Router), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RouterCancelNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RouterCancelNavigation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Navigation.RouterCancelNavigation", options);
    type->fp_build_ = RouterCancelNavigation_build;
    type->fp_ctor_ = (void*)RouterCancelNavigation__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RouterCancelNavigation__Perform_fn;
    return type;
}

// public generated RouterCancelNavigation() :10
void RouterCancelNavigation__ctor_2_fn(RouterCancelNavigation* __this)
{
    __this->ctor_2();
}

// public generated RouterCancelNavigation New() :10
void RouterCancelNavigation__New2_fn(RouterCancelNavigation** __retval)
{
    *__retval = RouterCancelNavigation::New2();
}

// protected override sealed void Perform(Fuse.Node n) :15
void RouterCancelNavigation__Perform_fn(RouterCancelNavigation* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Navigation::Router* ind1;
    ind1 = __this->Router();
    ::g::Fuse::Navigation::Router* useRouter = (ind1 != NULL) ? ind1 : (::g::Fuse::Navigation::Router*)::g::Fuse::Navigation::Router::TryFindRouter(n);

    if (useRouter == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[38/*"Router not ...*/], __this, ::STRINGS[39/*"/usr/local/...*/], 20, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    uPtr(useRouter)->CancelNavigation();
}

// public generated Fuse.Navigation.Router get_Router() :13
void RouterCancelNavigation__get_Router_fn(RouterCancelNavigation* __this, ::g::Fuse::Navigation::Router** __retval)
{
    *__retval = __this->Router();
}

// public generated void set_Router(Fuse.Navigation.Router value) :13
void RouterCancelNavigation__set_Router_fn(RouterCancelNavigation* __this, ::g::Fuse::Navigation::Router* value)
{
    __this->Router(value);
}

// public generated RouterCancelNavigation() [instance] :10
void RouterCancelNavigation::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Navigation.Router get_Router() [instance] :13
::g::Fuse::Navigation::Router* RouterCancelNavigation::Router()
{
    return _Router;
}

// public generated void set_Router(Fuse.Navigation.Router value) [instance] :13
void RouterCancelNavigation::Router(::g::Fuse::Navigation::Router* value)
{
    _Router = value;
}

// public generated RouterCancelNavigation New() [static] :10
RouterCancelNavigation* RouterCancelNavigation::New2()
{
    RouterCancelNavigation* obj2 = (RouterCancelNavigation*)uNew(RouterCancelNavigation_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterModify.uno
// --------------------------------------------------------------------

// public sealed class RouterModify :84
// {
static void RouterModify_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::RouterRequest_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(RouterModify_type, interface0));
    type->SetFields(8,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(RouterModify, _path), 0,
        ::g::Fuse::Reactive::NodeExpressionBinding_typeof(), offsetof(RouterModify, _pathSub), 0,
        ::g::Fuse::Navigation::RouterRequest_typeof(), offsetof(RouterModify, _request), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(RouterModify, _Router), 0);
}

RouterModify_type* RouterModify_typeof()
{
    static uSStrong<RouterModify_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(RouterModify);
    options.TypeSize = sizeof(RouterModify_type);
    type = (RouterModify_type*)uClassType::New("Fuse.Navigation.RouterModify", options);
    type->fp_build_ = RouterModify_build;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*))RouterModify__OnUnrooted_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RouterModify__Perform_fn;
    type->interface0.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))RouterModify__FuseReactiveIListenerOnNewData_fn;
    return type;
}

// internal RouterModify(Fuse.Navigation.RouterModify.Flags flags) :103
void RouterModify__ctor_3_fn(RouterModify* __this, int* flags)
{
    __this->ctor_3(*flags);
}

// private void DisposePathSub() :176
void RouterModify__DisposePathSub_fn(RouterModify* __this)
{
    __this->DisposePathSub();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :185
void RouterModify__FuseReactiveIListenerOnNewData_fn(RouterModify* __this, uObject* source, uObject* value)
{
    if ((source != __this->Path()) || (__this->_pathSub == NULL))
        return;

    {
        const auto __finally_fun = [&]()
        {
            __this->DisposePathSub();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Navigation::Route* route = NULL;

        if (!::g::Fuse::Navigation::RouterRequest::ParseNVPRoute(value, &route))
            return;

        __this->PerformRoute(::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(uAs<uObject*>(__this->_pathSub, ::TYPES[13/*Fuse.Reactive.IContext*/])), ::TYPES[13/*Fuse.Reactive.IContext*/])), route);
    }
}

// public Fuse.Navigation.ModifyRouteHow get_How() :112
void RouterModify__get_How_fn(RouterModify* __this, int* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Navigation.ModifyRouteHow value) :113
void RouterModify__set_How_fn(RouterModify* __this, int* value)
{
    __this->How(*value);
}

// internal RouterModify New(Fuse.Navigation.RouterModify.Flags flags) :103
void RouterModify__New3_fn(int* flags, RouterModify** __retval)
{
    *__retval = RouterModify::New3(*flags);
}

// protected override sealed void OnUnrooted() :157
void RouterModify__OnUnrooted_fn(RouterModify* __this)
{
    __this->DisposePathSub();
    ::g::Fuse::Triggers::Actions::TriggerAction__OnUnrooted_fn(__this);
}

// public Fuse.Reactive.IExpression get_Path() :151
void RouterModify__get_Path_fn(RouterModify* __this, uObject** __retval)
{
    *__retval = __this->Path();
}

// public void set_Path(Fuse.Reactive.IExpression value) :152
void RouterModify__set_Path_fn(RouterModify* __this, uObject* value)
{
    __this->Path(value);
}

// protected override sealed void Perform(Fuse.Node n) :163
void RouterModify__Perform_fn(RouterModify* __this, ::g::Fuse::Node* n)
{
    if (__this->Path() != NULL)
    {
        __this->DisposePathSub();
        __this->_pathSub = ::g::Fuse::Reactive::NodeExpressionBinding::New1(__this->Path(), n, (uObject*)__this);
    }
    else
        __this->PerformRoute(n, NULL);
}

// private void PerformRoute(Fuse.Node n, Fuse.Navigation.Route route) :204
void RouterModify__PerformRoute_fn(RouterModify* __this, ::g::Fuse::Node* n, ::g::Fuse::Navigation::Route* route)
{
    __this->PerformRoute(n, route);
}

// public generated Fuse.Navigation.Router get_Router() :87
void RouterModify__get_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router** __retval)
{
    *__retval = __this->Router();
}

// public generated void set_Router(Fuse.Navigation.Router value) :87
void RouterModify__set_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router* value)
{
    __this->Router(value);
}

// internal RouterModify(Fuse.Navigation.RouterModify.Flags flags) [instance] :103
void RouterModify::ctor_3(int flags)
{
    _request = ::g::Fuse::Navigation::RouterRequest::New1(0);
    ctor_1();
}

// private void DisposePathSub() [instance] :176
void RouterModify::DisposePathSub()
{
    if (_pathSub != NULL)
    {
        uPtr(_pathSub)->Dispose();
        _pathSub = NULL;
    }
}

// public Fuse.Navigation.ModifyRouteHow get_How() [instance] :112
int RouterModify::How()
{
    return uPtr(_request)->How;
}

// public void set_How(Fuse.Navigation.ModifyRouteHow value) [instance] :113
void RouterModify::How(int value)
{
    uPtr(_request)->How = value;
}

// public Fuse.Reactive.IExpression get_Path() [instance] :151
uObject* RouterModify::Path()
{
    return _path;
}

// public void set_Path(Fuse.Reactive.IExpression value) [instance] :152
void RouterModify::Path(uObject* value)
{
    _path = value;
}

// private void PerformRoute(Fuse.Node n, Fuse.Navigation.Route route) [instance] :204
void RouterModify::PerformRoute(::g::Fuse::Node* n, ::g::Fuse::Navigation::Route* route)
{
    ::g::Fuse::Navigation::Router* ind1;
    uPtr(_request)->Route = route;
    ind1 = Router();
    ::g::Fuse::Navigation::Router* useRouter = (ind1 != NULL) ? ind1 : (::g::Fuse::Navigation::Router*)::g::Fuse::Navigation::Router::TryFindRouter(n);

    if (useRouter == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[38/*"Router not ...*/], this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterModify.uno"), 211, uString::Const("PerformRoute"), NULL);
        return;
    }

    uPtr(_request)->MakeRequest(useRouter);
}

// public generated Fuse.Navigation.Router get_Router() [instance] :87
::g::Fuse::Navigation::Router* RouterModify::Router()
{
    return _Router;
}

// public generated void set_Router(Fuse.Navigation.Router value) [instance] :87
void RouterModify::Router(::g::Fuse::Navigation::Router* value)
{
    _Router = value;
}

// internal RouterModify New(Fuse.Navigation.RouterModify.Flags flags) [static] :103
RouterModify* RouterModify::New3(int flags)
{
    RouterModify* obj3 = (RouterModify*)uNew(RouterModify_typeof());
    obj3->ctor_3(flags);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal sealed class RouterPage :41
// {
static void RouterPage_build(uType* type)
{
    ::STRINGS[33] = uString::Const("?");
    ::STRINGS[40] = uString::Const(" ");
    ::STRINGS[41] = uString::Const("no-ctx");
    ::STRINGS[42] = uString::Const("@");
    ::TYPES[29] = ::g::Fuse::Node_typeof()->MakeMethod(0/*FindBehavior<Fuse.Navigation.Router>*/, ::g::Fuse::Navigation::Router_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Visual_typeof();
    type->SetFields(0,
        ::g::Fuse::Reactive::ObserverMap_typeof()->MakeType(type, NULL), offsetof(RouterPage, _childRouterPages), 0,
        uObject_typeof(), offsetof(RouterPage, Context), 0,
        ::g::Fuse::Node_typeof(), offsetof(RouterPage, Node), uFieldFlagsWeak,
        ::g::Uno::String_typeof(), offsetof(RouterPage, Parameter), 0,
        ::g::Uno::String_typeof(), offsetof(RouterPage, Path), 0);
}

uType* RouterPage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(RouterPage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.RouterPage", options);
    type->fp_build_ = RouterPage_build;
    type->fp_ctor_ = (void*)RouterPage__New1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))RouterPage__ToString_fn;
    return type;
}

// public generated RouterPage() :41
void RouterPage__ctor__fn(RouterPage* __this)
{
    __this->ctor_();
}

// internal static void BubbleHistoryChanged(Fuse.Node at) :83
void RouterPage__BubbleHistoryChanged_fn(::g::Fuse::Node* at)
{
    RouterPage::BubbleHistoryChanged(at);
}

// public Fuse.Reactive.ObserverMap<Fuse.Navigation.RouterPage> get_ChildRouterPages() :60
void RouterPage__get_ChildRouterPages_fn(RouterPage* __this, ::g::Fuse::Reactive::ObserverMap** __retval)
{
    *__retval = __this->ChildRouterPages();
}

// public generated RouterPage New() :41
void RouterPage__New1_fn(RouterPage** __retval)
{
    *__retval = RouterPage::New1();
}

// public override sealed string ToString() :77
void RouterPage__ToString_fn(RouterPage* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(__this->Path, ::STRINGS[33/*"?"*/]), __this->Parameter), ::STRINGS[40/*" "*/]), __this->Visual()), ::STRINGS[40/*" "*/]), (__this->Context == NULL) ? ::STRINGS[41/*"no-ctx"*/] : (uString*)::g::Uno::String::op_Addition1(::STRINGS[42/*"@"*/], uBox<int>(::g::Uno::Int_typeof(), ::g::Uno::Object::GetHashCode(uPtr(__this->Context))))), void();
}

// public Fuse.Visual get_Visual() :51
void RouterPage__get_Visual_fn(RouterPage* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// public void set_Visual(Fuse.Visual value) :52
void RouterPage__set_Visual_fn(RouterPage* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public generated RouterPage() [instance] :41
void RouterPage::ctor_()
{
}

// public Fuse.Reactive.ObserverMap<Fuse.Navigation.RouterPage> get_ChildRouterPages() [instance] :60
::g::Fuse::Reactive::ObserverMap* RouterPage::ChildRouterPages()
{
    if (_childRouterPages == NULL)
        _childRouterPages = ::g::Fuse::Navigation::PagesMap::New1(this);

    return _childRouterPages;
}

// public Fuse.Visual get_Visual() [instance] :51
::g::Fuse::Visual* RouterPage::Visual()
{
    return uAs< ::g::Fuse::Visual*>(Node, ::TYPES[10/*Fuse.Visual*/]);
}

// public void set_Visual(Fuse.Visual value) [instance] :52
void RouterPage::Visual(::g::Fuse::Visual* value)
{
    Node = value;
}

// internal static void BubbleHistoryChanged(Fuse.Node at) [static] :83
void RouterPage::BubbleHistoryChanged(::g::Fuse::Node* at)
{
    ::g::Fuse::Navigation::Router* router = (::g::Fuse::Navigation::Router*)uPtr(at)->FindBehavior(::TYPES[29/*Fuse.Node.FindBehavior<Fuse.Navigation.Router>*/]);

    if (router != NULL)
        uPtr(router)->OnHistoryChanged();
}

// public generated RouterPage New() [static] :41
RouterPage* RouterPage::New1()
{
    RouterPage* obj1 = (RouterPage*)uNew(RouterPage_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageData.uno
// ----------------------------------------------------------------

// internal delegate void RouterPageChangedHandler(object sender, Fuse.Navigation.RouterPage newPage) :5
uDelegateType* RouterPageChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.RouterPageChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::RouterPage_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno
// ---------------------------------------------------------------------

// internal class RouterRequest :12
// {
static void RouterRequest_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(0,
        RouterRequest__Flags_typeof(), offsetof(RouterRequest, _flags), 0,
        ::g::Uno::String_typeof(), offsetof(RouterRequest, Bookmark), 0,
        ::g::Fuse::Navigation::ModifyRouteHow_typeof(), offsetof(RouterRequest, How), 0,
        ::g::Fuse::Node_typeof(), offsetof(RouterRequest, Relative), uFieldFlagsWeak,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(RouterRequest, Route), 0,
        ::g::Uno::String_typeof(), offsetof(RouterRequest, Style), 0,
        ::g::Fuse::Navigation::NavigationGotoMode_typeof(), offsetof(RouterRequest, Transition), 0);
}

RouterRequest_type* RouterRequest_typeof()
{
    static uSStrong<RouterRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RouterRequest);
    options.TypeSize = sizeof(RouterRequest_type);
    type = (RouterRequest_type*)uClassType::New("Fuse.Navigation.RouterRequest", options);
    type->fp_build_ = RouterRequest_build;
    type->fp_ParseNode = RouterRequest__ParseNode_fn;
    return type;
}

// public RouterRequest([Fuse.Navigation.RouterRequest.Flags flags]) :31
void RouterRequest__ctor__fn(RouterRequest* __this, int* flags)
{
    __this->ctor_(*flags);
}

// public bool AddArgument(string name, object value) :75
void RouterRequest__AddArgument_fn(RouterRequest* __this, uString* name, uObject* value, bool* __retval)
{
    *__retval = __this->AddArgument(name, value);
}

// public bool AddHow(Fuse.Navigation.ModifyRouteHow how) :46
void RouterRequest__AddHow_fn(RouterRequest* __this, int* how, bool* __retval)
{
    *__retval = __this->AddHow(*how);
}

// public bool AddPath(object value) :52
void RouterRequest__AddPath_fn(RouterRequest* __this, uObject* value, bool* __retval)
{
    *__retval = __this->AddPath(value);
}

// public bool MakeRequest(Fuse.Navigation.Router router) :108
void RouterRequest__MakeRequest_fn(RouterRequest* __this, ::g::Fuse::Navigation::Router* router, bool* __retval)
{
    *__retval = __this->MakeRequest(router);
}

// public RouterRequest New([Fuse.Navigation.RouterRequest.Flags flags]) :31
void RouterRequest__New1_fn(int* flags, RouterRequest** __retval)
{
    *__retval = RouterRequest::New1(*flags);
}

// public static Fuse.Navigation.Route ParseFlatRoute(Fuse.IArray path) :134
void RouterRequest__ParseFlatRoute_fn(uObject* path, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = RouterRequest::ParseFlatRoute(path);
}

// public static Fuse.Navigation.Route ParseFlatRoute(object[] args, [int pos]) :143
void RouterRequest__ParseFlatRoute1_fn(uArray* args, int* pos, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = RouterRequest::ParseFlatRoute1(args, *pos);
}

// protected virtual Fuse.Node ParseNode(object value) :241
void RouterRequest__ParseNode_fn(RouterRequest* __this, uObject* value, ::g::Fuse::Node** __retval)
{
    return *__retval = uAs< ::g::Fuse::Node*>(value, ::TYPES[30/*Fuse.Node*/]), void();
}

// private static bool ParseNVPComponent(object value, Fuse.Navigation.Route& route) :178
void RouterRequest__ParseNVPComponent_fn(uObject* value, ::g::Fuse::Navigation::Route** route, bool* __retval)
{
    *__retval = RouterRequest::ParseNVPComponent(value, route);
}

// public static bool ParseNVPRoute(object value, Fuse.Navigation.Route& route) :157
void RouterRequest__ParseNVPRoute_fn(uObject* value, ::g::Fuse::Navigation::Route** route, bool* __retval)
{
    *__retval = RouterRequest::ParseNVPRoute(value, route);
}

// public void Reset() :37
void RouterRequest__Reset_fn(RouterRequest* __this)
{
    __this->Reset();
}

// private static bool ValidateParameter(object arg, [int depth]) :198
void RouterRequest__ValidateParameter_fn(uObject* arg, int* depth, bool* __retval)
{
    *__retval = RouterRequest::ValidateParameter(arg, *depth);
}

// public RouterRequest([Fuse.Navigation.RouterRequest.Flags flags]) [instance] :31
void RouterRequest::ctor_(int flags)
{
    _flags = flags;
    Reset();
}

// public bool AddArgument(string name, object value) [instance] :75
bool RouterRequest::AddArgument(uString* name, uObject* value)
{
    int ret2;
    int ret3;
    uString* ret4;
    uString* ret5;

    if (::g::Uno::String::op_Equality(name, uString::Const("how")))
        return AddHow((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.Navigation.ModifyRouteHow>*/, ::g::Fuse::Navigation::ModifyRouteHow_typeof(), NULL), value, &ret2), ret2));

    if (::g::Uno::String::op_Equality(name, uString::Const("path")))
        return AddPath(value);

    if (::g::Uno::String::op_Equality(name, uString::Const("relative")))
        Relative = ParseNode(value);
    else if (::g::Uno::String::op_Equality(name, uString::Const("transition")))
        Transition = (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.Navigation.NavigationGotoMode>*/, ::g::Fuse::Navigation::NavigationGotoMode_typeof(), NULL), value, &ret3), ret3);
    else if (::g::Uno::String::op_Equality(name, uString::Const("bookmark")))
        Bookmark = (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), value, &ret4), ret4);
    else if (::g::Uno::String::op_Equality(name, uString::Const("style")))
        Style = (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), value, &ret5), ret5);
    else
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("Unrecognized argument: "), name), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno"), 101, uString::Const("AddArgument"), NULL);
        return false;
    }

    return true;
}

// public bool AddHow(Fuse.Navigation.ModifyRouteHow how) [instance] :46
bool RouterRequest::AddHow(int how)
{
    How = how;
    return true;
}

// public bool AddPath(object value) [instance] :52
bool RouterRequest::AddPath(uObject* value)
{
    if ((_flags & 1) == 1)
    {
        uObject* path = uAs<uObject*>(value, ::g::Fuse::IArray_typeof());

        if (path == NULL)
        {
            ::g::Fuse::Diagnostics::UserError(uString::Const("`path` should be an array"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno"), 59, uString::Const("AddPath"), NULL);
            return false;
        }

        Route = RouterRequest::ParseFlatRoute(path);
    }
    else
    {
        if (!RouterRequest::ParseNVPRoute(value, &Route))
            return false;
    }

    return true;
}

// public bool MakeRequest(Fuse.Navigation.Router router) [instance] :108
bool RouterRequest::MakeRequest(::g::Fuse::Navigation::Router* router)
{
    bool ret6;
    ::g::Fuse::Navigation::Route* targetRoute = Route;

    if (::g::Uno::String::op_Inequality(Bookmark, NULL))
    {
        if (targetRoute != NULL)
        {
            ::g::Fuse::Diagnostics::UserError(uString::Const("A path and bookmark cannot both be specified"), router, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno"), 116, uString::Const("MakeRequest"), NULL);
            return false;
        }

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(router)->Bookmarks), Bookmark, (void**)(&targetRoute), &ret6), ret6))
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("Unknown bookmark: "), Bookmark), router, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno"), 122, uString::Const("MakeRequest"), NULL);
            return false;
        }
    }

    if (Relative != NULL)
        targetRoute = uPtr(router)->GetRelativeRoute(Relative, targetRoute);

    uPtr(router)->Modify(How, targetRoute, Transition, Style);
    return true;
}

// public void Reset() [instance] :37
void RouterRequest::Reset()
{
    How = 1;
    Route = NULL;
    Relative = NULL;
    Transition = 0;
    Style = ::STRINGS[18/*""*/];
}

// public RouterRequest New([Fuse.Navigation.RouterRequest.Flags flags]) [static] :31
RouterRequest* RouterRequest::New1(int flags)
{
    RouterRequest* obj1 = (RouterRequest*)uNew(RouterRequest_typeof());
    obj1->ctor_(flags);
    return obj1;
}

// public static Fuse.Navigation.Route ParseFlatRoute(Fuse.IArray path) [static] :134
::g::Fuse::Navigation::Route* RouterRequest::ParseFlatRoute(uObject* path)
{
    uArray* cvt = uArray::New(::TYPES[11/*object[]*/], ::g::Fuse::IArray::Length(uInterface(uPtr(path), ::g::Fuse::IArray_typeof())));

    for (int i = 0; i < cvt->Length(); ++i)
        uPtr(cvt)->Strong<uObject*>(i) = ::g::Fuse::IArray::Item(uInterface(uPtr(path), ::g::Fuse::IArray_typeof()), i);

    return RouterRequest::ParseFlatRoute1(cvt, 0);
}

// public static Fuse.Navigation.Route ParseFlatRoute(object[] args, [int pos]) [static] :143
::g::Fuse::Navigation::Route* RouterRequest::ParseFlatRoute1(uArray* args, int pos)
{
    if (uPtr(args)->Length() <= pos)
        return NULL;

    if (uPtr(args)->Length() <= (pos + 1))
        return ::g::Fuse::Navigation::Route::New1(uAs<uString*>(uPtr(args)->Strong<uObject*>(pos), ::g::Uno::String_typeof()), NULL, NULL);

    uObject* arg = uPtr(args)->Strong<uObject*>(pos + 1);

    if (!RouterRequest::ValidateParameter(arg, 0))
        return NULL;

    uString* path = uAs<uString*>(args->Strong<uObject*>(pos), ::g::Uno::String_typeof());
    uString* parameter = ::g::Fuse::Json::Stringify(arg, true);
    return ::g::Fuse::Navigation::Route::New1(path, parameter, RouterRequest::ParseFlatRoute1(args, pos + 2));
}

// private static bool ParseNVPComponent(object value, Fuse.Navigation.Route& route) [static] :178
bool RouterRequest::ParseNVPComponent(uObject* value, ::g::Fuse::Navigation::Route** route)
{
    if (uIs(value, ::g::Uno::String_typeof()))
    {
        *route = ::g::Fuse::Navigation::Route::New1(uCast<uString*>(value, ::g::Uno::String_typeof()), NULL, *route);
        return true;
    }

    ::g::Fuse::NameValuePair* nvp = uAs< ::g::Fuse::NameValuePair*>(value, ::TYPES[15/*Fuse.NameValuePair*/]);

    if (nvp != NULL)
    {
        *route = ::g::Fuse::Navigation::Route::New1(uPtr(nvp)->Name(), ::g::Fuse::Json::Stringify(uPtr(nvp)->Value(), false), *route);
        return true;
    }

    ::g::Fuse::Diagnostics::UserError(uString::Const("incompatible path component"), value, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno"), 194, uString::Const("ParseNVPComponent"), NULL);
    return false;
}

// public static bool ParseNVPRoute(object value, Fuse.Navigation.Route& route) [static] :157
bool RouterRequest::ParseNVPRoute(uObject* value, ::g::Fuse::Navigation::Route** route)
{
    *route = NULL;
    uObject* array = uAs<uObject*>(value, ::g::Fuse::IArray_typeof());

    if (array != NULL)
    {
        for (int i = ::g::Fuse::IArray::Length(uInterface(uPtr(array), ::g::Fuse::IArray_typeof())) - 1; i >= 0; --i)
            if (!RouterRequest::ParseNVPComponent(::g::Fuse::IArray::Item(uInterface(uPtr(array), ::g::Fuse::IArray_typeof()), i), route))
                return false;

        return true;
    }
    else
        return RouterRequest::ParseNVPComponent(value, route);
}

// private static bool ValidateParameter(object arg, [int depth]) [static] :198
bool RouterRequest::ValidateParameter(uObject* arg, int depth)
{
    if (depth > 50)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Route parameter must be serializeable, it contains reference loops or is too large"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno"), 202, uString::Const("ValidateParameter"), NULL);
        return false;
    }

    if (uIs(arg, ::g::Fuse::Scripting::Object_typeof()))
    {
        ::g::Fuse::Scripting::Object* obj = uCast< ::g::Fuse::Scripting::Object*>(arg, ::g::Fuse::Scripting::Object_typeof());

        if (uIs(obj, ::g::Fuse::Reactive::IObservable_typeof()))
        {
            ::g::Fuse::Diagnostics::UserError(uString::Const("Route parameter must be serializeable, cannot contain Observables."), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno"), 211, uString::Const("ValidateParameter"), NULL);
            return false;
        }

        uArray* keys = uPtr(obj)->Keys();

        for (int i = 0; i < uPtr(keys)->Length(); i++)
        {
            uString* key = uPtr(keys)->Strong<uString*>(i);

            if (!RouterRequest::ValidateParameter(uPtr(obj)->Item(key), depth + 1))
                return false;
        }
    }

    if (uIs(arg, ::g::Fuse::Scripting::Array_typeof()))
    {
        ::g::Fuse::Scripting::Array* arr = uCast< ::g::Fuse::Scripting::Array*>(arg, ::g::Fuse::Scripting::Array_typeof());

        for (int i1 = 0; i1 < uPtr(arr)->Length(); i1++)
            if (!RouterRequest::ValidateParameter(uPtr(arr)->Item(i1), depth + 1))
                return false;
    }

    if (uIs(arg, ::g::Fuse::Scripting::Function_typeof()))
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Route parameter must be serializeable, cannot contain functions."), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno"), 234, uString::Const("ValidateParameter"), NULL);
        return false;
    }

    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal enum RoutingOperation :8
uEnumType* RoutingOperation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingOperation", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Goto", 0LL,
        "Push", 1LL,
        "Replace", 2LL,
        "Pop", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal enum RoutingResult :29
uEnumType* RoutingResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingResult", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "NoChange", 0LL,
        "MinorChange", 1LL,
        "Change", 2LL,
        "Invalid", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno
// --------------------------------------------------------------------------

// private sealed class Router.ScriptRouterRequest :207
// {
static void Router__ScriptRouterRequest_build(uType* type)
{
    ::TYPES[30] = ::g::Fuse::Node_typeof();
    type->SetFields(7,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(Router__ScriptRouterRequest, _context), 0);
}

::g::Fuse::Navigation::RouterRequest_type* Router__ScriptRouterRequest_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouterRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouterRequest_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Router__ScriptRouterRequest);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouterRequest_type);
    type = (::g::Fuse::Navigation::RouterRequest_type*)uClassType::New("Fuse.Navigation.Router.ScriptRouterRequest", options);
    type->fp_build_ = Router__ScriptRouterRequest_build;
    type->fp_ParseNode = (void(*)(::g::Fuse::Navigation::RouterRequest*, uObject*, ::g::Fuse::Node**))Router__ScriptRouterRequest__ParseNode_fn;
    return type;
}

// public ScriptRouterRequest(Fuse.Scripting.Context context) :211
void Router__ScriptRouterRequest__ctor_1_fn(Router__ScriptRouterRequest* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_1(context);
}

// public ScriptRouterRequest New(Fuse.Scripting.Context context) :211
void Router__ScriptRouterRequest__New2_fn(::g::Fuse::Scripting::Context* context, Router__ScriptRouterRequest** __retval)
{
    *__retval = Router__ScriptRouterRequest::New2(context);
}

// protected override sealed Fuse.Node ParseNode(object value) :217
void Router__ScriptRouterRequest__ParseNode_fn(Router__ScriptRouterRequest* __this, uObject* value, ::g::Fuse::Node** __retval)
{
    return *__retval = uAs< ::g::Fuse::Node*>(uPtr(__this->_context)->Wrap(value), ::TYPES[30/*Fuse.Node*/]), void();
}

// public ScriptRouterRequest(Fuse.Scripting.Context context) [instance] :211
void Router__ScriptRouterRequest::ctor_1(::g::Fuse::Scripting::Context* context)
{
    ctor_(1);
    _context = context;
}

// public ScriptRouterRequest New(Fuse.Scripting.Context context) [static] :211
Router__ScriptRouterRequest* Router__ScriptRouterRequest::New2(::g::Fuse::Scripting::Context* context)
{
    Router__ScriptRouterRequest* obj1 = (Router__ScriptRouterRequest*)uNew(Router__ScriptRouterRequest_typeof());
    obj1->ctor_1(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/SwipeNavigate.uno
// ---------------------------------------------------------------------

// internal enum SnapTo :43
uEnumType* SnapTo_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SnapTo", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 0LL,
        "Current", 1LL,
        "Backward", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationPageProxy.uno
// ---------------------------------------------------------------------------

// public delegate void NavigationPageProxy.StatusChangedHandler(Fuse.Navigation.NavigationPageProxy sender) :16
uDelegateType* NavigationPageProxy__StatusChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageProxy.StatusChangedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Navigation::NavigationPageProxy_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/StructuredNavigation.uno
// ----------------------------------------------------------------------------

// public interfacemodifiers class StructuredNavigation :13
// {
static void StructuredNavigation_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(StructuredNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(StructuredNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(StructuredNavigation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface5),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(StructuredNavigation_type, interface6),
        ::g::Fuse::IParentObserver_typeof(), offsetof(StructuredNavigation_type, interface7),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(StructuredNavigation_type, interface8),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(StructuredNavigation_type, interface9));
    type->SetFields(23,
        ::g::Fuse::Visual_typeof(), offsetof(StructuredNavigation, _active), 0,
        ::g::Uno::Bool_typeof(), offsetof(StructuredNavigation, _hasUpdated), 0,
        ::g::Fuse::Motion::MotionConfig_typeof(), offsetof(StructuredNavigation, _motion), 0,
        ::g::Uno::Float_typeof(), offsetof(StructuredNavigation, _prevProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(StructuredNavigation, _progress), 0,
        ::g::Uno::Bool_typeof(), offsetof(StructuredNavigation, _queueClearForwardHistory), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(StructuredNavigation, _region), 0,
        ::g::Uno::Bool_typeof(), offsetof(StructuredNavigation, _reuseExistingVisual), 0,
        ::g::Uno::Float_typeof(), offsetof(StructuredNavigation, _seekBase), 0,
        StructuredNavigation__NavigationStructure_typeof(), offsetof(StructuredNavigation, _Mode), 0);
}

StructuredNavigation_type* StructuredNavigation_typeof()
{
    static uSStrong<StructuredNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StructuredNavigation);
    options.TypeSize = sizeof(StructuredNavigation_type);
    type = (StructuredNavigation_type*)uClassType::New("Fuse.Navigation.StructuredNavigation", options);
    type->fp_build_ = StructuredNavigation_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))StructuredNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))StructuredNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoBack_fn;
    type->fp_GoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoForward_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))StructuredNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnUnrooted_fn;
    type->interface9.fp_BeginSeek = (void(*)(uObject*))StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface9.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface9.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface6.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->interface6.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))StructuredNavigation__Goto_fn;
    type->interface6.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface6.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface6.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface6.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface6.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface6.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface6.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface6.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface6.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface6.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface6.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface8.fp_GoForward = (void(*)(uObject*))StructuredNavigation__GoForward_fn;
    type->interface8.fp_GoBack = (void(*)(uObject*))StructuredNavigation__GoBack_fn;
    type->interface8.fp_get_CanGoBack = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->interface8.fp_get_CanGoForward = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->interface8.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface8.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface7.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface7.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface7.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
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

// public override sealed Fuse.Visual get_Active() :367
void StructuredNavigation__get_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :368
void StructuredNavigation__set_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual* value)
{
    __this->Goto(value, 0);
}

// private void AnimationDone() :351
void StructuredNavigation__AnimationDone_fn(StructuredNavigation* __this)
{
    __this->AnimationDone();
}

// private Fuse.Visual get_Back() :481
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Back();
}

// public override sealed bool get_CanGoBack() :275
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Back()), void();
}

// public override sealed bool get_CanGoForward() :267
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Front()), void();
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) :249
void StructuredNavigation__ChangeProgress_fn(StructuredNavigation* __this, float* prev, float* next, int* mode)
{
    __this->ChangeProgress(*prev, *next, *mode);
}

// private void CheckNeedUpdate([bool off]) :185
void StructuredNavigation__CheckNeedUpdate_fn(StructuredNavigation* __this, bool* off)
{
    __this->CheckNeedUpdate(*off);
}

// private int ClampProgress(int progress) :469
void StructuredNavigation__ClampProgress1_fn(StructuredNavigation* __this, int* progress, int* __retval)
{
    *__retval = __this->ClampProgress1(*progress);
}

// private void ClearForwardHistory() :451
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->ClearForwardHistory();
}

// private Fuse.Visual get_Front() :486
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Front();
}

// private void Fuse.Navigation.ISeekableNavigation.BeginSeek() :384
void StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn(StructuredNavigation* __this)
{
    __this->_seekBase = (float)__this->Progress();

    if (__this->_region != NULL)
    {
        __this->ResetRegionLimits();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()));
    }

    __this->OnStateChanged(1);
}

// private void Fuse.Navigation.ISeekableNavigation.EndSeek(Fuse.Navigation.EndSeekArgs args) :418
void StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args)
{
    ::g::Uno::Float2 ret4;

    if (!::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
        return;

    int targetIndex = 0;

    switch (uPtr(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = __this->ClampProgress1((int)::g::Uno::Math::Floor(__this->Progress()));
            break;
        }
        case 2:
        {
            targetIndex = __this->ClampProgress1((int)::g::Uno::Math::Ceil(__this->Progress()));
            break;
        }
        case 1:
        {
            double diff = __this->Progress() - ::g::Uno::Math::Floor(__this->Progress());
            targetIndex = __this->ClampProgress1((diff > 0.5) ? (int)::g::Uno::Math::Ceil(__this->Progress()) : (int)::g::Uno::Math::Floor(__this->Progress()));
            break;
        }
    }

    if (__this->_region != NULL)
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(uPtr(args)->Velocity(), 0.0f));

    if (!__this->TransitionToChild(__this->GetPage(targetIndex), false, true))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret4), ret4));
}

// private void Fuse.Navigation.ISeekableNavigation.Seek(Fuse.Navigation.UpdateSeekArgs args) :404
void StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    ::g::Uno::Float2 ret5;

    if (__this->_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Seek being called on an unrooted navigation"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/StructuredNavigation.uno"), 408, uString::Const("Fuse.Navigation.ISeekableNavigation.Seek"));
        return;
    }

    float prev = (float)__this->Progress();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(uPtr(args)->RelativeDelta(), 0.0f));
    __this->ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret5), ret5).X, 2);
    __this->CheckNeedUpdate(false);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :255
void StructuredNavigation__GetPageState_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    ::g::Fuse::Navigation::PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
        return *__retval = (collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection1.Progress = 0.0f, collection1.PreviousProgress = 0.0f, collection1), void();

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = ((float)__this->Progress() - (float)uPtr(pd)->Index);
    collection2.PreviousProgress = (__this->_prevProgress - (float)uPtr(pd)->Index);
    return *__retval = collection2, void();
}

// public override sealed void GoBack() :287
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this)
{
    if (__this->CanGoBack())
        __this->TransitionToChild(__this->Previous(), false, false);
}

// public override sealed void GoForward() :281
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this)
{
    if (__this->CanGoForward())
        __this->TransitionToChild(__this->Next(), false, false);
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :90
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    int mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    if (__this->Parent() == NULL)
    {
        __this->SetActive(element);
        return;
    }

    if (element == __this->_active)
        return;

    if (element == NULL)
        __this->SetActive(NULL);
    else
        __this->GotoImpl(element, mode_);
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :112
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    __this->GotoImpl(element, *mode);
}

// private int get_MaxIndex() :476
void StructuredNavigation__get_MaxIndex_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->MaxIndex();
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() :23
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) :23
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int* value)
{
    __this->Mode(*value);
}

// public Fuse.Motion.MotionConfig get_Motion() :34
void StructuredNavigation__get_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.MotionConfig value) :40
void StructuredNavigation__set_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig* value)
{
    __this->Motion(value);
}

// private Fuse.Visual get_Next() :496
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Next();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :314
void StructuredNavigation__OnChildAddedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[10/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active != NULL)
        __this->SetProgress((float)__this->GetPageIndex(__this->_active));

    if (__this->_active == NULL)
        __this->SetActive(v);

    __this->OnHistoryChanged();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :330
void StructuredNavigation__OnChildRemovedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[10/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active == child)
        __this->SetActive(NULL);

    __this->OnHistoryChanged();
    __this->ChangeProgress((float)__this->Progress(), (float)__this->Progress(), 1);
}

// protected override sealed void OnRooted() :50
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this)
{
    bool ret7;
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (((__this->_active != NULL) && (uPtr(__this->_active)->Parent() != NULL)) && (__this->Parent() != uPtr(__this->_active)->Parent()))
        __this->SetActive(NULL);

    if ((__this->_active != NULL) && !(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(__this->Parent())->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Node*/], NULL)), __this->_active, &ret7), ret7))
        __this->SetActive(NULL);

    if ((__this->PageCount() > 0) && (__this->_active == NULL))
        __this->SetActive(__this->GetPage(0));

    if (__this->_active != NULL)
        __this->GotoImpl(__this->_active, 1);

    __this->_region = uPtr(__this->Motion())->AcquireSimulation();
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(::g::Uno::Float2__New2(__this->_progress, 0.0f)));
}

// protected override sealed void OnUnrooted() :72
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this)
{
    ::g::Uno::Float2 ret8;

    if (__this->_region != NULL)
    {
        __this->_progress = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret8), ret8).X;
        __this->_region = NULL;
        uPtr(__this->Motion())->ReleaseSimulation();
    }

    __this->CheckNeedUpdate(true);
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// private void OnUpdated() :204
void StructuredNavigation__OnUpdated_fn(StructuredNavigation* __this)
{
    __this->OnUpdated();
}

// private Fuse.Visual get_Previous() :491
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Previous();
}

// public double get_Progress() :347
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void QueueClearForwardHistory() :150
void StructuredNavigation__QueueClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->QueueClearForwardHistory();
}

// private void ResetRegionLimits() :223
void StructuredNavigation__ResetRegionLimits_fn(StructuredNavigation* __this)
{
    __this->ResetRegionLimits();
}

// private void SetActive(Fuse.Visual page) :374
void StructuredNavigation__SetActive_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page)
{
    __this->SetActive(page);
}

// private void SetProgress(float value) :229
void StructuredNavigation__SetProgress_fn(StructuredNavigation* __this, float* value)
{
    __this->SetProgress(*value);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) :158
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, bool* bypass, bool* clamp, bool* __retval)
{
    *__retval = __this->TransitionToChild(element, *bypass, *clamp);
}

// private void AnimationDone() [instance] :351
void StructuredNavigation::AnimationDone()
{
    if (_queueClearForwardHistory)
    {
        ClearForwardHistory();
        _queueClearForwardHistory = false;
    }

    OnNavigated(_active);
    OnHistoryChanged();
    OnStateChanged(0);
}

// private Fuse.Visual get_Back() [instance] :481
::g::Fuse::Visual* StructuredNavigation::Back()
{
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(MaxIndex()) : NULL;
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) [instance] :249
void StructuredNavigation::ChangeProgress(float prev, float next, int mode)
{
    _prevProgress = prev;
    OnPageProgressChanged((double)next, (double)prev, mode);
}

// private void CheckNeedUpdate([bool off]) [instance] :185
void StructuredNavigation::CheckNeedUpdate(bool off)
{
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        AnimationDone();
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// private int ClampProgress(int progress) [instance] :469
int StructuredNavigation::ClampProgress1(int progress)
{
    return ::g::Uno::Math::Clamp8(progress, 0, MaxIndex());
}

// private void ClearForwardHistory() [instance] :451
void StructuredNavigation::ClearForwardHistory()
{
    bool ret3;

    if (HasPages() && (_active != Front()))
    {
        int target = GetPageIndex(_active);

        for (int i = target - 1; i >= 0; i--)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Node*/], NULL)), GetPage(i), &ret3);
    }

    OnHistoryChanged();
}

// private Fuse.Visual get_Front() [instance] :486
::g::Fuse::Visual* StructuredNavigation::Front()
{
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(0) : NULL;
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) [instance] :112
void StructuredNavigation::GotoImpl(::g::Fuse::Visual* element, int mode)
{
    bool ret6;

    if ((uPtr(element)->Parent() != NULL) && (uPtr(element)->Parent() != Parent()))
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Attempting to navigate to element with different parent"), element, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/StructuredNavigation.uno"), 117, uString::Const("GotoImpl"), NULL);
        SetActive(NULL);
        return;
    }

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Node*/], NULL)), element, &ret6), ret6))
    {
        if (Mode() == 1)
        {
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[30/*Fuse.Node*/], NULL)), uCRef<int>(0), element);
        }
        else
            return;
    }
    else if (!_reuseExistingVisual)
    {
        if (Mode() == 1)
        {
            double diff = Progress() - (double)GetPageIndex(_active);
            uPtr(Parent())->BeginRemoveChild(element, NULL);
            SetProgress((float)((double)GetPageIndex(_active) + diff));
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[30/*Fuse.Node*/], NULL)), uCRef<int>(0), element);
        }
    }

    TransitionToChild(element, (mode & 1) == 1, false);
    OnHistoryChanged();
}

// private int get_MaxIndex() [instance] :476
int StructuredNavigation::MaxIndex()
{
    return PageCount() - 1;
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() [instance] :23
int StructuredNavigation::Mode()
{
    return _Mode;
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) [instance] :23
void StructuredNavigation::Mode(int value)
{
    _Mode = value;
}

// public Fuse.Motion.MotionConfig get_Motion() [instance] :34
::g::Fuse::Motion::MotionConfig* StructuredNavigation::Motion()
{
    if (_motion == NULL)
        _motion = ::g::Fuse::Motion::NavigationMotion::New2();

    return _motion;
}

// public void set_Motion(Fuse.Motion.MotionConfig value) [instance] :40
void StructuredNavigation::Motion(::g::Fuse::Motion::MotionConfig* value)
{
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(uString::Const("Motion should not be changed post-rooting"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/StructuredNavigation.uno"), 44, uString::Const("set_Motion"), NULL);
}

// private Fuse.Visual get_Next() [instance] :496
::g::Fuse::Visual* StructuredNavigation::Next()
{
    return GetPage(GetPageIndex(_active) - 1);
}

// private void OnUpdated() [instance] :204
void StructuredNavigation::OnUpdated()
{
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;

    if (_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Updated called without a region"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/StructuredNavigation.uno"), 208, uString::Const("OnUpdated"));
        return;
    }

    float prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret9), ret9).X;
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()), ::g::Fuse::Time::FrameInterval());
    ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret10), ret10).X, 2);
    CheckNeedUpdate(true);
}

// private Fuse.Visual get_Previous() [instance] :491
::g::Fuse::Visual* StructuredNavigation::Previous()
{
    return GetPage(GetPageIndex(_active) + 1);
}

// public double get_Progress() [instance] :347
double StructuredNavigation::Progress()
{
    ::g::Uno::Float2 ret13;
    return (double)((_region == NULL) ? _progress : (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret13), ret13).X);
}

// public void QueueClearForwardHistory() [instance] :150
void StructuredNavigation::QueueClearForwardHistory()
{
    _queueClearForwardHistory = true;
}

// private void ResetRegionLimits() [instance] :223
void StructuredNavigation::ResetRegionLimits()
{
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2((float)MaxIndex(), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New1(0.0f));
}

// private void SetActive(Fuse.Visual page) [instance] :374
void StructuredNavigation::SetActive(::g::Fuse::Visual* page)
{
    if (page == _active)
        return;

    _active = page;
    OnActiveChanged(_active);
}

// private void SetProgress(float value) [instance] :229
void StructuredNavigation::SetProgress(float value)
{
    ::g::Uno::Float2 ret11;
    ::g::Uno::Float2 ret12;
    float prev;

    if (_region != NULL)
    {
        ResetRegionLimits();
        prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret11), ret11).X;
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(::g::Uno::Float2__New2(value, 0.0f)));
        value = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret12), ret12).X;
    }
    else
    {
        prev = _progress;
        _progress = value;
    }

    ChangeProgress(prev, value, 1);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) [instance] :158
bool StructuredNavigation::TransitionToChild(::g::Fuse::Visual* element, bool bypass, bool clamp)
{
    float targetProgress = (float)GetPageIndex(element);
    SetActive(element);

    if (bypass || !IsRootingCompleted())
    {
        SetProgress(targetProgress);
        OnNavigated(element);
        return false;
    }

    if (Progress() == (double)targetProgress)
    {
        OnStateChanged(0);
        return false;
    }

    OnStateChanged(2);
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(targetProgress, 0.0f));
    CheckNeedUpdate(false);
    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno
// -------------------------------------------------------------------

// private sealed class PageExpression.Subscription :31
// {
static void PageExpression__Subscription_build(uType* type)
{
    ::STRINGS[31] = uString::Const("Visual");
    ::STRINGS[32] = uString::Const("Node");
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[25] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[27] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[28] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[10] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof(),
        ::g::Fuse::Navigation::NavigationPageProperty_typeof(),
        ::g::Fuse::Resources::ResourceRegistry_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PageExpression__Subscription_type, interface0),
        ::g::Fuse::Navigation::IPageResourceBinding_typeof(), offsetof(PageExpression__Subscription_type, interface1));
    type->SetFields(0,
        ::TYPES[10/*Fuse.Visual*/], offsetof(PageExpression__Subscription, _currentPage), 0,
        ::TYPES[25/*Fuse.Reactive.IListener*/], offsetof(PageExpression__Subscription, _listener), 0,
        ::TYPES[0/*Fuse.Navigation.INavigation*/], offsetof(PageExpression__Subscription, _nav), 0,
        ::g::Fuse::Node_typeof(), offsetof(PageExpression__Subscription, _node), 0,
        ::g::Fuse::Navigation::PageExpression_typeof(), offsetof(PageExpression__Subscription, _pe), 0);
}

PageExpression__Subscription_type* PageExpression__Subscription_typeof()
{
    static uSStrong<PageExpression__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(PageExpression__Subscription);
    options.TypeSize = sizeof(PageExpression__Subscription_type);
    type = (PageExpression__Subscription_type*)uClassType::New("Fuse.Navigation.PageExpression.Subscription", options);
    type->fp_build_ = PageExpression__Subscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PageExpression__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Navigation.PageExpression pe, Fuse.Node node, Fuse.Reactive.IListener listener) :39
void PageExpression__Subscription__ctor__fn(PageExpression__Subscription* __this, ::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener)
{
    __this->ctor_(pe, node, listener);
}

// private bool Acceptor(object obj) :151
void PageExpression__Subscription__Acceptor_fn(PageExpression__Subscription* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public void Dispose() :80
void PageExpression__Subscription__Dispose_fn(PageExpression__Subscription* __this)
{
    __this->Dispose();
}

// private void GotoPage(Fuse.Visual page) :120
void PageExpression__Subscription__GotoPage_fn(PageExpression__Subscription* __this, ::g::Fuse::Visual* page)
{
    __this->GotoPage(page);
}

// private object get_LocalObject() :91
void PageExpression__Subscription__get_LocalObject_fn(PageExpression__Subscription* __this, uObject** __retval)
{
    *__retval = __this->LocalObject();
}

// public Subscription New(Fuse.Navigation.PageExpression pe, Fuse.Node node, Fuse.Reactive.IListener listener) :39
void PageExpression__Subscription__New1_fn(::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener, PageExpression__Subscription** __retval)
{
    *__retval = PageExpression__Subscription::New1(pe, node, listener);
}

// private void OnChanged() :129
void PageExpression__Subscription__OnChanged_fn(PageExpression__Subscription* __this)
{
    __this->OnChanged();
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) :115
void PageExpression__Subscription__OnNavigated_fn(PageExpression__Subscription* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    __this->OnNavigated(s, args);
}

// private void ReleaseCurrent() :70
void PageExpression__Subscription__ReleaseCurrent_fn(PageExpression__Subscription* __this)
{
    __this->ReleaseCurrent();
}

// public void UpdateSource() :49
void PageExpression__Subscription__UpdateSource_fn(PageExpression__Subscription* __this)
{
    __this->UpdateSource();
}

// public Subscription(Fuse.Navigation.PageExpression pe, Fuse.Node node, Fuse.Reactive.IListener listener) [instance] :39
void PageExpression__Subscription::ctor_(::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener)
{
    _pe = pe;
    _node = node;
    _listener = listener;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(uPtr(_pe)->Key(), uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)PageExpression__Subscription__OnChanged_fn, this));
    ::g::Uno::Collections::List__Add_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings_), (uObject*)this);
    UpdateSource();
}

// private bool Acceptor(object obj) [instance] :151
bool PageExpression__Subscription::Acceptor(uObject* obj)
{
    return true;
}

// public void Dispose() [instance] :80
void PageExpression__Subscription::Dispose()
{
    bool ret2;
    ReleaseCurrent();
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings_), (uObject*)this, &ret2);
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(uPtr(_pe)->Key(), uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)PageExpression__Subscription__OnChanged_fn, this));
    _listener = NULL;
    _node = NULL;
}

// private void GotoPage(Fuse.Visual page) [instance] :120
void PageExpression__Subscription::GotoPage(::g::Fuse::Visual* page)
{
    if (page == _currentPage)
        return;

    _currentPage = page;
    OnChanged();
}

// private object get_LocalObject() [instance] :91
uObject* PageExpression__Subscription::LocalObject()
{
    ::g::Fuse::Node* n = _node;

    while (n != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[10/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* page = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (page != NULL)
                return page;

            uObject* navi = ::g::Fuse::Navigation::Navigation::GetLocalNavigation(v);

            if (navi != NULL)
                return navi;
        }

        n = uPtr(n)->ContextParent();
    }

    return NULL;
}

// private void OnChanged() [instance] :129
void PageExpression__Subscription::OnChanged()
{
    uObject* listener = _listener;

    if (listener == NULL)
        return;

    ::g::Fuse::Visual* page = _currentPage;

    if (page != NULL)
    {
        if (::g::Uno::String::op_Equality(uPtr(_pe)->Key(), ::STRINGS[31/*"Visual"*/]) || ::g::Uno::String::op_Equality(uPtr(_pe)->Key(), ::STRINGS[32/*"Node"*/]))
            ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[25/*Fuse.Reactive.IListener*/]), (uObject*)_pe, page);
        else
        {
            uObject* resource;

            if (uPtr(page)->TryGetResource(uPtr(_pe)->Key(), uDelegate::New(::TYPES[27/*Uno.Predicate<object>*/], (void*)PageExpression__Subscription__Acceptor_fn, this), &resource))
                ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[25/*Fuse.Reactive.IListener*/]), (uObject*)_pe, resource);
        }
    }
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) [instance] :115
void PageExpression__Subscription::OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    GotoPage(uPtr(args)->NewVisual());
}

// private void ReleaseCurrent() [instance] :70
void PageExpression__Subscription::ReleaseCurrent()
{
    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_Navigated(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[28/*Fuse.Navigation.NavigatedHandler*/], (void*)PageExpression__Subscription__OnNavigated_fn, this));
        _nav = NULL;
    }

    _currentPage = NULL;
}

// public void UpdateSource() [instance] :49
void PageExpression__Subscription::UpdateSource()
{
    uObject* local = LocalObject();

    if ((local == _nav) || (local == _currentPage))
        return;

    ReleaseCurrent();
    _nav = uAs<uObject*>(local, ::TYPES[0/*Fuse.Navigation.INavigation*/]);
    _currentPage = uAs< ::g::Fuse::Visual*>(local, ::TYPES[10/*Fuse.Visual*/]);

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::add_Navigated(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[28/*Fuse.Navigation.NavigatedHandler*/], (void*)PageExpression__Subscription__OnNavigated_fn, this));
        GotoPage(::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/])));
    }
    else
        OnChanged();
}

// public Subscription New(Fuse.Navigation.PageExpression pe, Fuse.Node node, Fuse.Reactive.IListener listener) [static] :39
PageExpression__Subscription* PageExpression__Subscription::New1(::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener)
{
    PageExpression__Subscription* obj1 = (PageExpression__Subscription*)uNew(PageExpression__Subscription_typeof());
    obj1->ctor_(pe, node, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/FindRouter.uno
// ------------------------------------------------------------------

// private sealed class FindRouter.Subscription :37
// {
static void FindRouter__Subscription_build(uType* type)
{
    ::STRINGS[43] = uString::Const("unable to find a router");
    ::STRINGS[44] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/FindRouter.uno");
    ::STRINGS[45] = uString::Const(".ctor");
    ::TYPES[25] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FindRouter__Subscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Navigation::FindRouter_typeof(), offsetof(FindRouter__Subscription, _expr), 0,
        ::TYPES[25/*Fuse.Reactive.IListener*/], offsetof(FindRouter__Subscription, _listener), 0);
}

FindRouter__Subscription_type* FindRouter__Subscription_typeof()
{
    static uSStrong<FindRouter__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FindRouter__Subscription);
    options.TypeSize = sizeof(FindRouter__Subscription_type);
    type = (FindRouter__Subscription_type*)uClassType::New("Fuse.Navigation.FindRouter.Subscription", options);
    type->fp_build_ = FindRouter__Subscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))FindRouter__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Navigation.FindRouter expr, Fuse.Node origin, Fuse.Reactive.IListener listener) :42
void FindRouter__Subscription__ctor__fn(FindRouter__Subscription* __this, ::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener)
{
    __this->ctor_(expr, origin, listener);
}

// public void Dispose() :55
void FindRouter__Subscription__Dispose_fn(FindRouter__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Navigation.FindRouter expr, Fuse.Node origin, Fuse.Reactive.IListener listener) :42
void FindRouter__Subscription__New1_fn(::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener, FindRouter__Subscription** __retval)
{
    *__retval = FindRouter__Subscription::New1(expr, origin, listener);
}

// public Subscription(Fuse.Navigation.FindRouter expr, Fuse.Node origin, Fuse.Reactive.IListener listener) [instance] :42
void FindRouter__Subscription::ctor_(::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener)
{
    _expr = expr;
    _listener = listener;
    ::g::Fuse::Navigation::Router* router = ::g::Fuse::Navigation::Router::TryFindRouter(origin);

    if (router == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[43/*"unable to f...*/], this, ::STRINGS[44/*"/usr/local/...*/], 49, ::STRINGS[45/*".ctor"*/], NULL);
    else
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[25/*Fuse.Reactive.IListener*/]), (uObject*)_expr, router);
}

// public void Dispose() [instance] :55
void FindRouter__Subscription::Dispose()
{
    _expr = NULL;
    _listener = NULL;
}

// public Subscription New(Fuse.Navigation.FindRouter expr, Fuse.Node origin, Fuse.Reactive.IListener listener) [static] :42
FindRouter__Subscription* FindRouter__Subscription::New1(::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener)
{
    FindRouter__Subscription* obj1 = (FindRouter__Subscription*)uNew(FindRouter__Subscription_typeof());
    obj1->ctor_(expr, origin, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/SwipeNavigate.uno
// ---------------------------------------------------------------------

// public enum SwipeDirection :65
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Right", 0LL,
        "Left", 1LL,
        "Down", 2LL,
        "Up", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/SwipeNavigate.uno
// ---------------------------------------------------------------------

// public sealed class SwipeNavigate :89
// {
// static generated SwipeNavigate() :89
static void SwipeNavigate__cctor_1_fn(uType* __type)
{
    SwipeNavigate::elasticDecay_ = 0.015f;
    SwipeNavigate::elasticScale_ = 0.4f;
}

static void SwipeNavigate_build(uType* type)
{
    ::STRINGS[46] = uString::Const("SwipeNavigate: failed to find suitable Navigation object");
    ::STRINGS[47] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/SwipeNavigate.uno");
    ::STRINGS[48] = uString::Const("Fuse.Input.IGesture.OnPointerPressed");
    ::TYPES[31] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[32] = ::g::Fuse::Navigation::ISeekableNavigation_typeof();
    ::TYPES[30] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Fuse::Elements::Element_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Input::Gesture_typeof(),
        ::g::Fuse::Input::Gestures_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeNavigate_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipeNavigate_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(SwipeNavigate_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(SwipeNavigate_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeNavigate_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeNavigate_type, interface5),
        ::g::Fuse::Input::IGesture_typeof(), offsetof(SwipeNavigate_type, interface6));
    type->SetFields(15,
        ::g::Uno::Float2_typeof(), offsetof(SwipeNavigate, _currentCoord), 0,
        ::TYPES[32/*Fuse.Navigation.ISeekableNavigation*/], offsetof(SwipeNavigate, _currentNavigation), 0,
        ::g::Fuse::Navigation::SwipeDirection_typeof(), offsetof(SwipeNavigate, _forwardDirection), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(SwipeNavigate, _gesture), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeNavigate, _hasMaxPages), 0,
        ::TYPES[5/*Fuse.Elements.Element*/], offsetof(SwipeNavigate, _lengthNode), 0,
        ::g::Uno::Float_typeof(), offsetof(SwipeNavigate, _maxPages), 0,
        ::g::Uno::Float_typeof(), offsetof(SwipeNavigate, _prevDistance), 0,
        ::g::Uno::Float2_typeof(), offsetof(SwipeNavigate, _startCoord), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeNavigate, _startedSeek), 0,
        ::g::Uno::Double_typeof(), offsetof(SwipeNavigate, _startTime), 0,
        ::g::Fuse::Navigation::AllowedNavigationDirections_typeof(), offsetof(SwipeNavigate, _swipeAllow), 0,
        ::TYPES[31/*Fuse.Motion.Simulation.PointerVelocity<float2>*/], offsetof(SwipeNavigate, _velocity), 0,
        ::g::Uno::Float_typeof(), offsetof(SwipeNavigate, _VelocityThreshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&SwipeNavigate::elasticDecay_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&SwipeNavigate::elasticScale_, uFieldFlagsStatic);
}

SwipeNavigate_type* SwipeNavigate_typeof()
{
    static uSStrong<SwipeNavigate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 7;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(SwipeNavigate);
    options.TypeSize = sizeof(SwipeNavigate_type);
    type = (SwipeNavigate_type*)uClassType::New("Fuse.Navigation.SwipeNavigate", options);
    type->fp_build_ = SwipeNavigate_build;
    type->fp_ctor_ = (void*)SwipeNavigate__New2_fn;
    type->fp_cctor_ = SwipeNavigate__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnUnrooted_fn;
    type->interface6.fp_OnLostCapture = (void(*)(uObject*, bool*))SwipeNavigate__FuseInputIGestureOnLostCapture_fn;
    type->interface6.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int*))SwipeNavigate__FuseInputIGestureOnPointerPressed_fn;
    type->interface6.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int*, int*))SwipeNavigate__FuseInputIGestureOnCaptureChanged_fn;
    type->interface6.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int*))SwipeNavigate__FuseInputIGestureOnPointerMoved_fn;
    type->interface6.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int*))SwipeNavigate__FuseInputIGestureOnPointerReleased_fn;
    type->interface6.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))SwipeNavigate__FuseInputIGestureget_Priority_fn;
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

// public SwipeNavigate() :196
void SwipeNavigate__ctor_3_fn(SwipeNavigate* __this)
{
    __this->ctor_3();
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() :327
void SwipeNavigate__get_AllowedDirections_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->AllowedDirections();
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) :328
void SwipeNavigate__set_AllowedDirections_fn(SwipeNavigate* __this, int* value)
{
    __this->AllowedDirections(*value);
}

// private Fuse.Navigation.SnapTo DetermineSnap() :387
void SwipeNavigate__DetermineSnap_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->DetermineSnap();
}

// private float2 get_Direction() :188
void SwipeNavigate__get_Direction_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Direction();
}

// private float2 get_Distance() :296
void SwipeNavigate__get_Distance_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Distance();
}

// private double get_ElapsedTime() :301
void SwipeNavigate__get_ElapsedTime_fn(SwipeNavigate* __this, double* __retval)
{
    *__retval = __this->ElapsedTime();
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() :124
void SwipeNavigate__get_ForwardDirection_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->ForwardDirection();
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) :125
void SwipeNavigate__set_ForwardDirection_fn(SwipeNavigate* __this, int* value)
{
    __this->ForwardDirection(*value);
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev) :237
void SwipeNavigate__FuseInputIGestureOnCaptureChanged_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerEventArgs* args, int* how, int* prev)
{
    int how_ = *how;
    int prev_ = *prev;
    __this->_startCoord = (__this->_currentCoord = uPtr(args)->WindowPoint());
    __this->_prevDistance = 0.0f;
    __this->_startTime = ::g::Fuse::Time::FrameTime();

    if (((how_ & 2) == 2) && !((prev_ & 2) == 2))
    {
        ::g::Fuse::Navigation::ISeekableNavigation::BeginSeek(uInterface(uPtr(__this->_currentNavigation), ::TYPES[32/*Fuse.Navigation.ISeekableNavigation*/]));
        __this->_startedSeek = true;
    }
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced) :201
void SwipeNavigate__FuseInputIGestureOnLostCapture_fn(SwipeNavigate* __this, bool* forced)
{
    if (__this->_currentNavigation != NULL)
    {
        if (uPtr(uAs< ::g::Fuse::Node*>(__this->_currentNavigation, ::TYPES[30/*Fuse.Node*/]))->IsRootingCompleted() && __this->_startedSeek)
            ::g::Fuse::Navigation::ISeekableNavigation::EndSeek(uInterface(uPtr(__this->_currentNavigation), ::TYPES[32/*Fuse.Navigation.ISeekableNavigation*/]), ::g::Fuse::Navigation::EndSeekArgs::New1(1, 0.0f));

        __this->_currentNavigation = NULL;
    }

    __this->_startedSeek = false;
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args) :251
void SwipeNavigate__FuseInputIGestureOnPointerMoved_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerMovedArgs* args, int* __retval)
{
    if (__this->_currentNavigation == NULL)
        return *__retval = 2, void();

    __this->_currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(__this->_velocity), uCRef(__this->_currentCoord), uCRef(args->Timestamp()), uCRef<int>(uPtr(__this->_gesture)->IsHardCapture() ? 0 : 1));

    if (uPtr(__this->_gesture)->IsHardCapture())
        ::g::Fuse::Navigation::ISeekableNavigation::Seek(uInterface(uPtr(__this->_currentNavigation), ::TYPES[32/*Fuse.Navigation.ISeekableNavigation*/]), __this->GetNavigationArgs());

    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args) :223
void SwipeNavigate__FuseInputIGestureOnPointerPressed_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerPressedArgs* args, int* __retval)
{
    __this->_startCoord = (__this->_currentCoord = uPtr(args)->WindowPoint());
    __this->_currentNavigation = __this->Navigation();
    ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(__this->_velocity), uCRef(__this->_startCoord), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(args->Timestamp()));

    if (__this->_currentNavigation == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[46/*"SwipeNaviga...*/], __this, ::STRINGS[47/*"/usr/local/...*/], 230, ::STRINGS[48/*"Fuse.Input....*/]);
        return *__retval = 0, void();
    }

    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :266
void SwipeNavigate__FuseInputIGestureOnPointerReleased_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int* __retval)
{
    __this->_currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(__this->_velocity), uCRef(__this->_currentCoord), uCRef(args->Timestamp()), uCRef<int>(2));

    if (uPtr(__this->_gesture)->IsHardCapture() && (__this->_currentNavigation != NULL))
    {
        ::g::Fuse::Navigation::ISeekableNavigation::EndSeek(uInterface(uPtr(__this->_currentNavigation), ::TYPES[32/*Fuse.Navigation.ISeekableNavigation*/]), ::g::Fuse::Navigation::EndSeekArgs::New1(__this->DetermineSnap(), __this->ProgressVelocity()));
        __this->_currentNavigation = NULL;
    }

    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority() :215
void SwipeNavigate__FuseInputIGestureget_Priority_fn(SwipeNavigate* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(__this->_currentCoord, __this->_startCoord);
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1(1, ::g::Fuse::Input::Gesture::VectorSignificance(__this->Direction(), diff), 0), void();
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() :331
void SwipeNavigate__GetNavigationArgs_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::UpdateSeekArgs** __retval)
{
    *__retval = __this->GetNavigationArgs();
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) :138
void SwipeNavigate__Invert_fn(SwipeNavigate* __this, int* sd, int* __retval)
{
    *__retval = __this->Invert(*sd);
}

// private bool get_IsHorizontal() :181
void SwipeNavigate__get_IsHorizontal_fn(SwipeNavigate* __this, bool* __retval)
{
    *__retval = __this->IsHorizontal();
}

// private Fuse.Navigation.ISeekableNavigation get_Navigation() :93
void SwipeNavigate__get_Navigation_fn(SwipeNavigate* __this, uObject** __retval)
{
    *__retval = __this->Navigation();
}

// public SwipeNavigate New() :196
void SwipeNavigate__New2_fn(SwipeNavigate** __retval)
{
    *__retval = SwipeNavigate::New2();
}

// protected override sealed void OnRooted() :103
void SwipeNavigate__OnRooted_fn(SwipeNavigate* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_gesture = ::g::Fuse::Input::Gestures::Add((uObject*)__this, __this->Parent(), 1);
}

// protected override sealed void OnUnrooted() :110
void SwipeNavigate__OnUnrooted_fn(SwipeNavigate* __this)
{
    uPtr(__this->_gesture)->Dispose();
    __this->_gesture = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private float get_ProgressVelocity() :306
void SwipeNavigate__get_ProgressVelocity_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->ProgressVelocity();
}

// private float2 get_Scale() :283
void SwipeNavigate__get_Scale_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Scale();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() :134
void SwipeNavigate__get_SwipeDirection_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->SwipeDirection();
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) :135
void SwipeNavigate__set_SwipeDirection_fn(SwipeNavigate* __this, int* value)
{
    __this->SwipeDirection(*value);
}

// public generated float get_VelocityThreshold() :150
void SwipeNavigate__get_VelocityThreshold_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->VelocityThreshold();
}

// public generated void set_VelocityThreshold(float value) :150
void SwipeNavigate__set_VelocityThreshold_fn(SwipeNavigate* __this, float* value)
{
    __this->VelocityThreshold(*value);
}

float SwipeNavigate::elasticDecay_;
float SwipeNavigate::elasticScale_;

// public SwipeNavigate() [instance] :196
void SwipeNavigate::ctor_3()
{
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[31/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _forwardDirection = 1;
    _swipeAllow = 3;
    ctor_2();
    VelocityThreshold(300.0f);
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() [instance] :327
int SwipeNavigate::AllowedDirections()
{
    return _swipeAllow;
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) [instance] :328
void SwipeNavigate::AllowedDirections(int value)
{
    _swipeAllow = value;
}

// private Fuse.Navigation.SnapTo DetermineSnap() [instance] :387
int SwipeNavigate::DetermineSnap()
{
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    float diff = IsHorizontal() ? (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret2), ret2).X : (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3).Y;

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        diff = -diff;

    int q = 1;

    if ((diff < -VelocityThreshold()) && ((AllowedDirections() & 1) == 1))
        q = 0;

    if ((diff > VelocityThreshold()) && ((AllowedDirections() & 2) == 2))
        q = 2;

    return q;
}

// private float2 get_Direction() [instance] :188
::g::Uno::Float2 SwipeNavigate::Direction()
{
    return IsHorizontal() ? ::g::Uno::Float2__New2(1.0f, 0.0f) : ::g::Uno::Float2__New2(0.0f, 1.0f);
}

// private float2 get_Distance() [instance] :296
::g::Uno::Float2 SwipeNavigate::Distance()
{
    return ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
}

// private double get_ElapsedTime() [instance] :301
double SwipeNavigate::ElapsedTime()
{
    return ::g::Fuse::Time::FrameTime() - _startTime;
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() [instance] :124
int SwipeNavigate::ForwardDirection()
{
    return _forwardDirection;
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) [instance] :125
void SwipeNavigate::ForwardDirection(int value)
{
    _forwardDirection = value;
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() [instance] :331
::g::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate::GetNavigationArgs()
{
    float distance, scale;

    if (IsHorizontal())
    {
        distance = Distance().X;
        scale = Scale().X;
    }
    else
    {
        distance = Distance().Y;
        scale = Scale().Y;
    }

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        distance = -distance;

    float rel = distance / scale;

    if (!((AllowedDirections() & 2) == 2))
        rel = ::g::Uno::Math::Min1(0.0f, rel);

    if (!((AllowedDirections() & 1) == 1))
        rel = ::g::Uno::Math::Max1(0.0f, rel);

    if (_hasMaxPages)
        rel = ::g::Uno::Math::Clamp1(rel, -_maxPages, _maxPages);

    float clampDistance = rel * scale;
    float delta = clampDistance - _prevDistance;
    _prevDistance = clampDistance;
    return ::g::Fuse::Navigation::UpdateSeekArgs::New1(delta, clampDistance, scale, ElapsedTime());
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) [instance] :138
int SwipeNavigate::Invert(int sd)
{
    switch (sd)
    {
        case 1:
            return 0;
        case 0:
            return 1;
        case 3:
            return 2;
        case 2:
            return 3;
    }

    return 1;
}

// private bool get_IsHorizontal() [instance] :181
bool SwipeNavigate::IsHorizontal()
{
    return (ForwardDirection() == 1) || (ForwardDirection() == 0);
}

// private Fuse.Navigation.ISeekableNavigation get_Navigation() [instance] :93
uObject* SwipeNavigate::Navigation()
{
    return uAs<uObject*>(::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(ContextParent()), ::TYPES[32/*Fuse.Navigation.ISeekableNavigation*/]);
}

// private float get_ProgressVelocity() [instance] :306
float SwipeNavigate::ProgressVelocity()
{
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;

    switch (SwipeDirection())
    {
        case 1:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret4), ret4).X / Scale().X;
        case 0:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret5), ret5).X / Scale().X;
        case 3:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret6), ret6).Y / Scale().Y;
        case 2:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret7), ret7).Y / Scale().Y;
    }

    return 0.0f;
}

// private float2 get_Scale() [instance] :283
::g::Uno::Float2 SwipeNavigate::Scale()
{
    if (_lengthNode != NULL)
        return uPtr(_lengthNode)->ActualSize();

    ::g::Fuse::Elements::Element* e = uAs< ::g::Fuse::Elements::Element*>(Parent(), ::TYPES[5/*Fuse.Elements.Element*/]);

    if (e == NULL)
        return ::g::Uno::Float2__New1(1.0f);

    return uPtr(e)->ActualSize();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() [instance] :134
int SwipeNavigate::SwipeDirection()
{
    return Invert(ForwardDirection());
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) [instance] :135
void SwipeNavigate::SwipeDirection(int value)
{
    ForwardDirection(Invert(value));
}

// public generated float get_VelocityThreshold() [instance] :150
float SwipeNavigate::VelocityThreshold()
{
    return _VelocityThreshold;
}

// public generated void set_VelocityThreshold(float value) [instance] :150
void SwipeNavigate::VelocityThreshold(float value)
{
    _VelocityThreshold = value;
}

// public SwipeNavigate New() [static] :196
SwipeNavigate* SwipeNavigate::New2()
{
    SwipeNavigate* obj1 = (SwipeNavigate*)uNew(SwipeNavigate_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/SwipeNavigate.uno
// ---------------------------------------------------------------------

// internal sealed class UpdateSeekArgs :12
// {
static void UpdateSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(UpdateSeekArgs, _scale), 0,
        ::g::Uno::Double_typeof(), offsetof(UpdateSeekArgs, _time), 0,
        ::g::Uno::Float_typeof(), offsetof(UpdateSeekArgs, _Delta), 0,
        ::g::Uno::Float_typeof(), offsetof(UpdateSeekArgs, _Distance), 0);
}

uType* UpdateSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UpdateSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.UpdateSeekArgs", options);
    type->fp_build_ = UpdateSeekArgs_build;
    return type;
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) :30
void UpdateSeekArgs__ctor__fn(UpdateSeekArgs* __this, float* delta, float* distance, float* scale, double* time)
{
    __this->ctor_(*delta, *distance, *scale, *time);
}

// public generated float get_Delta() :14
void UpdateSeekArgs__get_Delta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Delta();
}

// private generated void set_Delta(float value) :14
void UpdateSeekArgs__set_Delta_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Delta(*value);
}

// public generated float get_Distance() :15
void UpdateSeekArgs__get_Distance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// private generated void set_Distance(float value) :15
void UpdateSeekArgs__set_Distance_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Distance(*value);
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) :30
void UpdateSeekArgs__New1_fn(float* delta, float* distance, float* scale, double* time, UpdateSeekArgs** __retval)
{
    *__retval = UpdateSeekArgs::New1(*delta, *distance, *scale, *time);
}

// public float get_RelativeDelta() :19
void UpdateSeekArgs__get_RelativeDelta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDelta();
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) [instance] :30
void UpdateSeekArgs::ctor_(float delta, float distance, float scale, double time)
{
    Delta(delta);
    Distance(distance);
    _scale = scale;
    _time = time;
}

// public generated float get_Delta() [instance] :14
float UpdateSeekArgs::Delta()
{
    return _Delta;
}

// private generated void set_Delta(float value) [instance] :14
void UpdateSeekArgs::Delta(float value)
{
    _Delta = value;
}

// public generated float get_Distance() [instance] :15
float UpdateSeekArgs::Distance()
{
    return _Distance;
}

// private generated void set_Distance(float value) [instance] :15
void UpdateSeekArgs::Distance(float value)
{
    _Distance = value;
}

// public float get_RelativeDelta() [instance] :19
float UpdateSeekArgs::RelativeDelta()
{
    return Delta() / _scale;
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) [static] :30
UpdateSeekArgs* UpdateSeekArgs::New1(float delta, float distance, float scale, double time)
{
    UpdateSeekArgs* obj1 = (UpdateSeekArgs*)uNew(UpdateSeekArgs_typeof());
    obj1->ctor_(delta, distance, scale, time);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/VisualNavigation.uno
// ------------------------------------------------------------------------

// public interfacemodifiers class VisualNavigation :11
// {
// static VisualNavigation() :13
static void VisualNavigation__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    VisualNavigation::ActiveIndexName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[49/*"ActiveIndex"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[34/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[35/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.VisualNavigation>*/], ::STRINGS[50/*"goto"*/], uDelegate::New(::TYPES[36/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.VisualNavigation, object[]>*/], (void*)VisualNavigation__gotoNode_fn), 2)));
}

static void VisualNavigation_build(uType* type)
{
    ::STRINGS[49] = uString::Const("ActiveIndex");
    ::STRINGS[50] = uString::Const("goto");
    ::STRINGS[51] = uString::Const("Navigation.goto() : Argument must be a node object");
    ::STRINGS[52] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/VisualNavigation.uno");
    ::STRINGS[53] = uString::Const("gotoNode");
    ::TYPES[33] = ::g::Uno::Type_typeof();
    ::TYPES[34] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[35] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[36] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[37] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Visual_typeof();
    ::TYPES[38] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL);
    ::TYPES[39] = ::TYPES[10/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::TYPES[10/*Fuse.Visual*/], NULL);
    ::TYPES[40] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::TYPES[10/*Fuse.Visual*/], NULL);
    ::TYPES[41] = ::g::Fuse::Navigation::ActivePageChangedHandler_typeof();
    ::TYPES[42] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[28] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[43] = ::g::Fuse::Navigation::NavigationPageCountHandler_typeof();
    ::TYPES[20] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[44] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof(),
        ::g::Fuse::Navigation::PageData_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(VisualNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(VisualNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(VisualNavigation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(VisualNavigation_type, interface6),
        ::g::Fuse::IParentObserver_typeof(), offsetof(VisualNavigation_type, interface7),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(VisualNavigation_type, interface8));
    type->SetFields(15,
        ::g::Fuse::Navigation::NavigationState_typeof(), offsetof(VisualNavigation, _navState), 0,
        ::TYPES[37/*Uno.Collections.List<Fuse.Navigation.PageData>*/], offsetof(VisualNavigation, _pages), 0,
        ::TYPES[41/*Fuse.Navigation.ActivePageChangedHandler*/], offsetof(VisualNavigation, ActivePageChanged1), 0,
        ::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/], offsetof(VisualNavigation, HistoryChanged1), 0,
        ::TYPES[28/*Fuse.Navigation.NavigatedHandler*/], offsetof(VisualNavigation, Navigated1), 0,
        ::TYPES[43/*Fuse.Navigation.NavigationPageCountHandler*/], offsetof(VisualNavigation, PageCountChanged1), 0,
        ::TYPES[20/*Fuse.Navigation.NavigationHandler*/], offsetof(VisualNavigation, PageProgressChanged1), 0,
        ::TYPES[44/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], offsetof(VisualNavigation, StateChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&VisualNavigation::ActiveIndexName_, uFieldFlagsStatic);
}

VisualNavigation_type* VisualNavigation_typeof()
{
    static uSStrong<VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 9;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(VisualNavigation);
    options.TypeSize = sizeof(VisualNavigation_type);
    type = (VisualNavigation_type*)uClassType::New("Fuse.Navigation.VisualNavigation", options);
    type->fp_build_ = VisualNavigation_build;
    type->fp_cctor_ = VisualNavigation__cctor_1_fn;
    type->fp_get_CanGoBack = VisualNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = VisualNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = VisualNavigation__GetPageState_fn;
    type->fp_GoBack = VisualNavigation__GoBack_fn;
    type->fp_GoForward = VisualNavigation__GoForward_fn;
    type->fp_OnChildAddedWhileRooted = VisualNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnUnrooted_fn;
    type->fp_Toggle = VisualNavigation__Toggle_fn;
    type->interface6.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))VisualNavigation__GetPageState_fn;
    type->interface6.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))VisualNavigation__Toggle_fn;
    type->interface6.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))VisualNavigation__get_ActivePage_fn;
    type->interface6.fp_get_State = (void(*)(uObject*, int*))VisualNavigation__get_State_fn;
    type->interface6.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_PageProgressChanged_fn;
    type->interface6.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_PageProgressChanged_fn;
    type->interface6.fp_add_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__add_Navigated_fn;
    type->interface6.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_Navigated_fn;
    type->interface6.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_ActivePageChanged_fn;
    type->interface6.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_ActivePageChanged_fn;
    type->interface6.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_StateChanged_fn;
    type->interface6.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_StateChanged_fn;
    type->interface7.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface7.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface7.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface8.fp_GoForward = (void(*)(uObject*))VisualNavigation__GoForward_fn;
    type->interface8.fp_GoBack = (void(*)(uObject*))VisualNavigation__GoBack_fn;
    type->interface8.fp_get_CanGoBack = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoBack_fn;
    type->interface8.fp_get_CanGoForward = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoForward_fn;
    type->interface8.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_HistoryChanged_fn;
    type->interface8.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_HistoryChanged_fn;
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

// internal VisualNavigation() :33
void VisualNavigation__ctor_3_fn(VisualNavigation* __this)
{
    __this->ctor_3();
}

// public Fuse.Visual get_ActivePage() :214
void VisualNavigation__get_ActivePage_fn(VisualNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->ActivePage();
}

// public generated void add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) :101
void VisualNavigation__add_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_ActivePageChanged(value);
}

// public generated void remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) :101
void VisualNavigation__remove_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_ActivePageChanged(value);
}

// public virtual bool get_CanGoBack() :125
void VisualNavigation__get_CanGoBack_fn(VisualNavigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual bool get_CanGoForward() :126
void VisualNavigation__get_CanGoForward_fn(VisualNavigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public Fuse.Visual GetPage(int index) :207
void VisualNavigation__GetPage_fn(VisualNavigation* __this, int* index, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->GetPage(*index);
}

// protected Fuse.Navigation.PageData GetPageData(Fuse.Visual page) :134
void VisualNavigation__GetPageData_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::PageData** __retval)
{
    *__retval = __this->GetPageData(page);
}

// protected int GetPageIndex(Fuse.Visual child) :221
void VisualNavigation__GetPageIndex_fn(VisualNavigation* __this, ::g::Fuse::Visual* child, int* __retval)
{
    *__retval = __this->GetPageIndex(child);
}

// public virtual Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :40
void VisualNavigation__GetPageState_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    ::g::Fuse::Navigation::PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
        return *__retval = (collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection1.Progress = 0.0f, collection1.PreviousProgress = 0.0f, collection1), void();

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = uPtr(pd)->Progress;
    collection2.PreviousProgress = uPtr(pd)->PreviousProgress;
    return *__retval = collection2, void();
}

// public virtual void GoBack() :124
void VisualNavigation__GoBack_fn(VisualNavigation* __this)
{
}

// public virtual void GoForward() :123
void VisualNavigation__GoForward_fn(VisualNavigation* __this)
{
}

// private static void gotoNode(Fuse.Scripting.Context c, Fuse.Navigation.VisualNavigation nav, object[] args) :26
void VisualNavigation__gotoNode_fn(::g::Fuse::Scripting::Context* c, VisualNavigation* nav, uArray* args)
{
    VisualNavigation::gotoNode(c, nav, args);
}

// protected bool get_HasPages() :218
void VisualNavigation__get_HasPages_fn(VisualNavigation* __this, bool* __retval)
{
    *__retval = __this->HasPages();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :115
void VisualNavigation__add_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :115
void VisualNavigation__remove_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) :87
void VisualNavigation__add_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_Navigated(value);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) :87
void VisualNavigation__remove_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_Navigated(value);
}

// protected void OnActiveChanged(Fuse.Visual newElement) :107
void VisualNavigation__OnActiveChanged_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement)
{
    __this->OnActiveChanged(newElement);
}

// public virtual void OnChildAddedWhileRooted(Fuse.Node child) :173
void VisualNavigation__OnChildAddedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[10/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    __this->UpdatePages();
}

// public void OnChildMovedWhileRooted(Fuse.Node child) :191
void VisualNavigation__OnChildMovedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    __this->OnChildMovedWhileRooted(child);
}

// public virtual void OnChildRemovedWhileRooted(Fuse.Node child) :182
void VisualNavigation__OnChildRemovedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[10/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    __this->UpdatePages();
}

// protected void OnHistoryChanged() :117
void VisualNavigation__OnHistoryChanged_fn(VisualNavigation* __this)
{
    __this->OnHistoryChanged();
}

// protected void OnNavigated(Fuse.Visual newElement) :92
void VisualNavigation__OnNavigated_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement)
{
    __this->OnNavigated(newElement);
}

// protected void OnPageCountChanged() :68
void VisualNavigation__OnPageCountChanged_fn(VisualNavigation* __this)
{
    __this->OnPageCountChanged();
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) :81
void VisualNavigation__OnPageProgressChanged_fn(VisualNavigation* __this, double* current, double* prev, int* mode)
{
    __this->OnPageProgressChanged(*current, *prev, *mode);
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) :76
void VisualNavigation__OnPageProgressChanged1_fn(VisualNavigation* __this, int* mode)
{
    __this->OnPageProgressChanged1(*mode);
}

// protected override void OnRooted() :142
void VisualNavigation__OnRooted_fn(VisualNavigation* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->UpdatePages();
}

// protected void OnStateChanged(Fuse.Navigation.NavigationState newState) :58
void VisualNavigation__OnStateChanged_fn(VisualNavigation* __this, int* newState)
{
    __this->OnStateChanged(*newState);
}

// protected override void OnUnrooted() :167
void VisualNavigation__OnUnrooted_fn(VisualNavigation* __this)
{
    uPtr(__this->_pages)->Clear();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public int get_PageCount() :204
void VisualNavigation__get_PageCount_fn(VisualNavigation* __this, int* __retval)
{
    *__retval = __this->PageCount();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :49
void VisualNavigation__add_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageCountChanged(value);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :49
void VisualNavigation__remove_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageCountChanged(value);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :74
void VisualNavigation__add_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageProgressChanged(value);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :74
void VisualNavigation__remove_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageProgressChanged(value);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.PageData> get_Pages() :132
void VisualNavigation__get_Pages_fn(VisualNavigation* __this, uObject** __retval)
{
    *__retval = __this->Pages();
}

// public Fuse.Navigation.NavigationState get_State() :54
void VisualNavigation__get_State_fn(VisualNavigation* __this, int* __retval)
{
    *__retval = __this->State();
}

// public generated void add_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) :56
void VisualNavigation__add_StateChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_StateChanged(value);
}

// public generated void remove_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) :56
void VisualNavigation__remove_StateChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_StateChanged(value);
}

// public virtual void Toggle(Fuse.Visual page) :37
void VisualNavigation__Toggle_fn(VisualNavigation* __this, ::g::Fuse::Visual* page)
{
}

// private void UpdatePages() :148
void VisualNavigation__UpdatePages_fn(VisualNavigation* __this)
{
    __this->UpdatePages();
}

::g::Uno::UX::Selector VisualNavigation::ActiveIndexName_;

// internal VisualNavigation() [instance] :33
void VisualNavigation::ctor_3()
{
    _pages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[37/*Uno.Collections.List<Fuse.Navigation.PageData>*/]));
    ctor_2();
}

// public Fuse.Visual get_ActivePage() [instance] :214
::g::Fuse::Visual* VisualNavigation::ActivePage()
{
    return Active();
}

// public generated void add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) [instance] :101
void VisualNavigation::add_ActivePageChanged(uDelegate* value)
{
    ActivePageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActivePageChanged1, value), ::TYPES[41/*Fuse.Navigation.ActivePageChangedHandler*/]);
}

// public generated void remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) [instance] :101
void VisualNavigation::remove_ActivePageChanged(uDelegate* value)
{
    ActivePageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActivePageChanged1, value), ::TYPES[41/*Fuse.Navigation.ActivePageChangedHandler*/]);
}

// public Fuse.Visual GetPage(int index) [instance] :207
::g::Fuse::Visual* VisualNavigation::GetPage(int index)
{
    ::g::Fuse::Navigation::PageData* ret3;

    if ((index < 0) || (index >= uPtr(_pages)->Count()))
        return NULL;

    return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_pages), uCRef<int>(index), &ret3), ret3))->Visual();
}

// protected Fuse.Navigation.PageData GetPageData(Fuse.Visual page) [instance] :134
::g::Fuse::Navigation::PageData* VisualNavigation::GetPageData(::g::Fuse::Visual* page)
{
    if (page == NULL)
        return NULL;

    return ::g::Fuse::Navigation::PageData::Get(page);
}

// protected int GetPageIndex(Fuse.Visual child) [instance] :221
int VisualNavigation::GetPageIndex(::g::Fuse::Visual* child)
{
    ::g::Fuse::Navigation::PageData* pd = GetPageData(child);

    if (pd == NULL)
        return -1;

    return uPtr(pd)->Index;
}

// protected bool get_HasPages() [instance] :218
bool VisualNavigation::HasPages()
{
    return uPtr(_pages)->Count() > 0;
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :115
void VisualNavigation::add_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :115
void VisualNavigation::remove_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :87
void VisualNavigation::add_Navigated(uDelegate* value)
{
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Navigated1, value), ::TYPES[28/*Fuse.Navigation.NavigatedHandler*/]);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :87
void VisualNavigation::remove_Navigated(uDelegate* value)
{
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Navigated1, value), ::TYPES[28/*Fuse.Navigation.NavigatedHandler*/]);
}

// protected void OnActiveChanged(Fuse.Visual newElement) [instance] :107
void VisualNavigation::OnActiveChanged(::g::Fuse::Visual* newElement)
{
    OnPropertyChanged(VisualNavigation::ActiveIndexName_);

    if (::g::Uno::Delegate::op_Inequality(ActivePageChanged1, NULL))
        uPtr(ActivePageChanged1)->Invoke(2, this, newElement);
}

// public void OnChildMovedWhileRooted(Fuse.Node child) [instance] :191
void VisualNavigation::OnChildMovedWhileRooted(::g::Fuse::Node* child)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[10/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    UpdatePages();
}

// protected void OnHistoryChanged() [instance] :117
void VisualNavigation::OnHistoryChanged()
{
    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);
}

// protected void OnNavigated(Fuse.Visual newElement) [instance] :92
void VisualNavigation::OnNavigated(::g::Fuse::Visual* newElement)
{
    uDelegate* handler = Navigated1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Fuse::Navigation::NavigatedArgs*)::g::Fuse::Navigation::NavigatedArgs::New2(newElement));
}

// protected void OnPageCountChanged() [instance] :68
void VisualNavigation::OnPageCountChanged()
{
    if (::g::Uno::Delegate::op_Inequality(PageCountChanged1, NULL))
        uPtr(PageCountChanged1)->InvokeVoid(this);
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) [instance] :81
void VisualNavigation::OnPageProgressChanged(double current, double prev, int mode)
{
    if (::g::Uno::Delegate::op_Inequality(PageProgressChanged1, NULL))
        uPtr(PageProgressChanged1)->Invoke(2, this, (::g::Fuse::Navigation::NavigationArgs*)::g::Fuse::Navigation::NavigationArgs::New2(current, prev, mode));
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) [instance] :76
void VisualNavigation::OnPageProgressChanged1(int mode)
{
    OnPageProgressChanged(0.0, 0.0, mode);
}

// protected void OnStateChanged(Fuse.Navigation.NavigationState newState) [instance] :58
void VisualNavigation::OnStateChanged(int newState)
{
    ::g::Uno::UX::ValueChangedArgs* ret4;

    if (newState == _navState)
        return;

    _navState = newState;

    if (::g::Uno::Delegate::op_Inequality(StateChanged1, NULL))
        uPtr(StateChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[38/*Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState>*/], uCRef<int>(newState), &ret4), ret4));
}

// public int get_PageCount() [instance] :204
int VisualNavigation::PageCount()
{
    return uPtr(_pages)->Count();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :49
void VisualNavigation::add_PageCountChanged(uDelegate* value)
{
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageCountChanged1, value), ::TYPES[43/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :49
void VisualNavigation::remove_PageCountChanged(uDelegate* value)
{
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageCountChanged1, value), ::TYPES[43/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :74
void VisualNavigation::add_PageProgressChanged(uDelegate* value)
{
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageProgressChanged1, value), ::TYPES[20/*Fuse.Navigation.NavigationHandler*/]);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :74
void VisualNavigation::remove_PageProgressChanged(uDelegate* value)
{
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageProgressChanged1, value), ::TYPES[20/*Fuse.Navigation.NavigationHandler*/]);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.PageData> get_Pages() [instance] :132
uObject* VisualNavigation::Pages()
{
    return (uObject*)_pages;
}

// public Fuse.Navigation.NavigationState get_State() [instance] :54
int VisualNavigation::State()
{
    return _navState;
}

// public generated void add_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) [instance] :56
void VisualNavigation::add_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StateChanged1, value), ::TYPES[44/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/]);
}

// public generated void remove_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) [instance] :56
void VisualNavigation::remove_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StateChanged1, value), ::TYPES[44/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/]);
}

// private void UpdatePages() [instance] :148
void VisualNavigation::UpdatePages()
{
    uPtr(_pages)->Clear();
    int c = 0;

    for (::g::Fuse::Visual* x = (::g::Fuse::Visual*)uPtr(Parent())->FirstChild(::TYPES[39/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); x != NULL; x = (::g::Fuse::Visual*)uPtr(x)->NextSibling(::TYPES[40/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!::g::Fuse::Navigation::Navigation::IsPage(x))
            continue;

        ::g::Fuse::Navigation::PageData* pd = ::g::Fuse::Navigation::PageData::GetOrCreate(x, true);
        uPtr(pd)->Index = c;
        ::g::Uno::Collections::List__Add_fn(uPtr(_pages), pd);
        c++;
    }

    OnPageCountChanged();
}

// private static void gotoNode(Fuse.Scripting.Context c, Fuse.Navigation.VisualNavigation nav, object[] args) [static] :26
void VisualNavigation::gotoNode(::g::Fuse::Scripting::Context* c, VisualNavigation* nav, uArray* args)
{
    VisualNavigation_typeof()->Init();
    ::g::Fuse::Visual* target = uAs< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[10/*Fuse.Visual*/]);

    if (target != NULL)
        uPtr(nav)->Goto(target, 0);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[51/*"Navigation....*/], nav, ::STRINGS[52/*"/usr/local/...*/], 30, ::STRINGS[53/*"gotoNode"*/], NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public sealed class WhileActive :137
// {
static void WhileActive_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface7));
    type->SetFields(42);
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileActive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileActive", options);
    type->fp_build_ = WhileActive_build;
    type->fp_ctor_ = (void*)WhileActive__New2_fn;
    type->fp_MapProgress = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, double*, double*))WhileActive__MapProgress_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileActive() :137
void WhileActive__ctor_7_fn(WhileActive* __this)
{
    __this->ctor_7();
}

// internal override sealed double MapProgress(double progress) :139
void WhileActive__MapProgress_fn(WhileActive* __this, double* progress, double* __retval)
{
    double progress_ = *progress;
    return *__retval = 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(progress_)), void();
}

// public generated WhileActive New() :137
void WhileActive__New2_fn(WhileActive** __retval)
{
    *__retval = WhileActive::New2();
}

// public generated WhileActive() [instance] :137
void WhileActive::ctor_7()
{
    ctor_6();
}

// public generated WhileActive New() [static] :137
WhileActive* WhileActive::New2()
{
    WhileActive* obj1 = (WhileActive*)uNew(WhileActive_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileCanGoBack.uno
// ----------------------------------------------------------------------

// public sealed class WhileCanGoBack :57
// {
static void WhileCanGoBack_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface7));
    type->SetFields(39);
}

::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileHistoryTrigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileCanGoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoBack", options);
    type->fp_build_ = WhileCanGoBack_build;
    type->fp_ctor_ = (void*)WhileCanGoBack__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoBack__get_IsOn_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileCanGoBack() :57
void WhileCanGoBack__ctor_7_fn(WhileCanGoBack* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsOn() :59
void WhileCanGoBack__get_IsOn_fn(WhileCanGoBack* __this, bool* __retval)
{
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(__this->_context), ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/])), void();
}

// public generated WhileCanGoBack New() :57
void WhileCanGoBack__New2_fn(WhileCanGoBack** __retval)
{
    *__retval = WhileCanGoBack::New2();
}

// public generated WhileCanGoBack() [instance] :57
void WhileCanGoBack::ctor_7()
{
    ctor_6();
}

// public generated WhileCanGoBack New() [static] :57
WhileCanGoBack* WhileCanGoBack::New2()
{
    WhileCanGoBack* obj1 = (WhileCanGoBack*)uNew(WhileCanGoBack_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileCanGoBack.uno
// ----------------------------------------------------------------------

// public sealed class WhileCanGoForward :71
// {
static void WhileCanGoForward_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface7));
    type->SetFields(39);
}

::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileHistoryTrigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileCanGoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoForward", options);
    type->fp_build_ = WhileCanGoForward_build;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoForward__get_IsOn_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected override sealed bool get_IsOn() :73
void WhileCanGoForward__get_IsOn_fn(WhileCanGoForward* __this, bool* __retval)
{
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(__this->_context), ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/])), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileCanGoBack.uno
// ----------------------------------------------------------------------

// public abstract class WhileHistoryTrigger :11
// {
static void WhileHistoryTrigger_build(uType* type)
{
    ::STRINGS[54] = uString::Const("WhileHistoryTrigger requires a Navigation context");
    ::STRINGS[55] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileCanGoBack.uno");
    ::STRINGS[10] = uString::Const("OnRooted");
    ::TYPES[12] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[42] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileHistoryTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileHistoryTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileHistoryTrigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileHistoryTrigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileHistoryTrigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileHistoryTrigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileHistoryTrigger_type, interface7));
    type->SetFields(37,
        ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/], offsetof(WhileHistoryTrigger, _context), 0,
        ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/], offsetof(WhileHistoryTrigger, _NavigationContext), 0);
}

WhileHistoryTrigger_type* WhileHistoryTrigger_typeof()
{
    static uSStrong<WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 8;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(WhileHistoryTrigger);
    options.TypeSize = sizeof(WhileHistoryTrigger_type);
    type = (WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileHistoryTrigger", options);
    type->fp_build_ = WhileHistoryTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileHistoryTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileHistoryTrigger__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// protected generated WhileHistoryTrigger() :11
void WhileHistoryTrigger__ctor_6_fn(WhileHistoryTrigger* __this)
{
    __this->ctor_6();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() :14
void WhileHistoryTrigger__get_NavigationContext_fn(WhileHistoryTrigger* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) :14
void WhileHistoryTrigger__set_NavigationContext_fn(WhileHistoryTrigger* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// private void OnHistoryChanged(object sender) :40
void WhileHistoryTrigger__OnHistoryChanged_fn(WhileHistoryTrigger* __this, uObject* sender)
{
    __this->OnHistoryChanged(sender);
}

// protected override sealed void OnRooted() :16
void WhileHistoryTrigger__OnRooted_fn(WhileHistoryTrigger* __this)
{
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_context = (ind1 = __this->NavigationContext(), ((ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(__this->Parent())));

    if (__this->_context == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[54/*"WhileHistor...*/], __this, ::STRINGS[55/*"/usr/local/...*/], 23, ::STRINGS[10/*"OnRooted"*/], NULL);
        return;
    }

    __this->SetActive(__this->IsOn());
    ::g::Fuse::Navigation::IBaseNavigation::add_HistoryChanged(uInterface(uPtr(__this->_context), ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/]), uDelegate::New(::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
}

// protected override sealed void OnUnrooted() :30
void WhileHistoryTrigger__OnUnrooted_fn(WhileHistoryTrigger* __this)
{
    if (__this->_context != NULL)
    {
        ::g::Fuse::Navigation::IBaseNavigation::remove_HistoryChanged(uInterface(uPtr(__this->_context), ::TYPES[12/*Fuse.Navigation.IBaseNavigation*/]), uDelegate::New(::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
        __this->_context = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated WhileHistoryTrigger() [instance] :11
void WhileHistoryTrigger::ctor_6()
{
    ctor_5();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() [instance] :14
uObject* WhileHistoryTrigger::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) [instance] :14
void WhileHistoryTrigger::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}

// private void OnHistoryChanged(object sender) [instance] :40
void WhileHistoryTrigger::OnHistoryChanged(uObject* sender)
{
    SetActive(IsOn());
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public sealed class WhileInactive :168
// {
static void WhileInactive_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface7));
    type->SetFields(42);
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileInactive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInactive", options);
    type->fp_build_ = WhileInactive_build;
    type->fp_MapProgress = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, double*, double*))WhileInactive__MapProgress_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// internal override sealed double MapProgress(double progress) :170
void WhileInactive__MapProgress_fn(WhileInactive* __this, double* progress, double* __retval)
{
    double progress_ = *progress;
    return *__retval = ::g::Uno::Math::Abs(progress_), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public sealed class WhileInEnterState :194
// {
static void WhileInEnterState_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface7));
    type->SetFields(42);
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileInEnterState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInEnterState", options);
    type->fp_build_ = WhileInEnterState_build;
    type->fp_MapProgress = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, double*, double*))WhileInEnterState__MapProgress_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// internal override sealed double MapProgress(double progress) :196
void WhileInEnterState__MapProgress_fn(WhileInEnterState* __this, double* progress, double* __retval)
{
    double progress_ = *progress;
    return *__retval = progress_, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public sealed class WhileInExitState :181
// {
static void WhileInExitState_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface7));
    type->SetFields(42);
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileInExitState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInExitState", options);
    type->fp_build_ = WhileInExitState_build;
    type->fp_MapProgress = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, double*, double*))WhileInExitState__MapProgress_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// internal override sealed double MapProgress(double progress) :183
void WhileInExitState__MapProgress_fn(WhileInExitState* __this, double* progress, double* __retval)
{
    double progress_ = *progress;
    return *__retval = -progress_, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileNavigating.uno
// -----------------------------------------------------------------------

// public class WhileNavigating :31
// {
static void WhileNavigating_build(uType* type)
{
    ::STRINGS[56] = uString::Const("WhileNavigating requires a Navigation context");
    ::STRINGS[57] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileNavigating.uno");
    ::STRINGS[10] = uString::Const("OnRooted");
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[44] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(37,
        ::TYPES[0/*Fuse.Navigation.INavigation*/], offsetof(WhileNavigating, _context), 0);
}

::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 8;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(WhileNavigating);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Navigation.WhileNavigating", options);
    type->fp_build_ = WhileNavigating_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileNavigating() :31
void WhileNavigating__ctor_6_fn(WhileNavigating* __this)
{
    __this->ctor_6();
}

// protected override sealed void OnRooted() :35
void WhileNavigating__OnRooted_fn(WhileNavigating* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_context = ::g::Fuse::Navigation::Navigation::TryFind(__this->Parent());

    if (__this->_context == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[56/*"WhileNaviga...*/], __this, ::STRINGS[57/*"/usr/local/...*/], 41, ::STRINGS[10/*"OnRooted"*/], NULL);
        return;
    }

    ::g::Fuse::Navigation::INavigation::add_StateChanged(uInterface(uPtr(__this->_context), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[44/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)WhileNavigating__OnStateChanged_fn, __this));
    __this->SetActive(::g::Fuse::Navigation::INavigation::State(uInterface(uPtr(__this->_context), ::TYPES[0/*Fuse.Navigation.INavigation*/])) != 0);
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> args) :59
void WhileNavigating__OnStateChanged_fn(WhileNavigating* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnStateChanged(s, args);
}

// protected override sealed void OnUnrooted() :49
void WhileNavigating__OnUnrooted_fn(WhileNavigating* __this)
{
    if (__this->_context != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_StateChanged(uInterface(uPtr(__this->_context), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[44/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)WhileNavigating__OnStateChanged_fn, __this));
        __this->_context = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileNavigating() [instance] :31
void WhileNavigating::ctor_6()
{
    ctor_5();
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> args) [instance] :59
void WhileNavigating::OnStateChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    int ret2;
    SetActive((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2) != 0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public abstract class WhileNavigationTrigger :22
// {
static void WhileNavigationTrigger_build(uType* type)
{
    ::TYPES[45] = ::g::Fuse::Navigation::RoutePageProxy__ProgressUpdated_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileNavigationTrigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileNavigationTrigger_type, interface7));
    type->SetFields(37,
        ::g::Uno::Bool_typeof(), offsetof(WhileNavigationTrigger, _hasLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(WhileNavigationTrigger, _limit), 0,
        ::g::Fuse::Navigation::RoutePagePath_typeof(), offsetof(WhileNavigationTrigger, _path), 0,
        ::g::Fuse::Navigation::RoutePageProxy_typeof(), offsetof(WhileNavigationTrigger, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(WhileNavigationTrigger, _threshold), 0);
}

WhileNavigationTrigger_type* WhileNavigationTrigger_typeof()
{
    static uSStrong<WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WhileNavigationTrigger);
    options.TypeSize = sizeof(WhileNavigationTrigger_type);
    type = (WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileNavigationTrigger", options);
    type->fp_build_ = WhileNavigationTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnUnrooted_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// internal WhileNavigationTrigger() :24
void WhileNavigationTrigger__ctor_6_fn(WhileNavigationTrigger* __this)
{
    __this->ctor_6();
}

// public float get_Limit() :60
void WhileNavigationTrigger__get_Limit_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Limit();
}

// public void set_Limit(float value) :61
void WhileNavigationTrigger__set_Limit_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Limit(*value);
}

// protected override sealed void OnRooted() :87
void WhileNavigationTrigger__OnRooted_fn(WhileNavigationTrigger* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::RoutePageProxy::New2(__this->Parent(), uDelegate::New(::TYPES[45/*Fuse.Navigation.RoutePageProxy.ProgressUpdated*/], (void*)WhileNavigationTrigger__ProgressUpdated_fn, __this));
    uPtr(__this->_proxy)->Path(__this->Path());
    uPtr(__this->_proxy)->Init();
}

// protected override sealed void OnUnrooted() :95
void WhileNavigationTrigger__OnUnrooted_fn(WhileNavigationTrigger* __this)
{
    uPtr(__this->_proxy)->Dispose();
    __this->_proxy = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Navigation.RoutePagePath get_Path() :76
void WhileNavigationTrigger__get_Path_fn(WhileNavigationTrigger* __this, int* __retval)
{
    *__retval = __this->Path();
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) :77
void WhileNavigationTrigger__set_Path_fn(WhileNavigationTrigger* __this, int* value)
{
    __this->Path(*value);
}

// private void ProgressUpdated(double progress) :102
void WhileNavigationTrigger__ProgressUpdated_fn(WhileNavigationTrigger* __this, double* progress)
{
    __this->ProgressUpdated(*progress);
}

// public float get_Threshold() :49
void WhileNavigationTrigger__get_Threshold_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public void set_Threshold(float value) :50
void WhileNavigationTrigger__set_Threshold_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Threshold(*value);
}

// internal WhileNavigationTrigger() [instance] :24
void WhileNavigationTrigger::ctor_6()
{
    _threshold = 1.0f;
    _path = 1;
    ctor_5();
}

// public float get_Limit() [instance] :60
float WhileNavigationTrigger::Limit()
{
    return _limit;
}

// public void set_Limit(float value) [instance] :61
void WhileNavigationTrigger::Limit(float value)
{
    _limit = value;
    _hasLimit = true;
}

// public Fuse.Navigation.RoutePagePath get_Path() [instance] :76
int WhileNavigationTrigger::Path()
{
    return _path;
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) [instance] :77
void WhileNavigationTrigger::Path(int value)
{
    _path = value;

    if (_proxy != NULL)
        uPtr(_proxy)->Path(value);
}

// private void ProgressUpdated(double progress) [instance] :102
void WhileNavigationTrigger::ProgressUpdated(double progress)
{
    progress = MapProgress(progress);
    bool set = progress >= (double)Threshold();

    if (_hasLimit)
        set = set && (progress <= (double)Limit());

    SetActive(set);
}

// public float get_Threshold() [instance] :49
float WhileNavigationTrigger::Threshold()
{
    return _threshold;
}

// public void set_Threshold(float value) [instance] :50
void WhileNavigationTrigger::Threshold(float value)
{
    _threshold = value;
}
// }

}}} // ::g::Fuse::Navigation
