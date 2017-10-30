// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NewCouponMerchantStep3Page.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.app18_List_Items_Property.h>
#include <_root.app18_List_Selected_Property.h>
#include <_root.app18_TextInputPrice_Value_Property.h>
#include <_root.BannerMerchant.h>
#include <_root.H3.h>
#include <_root.List.h>
#include <_root.NavBarTitle.h>
#include <_root.NewCouponMerchantStep3Page.h>
#include <_root.P.h>
#include <_root.TextInputPrice.h>
#include <app18.Button.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
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
static uString* STRINGS[16];
static uType* TYPES[5];

namespace g{

// public partial sealed class NewCouponMerchantStep3Page :2
// {
// static NewCouponMerchantStep3Page() :16
static void NewCouponMerchantStep3Page__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    NewCouponMerchantStep3Page::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"navBar"*/], ::STRINGS[2/*"temp_eb19"*/]);
    NewCouponMerchantStep3Page::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Items"*/]);
    NewCouponMerchantStep3Page::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Selected"*/]);
    NewCouponMerchantStep3Page::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Value"*/]);
}

static void NewCouponMerchantStep3Page_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("navBar");
    ::STRINGS[2] = uString::Const("temp_eb19");
    ::STRINGS[3] = uString::Const("Items");
    ::STRINGS[4] = uString::Const("Selected");
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("items");
    ::STRINGS[7] = uString::Const("selected");
    ::STRINGS[8] = uString::Const("price");
    ::STRINGS[9] = uString::Const("onTapCreateCoupon");
    ::STRINGS[10] = uString::Const("Pages/NewCouponMerchant/NewCouponMerchantStep3Page.ux");
    ::STRINGS[11] = uString::Const("Nuovo buono: valore");
    ::STRINGS[12] = uString::Const("Inserisci il valore del buono");
    ::STRINGS[13] = uString::Const("Valore");
    ::STRINGS[14] = uString::Const("499,99");
    ::STRINGS[15] = uString::Const("CREA");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(118,
        ::g::Uno::UX::NameTable_typeof(), offsetof(NewCouponMerchantStep3Page, __g_nametable1), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NewCouponMerchantStep3Page, navBar), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(NewCouponMerchantStep3Page, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(NewCouponMerchantStep3Page, temp_eb19), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(NewCouponMerchantStep3Page, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(NewCouponMerchantStep3Page, temp_Selected_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(NewCouponMerchantStep3Page, temp1_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&NewCouponMerchantStep3Page::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NewCouponMerchantStep3Page::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NewCouponMerchantStep3Page::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NewCouponMerchantStep3Page::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* NewCouponMerchantStep3Page_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::BasePage_typeof();
    options.FieldCount = 129;
    options.InterfaceCount = 18;
    options.ObjectSize = sizeof(NewCouponMerchantStep3Page);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("NewCouponMerchantStep3Page", options);
    type->fp_build_ = NewCouponMerchantStep3Page_build;
    type->fp_cctor_ = NewCouponMerchantStep3Page__cctor_5_fn;
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

// public NewCouponMerchantStep3Page(Fuse.Navigation.Router router, Fuse.Visual navBar) :20
void NewCouponMerchantStep3Page__ctor_9_fn(NewCouponMerchantStep3Page* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_9(router1, navBar1);
}

// private void InitializeUX() :28
void NewCouponMerchantStep3Page__InitializeUX1_fn(NewCouponMerchantStep3Page* __this)
{
    __this->InitializeUX1();
}

// public NewCouponMerchantStep3Page New(Fuse.Navigation.Router router, Fuse.Visual navBar) :20
void NewCouponMerchantStep3Page__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, NewCouponMerchantStep3Page** __retval)
{
    *__retval = NewCouponMerchantStep3Page::New6(router1, navBar1);
}

uSStrong<uArray*> NewCouponMerchantStep3Page::__g_static_nametable1_;
::g::Uno::UX::Selector NewCouponMerchantStep3Page::__selector0_;
::g::Uno::UX::Selector NewCouponMerchantStep3Page::__selector1_;
::g::Uno::UX::Selector NewCouponMerchantStep3Page::__selector2_;

// public NewCouponMerchantStep3Page(Fuse.Navigation.Router router, Fuse.Visual navBar) [instance] :20
void NewCouponMerchantStep3Page::ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ctor_8();
    router = router1;
    navBar = navBar1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :28
void NewCouponMerchantStep3Page::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, NewCouponMerchantStep3Page::__g_static_nametable1_);
    ::g::List* temp = ::g::List::New5();
    temp_Items_inst = ::g::app18_List_Items_Property::New1(temp, NewCouponMerchantStep3Page::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"items"*/]);
    temp_Selected_inst = ::g::app18_List_Selected_Property::New1(temp, NewCouponMerchantStep3Page::__selector1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"selected"*/]);
    ::g::TextInputPrice* temp1 = ::g::TextInputPrice::New4();
    temp1_Value_inst = ::g::app18_TextInputPrice_Value_Property::New1(temp1, NewCouponMerchantStep3Page::__selector2_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"price"*/]);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"onTapCreate...*/]);
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::NavBarTitle* temp7 = ::g::NavBarTitle::New4(navBar);
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::BannerMerchant* temp9 = ::g::BannerMerchant::New4();
    ::g::Fuse::Controls::ScrollView* temp10 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp_Selected_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::StackPanel* temp14 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::H3* temp15 = ::g::H3::New4();
    ::g::Fuse::Controls::StackPanel* temp16 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::P* temp17 = ::g::P::New4();
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp4, 3);
    ::g::app18::Button* temp19 = ::g::app18::Button::New4();
    temp_eb19 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    temp6->LineNumber(3);
    temp6->FileName(::STRINGS[10/*"Pages/NewCo...*/]);
    temp6->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::NewCouponMerchantStep3Page66ac1306()));
    temp7->Text(::STRINGS[11/*"Nuovo buono...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp14->Margin(::g::Uno::Float4__New2(23.0f, 0.0f, 23.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp15->Value(::STRINGS[12/*"Inserisci i...*/]);
    temp15->Alignment(1);
    temp15->Margin(::g::Uno::Float4__New2(0.0f, 25.0f, 0.0f, 0.0f));
    temp16->Orientation(0);
    temp16->ItemSpacing(16.0f);
    temp16->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp17->Value(::STRINGS[13/*"Valore"*/]);
    temp1->MinWidth(::g::Uno::UX::Size__New1(40.0f, 1));
    temp1->PlaceholderText(::STRINGS[14/*"499,99"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp19->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp19->Value(::STRINGS[15/*"CREA"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp19, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb19)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb19);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
}

// public NewCouponMerchantStep3Page New(Fuse.Navigation.Router router, Fuse.Visual navBar) [static] :20
NewCouponMerchantStep3Page* NewCouponMerchantStep3Page::New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    NewCouponMerchantStep3Page* obj1 = (NewCouponMerchantStep3Page*)uNew(NewCouponMerchantStep3Page_typeof());
    obj1->ctor_9(router1, navBar1);
    return obj1;
}
// }

} // ::g
