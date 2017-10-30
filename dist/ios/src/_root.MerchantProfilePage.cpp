// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MerchantProfilePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.app18_cover_Image_Property.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.app18_FuseTriggersWhileString_Value_Property.h>
#include <_root.app18_NavBarTitle_Text_Property.h>
#include <_root.B.h>
#include <_root.ButtonIcon.h>
#include <_root.cover.h>
#include <_root.H2.h>
#include <_root.MerchantProfilePage.h>
#include <_root.MerchantProfilePage.Template.h>
#include <_root.MerchantProfilePage.Template1.h>
#include <_root.MerchantProfilePage.Template2.h>
#include <_root.NavBarTitle.h>
#include <_root.P.h>
#include <app18.Button.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Triggers.WhileString.h>
#include <icon.Link.h>
#include <icon.MapMarker.h>
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
#include <Uno.UX.Template.h>

namespace g{

// public partial sealed class MerchantProfilePage :2
// {
// static MerchantProfilePage() :93
static void MerchantProfilePage__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    MerchantProfilePage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 6, uString::Const("router"), uString::Const("navBar"), uString::Const("temp_eb10"), uString::Const("temp_eb11"), uString::Const("temp_eb12"), uString::Const("temp_eb13"));
    MerchantProfilePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Text"));
    MerchantProfilePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Image"));
    MerchantProfilePage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
}

static void MerchantProfilePage_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Controls::DockPanel_typeof());
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(MerchantProfilePage, __g_nametable1), 0,
        ::g::Fuse::Visual_typeof(), offsetof(MerchantProfilePage, navBar), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MerchantProfilePage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MerchantProfilePage, temp_eb10), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MerchantProfilePage, temp_eb11), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MerchantProfilePage, temp_eb12), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MerchantProfilePage, temp_eb13), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(MerchantProfilePage, temp1_Image_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantProfilePage, temp9_Value_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&MerchantProfilePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantProfilePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantProfilePage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantProfilePage::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* MerchantProfilePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::BasePage_typeof();
    options.FieldCount = 140;
    options.InterfaceCount = 18;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MerchantProfilePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MerchantProfilePage", options);
    type->fp_build_ = MerchantProfilePage_build;
    type->fp_cctor_ = MerchantProfilePage__cctor_5_fn;
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

// public MerchantProfilePage(Fuse.Navigation.Router router, Fuse.Visual navBar) :97
void MerchantProfilePage__ctor_9_fn(MerchantProfilePage* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_9(router1, navBar1);
}

// private void InitializeUX() :105
void MerchantProfilePage__InitializeUX1_fn(MerchantProfilePage* __this)
{
    __this->InitializeUX1();
}

// public MerchantProfilePage New(Fuse.Navigation.Router router, Fuse.Visual navBar) :97
void MerchantProfilePage__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, MerchantProfilePage** __retval)
{
    *__retval = MerchantProfilePage::New6(router1, navBar1);
}

uSStrong<uArray*> MerchantProfilePage::__g_static_nametable1_;
::g::Uno::UX::Selector MerchantProfilePage::__selector0_;
::g::Uno::UX::Selector MerchantProfilePage::__selector1_;
::g::Uno::UX::Selector MerchantProfilePage::__selector2_;

// public MerchantProfilePage(Fuse.Navigation.Router router, Fuse.Visual navBar) [instance] :97
void MerchantProfilePage::ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ctor_8();
    router = router1;
    navBar = navBar1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :105
