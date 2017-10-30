// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollPositionChangedArgs.h>
#include <Fuse.Controls.ScrollPositionChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ClickerPointerIndex.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.Scroller.MoveUserFlags.h>
#include <Fuse.Gestures.ScrollTo.h>
#include <Fuse.Gestures.ScrollToHow.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.Swiped.h>
#include <Fuse.Gestures.SwipedHow.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedArgs.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Gestures.ToggleSwipeActive.h>
#include <Fuse.Input.CaptureType.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Gesture.h>
#include <Fuse.Input.GesturePriority.h>
#include <Fuse.Input.GesturePriorityConfig.h>
#include <Fuse.Input.GestureRequest.h>
#include <Fuse.Input.Gestures.h>
#include <Fuse.Input.GestureType.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[8];
static uType* TYPES[12];

namespace g{
namespace Fuse{
namespace Gestures{

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Clicked.uno
// -------------------------------------------------------------

// public sealed class Clicked :30
// {
static void Clicked_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Gestures.Clicked>*/, type, NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(39,
        ::TYPES[3/*Fuse.Gestures.ClickedHandler*/], offsetof(Clicked, Handler1), 0);
}

::g::Fuse::Triggers::Trigger_type* Clicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Clicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Clicked", options);
    type->fp_build_ = Clicked_build;
    type->fp_ctor_ = (void*)Clicked__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Clicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Clicked__OnUnrooted_fn;
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

// public generated Clicked() :30
void Clicked__ctor_6_fn(Clicked* __this)
{
    __this->ctor_6();
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) :33
void Clicked__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked::AddHandler(visual, handler);
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :55
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :55
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Clicked New() :30
void Clicked__New2_fn(Clicked** __retval)
{
    *__retval = Clicked::New2();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :69
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted() :57
void Clicked__OnRooted_fn(Clicked* __this)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted() :63
void Clicked__OnUnrooted_fn(Clicked* __this)
{
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public generated Clicked() [instance] :30
void Clicked::ctor_6()
{
    ctor_5();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :55
void Clicked::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[3/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :55
void Clicked::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[3/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :69
void Clicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    if (!Accept(args))
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, Parent()));
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) [static] :33
void Clicked::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked* c = (Clicked*)uPtr(visual)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Gestures.Clicked>*/]);

    if (c == NULL)
    {
        c = Clicked::New2();
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), c);
    }

    uPtr(c)->add_Handler(handler);
}

// public generated Clicked New() [static] :30
Clicked* Clicked::New2()
{
    Clicked* obj1 = (Clicked*)uNew(Clicked_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Clicked.uno
// -------------------------------------------------------------

// public sealed class ClickedArgs :7
// {
static void ClickedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* ClickedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClickedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.ClickedArgs", options);
    type->fp_build_ = ClickedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :9
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :9
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, ClickedArgs** __retval)
{
    *__retval = ClickedArgs::New3(args, visual);
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :9
void ClickedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ctor_3(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :9
ClickedArgs* ClickedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ClickedArgs* obj1 = (ClickedArgs*)uNew(ClickedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Clicked.uno
// -------------------------------------------------------------

// public delegate void ClickedHandler(object sender, Fuse.Gestures.ClickedArgs args) :12
uDelegateType* ClickedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::ClickedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Clicker.uno
// ----------------------------------------------------------------------

// internal sealed class Clicker :101
// {
// static generated Clicker() :101
static void Clicker__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Clicker::_clickerProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Clicker_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Gestures_typeof());
    type->SetInterfaces(
        ::g::Fuse::Input::IGesture_typeof(), offsetof(Clicker_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(Clicker, _attachCount), 0,
        ::g::Uno::Int_typeof(), offsetof(Clicker, _clickCount), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(Clicker, _gesture), 0,
        ::g::Uno::Bool_typeof(), offsetof(Clicker, _hasUpdate), 0,
        ::g::Uno::Bool_typeof(), offsetof(Clicker, _hovering), 0,
        ::g::Fuse::Input::PointerEventArgs_typeof(), offsetof(Clicker, _lastArgs), 0,
        ::g::Uno::Double_typeof(), offsetof(Clicker, _lastUpTime), 0,
        ::g::Uno::Float_typeof(), offsetof(Clicker, _longPressTimeout), 0,
        ::g::Uno::Float_typeof(), offsetof(Clicker, _maxDoubleInterval), 0,
        ::g::Uno::Float_typeof(), offsetof(Clicker, _maxTapDistanceMoved), 0,
        ::g::Uno::Float_typeof(), offsetof(Clicker, _maxTapTimeHeld), 0,
        ::g::Uno::Bool_typeof(), offsetof(Clicker, _maybeTap), 0,
        ::g::Uno::Float2_typeof(), offsetof(Clicker, _pressedPosition), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(Clicker, _priority), 0,
        ::g::Uno::Float2_typeof(), offsetof(Clicker, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(Clicker, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(Clicker, _tapCount), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Clicker, _visual), 0,
        ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], offsetof(Clicker, ClickedEvent1), 0,
        ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], offsetof(Clicker, LongPressedEvent1), 0,
        ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], offsetof(Clicker, PressingEvent1), 0,
        ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], offsetof(Clicker, TappedEvent1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Clicker::_clickerProperty_, uFieldFlagsStatic);
}

Clicker_type* Clicker_typeof()
{
    static uSStrong<Clicker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Clicker);
    options.TypeSize = sizeof(Clicker_type);
    type = (Clicker_type*)uClassType::New("Fuse.Gestures.Clicker", options);
    type->fp_build_ = Clicker_build;
    type->fp_cctor_ = Clicker__cctor__fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int*))Clicker__FuseInputIGestureOnPointerPressed_fn;
    type->interface0.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int*, int*))Clicker__FuseInputIGestureOnCaptureChanged_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int*))Clicker__FuseInputIGestureOnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int*))Clicker__FuseInputIGestureOnPointerReleased_fn;
    type->interface0.fp_OnLostCapture = (void(*)(uObject*, bool*))Clicker__FuseInputIGestureOnLostCapture_fn;
    type->interface0.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))Clicker__FuseInputIGestureget_Priority_fn;
    return type;
}

// private Clicker(Fuse.Visual visual) :118
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm, Fuse.Input.GesturePriority priority) :123
void Clicker__AttachClicker_fn(::g::Fuse::Visual* elm, int* priority, Clicker** __retval)
{
    *__retval = Clicker::AttachClicker(elm, *priority);
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :104
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_ClickedEvent(value);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :104
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_ClickedEvent(value);
}

// public void Detach() :141
void Clicker__Detach_fn(Clicker* __this)
{
    __this->Detach();
}

