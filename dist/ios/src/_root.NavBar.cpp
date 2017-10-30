// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NavBar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BackButton.h>
#include <_root.BaseText.h>
#include <_root.BoldText.h>
#include <_root.NavBar.h>
#include <_root.NavBarLogo.h>
#include <_root.SmallText.h>
#include <_root.TopBarLogo.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileCanGoBack.h>
#include <Fuse.Navigation.WhileHistoryTrigger.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.RaiseUserEvent.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.UserEvent.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{

// public partial sealed class NavBar :2
// {
// static NavBar() :6
static void NavBar__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    NavBar::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"openSideBar"*/]);
}

static void NavBar_build(uType* type)
{
    ::STRINGS[0] = uString::Const("openSideBar");
    ::STRINGS[1] = uString::Const("Credito");
    ::STRINGS[2] = uString::Const("174,00\342\202\254");
    ::STRINGS[3] = uString::Const("2");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(112,
        ::g::Fuse::UserEvent_typeof(), offsetof(NavBar, openSideBar), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(NavBar, router), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NavBar::__selector0_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* NavBar_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 115;
    options.InterfaceCount = 18;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(NavBar);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("NavBar", options);
    type->fp_build_ = NavBar_build;
    type->fp_cctor_ = NavBar__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public NavBar(Fuse.Navigation.Router router) :10
void NavBar__ctor_7_fn(NavBar* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :16
void NavBar__InitializeUX_fn(NavBar* __this)
{
    __this->InitializeUX();
}

// public NavBar New(Fuse.Navigation.Router router) :10
void NavBar__New4_fn(::g::Fuse::Navigation::Router* router1, NavBar** __retval)
{
    *__retval = NavBar::New4(router1);
}

::g::Uno::UX::Selector NavBar::__selector0_;

// public NavBar(Fuse.Navigation.Router router) [instance] :10
void NavBar::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :16
void NavBar::InitializeUX()
{
    openSideBar = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Navigation::WhileCanGoBack* temp = ::g::Fuse::Navigation::WhileCanGoBack::New2();
    ::g::BackButton* temp1 = ::g::BackButton::New4();
    ::g::Fuse::Gestures::Clicked* temp2 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::GoBack* temp3 = ::g::Fuse::Navigation::GoBack::New2();
    ::g::Fuse::Triggers::AddingAnimation* temp4 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Move* temp5 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::RemovingAnimation* temp6 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Move* temp7 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::WhileCanGoBack* temp8 = ::g::Fuse::Navigation::WhileCanGoBack::New2();
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::TopBarLogo* temp10 = ::g::TopBarLogo::New4();
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp12 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::BaseText* temp13 = ::g::BaseText::New4();
    ::g::BoldText* temp14 = ::g::BoldText::New5();
    ::g::Fuse::Controls::StackPanel* temp15 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp16 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Circle* temp17 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Translation* temp18 = ::g::Fuse::Translation::New2();
    ::g::SmallText* temp19 = ::g::SmallText::New4();
    ::g::NavBarLogo* temp20 = ::g::NavBarLogo::New4();
    ::g::Fuse::Gestures::Clicked* temp21 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp22 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(openSideBar)->Name(NavBar::__selector0_);
    temp->NavigationContext((uObject*)router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp3);
    temp3->NavigationContext((uObject*)router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp5);
    temp5->X(-1.0f);
    temp5->Duration(0.8);
    temp5->RelativeTo(::g::Fuse::TranslationModes::Size_);
    temp5->Easing(::g::Fuse::Animations::Easing::CubicIn_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    temp7->X(-1.0f);
    temp7->Duration(0.8);
    temp7->RelativeTo(::g::Fuse::TranslationModes::Size_);
    temp7->Easing(::g::Fuse::Animations::Easing::CubicOut_);
    temp8->Invert(true);
    temp8->NavigationContext((uObject*)router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->Orientation(0);
    temp9->Padding(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp11->Orientation(0);
    temp11->ItemSpacing(10.0f);
    temp11->HitTestMode(2);
    temp11->Alignment(3);
    temp11->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 5.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp12->Orientation(1);
    temp12->ItemSpacing(-5.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp13->Value(::STRINGS[1/*"Credito"*/]);
    temp13->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp13->Alignment(3);
    temp14->Value(::STRINGS[2/*"174,00€"*/]);
    temp14->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp14->Alignment(3);
    temp15->Margin(::g::Uno::Float4__New2(0.0f, -5.0f, 5.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp17->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp17->Width(::g::Uno::UX::Size__New1(10.0f, 1));
    temp17->Height(::g::Uno::UX::Size__New1(10.0f, 1));
    temp18->X(10.0f);
    temp18->Y(25.0f);
    temp19->Value(::STRINGS[3/*"2"*/]);
    temp19->TextAlignment(1);
    temp19->Margin(::g::Uno::Float4__New2(0.0f, -2.0f, 0.0f, 0.0f));
    temp19->Layer(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    temp22->EventName(NavBar::__selector0_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), openSideBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
}

// public NavBar New(Fuse.Navigation.Router router) [static] :10
NavBar* NavBar::New4(::g::Fuse::Navigation::Router* router1)
{
    NavBar* obj1 = (NavBar*)uNew(NavBar_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