void MerchantProfilePage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MerchantProfilePage::__g_static_nametable1_);
    ::g::NavBarTitle* temp = ::g::NavBarTitle::New4(navBar);
    temp_Text_inst = ::g::app18_NavBarTitle_Text_Property::New1(temp, MerchantProfilePage::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(uString::Const("titlePage"));
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::cover* temp1 = ::g::cover::New5();
    temp1_Image_inst = ::g::app18_cover_Image_Property::New1(temp1, MerchantProfilePage::__selector1_);
    ::g::Fuse::Reactive::Member* temp13 = ::g::Fuse::Reactive::Member::New1(temp12, uString::Const("cover"));
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::B* temp2 = ::g::B::New4();
    temp2_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp2, MerchantProfilePage::__selector2_);
    ::g::Fuse::Reactive::Member* temp15 = ::g::Fuse::Reactive::Member::New1(temp14, uString::Const("tag"));
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::H2* temp3 = ::g::H2::New4();
    temp3_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp3, MerchantProfilePage::__selector2_);
    ::g::Fuse::Reactive::Member* temp17 = ::g::Fuse::Reactive::Member::New1(temp16, uString::Const("name"));
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::Fuse::Reactive::Member* temp19 = ::g::Fuse::Reactive::Member::New1(temp18, uString::Const("address"));
    ::g::Fuse::Reactive::Member* temp20 = ::g::Fuse::Reactive::Member::New1(temp19, uString::Const("street"));
    uString* temp21 = uString::Const(" ");
    ::g::Fuse::Reactive::Constant* temp22 = ::g::Fuse::Reactive::Constant::New1(temp21);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::Fuse::Reactive::Member* temp24 = ::g::Fuse::Reactive::Member::New1(temp23, uString::Const("address"));
    ::g::Fuse::Reactive::Member* temp25 = ::g::Fuse::Reactive::Member::New1(temp24, uString::Const("postalCode"));
    ::g::Fuse::Reactive::Add* temp26 = ::g::Fuse::Reactive::Add::New1(temp22, temp25);
    ::g::P* temp4 = ::g::P::New4();
    temp4_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp4, MerchantProfilePage::__selector2_);
    ::g::Fuse::Reactive::Add* temp27 = ::g::Fuse::Reactive::Add::New1(temp20, temp26);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::Fuse::Reactive::Member* temp29 = ::g::Fuse::Reactive::Member::New1(temp28, uString::Const("address"));
    ::g::Fuse::Reactive::Member* temp30 = ::g::Fuse::Reactive::Member::New1(temp29, uString::Const("city"));
    uString* temp31 = uString::Const(" (");
    ::g::Fuse::Reactive::Constant* temp32 = ::g::Fuse::Reactive::Constant::New1(temp31);
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::Fuse::Reactive::Member* temp34 = ::g::Fuse::Reactive::Member::New1(temp33, uString::Const("address"));
    ::g::Fuse::Reactive::Member* temp35 = ::g::Fuse::Reactive::Member::New1(temp34, uString::Const("state"));
    uString* temp36 = uString::Const(")");
    ::g::Fuse::Reactive::Constant* temp37 = ::g::Fuse::Reactive::Constant::New1(temp36);
    ::g::Fuse::Reactive::Add* temp38 = ::g::Fuse::Reactive::Add::New1(temp35, temp37);
    ::g::Fuse::Reactive::Add* temp39 = ::g::Fuse::Reactive::Add::New1(temp32, temp38);
    ::g::P* temp5 = ::g::P::New4();
    temp5_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp5, MerchantProfilePage::__selector2_);
    ::g::Fuse::Reactive::Add* temp40 = ::g::Fuse::Reactive::Add::New1(temp30, temp39);
    ::g::Fuse::Reactive::Data* temp41 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::Fuse::Triggers::WhileString* temp6 = ::g::Fuse::Triggers::WhileString::New2();
    temp6_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp6, MerchantProfilePage::__selector2_);
    ::g::Fuse::Reactive::Member* temp42 = ::g::Fuse::Reactive::Member::New1(temp41, uString::Const("type"));
    ::g::Fuse::Reactive::Data* temp43 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::P* temp7 = ::g::P::New4();
    temp7_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp7, MerchantProfilePage::__selector2_);
    ::g::Fuse::Reactive::Member* temp44 = ::g::Fuse::Reactive::Member::New1(temp43, uString::Const("site"));
    ::g::Fuse::Reactive::Data* temp45 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::Fuse::Triggers::WhileString* temp8 = ::g::Fuse::Triggers::WhileString::New2();
    temp8_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp8, MerchantProfilePage::__selector2_);
    ::g::Fuse::Reactive::Member* temp46 = ::g::Fuse::Reactive::Member::New1(temp45, uString::Const("type"));
    ::g::Fuse::Reactive::Data* temp47 = ::g::Fuse::Reactive::Data::New1(uString::Const("CreateCoupon"));
    ::g::Fuse::Reactive::Data* temp48 = ::g::Fuse::Reactive::Data::New1(uString::Const("OpenMap"));
    ::g::Fuse::Reactive::Data* temp49 = ::g::Fuse::Reactive::Data::New1(uString::Const("OpenMap"));
    ::g::Fuse::Reactive::Data* temp50 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::Fuse::Triggers::WhileString* temp9 = ::g::Fuse::Triggers::WhileString::New2();
    temp9_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp9, MerchantProfilePage::__selector2_);
    ::g::Fuse::Reactive::Member* temp51 = ::g::Fuse::Reactive::Member::New1(temp50, uString::Const("type"));
    ::g::Fuse::Reactive::Data* temp52 = ::g::Fuse::Reactive::Data::New1(uString::Const("OpenSite"));
    ::g::Fuse::Reactive::Data* temp53 = ::g::Fuse::Reactive::Data::New1(uString::Const("merchant"));
    ::g::Fuse::Triggers::WhileString* temp10 = ::g::Fuse::Triggers::WhileString::New2();
    temp10_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp10, MerchantProfilePage::__selector2_);
    ::g::Fuse::Reactive::Member* temp54 = ::g::Fuse::Reactive::Member::New1(temp53, uString::Const("type"));
    ::g::Fuse::Reactive::JavaScript* temp55 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp56 = ::g::Fuse::Reactive::DataBinding::New1(temp_Text_inst, (uObject*)temp11, 3);
    ::g::Fuse::Reactive::DataBinding* temp57 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Image_inst, (uObject*)temp13, 3);
    ::g::Fuse::Controls::DockPanel* temp58 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp59 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp60 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp15, 3);
    ::g::Fuse::Controls::StackPanel* temp61 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp62 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp17, 3);
    ::g::Fuse::Controls::StackPanel* temp63 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::icon::MapMarker* temp64 = ::g::icon::MapMarker::New4();
    ::g::Fuse::Controls::StackPanel* temp65 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp66 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp27, 3);
    ::g::Fuse::Reactive::DataBinding* temp67 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp40, 3);
    ::g::Fuse::Reactive::DataBinding* temp68 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp42, 3);
    ::g::Fuse::Controls::StackPanel* temp69 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::icon::Link* temp70 = ::g::icon::Link::New4();
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp44, 3);
    ::g::Fuse::Reactive::DataBinding* temp72 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp46, 3);
    ::g::Fuse::Controls::StackPanel* temp73 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::app18::Button* temp74 = ::g::app18::Button::New4();
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp47);
    ::g::Fuse::Controls::Grid* temp75 = ::g::Fuse::Controls::Grid::New4();
    ::g::ButtonIcon* temp76 = ::g::ButtonIcon::New5();
    MerchantProfilePage__Template* Icon = MerchantProfilePage__Template::New2(this, this);
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp48);
    ::g::ButtonIcon* temp77 = ::g::ButtonIcon::New5();
    MerchantProfilePage__Template1* Icon1 = MerchantProfilePage__Template1::New2(this, this);
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp49);
    ::g::Fuse::Reactive::DataBinding* temp78 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp51, 3);
    ::g::ButtonIcon* temp79 = ::g::ButtonIcon::New5();
    MerchantProfilePage__Template2* Icon2 = MerchantProfilePage__Template2::New2(this, this);
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp52);
    ::g::Fuse::Reactive::DataBinding* temp80 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp54, 3);
    temp55->LineNumber(4);
    temp55->FileName(uString::Const("Pages/Merchant/MerchantProfilePage.ux"));
    temp55->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::MerchantProfilePagea21b0452()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp73);
    temp59->Padding(::g::Uno::Float4__New2(24.0f, 24.0f, 24.0f, 24.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp61);
    temp2->TextWrapping(1);
    temp2->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Alignment(1);
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp60);
    ::g::Fuse::Controls::DockPanel::SetDock(temp61, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    temp3->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp62);
    temp6->Equals2(uString::Const("local_store"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp68);
    temp63->Orientation(0);
    temp63->ItemSpacing(8.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp65);
    temp64->FontSize(20.0f);
    temp64->Alignment(8);
    temp65->ItemSpacing(-6.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    temp4->FontSize(14.0f);
    temp4->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp4->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp66);
    temp5->FontSize(14.0f);
    temp5->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp5->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp67);
    temp8->Equals2(uString::Const("internet_store"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp72);
    temp69->Orientation(0);
    temp69->ItemSpacing(8.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    temp70->FontSize(20.0f);
    temp70->Alignment(8);
    temp7->FontSize(14.0f);
    temp7->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp7->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp71);
    temp73->ItemSpacing(5.0f);
    temp73->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp73->Padding(::g::Uno::Float4__New2(24.0f, 24.0f, 24.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp73, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp73->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp73->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp73->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    temp74->Value(uString::Const("NUOVO BUONO"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp74, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb10);
    temp9->Equals2(uString::Const("local_store"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp78);
    temp75->Columns(uString::Const("1*,1*"));
    temp75->CellSpacing(10.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp77);
    temp76->HitTestMode(6);
    temp76->Alignment(10);
    temp76->Value(uString::Const("MAPPA"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp76, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Icon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb11);
    temp77->HitTestMode(6);
    temp77->Alignment(10);
    temp77->Value(uString::Const("PERCORSO"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp77, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Icon1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb12);
    temp10->Equals2(uString::Const("internet_store"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp80);
    temp79->HitTestMode(6);
    temp79->Alignment(10);
    temp79->Value(uString::Const("VAI AL SITO DEL NEGOZIO"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp79, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Icon2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb13);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp58);
}

// public MerchantProfilePage New(Fuse.Navigation.Router router, Fuse.Visual navBar) [static] :97
MerchantProfilePage* MerchantProfilePage::New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    MerchantProfilePage* obj1 = (MerchantProfilePage*)uNew(MerchantProfilePage_typeof());
    obj1->ctor_9(router1, navBar1);
    return obj1;
}
// }

} // ::g