// private void DoneCapture() :288
void Clicker__DoneCapture_fn(Clicker* __this)
{
    __this->DoneCapture();
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev) :197
void Clicker__FuseInputIGestureOnCaptureChanged_fn(Clicker* __this, ::g::Fuse::Input::PointerEventArgs* args, int* how, int* prev)
{
    if (::g::Uno::Delegate::op_Inequality(__this->LongPressedEvent1, NULL) && !__this->_hasUpdate)
    {
        __this->_hasUpdate = true;
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Clicker__Update_fn, __this), 0);
    }

    if (::g::Uno::Delegate::op_Inequality(__this->PressingEvent1, NULL))
        uPtr(__this->PressingEvent1)->Invoke(2, args, uCRef<int>(1));

    __this->_hovering = true;
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced) :306
void Clicker__FuseInputIGestureOnLostCapture_fn(Clicker* __this, bool* forced)
{
    bool forced_ = *forced;
    __this->DoneCapture();

    if (forced_)
    {
        __this->_tapCount = 0;
        __this->_clickCount = 0;
    }
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args) :211
void Clicker__FuseInputIGestureOnPointerMoved_fn(Clicker* __this, ::g::Fuse::Input::PointerMovedArgs* args, int* __retval)
{
    float distance = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), __this->_startCoord));
    double deltaTime = args->Timestamp() - __this->_startTime;

    if ((distance > __this->_maxTapDistanceMoved) || (deltaTime > (double)__this->_maxTapTimeHeld))
        __this->_maybeTap = false;

    if (!__this->NeedCapture())
        return *__retval = 2, void();

    bool hoverNow = uPtr(__this->_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != __this->_hovering)
    {
        if (::g::Uno::Delegate::op_Inequality(__this->PressingEvent1, NULL))
            uPtr(__this->PressingEvent1)->Invoke(2, args, uCRef<int>(hoverNow ? 1 : 0));

        __this->_hovering = hoverNow;
    }

    __this->_lastArgs = args;
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args) :178
void Clicker__FuseInputIGestureOnPointerPressed_fn(Clicker* __this, ::g::Fuse::Input::PointerPressedArgs* args, int* __retval)
{
    __this->_lastArgs = args;
    double delta = uPtr(args)->Timestamp() - __this->_lastUpTime;

    if (delta > (double)__this->_maxDoubleInterval)
    {
        __this->_tapCount = 0;
        __this->_clickCount = 0;
    }

    __this->_pressedPosition = uPtr(__this->_visual)->WindowToLocal(args->WindowPoint());
    __this->_startCoord = args->WindowPoint();
    __this->_startTime = args->Timestamp();
    __this->_maybeTap = true;
    __this->_lastArgs = args;
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :242
void Clicker__FuseInputIGestureOnPointerReleased_fn(Clicker* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int* __retval)
{
    double deltaTime = uPtr(args)->Timestamp() - __this->_startTime;

    if (__this->_maybeTap && (deltaTime <= (double)__this->_maxTapTimeHeld))
    {
        __this->_tapCount++;

        if (::g::Uno::Delegate::op_Inequality(__this->TappedEvent1, NULL))
            uPtr(__this->TappedEvent1)->Invoke(2, args, uCRef<int>(__this->_tapCount));
    }
    else
        __this->_tapCount = 0;

    bool hoverNow = uPtr(__this->_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow)
    {
        __this->_clickCount++;

        if (::g::Uno::Delegate::op_Inequality(__this->ClickedEvent1, NULL))
            uPtr(__this->ClickedEvent1)->Invoke(2, args, uCRef<int>(__this->_clickCount));
    }
    else
        __this->_clickCount = 0;

    if (__this->_hovering && ::g::Uno::Delegate::op_Inequality(__this->PressingEvent1, NULL))
        uPtr(__this->PressingEvent1)->Invoke(2, args, uCRef<int>(0));

    __this->_hovering = false;
    __this->_lastUpTime = args->Timestamp();
    __this->_lastArgs = args;
    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority() :318
void Clicker__FuseInputIGestureget_Priority_fn(Clicker* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1(4, 0.0f, 0), void();
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :105
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_LongPressedEvent(value);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :105
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_LongPressedEvent(value);
}

// private bool NeedCapture() :234
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval)
{
    *__retval = __this->NeedCapture();
}

// private Clicker New(Fuse.Visual visual) :118
void Clicker__New1_fn(::g::Fuse::Visual* visual, Clicker** __retval)
{
    *__retval = Clicker::New1(visual);
}

// private void OnRooted() :152
void Clicker__OnRooted_fn(Clicker* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted() :157
void Clicker__OnUnrooted_fn(Clicker* __this)
{
    __this->OnUnrooted();
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :106
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_PressingEvent(value);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :106
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_PressingEvent(value);
}

// private void ReleaseUpdate() :297
void Clicker__ReleaseUpdate_fn(Clicker* __this)
{
    __this->ReleaseUpdate();
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :103
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_TappedEvent(value);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :103
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_TappedEvent(value);
}

// private void Update() :277
void Clicker__Update_fn(Clicker* __this)
{
    __this->Update();
}

uSStrong< ::g::Fuse::PropertyHandle*> Clicker::_clickerProperty_;

// private Clicker(Fuse.Visual visual) [instance] :118
void Clicker::ctor_(::g::Fuse::Visual* visual)
{
    _maxTapDistanceMoved = 25.0f;
    _maxTapTimeHeld = 0.3f;
    _maxDoubleInterval = 0.3f;
    _longPressTimeout = 0.5f;
    _attachCount = 1;
    _visual = visual;
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :104
void Clicker::add_ClickedEvent(uDelegate* value)
{
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ClickedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :104
void Clicker::remove_ClickedEvent(uDelegate* value)
{
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ClickedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public void Detach() [instance] :141
void Clicker::Detach()
{
    _attachCount--;

    if (_attachCount == 0)
    {
        OnUnrooted();
        uPtr(uPtr(_visual)->Properties())->Clear(Clicker::_clickerProperty_);
    }
}

// private void DoneCapture() [instance] :288
void Clicker::DoneCapture()
{
    ReleaseUpdate();

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));

    _hovering = false;
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :105
void Clicker::add_LongPressedEvent(uDelegate* value)
{
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LongPressedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :105
void Clicker::remove_LongPressedEvent(uDelegate* value)
{
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LongPressedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private bool NeedCapture() [instance] :234
bool Clicker::NeedCapture()
{
    return (((_maybeTap && ::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL);
}

// private void OnRooted() [instance] :152
void Clicker::OnRooted()
{
    _gesture = ::g::Fuse::Input::Gestures::Add((uObject*)this, _visual, 0);
}

// private void OnUnrooted() [instance] :157
void Clicker::OnUnrooted()
{
    uPtr(_gesture)->Dispose();
    _gesture = NULL;
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :106
void Clicker::add_PressingEvent(uDelegate* value)
{
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PressingEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :106
void Clicker::remove_PressingEvent(uDelegate* value)
{
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PressingEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void ReleaseUpdate() [instance] :297
void Clicker::ReleaseUpdate()
{
    if (_hasUpdate)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Clicker__Update_fn, this), 0);
        _hasUpdate = false;
    }
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :103
void Clicker::add_TappedEvent(uDelegate* value)
{
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TappedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :103
void Clicker::remove_TappedEvent(uDelegate* value)
{
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TappedEvent1, value), ::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void Update() [instance] :277
void Clicker::Update()
{
    double elapsed = ::g::Fuse::Time::FrameTime() - _startTime;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL) && (elapsed > (double)_longPressTimeout))
    {
        uPtr(LongPressedEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));
        ::g::Fuse::Input::Pointer::ReleaseCapture(this);
        DoneCapture();
    }
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm, Fuse.Input.GesturePriority priority) [static] :123
Clicker* Clicker::AttachClicker(::g::Fuse::Visual* elm, int priority)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Clicker::_clickerProperty_, &v))
    {
        Clicker* c = uAs<Clicker*>(v, Clicker_typeof());
        uPtr(c)->_priority = ::g::Uno::Math::Max8(uPtr(c)->_priority, priority);
        c->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker::New1(elm);
    nc->_priority = priority;
    uPtr(uPtr(elm)->Properties())->Set(Clicker::_clickerProperty_, nc);
    nc->OnRooted();
    return nc;
}

// private Clicker New(Fuse.Visual visual) [static] :118
Clicker* Clicker::New1(::g::Fuse::Visual* visual)
{
    Clicker* obj1 = (Clicker*)uNew(Clicker_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Clicker.uno
// ----------------------------------------------------------------------

// internal delegate void ClickerEventHandler(Fuse.Input.PointerEventArgs args, int count) :9
uDelegateType* ClickerEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickerEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Input::PointerEventArgs_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Clicker.uno
// ----------------------------------------------------------------------

// public enum ClickerPointerIndex :11
uEnumType* ClickerPointerIndex_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.ClickerPointerIndex", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Primary", 0LL,
        "Any", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Clicker.uno
// ----------------------------------------------------------------------

// public abstract class ClickerTrigger :19
// {
static void ClickerTrigger_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Gestures::Clicker_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(36,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(ClickerTrigger, _gesturePriority), 0,
        ::g::Fuse::Gestures::ClickerPointerIndex_typeof(), offsetof(ClickerTrigger, _pointerIndex), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(ClickerTrigger, Clicker), 0);
}

::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.ClickerTrigger", options);
    type->fp_build_ = ClickerTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnUnrooted_fn;
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

// protected generated ClickerTrigger() :19
void ClickerTrigger__ctor_5_fn(ClickerTrigger* __this)
{
    __this->ctor_5();
}

// protected bool Accept(Fuse.Input.PointerEventArgs args) :58
void ClickerTrigger__Accept_fn(ClickerTrigger* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval)
{
    *__retval = __this->Accept(args);
}

// public Fuse.Input.GesturePriority get_GesturePriority() :54
void ClickerTrigger__get_GesturePriority_fn(ClickerTrigger* __this, int* __retval)
{
    *__retval = __this->GesturePriority();
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value) :55
void ClickerTrigger__set_GesturePriority_fn(ClickerTrigger* __this, int* value)
{
    __this->GesturePriority(*value);
}

// protected override void OnRooted() :22
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent(), __this->GesturePriority());
}

// protected override void OnUnrooted() :28
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this)
{
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Gestures.ClickerPointerIndex get_PointerIndex() :38
void ClickerTrigger__get_PointerIndex_fn(ClickerTrigger* __this, int* __retval)
{
    *__retval = __this->PointerIndex();
}

// public void set_PointerIndex(Fuse.Gestures.ClickerPointerIndex value) :39
void ClickerTrigger__set_PointerIndex_fn(ClickerTrigger* __this, int* value)
{
    __this->PointerIndex(*value);
}

// protected generated ClickerTrigger() [instance] :19
void ClickerTrigger::ctor_5()
{
    _gesturePriority = 4;
    ctor_4();
}

// protected bool Accept(Fuse.Input.PointerEventArgs args) [instance] :58
bool ClickerTrigger::Accept(::g::Fuse::Input::PointerEventArgs* args)
{
    if (!IsRootingCompleted())
        return false;

    if (PointerIndex() == 1)
        return true;

    return uPtr(args)->IsPrimary();
}

// public Fuse.Input.GesturePriority get_GesturePriority() [instance] :54
int ClickerTrigger::GesturePriority()
{
    return _gesturePriority;
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value) [instance] :55
void ClickerTrigger::GesturePriority(int value)
{
    _gesturePriority = value;
}

// public Fuse.Gestures.ClickerPointerIndex get_PointerIndex() [instance] :38
int ClickerTrigger::PointerIndex()
{
    return _pointerIndex;
}

// public void set_PointerIndex(Fuse.Gestures.ClickerPointerIndex value) [instance] :39
void ClickerTrigger::PointerIndex(int value)
{
    _pointerIndex = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Helpers.uno
// ----------------------------------------------------------------------

// internal sealed class DegreeSpan :6
// {
static void DegreeSpan_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(DegreeSpan, _b), 0);
}

uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.DegreeSpan", options);
    type->fp_build_ = DegreeSpan_build;
    return type;
}

// public DegreeSpan(float a, float b) :11
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x) :17
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b) :11
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :11
void DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance] :17
bool DegreeSpan::IsWithinBounds(float x)
{
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static] :11
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/WhileEdgeSwiped.uno
// ---------------------------------------------------------------------

