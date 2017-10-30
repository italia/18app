// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MyCouponPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.app18_FuseControlsNavigationControl_Active_Property.h>
#include <_root.app18_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <_root.app18_ListMyCoupon_Items_Property.h>
#include <_root.ListMyCoupon.h>
#include <_root.MyCouponPage.h>
#include <_root.NavBarTitle.h>
#include <_root.Tab.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[24];
static uType* TYPES[8];

namespace g{

// public partial sealed class MyCouponPage :2
// {
// static MyCouponPage() :32
static void MyCouponPage__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    MyCouponPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"navBar"*/], ::STRINGS[2/*"indicator"*/], ::STRINGS[3/*"page1Tab"*/], ::STRINGS[4/*"page2Tab"*/], ::STRINGS[5/*"page3Tab"*/], ::STRINGS[6/*"navigation"*/], ::STRINGS[7/*"page1"*/], ::STRINGS[8/*"page2"*/], ::STRINGS[9/*"page3"*/]);
    MyCouponPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Active"*/]);
    MyCouponPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Element.Lay...*/]);
    MyCouponPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"Items"*/]);
    MyCouponPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"indicator"*/]);
    MyCouponPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"page1Tab"*/]);
    MyCouponPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"page2Tab"*/]);
    MyCouponPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"page3Tab"*/]);
    MyCouponPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"navigation"*/]);
    MyCouponPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"page1"*/]);
    MyCouponPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"page2"*/]);
    MyCouponPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"page3"*/]);
}

