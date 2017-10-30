// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NewCouponStep4Page.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.app18_FuseControlsImage_File_Property.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.app18_FuseTriggersWhileString_Value_Property.h>
#include <_root.B.h>
#include <_root.NavBarTitle.h>
#include <_root.NewCouponStep4Page.h>
#include <_root.P.h>
#include <_root.Row.h>
#include <_root.Separator.h>
#include <app18.Button.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
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
#include <Fuse.Triggers.WhileStringTest.h>
#include <icon.Euro.h>
#include <icon.Profile.h>
#include <icon.Qrcode.h>
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
static uString* STRINGS[34];
static uType* TYPES[5];

namespace g{

// public partial sealed class NewCouponStep4Page :2
// {
// static NewCouponStep4Page() :26
static void NewCouponStep4Page__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    NewCouponStep4Page::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"navBar"*/], ::STRINGS[2/*"temp_eb17"*/], ::STRINGS[3/*"temp_eb18"*/]);
    NewCouponStep4Page::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Value"*/]);
    NewCouponStep4Page::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"File"*/]);
}

static void NewCouponStep4Page_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("navBar");
    ::STRINGS[2] = uString::Const("temp_eb17");
    ::STRINGS[3] = uString::Const("temp_eb18");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("File");
    ::STRINGS[6] = uString::Const("feedback");
    ::STRINGS[7] = uString::Const("coupon");
    ::STRINGS[8] = uString::Const("macroCategory");
    ::STRINGS[9] = uString::Const("icon");
    ::STRINGS[10] = uString::Const("name");
    ::STRINGS[11] = uString::Const("microCategory");
    ::STRINGS[12] = uString::Const("price");
    ::STRINGS[13] = uString::Const("code");
    ::STRINGS[14] = uString::Const("qrcode");
    ::STRINGS[15] = uString::Const("barcode");
    ::STRINGS[16] = uString::Const("onTapFindMerchant");
    ::STRINGS[17] = uString::Const("user");
    ::STRINGS[18] = uString::Const(" ");
    ::STRINGS[19] = uString::Const("surname");
    ::STRINGS[20] = uString::Const("onTapCancelCoupon");
    ::STRINGS[21] = uString::Const("Pages/NewCoupon/NewCouponStep4Page.ux");
    ::STRINGS[22] = uString::Const("Nuovo buono: valore");
    ::STRINGS[23] = uString::Const("Categoria");
    ::STRINGS[24] = uString::Const("Prodotto");
    ::STRINGS[25] = uString::Const("Valore");
    ::STRINGS[26] = uString::Const("Codice");
    ::STRINGS[27] = uString::Const("1*,1*");
    ::STRINGS[28] = uString::Const("SALVA IMMAGINE");
    ::STRINGS[29] = uString::Const("TROVA UN NEGOZIO");
    ::STRINGS[30] = uString::Const("Questo buono non \303\250 cedibile e appartiene a te");
    ::STRINGS[31] = uString::Const("Intestatario");
    ::STRINGS[32] = uString::Const("Puoi annullare in ogni momento questo  buono e riversare l\342\200\231intero suo valore nel tuo credito");
    ::STRINGS[33] = uString::Const("ANNULLA QUESTO BUONO");
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(NewCouponStep4Page, __g_nametable1), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NewCouponStep4Page, navBar), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(NewCouponStep4Page, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(NewCouponStep4Page, temp_eb17), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(NewCouponStep4Page, temp_eb18), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponStep4Page, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponStep4Page, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponStep4Page, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(NewCouponStep4Page, temp2_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponStep4Page, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(NewCouponStep4Page, temp4_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponStep4Page, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponStep4Page, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponStep4Page, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(NewCouponStep4Page, temp8_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(NewCouponStep4Page, temp9_File_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&NewCouponStep4Page::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NewCouponStep4Page::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NewCouponStep4Page::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* NewCouponStep4Page_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::BasePage_typeof();
    options.FieldCount = 137;
    options.InterfaceCount = 18;
    options.ObjectSize = sizeof(NewCouponStep4Page);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("NewCouponStep4Page", options);
    type->fp_build_ = NewCouponStep4Page_build;
    type->fp_cctor_ = NewCouponStep4Page__cctor_5_fn;
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

// public NewCouponStep4Page(Fuse.Navigation.Router router, Fuse.Visual navBar) :30
void NewCouponStep4Page__ctor_9_fn(NewCouponStep4Page* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_9(router1, navBar1);
}

// private void InitializeUX() :38
void NewCouponStep4Page__InitializeUX1_fn(NewCouponStep4Page* __this)
{
    __this->InitializeUX1();
}

// public NewCouponStep4Page New(Fuse.Navigation.Router router, Fuse.Visual navBar) :30
void NewCouponStep4Page__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, NewCouponStep4Page** __retval)
{
    *__retval = NewCouponStep4Page::New6(router1, navBar1);
}

uSStrong<uArray*> NewCouponStep4Page::__g_static_nametable1_;
::g::Uno::UX::Selector NewCouponStep4Page::__selector0_;
::g::Uno::UX::Selector NewCouponStep4Page::__selector1_;

// public NewCouponStep4Page(Fuse.Navigation.Router router, Fuse.Visual navBar) [instance] :30
void NewCouponStep4Page::ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ctor_8();
    router = router1;
    navBar = navBar1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :38
void NewCouponStep4Page::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, NewCouponStep4Page::__g_static_nametable1_);
    ::g::B* temp = ::g::B::New4();
    temp_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp, NewCouponStep4Page::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"feedback"*/]);
    ::g::Fuse::Triggers::WhileString* temp1 = ::g::Fuse::Triggers::WhileString::New2();
    temp1_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp1, NewCouponStep4Page::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"feedback"*/]);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp14 = ::g::Fuse::Reactive::Member::New1(temp13, ::STRINGS[8/*"macroCategory"*/]);
    ::g::Fuse::Controls::Image* temp2 = ::g::Fuse::Controls::Image::New3();
    temp2_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp2, NewCouponStep4Page::__selector1_);
    ::g::Fuse::Reactive::Member* temp15 = ::g::Fuse::Reactive::Member::New1(temp14, ::STRINGS[9/*"icon"*/]);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp17 = ::g::Fuse::Reactive::Member::New1(temp16, ::STRINGS[8/*"macroCategory"*/]);
    ::g::P* temp3 = ::g::P::New4();
    temp3_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp3, NewCouponStep4Page::__selector0_);
    ::g::Fuse::Reactive::Member* temp18 = ::g::Fuse::Reactive::Member::New1(temp17, ::STRINGS[10/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp20 = ::g::Fuse::Reactive::Member::New1(temp19, ::STRINGS[11/*"microCategory"*/]);
    ::g::Fuse::Controls::Image* temp4 = ::g::Fuse::Controls::Image::New3();
    temp4_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp4, NewCouponStep4Page::__selector1_);
    ::g::Fuse::Reactive::Member* temp21 = ::g::Fuse::Reactive::Member::New1(temp20, ::STRINGS[9/*"icon"*/]);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp23 = ::g::Fuse::Reactive::Member::New1(temp22, ::STRINGS[11/*"microCategory"*/]);
    ::g::P* temp5 = ::g::P::New4();
    temp5_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp5, NewCouponStep4Page::__selector0_);
    ::g::Fuse::Reactive::Member* temp24 = ::g::Fuse::Reactive::Member::New1(temp23, ::STRINGS[10/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::P* temp6 = ::g::P::New4();
    temp6_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp6, NewCouponStep4Page::__selector0_);
    ::g::Fuse::Reactive::Member* temp26 = ::g::Fuse::Reactive::Member::New1(temp25, ::STRINGS[12/*"price"*/]);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::P* temp7 = ::g::P::New4();
    temp7_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp7, NewCouponStep4Page::__selector0_);
    ::g::Fuse::Reactive::Member* temp28 = ::g::Fuse::Reactive::Member::New1(temp27, ::STRINGS[13/*"code"*/]);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::Fuse::Controls::Image* temp8 = ::g::Fuse::Controls::Image::New3();
    temp8_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp8, NewCouponStep4Page::__selector1_);
    ::g::Fuse::Reactive::Member* temp30 = ::g::Fuse::Reactive::Member::New1(temp29, ::STRINGS[14/*"qrcode"*/]);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::Fuse::Controls::Image* temp9 = ::g::Fuse::Controls::Image::New3();
    temp9_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp9, NewCouponStep4Page::__selector1_);
    ::g::Fuse::Reactive::Member* temp32 = ::g::Fuse::Reactive::Member::New1(temp31, ::STRINGS[15/*"barcode"*/]);
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"onTapFindMe...*/]);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp35 = ::g::Fuse::Reactive::Member::New1(temp34, ::STRINGS[17/*"user"*/]);
    ::g::Fuse::Reactive::Member* temp36 = ::g::Fuse::Reactive::Member::New1(temp35, ::STRINGS[10/*"name"*/]);
    uString* temp37 = ::STRINGS[18/*" "*/];
    ::g::Fuse::Reactive::Constant* temp38 = ::g::Fuse::Reactive::Constant::New1(temp37);
    ::g::Fuse::Reactive::Data* temp39 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp40 = ::g::Fuse::Reactive::Member::New1(temp39, ::STRINGS[17/*"user"*/]);
    ::g::Fuse::Reactive::Member* temp41 = ::g::Fuse::Reactive::Member::New1(temp40, ::STRINGS[19/*"surname"*/]);
    ::g::Fuse::Reactive::Add* temp42 = ::g::Fuse::Reactive::Add::New1(temp38, temp41);
    ::g::P* temp10 = ::g::P::New4();
    temp10_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp10, NewCouponStep4Page::__selector0_);
    ::g::Fuse::Reactive::Add* temp43 = ::g::Fuse::Reactive::Add::New1(temp36, temp42);
    ::g::Fuse::Reactive::Data* temp44 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"onTapCancel...*/]);
    ::g::Fuse::Reactive::JavaScript* temp45 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::NavBarTitle* temp46 = ::g::NavBarTitle::New4(navBar);
    ::g::Fuse::Controls::ScrollView* temp47 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp48 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp11, 3);
    ::g::Separator* temp50 = ::g::Separator::New4();
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Controls::StackPanel* temp52 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Row* temp53 = ::g::Row::New5();
    ::g::Fuse::Reactive::DataBinding* temp54 = ::g::Fuse::Reactive::DataBinding::New1(temp2_File_inst, (uObject*)temp15, 3);
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp18, 3);
    ::g::P* temp56 = ::g::P::New4();
    ::g::Row* temp57 = ::g::Row::New5();
    ::g::Fuse::Reactive::DataBinding* temp58 = ::g::Fuse::Reactive::DataBinding::New1(temp4_File_inst, (uObject*)temp21, 3);
    ::g::Fuse::Reactive::DataBinding* temp59 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp24, 3);
    ::g::P* temp60 = ::g::P::New4();
    ::g::Row* temp61 = ::g::Row::New5();
    ::g::icon::Euro* temp62 = ::g::icon::Euro::New4();
    ::g::Fuse::Reactive::DataBinding* temp63 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp26, 3);
    ::g::P* temp64 = ::g::P::New4();
    ::g::Row* temp65 = ::g::Row::New5();
    ::g::icon::Qrcode* temp66 = ::g::icon::Qrcode::New4();
    ::g::Fuse::Reactive::DataBinding* temp67 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp28, 3);
    ::g::P* temp68 = ::g::P::New4();
    ::g::Fuse::Controls::Grid* temp69 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp70 = ::g::Fuse::Reactive::DataBinding::New1(temp8_File_inst, (uObject*)temp30, 3);
    ::g::Fuse::Controls::StackPanel* temp71 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp72 = ::g::Fuse::Reactive::DataBinding::New1(temp9_File_inst, (uObject*)temp32, 3);
    ::g::P* temp73 = ::g::P::New4();
    ::g::Separator* temp74 = ::g::Separator::New4();
    ::g::app18::Button* temp75 = ::g::app18::Button::New4();
    temp_eb17 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp33);
    ::g::P* temp76 = ::g::P::New4();
    ::g::Row* temp77 = ::g::Row::New5();
    ::g::icon::Profile* temp78 = ::g::icon::Profile::New4();
    ::g::Fuse::Reactive::DataBinding* temp79 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp43, 3);
    ::g::P* temp80 = ::g::P::New4();
    ::g::P* temp81 = ::g::P::New4();
    ::g::app18::Button* temp82 = ::g::app18::Button::New4();
    temp_eb18 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp44);
    temp45->LineNumber(3);
    temp45->FileName(::STRINGS[21/*"Pages/NewCo...*/]);
    temp45->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::NewCouponStep4Page1d79507b()));
    temp46->Text(::STRINGS[22/*"Nuovo buono...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp48->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp1->Test(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    temp->Color(::g::Uno::Float4__New2(0.007843138f, 0.6431373f, 0.372549f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp50->Margin(::g::Uno::Float4__New2(-35.0f, 20.0f, -35.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp2->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp2->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp2->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp54);
    temp3->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp56->Value(::STRINGS[23/*"Categoria"*/]);
    temp56->FontSize(12.0f);
    temp56->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    temp4->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp4->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp4->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp58);
    temp5->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp59);
    temp60->Value(::STRINGS[24/*"Prodotto"*/]);
    temp60->FontSize(12.0f);
    temp60->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    temp62->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp62->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp62->Alignment(9);
    temp6->FontSize(24.0f);
    temp6->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp6->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp63);
    temp64->Value(::STRINGS[25/*"Valore"*/]);
    temp64->FontSize(12.0f);
    temp64->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    temp66->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp66->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp66->Alignment(9);
    temp7->FontSize(24.0f);
    temp7->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp7->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp67);
    temp68->Value(::STRINGS[26/*"Codice"*/]);
    temp68->FontSize(12.0f);
    temp68->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp69->Columns(::STRINGS[27/*"1*,1*"*/]);
    temp69->Margin(::g::Uno::Float4__New2(0.0f, 17.0f, 0.0f, 17.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    temp8->Width(::g::Uno::UX::Size__New1(109.0f, 1));
    temp8->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp70);
    temp71->ItemSpacing(13.0f);
    temp71->Width(::g::Uno::UX::Size__New1(87.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    temp9->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp72);
    temp73->Value(::STRINGS[28/*"SALVA IMMAG...*/]);
    temp73->TextWrapping(1);
    temp73->TextAlignment(1);
    temp75->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp75->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp75->Margin(::g::Uno::Float4__New2(0.0f, 17.0f, 0.0f, 0.0f));
    temp75->Value(::STRINGS[29/*"TROVA UN NE...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp75, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb17)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb17);
    temp76->Value(::STRINGS[30/*"Questo buon...*/]);
    temp76->FontSize(14.0f);
    temp76->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp76->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    temp78->FontSize(20.0f);
    temp78->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp78->Alignment(9);
    temp10->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp10->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp79);
    temp80->Value(::STRINGS[31/*"Intestatario"*/]);
    temp80->FontSize(12.0f);
    temp80->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp81->Value(::STRINGS[32/*"Puoi annull...*/]);
    temp81->TextWrapping(1);
    temp81->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp81->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp82->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp82->Value(::STRINGS[33/*"ANNULLA QUE...*/]);
    temp82->BackgroundColor(::g::Uno::Float4__New2(0.8156863f, 0.007843138f, 0.1058824f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp82, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb18)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb18);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
}

// public NewCouponStep4Page New(Fuse.Navigation.Router router, Fuse.Visual navBar) [static] :30
NewCouponStep4Page* NewCouponStep4Page::New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    NewCouponStep4Page* obj1 = (NewCouponStep4Page*)uNew(NewCouponStep4Page_typeof());
    obj1->ctor_9(router1, navBar1);
    return obj1;
}
// }

} // ::g