// public enum Edge :10
uEnumType* Edge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Edge", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/KeepInView.uno
// ----------------------------------------------------------------

// public sealed class KeepFocusInView :106
// {
static void KeepFocusInView_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(18);
}

::g::Fuse::Node_type* KeepFocusInView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(KeepFocusInView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepFocusInView", options);
    type->fp_build_ = KeepFocusInView_build;
    type->fp_ctor_ = (void*)KeepFocusInView__New3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnUnrooted_fn;
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

// public generated KeepFocusInView() :106
void KeepFocusInView__ctor_4_fn(KeepFocusInView* __this)
{
    __this->ctor_4();
}

// public generated KeepFocusInView New() :106
void KeepFocusInView__New3_fn(KeepFocusInView** __retval)
{
    *__retval = KeepFocusInView::New3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) :122
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    __this->OnGotFocus(s, fga);
}

// private void OnLostFocus(object s, object a) :127
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted() :108
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this)
{
    ::g::Fuse::Gestures::KeepInViewCommon__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[5/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[6/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
}

// protected override sealed void OnUnrooted() :115
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this)
{
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[5/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[6/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
    ::g::Fuse::Gestures::KeepInViewCommon__OnUnrooted_fn(__this);
}

// public generated KeepFocusInView() [instance] :106
void KeepFocusInView::ctor_4()
{
    ctor_3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) [instance] :122
void KeepFocusInView::OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    Target(::g::Fuse::Input::Focus::FocusedVisual());
}

// private void OnLostFocus(object s, object a) [instance] :127
void KeepFocusInView::OnLostFocus(uObject* s, uObject* a)
{
    Target(NULL);
}

// public generated KeepFocusInView New() [static] :106
KeepFocusInView* KeepFocusInView::New3()
{
    KeepFocusInView* obj1 = (KeepFocusInView*)uNew(KeepFocusInView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/KeepInView.uno
// ----------------------------------------------------------------

// public class KeepInViewCommon :8
// {
static void KeepInViewCommon_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(KeepInViewCommon, _attached), 0,
        ::TYPES[8/*Fuse.Elements.Element*/], offsetof(KeepInViewCommon, _rootElement), 0,
        ::TYPES[8/*Fuse.Elements.Element*/], offsetof(KeepInViewCommon, _target), 0);
}

::g::Fuse::Node_type* KeepInViewCommon_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(KeepInViewCommon);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepInViewCommon", options);
    type->fp_build_ = KeepInViewCommon_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnUnrooted_fn;
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

// internal KeepInViewCommon() :10
void KeepInViewCommon__ctor_3_fn(KeepInViewCommon* __this)
{
    __this->ctor_3();
}

// private void AttachElement() :79
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this)
{
    __this->AttachElement();
}

// protected override void OnRooted() :47
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_rootElement = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[8/*Fuse.Elements.Element*/]);

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->add_Placed(uDelegate::New(::TYPES[7/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->AttachElement();
    }
}

// protected override void OnUnrooted() :59
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this)
{
    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->remove_Placed(uDelegate::New(::TYPES[7/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->ReleaseElement();
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseElement() :70
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this)
{
    __this->ReleaseElement();
}

// public Fuse.Node get_Target() :16
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value) :17
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// private void Update(object s, object a) :89
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// internal KeepInViewCommon() [instance] :10
void KeepInViewCommon::ctor_3()
{
    ctor_2();
}

// private void AttachElement() [instance] :79
void KeepInViewCommon::AttachElement()
{
    if (_target == NULL)
        return;

    uPtr(_target)->add_Placed(uDelegate::New(::TYPES[7/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = true;
    Update(NULL, NULL);
}

// private void ReleaseElement() [instance] :70
void KeepInViewCommon::ReleaseElement()
{
    if (!_attached)
        return;

    uPtr(_target)->remove_Placed(uDelegate::New(::TYPES[7/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = false;
}

// public Fuse.Node get_Target() [instance] :16
::g::Fuse::Node* KeepInViewCommon::Target()
{
    return _target;
}

// public void set_Target(Fuse.Node value) [instance] :17
void KeepInViewCommon::Target(::g::Fuse::Node* value)
{
    ::g::Fuse::Elements::Element* prev = _target;
    ReleaseElement();
    ::g::Fuse::Node* v = value;

    while (v != NULL)
    {
        _target = uAs< ::g::Fuse::Elements::Element*>(v, ::TYPES[8/*Fuse.Elements.Element*/]);

        if (_target != NULL)
            break;

        v = uPtr(v)->Parent();
    }

    if (v == NULL)
    {
        if (prev != NULL)
            uPtr(prev)->OnBringIntoView(NULL);

        _target = NULL;
    }
    else
        AttachElement();
}

// private void Update(object s, object a) [instance] :89
void KeepInViewCommon::Update(uObject* s, uObject* a)
{
    if (_target != NULL)
        uPtr(_target)->BringIntoView();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.uno
// -------------------------------------------------------------------------

// private enum Scroller.MoveUserFlags :418
uEnumType* Scroller__MoveUserFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Scroller.MoveUserFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.uno
// -------------------------------------------------------------------------

// public sealed class Scroller :21
// {
// static generated Scroller() :21
static void Scroller__cctor_1_fn(uType* __type)
{
    Scroller::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(1.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    Scroller::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(1.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

static void Scroller_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Input::Gestures_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Scroller_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Scroller_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Scroller_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Scroller_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Scroller_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Scroller_type, interface5),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Scroller_type, interface6),
        ::g::Fuse::Input::IGesture_typeof(), offsetof(Scroller_type, interface7));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _delayStart), 0,
        ::g::Uno::Int_typeof(), offsetof(Scroller, _down), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(Scroller, _gesture), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _hasUpdated), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Scroller, _pendingBringIntoView), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _pointerListening), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _pointerPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _pressed), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _prevPos), 0,
        ::g::Uno::Double_typeof(), offsetof(Scroller, _prevTime), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(Scroller, _region), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(Scroller, _scrollable), 0,
        ::g::Uno::Float_typeof(), offsetof(Scroller, _significance), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _softCaptureCurrent), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _softCaptureStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _startPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _updateFirstFrame), 0,
        ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL), offsetof(Scroller, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&Scroller::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&Scroller::_verticalGesture_, uFieldFlagsStatic);
}

