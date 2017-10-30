// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MerchantsListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.app18_FuseControlsNavigationControl_Active_Property.h>
#include <_root.app18_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <_root.app18_FuseReactiveEach_Items_Property.h>
#include <_root.MerchantsListPage.h>
#include <_root.MerchantsListPage.Template.h>
#include <_root.MerchantsListPage.Template1.h>
#include <_root.NavBarTitle.h>
#include <_root.P.h>
#include <_root.Separator.h>
#include <_root.StaticResources.h>
#include <_root.Tab.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <icon.CaretDown.h>
#include <icon.City.h>
#include <icon.Funnel.h>
#include <icon.Search.h>
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
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class MerchantsListPage :2
// {
// static MerchantsListPage() :158
static void MerchantsListPage__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    MerchantsListPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 10, uString::Const("router"), uString::Const("navBar"), uString::Const("indicator"), uString::Const("page1Tab"), uString::Const("page2Tab"), uString::Const("page3Tab"), uString::Const("navigation"), uString::Const("page1"), uString::Const("page2"), uString::Const("page3"));
    MerchantsListPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Active"));
    MerchantsListPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Element.LayoutMaster"));
    MerchantsListPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    MerchantsListPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("indicator"));
    MerchantsListPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page1Tab"));
    MerchantsListPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page2Tab"));
    MerchantsListPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page3Tab"));
    MerchantsListPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("navigation"));
    MerchantsListPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page1"));
    MerchantsListPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page2"));
    MerchantsListPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page3"));
}