static void MyCouponPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("navBar");
    ::STRINGS[2] = uString::Const("indicator");
    ::STRINGS[3] = uString::Const("page1Tab");
    ::STRINGS[4] = uString::Const("page2Tab");
    ::STRINGS[5] = uString::Const("page3Tab");
    ::STRINGS[6] = uString::Const("navigation");
    ::STRINGS[7] = uString::Const("page1");
    ::STRINGS[8] = uString::Const("page2");
    ::STRINGS[9] = uString::Const("page3");
    ::STRINGS[10] = uString::Const("Active");
    ::STRINGS[11] = uString::Const("Element.LayoutMaster");
    ::STRINGS[12] = uString::Const("Items");
    ::STRINGS[13] = uString::Const("items");
    ::STRINGS[14] = uString::Const("validItems");
    ::STRINGS[15] = uString::Const("notValidItems");
    ::STRINGS[16] = uString::Const("Pages/MyCoupon/MyCouponPage.ux");
    ::STRINGS[17] = uString::Const("I tuoi buoni");
    ::STRINGS[18] = uString::Const("TUTTI");
    ::STRINGS[19] = uString::Const("DA SPENDERE");
    ::STRINGS[20] = uString::Const("GI\303\200 SPESI");
    ::STRINGS[21] = uString::Const("Ci sono 3 buoni da spendere");
    ::STRINGS[22] = uString::Const("Buoni da spendere");
    ::STRINGS[23] = uString::Const("Buoni gia' spesi");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::DockPanel_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Controls::LayoutControl_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(118,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MyCouponPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MyCouponPage, indicator), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(MyCouponPage, indicator_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Visual_typeof(), offsetof(MyCouponPage, navBar), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(MyCouponPage, navigation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(MyCouponPage, navigation_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(MyCouponPage, page1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MyCouponPage, page1Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(MyCouponPage, page2), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MyCouponPage, page2Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(MyCouponPage, page3), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MyCouponPage, page3Tab), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MyCouponPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MyCouponPage, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MyCouponPage, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MyCouponPage, temp2_Items_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&MyCouponPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MyCouponPage::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* MyCouponPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::BasePage_typeof();
    options.FieldCount = 146;
    options.InterfaceCount = 18;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(MyCouponPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MyCouponPage", options);
    type->fp_build_ = MyCouponPage_build;
    type->fp_cctor_ = MyCouponPage__cctor_5_fn;
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

// public MyCouponPage(Fuse.Navigation.Router router, Fuse.Visual navBar) :36
void MyCouponPage__ctor_9_fn(MyCouponPage* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_9(router1, navBar1);
}

// private void InitializeUX() :44
void MyCouponPage__InitializeUX1_fn(MyCouponPage* __this)
{
    __this->InitializeUX1();
}

// public MyCouponPage New(Fuse.Navigation.Router router, Fuse.Visual navBar) :36
void MyCouponPage__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, MyCouponPage** __retval)
{
    *__retval = MyCouponPage::New6(router1, navBar1);
}

uSStrong<uArray*> MyCouponPage::__g_static_nametable1_;
::g::Uno::UX::Selector MyCouponPage::__selector0_;
::g::Uno::UX::Selector MyCouponPage::__selector1_;
::g::Uno::UX::Selector MyCouponPage::__selector10_;
::g::Uno::UX::Selector MyCouponPage::__selector2_;
::g::Uno::UX::Selector MyCouponPage::__selector3_;
::g::Uno::UX::Selector MyCouponPage::__selector4_;
::g::Uno::UX::Selector MyCouponPage::__selector5_;
::g::Uno::UX::Selector MyCouponPage::__selector6_;
::g::Uno::UX::Selector MyCouponPage::__selector7_;
::g::Uno::UX::Selector MyCouponPage::__selector8_;
::g::Uno::UX::Selector MyCouponPage::__selector9_;

// public MyCouponPage(Fuse.Navigation.Router router, Fuse.Visual navBar) [instance] :36
void MyCouponPage::ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ctor_8();
    router = router1;
    navBar = navBar1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :44
void MyCouponPage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MyCouponPage::__g_static_nametable1_);
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::app18_FuseControlsNavigationControl_Active_Property::New1(navigation, MyCouponPage::__selector0_);
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Element_LayoutMaster_inst = ::g::app18_FuseElementsElement_ElementLayoutMaster_Property::New1(indicator, MyCouponPage::__selector1_);
    ::g::ListMyCoupon* temp = ::g::ListMyCoupon::New5();
    temp_Items_inst = ::g::app18_ListMyCoupon_Items_Property::New1(temp, MyCouponPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"items"*/]);
    ::g::ListMyCoupon* temp1 = ::g::ListMyCoupon::New5();
    temp1_Items_inst = ::g::app18_ListMyCoupon_Items_Property::New1(temp1, MyCouponPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"validItems"*/]);
    ::g::ListMyCoupon* temp2 = ::g::ListMyCoupon::New5();
    temp2_Items_inst = ::g::app18_ListMyCoupon_Items_Property::New1(temp2, MyCouponPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"notValidItems"*/]);
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::NavBarTitle* temp7 = ::g::NavBarTitle::New4(navBar);
    ::g::Fuse::Triggers::LayoutAnimation* temp8 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp9 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp10 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::BottomBarBackground* temp11 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::Grid* temp12 = ::g::Fuse::Controls::Grid::New4();
    page1Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp13 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp14 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp15 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    page2Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp16 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp17 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp18 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    page3Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp19 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp20 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp21 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp22 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2431373f, 0.5647059f, 1.0f));
    page1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp23 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp24 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp3, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp26 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    page2 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp27 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp28 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp4, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp30 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    page3 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp31 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp32 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp5, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp34 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->LineNumber(4);
    temp6->FileName(::STRINGS[16/*"Pages/MyCou...*/]);
    temp6->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::MyCouponPage363608ab()));
    temp7->Text(::STRINGS[17/*"I tuoi buoni"*/]);
    uPtr(indicator)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicator)->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    uPtr(indicator)->Alignment(12);
    uPtr(indicator)->Name(MyCouponPage::__selector3_);
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    temp9->X(1.0f);
    temp9->Duration(0.4);
    temp9->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_);
    temp9->Easing(::g::Fuse::Animations::Easing::BackIn_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 3);
    temp12->ColumnCount(3);
    temp12->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp12, 2);
    temp12->Background(temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page3Tab);
    uPtr(page1Tab)->Name(MyCouponPage::__selector4_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1Tab)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->Text(::STRINGS[18/*"TUTTI"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp15, page1);
    uPtr(page2Tab)->Name(MyCouponPage::__selector5_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2Tab)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp16->Text(::STRINGS[19/*"DA SPENDERE"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp18);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp18, page2);
    uPtr(page3Tab)->Name(MyCouponPage::__selector6_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3Tab)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp19->Text(::STRINGS[20/*"GIÀ SPESI"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp21);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp21, page3);
    uPtr(navigation)->Name(MyCouponPage::__selector7_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page3);
    uPtr(page1)->Name(MyCouponPage::__selector8_);
    uPtr(page1)->Background(temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp23->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp24);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp24, page1Tab);
    temp->Title(::STRINGS[21/*"Ci sono 3 b...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    uPtr(page2)->Name(MyCouponPage::__selector9_);
    uPtr(page2)->Background(temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp27->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp28);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp28, page2Tab);
    temp1->Title(::STRINGS[22/*"Buoni da sp...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    uPtr(page3)->Name(MyCouponPage::__selector10_);
    uPtr(page3)->Background(temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp31->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp32);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp32, page3Tab);
    temp2->Title(::STRINGS[23/*"Buoni gia' ...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
}

// public MyCouponPage New(Fuse.Navigation.Router router, Fuse.Visual navBar) [static] :36
MyCouponPage* MyCouponPage::New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    MyCouponPage* obj1 = (MyCouponPage*)uNew(MyCouponPage_typeof());
    obj1->ctor_9(router1, navBar1);
    return obj1;
}
// }

} // ::g