Scroller_type* Scroller_typeof()
{
    static uSStrong<Scroller_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 8;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Scroller);
    options.TypeSize = sizeof(Scroller_type);
    type = (Scroller_type*)uClassType::New("Fuse.Gestures.Scroller", options);
    type->fp_build_ = Scroller_build;
    type->fp_cctor_ = Scroller__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Scroller__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Scroller__OnUnrooted_fn;
    type->interface7.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int*))Scroller__FuseInputIGestureOnPointerPressed_fn;
    type->interface7.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int*, int*))Scroller__FuseInputIGestureOnCaptureChanged_fn;
    type->interface7.fp_OnLostCapture = (void(*)(uObject*, bool*))Scroller__FuseInputIGestureOnLostCapture_fn;
    type->interface7.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int*))Scroller__FuseInputIGestureOnPointerMoved_fn;
    type->interface7.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int*))Scroller__FuseInputIGestureOnPointerReleased_fn;
    type->interface6.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface7.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))Scroller__FuseInputIGestureget_Priority_fn;
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

// internal Scroller(bool ignore) :24
void Scroller__ctor_4_fn(Scroller* __this, bool* ignore)
{
    __this->ctor_4(*ignore);
}

// public void CheckLimits() :316
void Scroller__CheckLimits_fn(Scroller* __this)
{
    __this->CheckLimits();
}

// private void CheckNeedUpdated([bool off]) :153
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public bool get_DelayStart() :45
void Scroller__get_DelayStart_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->DelayStart();
}

// public void set_DelayStart(bool value) :46
void Scroller__set_DelayStart_fn(Scroller* __this, bool* value)
{
    __this->DelayStart(*value);
}

// private float2 FromWindow(float2 p) :237
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev) :221
void Scroller__FuseInputIGestureOnCaptureChanged_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, int* how, int* prev)
{
    int how_ = *how;

    if ((how_ & 1) == 1)
        __this->_softCaptureStart = (__this->_softCaptureCurrent = uPtr(args)->WindowPoint());

    __this->StartInvalidateVisual();
    __this->_pointerPos = uPtr(args)->WindowPoint();
    __this->_prevPos = (__this->_startPos = __this->_pointerPos);
    __this->_prevTime = args->Timestamp();
    ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(__this->_velocity), uCRef(__this->FromWindow(__this->_pointerPos)), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(0.0));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(uPtr(__this->_scrollable)->ScrollPosition()));
    __this->CheckNeedUpdated(false);
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced) :242
void Scroller__FuseInputIGestureOnLostCapture_fn(Scroller* __this, bool* forced)
{
    __this->StopInvalidateVisual();
    __this->_significance = 0.0f;

    if ((__this->_region != NULL) && ::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New1(0.0f));

    __this->CheckNeedUpdated(false);
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args) :262
void Scroller__FuseInputIGestureOnPointerMoved_fn(Scroller* __this, ::g::Fuse::Input::PointerMovedArgs* args, int* __retval)
{
    if (__this->_gesture == NULL)
        return *__retval = 0, void();

    if (!uPtr(__this->_gesture)->IsHardCapture())
    {
        __this->_softCaptureCurrent = uPtr(args)->WindowPoint();
        __this->_significance = 0.0f;
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(__this->_softCaptureCurrent, __this->_softCaptureStart);

        if (uPtr(__this->_scrollable)->AllowedScrollDirections() == 15)
            __this->_significance = ::g::Uno::Vector::Length(diff);

        if (uPtr(__this->_scrollable)->AllowedScrollDirections() == 3)
        {
            if (uPtr(Scroller::_horizontalGesture_)->IsWithinBounds(diff))
                __this->_significance = ::g::Uno::Math::Abs1(diff.X);
        }

        if (uPtr(__this->_scrollable)->AllowedScrollDirections() == 12)
        {
            if (uPtr(Scroller::_verticalGesture_)->IsWithinBounds(diff))
                __this->_significance = ::g::Uno::Math::Abs1(diff.Y);
        }
    }

    __this->_pointerPos = uPtr(args)->WindowPoint();
    __this->MoveUser((!__this->_delayStart || uPtr(__this->_gesture)->IsHardCapture()) ? 1 : 0, args->Timestamp());
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args) :213
void Scroller__FuseInputIGestureOnPointerPressed_fn(Scroller* __this, ::g::Fuse::Input::PointerPressedArgs* args, int* __retval)
{
    ::g::Uno::Float2 ret3;
    __this->StartInvalidateVisual();
    __this->_significance = (float)((::g::Uno::Vector::Length((::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret3), ret3)) > 100.0f) ? 100 : 0);
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :296
void Scroller__FuseInputIGestureOnPointerReleased_fn(Scroller* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int* __retval)
{
    ::g::Uno::Float2 ret4;
    __this->StopInvalidateVisual();

    if (__this->_delayStart && !uPtr(__this->_gesture)->IsHardCapture())
        return *__retval = 2, void();

    if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
    {
        __this->_pointerPos = uPtr(args)->WindowPoint();
        __this->MoveUser(3, args->Timestamp());
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__op_UnaryNegation(uPtr(__this->_scrollable)->ConstrainExtents((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(__this->_velocity), &ret4), ret4))));
    }

    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority() :190
void Scroller__FuseInputIGestureget_Priority_fn(Scroller* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1((__this->_scrollable == NULL) ? 1 : uPtr(__this->_scrollable)->GesturePriority(), (float)(!__this->DelayStart() ? 100 : 0) + __this->_significance, 0), void();
}