static void MerchantsListPage_build(uType* type)
{
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
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(118,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MerchantsListPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MerchantsListPage, indicator), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(MerchantsListPage, indicator_Element_LayoutMaster_inst), 0,
        ::g::Fuse::Visual_typeof(), offsetof(MerchantsListPage, navBar), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(MerchantsListPage, navigation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(MerchantsListPage, navigation_Active_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(MerchantsListPage, page1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MerchantsListPage, page1Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(MerchantsListPage, page2), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MerchantsListPage, page2Tab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(MerchantsListPage, page3), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(MerchantsListPage, page3Tab), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MerchantsListPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MerchantsListPage, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(MerchantsListPage, temp1_Items_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&MerchantsListPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* MerchantsListPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::BasePage_typeof();
    options.FieldCount = 145;
    options.InterfaceCount = 18;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(MerchantsListPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MerchantsListPage", options);
    type->fp_build_ = MerchantsListPage_build;
    type->fp_cctor_ = MerchantsListPage__cctor_5_fn;
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

// public MerchantsListPage(Fuse.Navigation.Router router, Fuse.Visual navBar) :162
void MerchantsListPage__ctor_9_fn(MerchantsListPage* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_9(router1, navBar1);
}

// private void InitializeUX() :170
void MerchantsListPage__InitializeUX1_fn(MerchantsListPage* __this)
{
    __this->InitializeUX1();
}

// public MerchantsListPage New(Fuse.Navigation.Router router, Fuse.Visual navBar) :162
void MerchantsListPage__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, MerchantsListPage** __retval)
{
    *__retval = MerchantsListPage::New6(router1, navBar1);
}

uSStrong<uArray*> MerchantsListPage::__g_static_nametable1_;
::g::Uno::UX::Selector MerchantsListPage::__selector0_;
::g::Uno::UX::Selector MerchantsListPage::__selector1_;
::g::Uno::UX::Selector MerchantsListPage::__selector10_;
::g::Uno::UX::Selector MerchantsListPage::__selector2_;
::g::Uno::UX::Selector MerchantsListPage::__selector3_;
::g::Uno::UX::Selector MerchantsListPage::__selector4_;
::g::Uno::UX::Selector MerchantsListPage::__selector5_;
::g::Uno::UX::Selector MerchantsListPage::__selector6_;
::g::Uno::UX::Selector MerchantsListPage::__selector7_;
::g::Uno::UX::Selector MerchantsListPage::__selector8_;
::g::Uno::UX::Selector MerchantsListPage::__selector9_;

// public MerchantsListPage(Fuse.Navigation.Router router, Fuse.Visual navBar) [instance] :162
void MerchantsListPage::ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ctor_8();
    router = router1;
    navBar = navBar1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :170
void MerchantsListPage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MerchantsListPage::__g_static_nametable1_);
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::app18_FuseControlsNavigationControl_Active_Property::New1(navigation, MerchantsListPage::__selector0_);
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Element_LayoutMaster_inst = ::g::app18_FuseElementsElement_ElementLayoutMaster_Property::New1(indicator, MerchantsListPage::__selector1_);
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::app18_FuseReactiveEach_Items_Property::New1(temp, MerchantsListPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("nearByMerchants"));
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::app18_FuseReactiveEach_Items_Property::New1(temp1, MerchantsListPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("internetMerchants"));
    ::g::Fuse::Reactive::JavaScript* temp4 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::NavBarTitle* temp5 = ::g::NavBarTitle::New4(navBar);
    ::g::Fuse::Triggers::LayoutAnimation* temp6 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp7 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Grid* temp9 = ::g::Fuse::Controls::Grid::New4();
    page1Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp10 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp11 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp12 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), navigation_Active_inst);
    page2Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp13 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp14 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp15 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), navigation_Active_inst);
    page3Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp16 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp17 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp18 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), navigation_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp19 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.2431373f, 0.5647059f, 1.0f));
    page1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp20 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp21 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::ScrollView* temp22 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp23 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::P* temp24 = ::g::P::New4();
    MerchantsListPage__Template* temp25 = MerchantsListPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp2, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp27 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    page2 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp28 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp29 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::ScrollView* temp30 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp31 = ::g::Fuse::Controls::StackPanel::New4();
    MerchantsListPage__Template1* temp32 = MerchantsListPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp3, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp34 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    page3 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp35 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp36 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::StackPanel* temp37 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp38 = ::g::Fuse::Controls::Grid::New4();
    ::g::icon::Funnel* temp39 = ::g::icon::Funnel::New4();
    ::g::P* temp40 = ::g::P::New4();
    ::g::icon::CaretDown* temp41 = ::g::icon::CaretDown::New4();
    ::g::Separator* temp42 = ::g::Separator::New4();
    ::g::Fuse::Controls::Grid* temp43 = ::g::Fuse::Controls::Grid::New4();
    ::g::icon::City* temp44 = ::g::icon::City::New4();
    ::g::P* temp45 = ::g::P::New4();
    ::g::icon::CaretDown* temp46 = ::g::icon::CaretDown::New4();
    ::g::Separator* temp47 = ::g::Separator::New4();
    ::g::Fuse::Controls::Grid* temp48 = ::g::Fuse::Controls::Grid::New4();
    ::g::icon::Search* temp49 = ::g::icon::Search::New4();
    ::g::Fuse::Controls::TextInput* temp50 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Separator* temp51 = ::g::Separator::New4();
    ::g::P* temp52 = ::g::P::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp53 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp4->LineNumber(4);
    temp4->FileName(uString::Const("Pages/Merchant/MerchantsListPage.ux"));
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::MerchantsListPage527278f6()));
    temp5->Text(uString::Const("Negozi"));
    uPtr(indicator)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(indicator)->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    uPtr(indicator)->Alignment(12);
    uPtr(indicator)->Name(MerchantsListPage::__selector3_);
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp7);
    temp7->X(1.0f);
    temp7->Duration(0.4);
    temp7->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_);
    temp7->Easing(::g::Fuse::Animations::Easing::BackIn_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), navigation);
    temp9->ColumnCount(3);
    temp9->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 2);
    temp9->Background(temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page3Tab);
    uPtr(page1Tab)->Name(MerchantsListPage::__selector4_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1Tab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    temp10->Text(uString::Const("VICINO A"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp12);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp12, page1);
    uPtr(page2Tab)->Name(MerchantsListPage::__selector5_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2Tab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    temp13->Text(uString::Const("SU INTERNET"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp15);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp15, page2);
    uPtr(page3Tab)->Name(MerchantsListPage::__selector6_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3Tab)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    temp16->Text(uString::Const("RICERCA"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp18);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp18, page3);
    uPtr(navigation)->Name(MerchantsListPage::__selector7_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page3);
    uPtr(page1)->Name(MerchantsListPage::__selector8_);
    uPtr(page1)->Background(temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp22);
    temp20->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp21);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp21, page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp23);
    temp23->Margin(::g::Uno::Float4__New2(16.0f, 16.0f, 16.0f, 16.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    temp24->Value(uString::Const("Questa \303\250 la lista dei 10 negozi pi\303\271 vicini al punto in cui ti trovi."));
    temp24->TextWrapping(1);
    temp24->FontSize(14.0f);
    temp24->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp26);
    uPtr(page2)->Name(MerchantsListPage::__selector9_);
    uPtr(page2)->Background(temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp30);
    temp28->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp29);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp29, page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp31);
    temp31->Margin(::g::Uno::Float4__New2(16.0f, 16.0f, 16.0f, 16.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp33);
    uPtr(page3)->Name(MerchantsListPage::__selector10_);
    uPtr(page3)->Background(temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    temp35->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp37);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp36, page3Tab);
    temp37->ItemSpacing(10.0f);
    temp37->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp52);
    temp38->Columns(uString::Const("40,1*,40"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    temp39->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp40->Value(uString::Const("Tutte le categorie"));
    temp40->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp40->Alignment(1);
    temp42->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp43->Columns(uString::Const("40,1*,40"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp46);
    temp44->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp45->Value(uString::Const("Scegli il comune"));
    temp45->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp45->Alignment(1);
    temp47->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp48->Columns(uString::Const("40,1*"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp50);
    temp49->FontSize(22.0f);
    temp49->Alignment(10);
    temp50->PlaceholderText(uString::Const("Cerca nel nome"));
    temp50->PlaceholderColor(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp50->Font(::g::StaticResources::RegularFont());
    temp51->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp52->Value(uString::Const("Scegli almeno un criterio di ricerca"));
    temp52->FontSize(14.0f);
    temp52->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp52->Alignment(1);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page3Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
}

// public MerchantsListPage New(Fuse.Navigation.Router router, Fuse.Visual navBar) [static] :162
MerchantsListPage* MerchantsListPage::New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    MerchantsListPage* obj1 = (MerchantsListPage*)uNew(MerchantsListPage_typeof());
    obj1->ctor_9(router1, navBar1);
    return obj1;
}
// }

} // ::g