// public void Goto(float2 position) :343
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) :425
void Scroller__MoveUser_fn(Scroller* __this, int* flags, double* time)
{
    __this->MoveUser(*flags, *time);
}

// internal Scroller New(bool ignore) :24
void Scroller__New3_fn(bool* ignore, Scroller** __retval)
{
    *__retval = Scroller::New3(*ignore);
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) :325
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    __this->OnRequestBringIntoView(sender, args);
}

// protected override sealed void OnRooted() :55
void Scroller__OnRooted_fn(Scroller* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_scrollable = uAs< ::g::Fuse::Controls::ScrollView*>(__this->Parent(), ::g::Fuse::Controls::ScrollView_typeof());

    if (__this->_scrollable == NULL)
        U_THROW(::g::Uno::Exception::New2(uString::Const("Scroller can only be used in a ScrollView")));

    uPtr(__this->_scrollable)->AddPropertyListener((uObject*)__this);
    uPtr(__this->_scrollable)->_scroller = __this;
    uPtr(__this->_scrollable)->add_RequestBringIntoView(uDelegate::New(::g::Fuse::RequestBringIntoViewHandler_typeof(), (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::g::Fuse::Controls::ScrollPositionChangedHandler_typeof(), (void*)Scroller__OnScrollPositionChanged_fn, __this));
    __this->_region = uPtr(uPtr(__this->_scrollable)->Motion())->AcquireSimulation();
    __this->UpdatePointerEvents(false);
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args) :404
void Scroller__OnScrollPositionChanged_fn(Scroller* __this, uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted() :73
void Scroller__OnUnrooted_fn(Scroller* __this)
{
    __this->StopInvalidateVisual();
    uPtr(__this->_scrollable)->RemovePropertyListener((uObject*)__this);
    uPtr(__this->_scrollable)->remove_RequestBringIntoView(uDelegate::New(::g::Fuse::RequestBringIntoViewHandler_typeof(), (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::g::Fuse::Controls::ScrollPositionChangedHandler_typeof(), (void*)Scroller__OnScrollPositionChanged_fn, __this));
    uPtr(__this->_scrollable)->_scroller = NULL;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, __this), 0);
    }

    __this->UpdatePointerEvents(true);

    if (__this->_region != NULL)
    {
        uPtr(uPtr(__this->_scrollable)->Motion())->ReleaseSimulation();
        __this->_region = NULL;
    }

    __this->_scrollable = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdated() :372
void Scroller__OnUpdated_fn(Scroller* __this)
{
    __this->OnUpdated();
}

// private void PerformBringIntoView() :333
void Scroller__PerformBringIntoView_fn(Scroller* __this)
{
    __this->PerformBringIntoView();
}

// private bool get_ScrollableUserScroll() :115
void Scroller__get_ScrollableUserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->ScrollableUserScroll();
}

// private void StartInvalidateVisual() :199
void Scroller__StartInvalidateVisual_fn(Scroller* __this)
{
    __this->StartInvalidateVisual();
}

// private void StopInvalidateVisual() :206
void Scroller__StopInvalidateVisual_fn(Scroller* __this)
{
    __this->StopInvalidateVisual();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel) :395
void Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn(Scroller* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
    ::g::Uno::UX::Selector sel_ = *sel;

    if (obj != __this->_scrollable)
        return;

    if (::g::Uno::UX::Selector__op_Equality(sel_, ::g::Fuse::Controls::ScrollViewBase::UserScrollName()))
        __this->UpdatePointerEvents(false);
}

// private void UpdatePointerEvents([bool forceOff]) :120
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff)
{
    __this->UpdatePointerEvents(*forceOff);
}

// private void UpdateScrollMax() :360
void Scroller__UpdateScrollMax_fn(Scroller* __this)
{
    __this->UpdateScrollMax();
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_verticalGesture_;

// internal Scroller(bool ignore) [instance] :24
void Scroller::ctor_4(bool ignore)
{
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)));
    _delayStart = true;
    _down = -1;
    ctor_2();
}

// public void CheckLimits() [instance] :316
void Scroller::CheckLimits()
{
    UpdateScrollMax();

    if (((_region != NULL) && ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()))) && !::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
        Goto(uPtr(_scrollable)->ScrollPosition());
}

// private void CheckNeedUpdated([bool off]) [instance] :153
void Scroller::CheckNeedUpdated(bool off)
{
    bool needUpdated = ((_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()))) && IsRootingStarted();

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = true;
        _updateFirstFrame = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public bool get_DelayStart() [instance] :45
bool Scroller::DelayStart()
{
    return _delayStart;
}

// public void set_DelayStart(bool value) [instance] :46
void Scroller::DelayStart(bool value)
{
    _delayStart = value;
    ::g::Fuse::Diagnostics::Deprecated(uString::Const("Scroller.DelayStart is no longer supported."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.uno"), 49, uString::Const("set_DelayStart"));
}

// private float2 FromWindow(float2 p) [instance] :237
::g::Uno::Float2 Scroller::FromWindow(::g::Uno::Float2 p)
{
    return uPtr(uPtr(_scrollable)->Parent())->WindowToLocal(p);
}

// public void Goto(float2 position) [instance] :343
void Scroller::Goto(::g::Uno::Float2 position)
{
    if (_scrollable == NULL)
        return;

    position = uPtr(_scrollable)->Constrain(position);
    UpdateScrollMax();

    if (_region != NULL)
    {
        if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof())))
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(uPtr(_scrollable)->ScrollPosition()));

        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), position);
    }

    CheckNeedUpdated(false);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) [instance] :425
void Scroller::MoveUser(int flags, double time)
{
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(FromWindow(_prevPos), FromWindow(_pointerPos));

    if ((flags & 2) == 2)
        diff = ::g::Uno::Float2__New1(0.0f);

    _prevPos = _pointerPos;
    double elapsed = time - _prevTime;
    _prevTime = time;

    if ((flags & 1) == 1)
    {
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(uPtr(_scrollable)->ScrollPosition()));
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), diff);
        OnUpdated();
    }

    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef((double)(float)elapsed), uCRef<int>((!((flags & 1) == 1) ? 1 : 0) | (((flags & 2) == 2) ? 2 : 0)));
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) [instance] :325
void Scroller::OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    _pendingBringIntoView = uPtr(args)->Visual();
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Scroller__PerformBringIntoView_fn, this), 1, 5);
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args) [instance] :404
void Scroller::OnScrollPositionChanged(uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    ::g::Uno::Float2 ret5;

    if (uPtr(args)->Origin() == this)
        return;

    if (uPtr(args)->IsAdjustment())
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Adjust(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), uPtr(args)->ArrangeOffset());
    else
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret5), ret5));

    CheckNeedUpdated(true);
}

// private void OnUpdated() [instance] :372
void Scroller::OnUpdated()
{
    ::g::Uno::Float2 ret6;

    if (_updateFirstFrame)
    {
        _updateFirstFrame = false;
        return;
    }

    if ((_region == NULL) || (_scrollable == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Invalid scroller update"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.uno"), 384, uString::Const("OnUpdated"));
        return;
    }

    UpdateScrollMax();
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()), ::g::Fuse::Time::FrameInterval());
    uPtr(_scrollable)->SetScrollPosition1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret6), ret6), (uObject*)this);
    CheckNeedUpdated(true);
}

// private void PerformBringIntoView() [instance] :333
void Scroller::PerformBringIntoView()
{
    if ((_pendingBringIntoView == NULL) || !uPtr(_pendingBringIntoView)->IsRootingCompleted())
        return;

    ::g::Uno::Float2 pos = uPtr(_scrollable)->GetVisualScrollPosition(_pendingBringIntoView);
    Goto(pos);
    _pendingBringIntoView = NULL;
}

// private bool get_ScrollableUserScroll() [instance] :115
bool Scroller::ScrollableUserScroll()
{
    return (_scrollable != NULL) ? uPtr(_scrollable)->UserScroll() : true;
}

// private void StartInvalidateVisual() [instance] :199
void Scroller::StartInvalidateVisual()
{
    if (!_pressed)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Visual__InvalidateVisual_fn, uPtr(_scrollable)), 0);

    _pressed = true;
}

// private void StopInvalidateVisual() [instance] :206
void Scroller::StopInvalidateVisual()
{
    if (_pressed)
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Visual__InvalidateVisual_fn, uPtr(_scrollable)), 0);

    _pressed = false;
}

// private void UpdatePointerEvents([bool forceOff]) [instance] :120
void Scroller::UpdatePointerEvents(bool forceOff)
{
    bool shouldListen = (!forceOff && (_scrollable != NULL)) && ScrollableUserScroll();

    if (shouldListen == _pointerListening)
        return;

    if (shouldListen)
    {
        if (_gesture != NULL)
            ::g::Fuse::Diagnostics::InternalError(uString::Const("inconsistent gesture state"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.uno"), 129, uString::Const("UpdatePointerEvents"));
        else
            _gesture = ::g::Fuse::Input::Gestures::Add((uObject*)this, _scrollable, 9);
    }
    else if (_scrollable != NULL)
    {
        if (_gesture == NULL)
            ::g::Fuse::Diagnostics::InternalError(uString::Const("inconsistent gesture state"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.uno"), 136, uString::Const("UpdatePointerEvents"));
        else
        {
            uPtr(_gesture)->Dispose();
            _gesture = NULL;
        }
    }
    else
        U_THROW(::g::Uno::Exception::New2(uString::Const("Invalid tear-down of pointer events")));

    _pointerListening = shouldListen;
}

// private void UpdateScrollMax() [instance] :360
void Scroller::UpdateScrollMax()
{
    if (_scrollable == NULL)
        return;

    if (_region != NULL)
    {
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), uPtr(_scrollable)->MaxScroll());
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), uPtr(_scrollable)->MinScroll());
    }
}

// internal Scroller New(bool ignore) [static] :24
Scroller* Scroller::New3(bool ignore)
{
    Scroller* obj1 = (Scroller*)uNew(Scroller_typeof());
    obj1->ctor_4(ignore);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.Actions.uno
// ---------------------------------------------------------------------------------

// public sealed class ScrollTo :56
// {
static void ScrollTo_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unabled to locate ScrollView");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.Actions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[9] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.ScrollView>*/, ::g::Fuse::Controls::ScrollView_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(ScrollTo, _hasRelativePosition), 0,
        ::g::Fuse::Gestures::ScrollToHow_typeof(), offsetof(ScrollTo, _how), 0,
        ::g::Uno::Float2_typeof(), offsetof(ScrollTo, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(ScrollTo, _relativePosition), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(ScrollTo, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ScrollTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollTo", options);
    type->fp_build_ = ScrollTo_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ScrollTo__Perform_fn;
    return type;
}

// public Fuse.Gestures.ScrollToHow get_How() :97
void ScrollTo__get_How_fn(ScrollTo* __this, int* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.ScrollToHow value) :98
void ScrollTo__set_How_fn(ScrollTo* __this, int* value)
{
    __this->How(*value);
}

// protected override sealed void Perform(Fuse.Node target) :101
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Controls::ScrollView* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Controls::ScrollView* scrollView = (ind1 != NULL) ? ind1 : (::g::Fuse::Controls::ScrollView*)uPtr(target)->FindByType(::TYPES[9/*Fuse.Node.FindByType<Fuse.Controls.ScrollView>*/]);

    if (scrollView == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Unabled to ...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 106, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    ::g::Uno::Float2 toPos = __this->_hasRelativePosition ? uPtr(scrollView)->RelativeToAbsolutePosition(__this->_relativePosition) : __this->_position;

    if (__this->How() == 0)
        uPtr(scrollView)->Goto(toPos);
    else
        uPtr(scrollView)->ScrollPosition(toPos);
}

// public generated Fuse.Controls.ScrollView get_Target() :59
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Controls.ScrollView value) :59
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->Target(value);
}

// public Fuse.Gestures.ScrollToHow get_How() [instance] :97
int ScrollTo::How()
{
    return _how;
}

// public void set_How(Fuse.Gestures.ScrollToHow value) [instance] :98
void ScrollTo::How(int value)
{
    _how = value;
}

// public generated Fuse.Controls.ScrollView get_Target() [instance] :59
::g::Fuse::Controls::ScrollView* ScrollTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Controls.ScrollView value) [instance] :59
void ScrollTo::Target(::g::Fuse::Controls::ScrollView* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.Actions.uno
// ---------------------------------------------------------------------------------

// public enum ScrollToHow :9
uEnumType* ScrollToHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.ScrollToHow", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Goto", 0LL,
        "Seek", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno
// -----------------------------------------------------------

// public sealed class SetSwipeActive :377
// {
static void SetSwipeActive_build(uType* type)
{
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(SetSwipeActive, _Bypass), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(SetSwipeActive, _Target), 0,
        ::g::Uno::Bool_typeof(), offsetof(SetSwipeActive, _Value), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(SetSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.SetSwipeActive", options);
    type->fp_build_ = SetSwipeActive_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SetSwipeActive__Perform_fn;
    return type;
}

// public generated bool get_Bypass() :386
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :386
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value)
{
    __this->Bypass(*value);
}

// protected override sealed void Perform(Fuse.Node target) :388
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(__this->Value(), NULL, __this->Bypass());
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :380
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :380
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated bool get_Value() :383
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(bool value) :383
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value)
{
    __this->Value(*value);
}

// public generated bool get_Bypass() [instance] :386
bool SetSwipeActive::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :386
void SetSwipeActive::Bypass(bool value)
{
    _Bypass = value;
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :380
::g::Fuse::Gestures::SwipeGesture* SetSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :380
void SetSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated bool get_Value() [instance] :383
bool SetSwipeActive::Value()
{
    return _Value;
}

// public generated void set_Value(bool value) [instance] :383
void SetSwipeActive::Value(bool value)
{
    _Value = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno
// -----------------------------------------------------------

// public sealed class Swiped :534
// {
static void Swiped_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(36,
        ::g::Fuse::Gestures::SwipedHow_typeof(), offsetof(Swiped, _how), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(Swiped, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(Swiped, _Source), 0);
}

::g::Fuse::Triggers::Trigger_type* Swiped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Swiped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Swiped", options);
    type->fp_build_ = Swiped_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Swiped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Swiped__OnUnrooted_fn;
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

// public Swiped(Fuse.Gestures.SwipeGesture source) :540
void Swiped__ctor_5_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_5(source);
}

// public Fuse.Gestures.SwipedHow get_How() :553
void Swiped__get_How_fn(Swiped* __this, int* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.SwipedHow value) :554
void Swiped__set_How_fn(Swiped* __this, int* value)
{
    __this->How(*value);
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) :540
void Swiped__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, Swiped** __retval)
{
    *__retval = Swiped::New2(source);
}

// protected override sealed void OnRooted() :558
void Swiped__OnRooted_fn(Swiped* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->add_Swiped(uDelegate::New(::TYPES[10/*Uno.Action<bool, bool>*/], (void*)Swiped__OnSwiped_fn, __this));
}

// private void OnSwiped(bool v, bool cancelled) :571
void Swiped__OnSwiped_fn(Swiped* __this, bool* v, bool* cancelled)
{
    __this->OnSwiped(*v, *cancelled);
}

// protected override sealed void OnUnrooted() :565
void Swiped__OnUnrooted_fn(Swiped* __this)
{
    uPtr(__this->_region)->remove_Swiped(uDelegate::New(::TYPES[10/*Uno.Action<bool, bool>*/], (void*)Swiped__OnSwiped_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :537
void Swiped__get_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :537
void Swiped__set_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public Swiped(Fuse.Gestures.SwipeGesture source) [instance] :540
void Swiped::ctor_5(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_4();
    Source(source);
}

// public Fuse.Gestures.SwipedHow get_How() [instance] :553
int Swiped::How()
{
    return _how;
}

// public void set_How(Fuse.Gestures.SwipedHow value) [instance] :554
void Swiped::How(int value)
{
    _how = value;
}

// private void OnSwiped(bool v, bool cancelled) [instance] :571
void Swiped::OnSwiped(bool v, bool cancelled)
{
    if (cancelled)
    {
        if (How() == 3)
            Pulse();

        return;
    }

    if (v && ((How() == 0) || (How() == 2)))
        Pulse();

    if (!v && ((How() == 1) || (How() == 2)))
        Pulse();
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :537
::g::Fuse::Gestures::SwipeGesture* Swiped::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :537
void Swiped::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) [static] :540
Swiped* Swiped::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    Swiped* obj1 = (Swiped*)uNew(Swiped_typeof());
    obj1->ctor_5(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno
// -----------------------------------------------------------

// public enum SwipedHow :495
uEnumType* SwipedHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipedHow", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "ToActive", 0LL,
        "ToInactive", 1LL,
        "ToEither", 2LL,
        "Cancelled", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno
// -----------------------------------------------------------

// public enum SwipeDirection :15
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Up", 1LL,
        "Right", 2LL,
        "Down", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno
// -----------------------------------------------------------

// public sealed class SwipeGesture :55
// {
// static generated SwipeGesture() :55
static void SwipeGesture__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    SwipeGesture::GesturePriorityName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"GesturePrio...*/]);
    SwipeGesture::_isActiveName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"IsActive"*/]);
}

static void SwipeGesture_build(uType* type)
{
    ::STRINGS[3] = uString::Const("GesturePriority");
    ::STRINGS[4] = uString::Const("IsActive");
    ::STRINGS[5] = uString::Const("Element");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno");
    ::STRINGS[7] = uString::Const("OnRooted");
    ::TYPES[8] = ::g::Fuse::Elements::Element_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Selector_typeof(),
        ::g::Fuse::Gestures::Internal::Swiper_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipeGesture_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(SwipeGesture_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(SwipeGesture_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeGesture_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeGesture_type, interface5),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipeGesture_type, interface6));
    type->SetFields(15,
        ::g::Fuse::Gestures::SwipeDirection_typeof(), offsetof(SwipeGesture, _direction), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(SwipeGesture, _gesturePriority), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeGesture, _hasDirection), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(SwipeGesture, _region), 0,
        ::g::Fuse::Gestures::Internal::Swiper_typeof(), offsetof(SwipeGesture, _swiper), 0,
        ::g::Fuse::Gestures::SwipeType_typeof(), offsetof(SwipeGesture, _type), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SwipeGesture::_isActiveName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SwipeGesture::GesturePriorityName_, uFieldFlagsStatic);
}

SwipeGesture_type* SwipeGesture_typeof()
{
    static uSStrong<SwipeGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 7;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(SwipeGesture);
    options.TypeSize = sizeof(SwipeGesture_type);
    type = (SwipeGesture_type*)uClassType::New("Fuse.Gestures.SwipeGesture", options);
    type->fp_build_ = SwipeGesture_build;
    type->fp_ctor_ = (void*)SwipeGesture__New2_fn;
    type->fp_cctor_ = SwipeGesture__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnUnrooted_fn;
    type->interface6.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public SwipeGesture() :57
void SwipeGesture__ctor_3_fn(SwipeGesture* __this)
{
    __this->ctor_3();
}

// public Fuse.Gestures.SwipeDirection get_Direction() :140
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) :141
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int* value)
{
    __this->Direction(*value);
}

// public bool get_IsActive() :275
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :276
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsEnabled() :208
void SwipeGesture__get_IsEnabled_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :209
void SwipeGesture__set_IsEnabled_fn(SwipeGesture* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public Fuse.Elements.Element get_LengthNode() :191
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :192
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public SwipeGesture New() :57
void SwipeGesture__New2_fn(SwipeGesture** __retval)
{
    *__retval = SwipeGesture::New2();
}

// protected override sealed void OnRooted() :230
void SwipeGesture__OnRooted_fn(SwipeGesture* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[8/*Fuse.Elements.Element*/]);

    if (element == NULL)
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[5/*"Element"*/], __this->Parent(), __this, ::STRINGS[6/*"/usr/local/...*/], 236, ::STRINGS[7/*"OnRooted"*/]);
        return;
    }

    uPtr(__this->_region)->SetActive(__this->IsActive());
    __this->_swiper = ::g::Fuse::Gestures::Internal::Swiper::AttachSwiper(element);
    uPtr(__this->_swiper)->AddRegion(__this->Region());
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :258
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this)
{
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);

    if (__this->_swiper != NULL)
    {
        uPtr(__this->_swiper)->RemoveRegion(__this->_region);
        uPtr(__this->_swiper)->Detach();
        __this->_swiper = NULL;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() :255
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->Region();
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) :284
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass)
{
    __this->SetActive(*value, origin, *bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) :279
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public Fuse.Gestures.SwipeType get_Type() :74
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Gestures.SwipeType value) :75
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int* value)
{
    __this->Type(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :246
void SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeGesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((obj == __this->_region) && ::g::Uno::UX::Selector__op_Equality(prop_, SwipeGesture::_isActiveName_))
        __this->OnPropertyChanged1(SwipeGesture::_isActiveName_, (uObject*)__this->_region);
}

::g::Uno::UX::Selector SwipeGesture::_isActiveName_;
::g::Uno::UX::Selector SwipeGesture::GesturePriorityName_;

// public SwipeGesture() [instance] :57
void SwipeGesture::ctor_3()
{
    _region = ::g::Fuse::Gestures::Internal::SwipeRegion::New2();
    _gesturePriority = 1;
    ctor_2();
    Type(0);
    Direction(0);
}

// public Fuse.Gestures.SwipeDirection get_Direction() [instance] :140
int SwipeGesture::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) [instance] :141
void SwipeGesture::Direction(int value)
{
    _direction = value;
    _hasDirection = true;
    uPtr(_region)->Area = 0;

    switch (Direction())
    {
        case 0:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
            uPtr(_region)->Priority = 101;
            break;
        }
        case 1:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
            uPtr(_region)->Priority = 102;
            break;
        }
        case 2:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
            uPtr(_region)->Priority = 103;
            break;
        }
        case 3:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
            uPtr(_region)->Priority = 104;
            break;
        }
    }
}

// public bool get_IsActive() [instance] :275
bool SwipeGesture::IsActive()
{
    return uPtr(_region)->IsActive();
}

// public void set_IsActive(bool value) [instance] :276
void SwipeGesture::IsActive(bool value)
{
    SetIsActive(value, (uObject*)this);
}

// public bool get_IsEnabled() [instance] :208
bool SwipeGesture::IsEnabled()
{
    return uPtr(_region)->IsEnabled();
}

// public void set_IsEnabled(bool value) [instance] :209
void SwipeGesture::IsEnabled(bool value)
{
    uPtr(_region)->IsEnabled(value);
}

// public Fuse.Elements.Element get_LengthNode() [instance] :191
::g::Fuse::Elements::Element* SwipeGesture::LengthNode()
{
    return uPtr(_region)->LengthElement;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :192
void SwipeGesture::LengthNode(::g::Fuse::Elements::Element* value)
{
    uPtr(_region)->LengthElement = value;
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() [instance] :255
::g::Fuse::Gestures::Internal::SwipeRegion* SwipeGesture::Region()
{
    return _region;
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) [instance] :284
void SwipeGesture::SetActive(bool value, uObject* origin, bool bypass)
{
    if (_swiper == NULL)
        uPtr(_region)->SetIsActive(value, origin);
    else
        uPtr(_swiper)->SetActivation(_region, value, bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance] :279
void SwipeGesture::SetIsActive(bool value, uObject* origin)
{
    SetActive(value, origin, false);
}

// public Fuse.Gestures.SwipeType get_Type() [instance] :74
int SwipeGesture::Type()
{
    return _type;
}

// public void set_Type(Fuse.Gestures.SwipeType value) [instance] :75
void SwipeGesture::Type(int value)
{
    _type = value;
    uPtr(_region)->IsInterruptible = (Type() != 0);
    uPtr(_region)->RevertActive = (Type() != 1);
    uPtr(_region)->AutoTrigger = (Type() == 2);
}

// public SwipeGesture New() [static] :57
SwipeGesture* SwipeGesture::New2()
{
    SwipeGesture* obj1 = (SwipeGesture*)uNew(SwipeGesture_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Helpers.uno
// ----------------------------------------------------------------------

// internal sealed class SwipeGestureHelper :45
// {
static void SwipeGestureHelper_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), offsetof(SwipeGestureHelper, _spans), 0);
}

uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.SwipeGestureHelper", options);
    type->fp_build_ = SwipeGestureHelper_build;
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :51
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector) :57
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :51
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [instance] :51
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance] :57
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [static] :51
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno
// -----------------------------------------------------------

// public enum SwipeType :24
uEnumType* SwipeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Simple", 0LL,
        "Active", 1LL,
        "Auto", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno
// -----------------------------------------------------------

// public sealed class SwipingAnimation :324
// {
static void SwipingAnimation_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof(),
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipingAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(SwipingAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(SwipingAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipingAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipingAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(SwipingAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(SwipingAnimation_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipingAnimation_type, interface8));
    type->SetFields(36,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(SwipingAnimation, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(SwipingAnimation, _Source), 0);
}

SwipingAnimation_type* SwipingAnimation_typeof()
{
    static uSStrong<SwipingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SwipingAnimation);
    options.TypeSize = sizeof(SwipingAnimation_type);
    type = (SwipingAnimation_type*)uClassType::New("Fuse.Gestures.SwipingAnimation", options);
    type->fp_build_ = SwipingAnimation_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnUnrooted_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) :332
void SwipingAnimation__ctor_5_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_5(source);
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) :332
void SwipingAnimation__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval)
{
    *__retval = SwipingAnimation::New2(source);
}

// private void OnProgressChanged(double progress) :357
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress)
{
    __this->OnProgressChanged1(*progress);
}

// protected override sealed void OnRooted() :337
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
    __this->OnProgressChanged1(uPtr(uPtr(__this->Source())->Region())->Progress());
}

// protected override sealed void OnUnrooted() :345
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this)
{
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :327
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :327
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector prop) :351
void SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipingAnimation* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((sender != __this->_region) || ::g::Uno::UX::Selector__op_Inequality(prop_, ::g::Fuse::Gestures::Internal::SwipeRegion::ProgressName_))
        return;

    __this->OnProgressChanged1(uPtr(__this->_region)->Progress());
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) [instance] :332
void SwipingAnimation::ctor_5(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_4();
    Source(source);
}

// private void OnProgressChanged(double progress) [instance] :357
void SwipingAnimation::OnProgressChanged1(double progress)
{
    double diff = progress - uPtr(uPtr(Source())->Region())->StableProgress();
    Seek(progress, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :327
::g::Fuse::Gestures::SwipeGesture* SwipingAnimation::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :327
void SwipingAnimation::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) [static] :332
SwipingAnimation* SwipingAnimation::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    SwipingAnimation* obj1 = (SwipingAnimation*)uNew(SwipingAnimation_typeof());
    obj1->ctor_5(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Tapped.uno
// ------------------------------------------------------------

// public sealed class Tapped :35
// {
static void Tapped_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[11] = ::g::Fuse::Gestures::TappedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(39,
        ::TYPES[11/*Fuse.Gestures.TappedHandler*/], offsetof(Tapped, Handler1), 0);
}

::g::Fuse::Triggers::Trigger_type* Tapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Tapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Tapped", options);
    type->fp_build_ = Tapped_build;
    type->fp_ctor_ = (void*)Tapped__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Tapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Tapped__OnUnrooted_fn;
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

// public Tapped() :61
void Tapped__ctor_6_fn(Tapped* __this)
{
    __this->ctor_6();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) :63
void Tapped__ctor_7_fn(Tapped* __this, uDelegate* handler)
{
    __this->ctor_7(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) :59
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) :59
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public Tapped New() :61
void Tapped__New2_fn(Tapped** __retval)
{
    *__retval = Tapped::New2();
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) :63
void Tapped__New3_fn(uDelegate* handler, Tapped** __retval)
{
    *__retval = Tapped::New3(handler);
}

// protected override sealed void OnRooted() :68
void Tapped__OnRooted_fn(Tapped* __this)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :80
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted() :74
void Tapped__OnUnrooted_fn(Tapped* __this)
{
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public Tapped() [instance] :61
void Tapped::ctor_6()
{
    ctor_5();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) [instance] :63
void Tapped::ctor_7(uDelegate* handler)
{
    ctor_5();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) [instance] :59
void Tapped::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[11/*Fuse.Gestures.TappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) [instance] :59
void Tapped::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[11/*Fuse.Gestures.TappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :80
void Tapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    if (!Accept(args))
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::TappedArgs*)::g::Fuse::Gestures::TappedArgs::New3(args, Parent()));
}

// public Tapped New() [static] :61
Tapped* Tapped::New2()
{
    Tapped* obj1 = (Tapped*)uNew(Tapped_typeof());
    obj1->ctor_6();
    return obj1;
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) [static] :63
Tapped* Tapped::New3(uDelegate* handler)
{
    Tapped* obj2 = (Tapped*)uNew(Tapped_typeof());
    obj2->ctor_7(handler);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Tapped.uno
// ------------------------------------------------------------

// public sealed class TappedArgs :9
// {
static void TappedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* TappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TappedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.TappedArgs", options);
    type->fp_build_ = TappedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :11
void TappedArgs__ctor_4_fn(TappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :11
void TappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, TappedArgs** __retval)
{
    *__retval = TappedArgs::New3(args, visual);
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :11
void TappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ctor_3(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :11
TappedArgs* TappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    TappedArgs* obj1 = (TappedArgs*)uNew(TappedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Tapped.uno
// ------------------------------------------------------------

// public delegate void TappedHandler(object sender, Fuse.Gestures.TappedArgs args) :17
uDelegateType* TappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.TappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::TappedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno
// -----------------------------------------------------------

// public sealed class ToggleSwipeActive :410
// {
static void ToggleSwipeActive_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(ToggleSwipeActive, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ToggleSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ToggleSwipeActive", options);
    type->fp_build_ = ToggleSwipeActive_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSwipeActive__Perform_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :415
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(!uPtr(__this->Target())->IsActive(), NULL, false);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :413
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :413
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :413
::g::Fuse::Gestures::SwipeGesture* ToggleSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :413
void ToggleSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}
// }

}}} // ::g::Fuse::Gestures
