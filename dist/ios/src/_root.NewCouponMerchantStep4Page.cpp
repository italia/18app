// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NewCouponMerchantStep4Page.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.app18_FuseControlsImage_File_Property.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.B.h>
#include <_root.BannerMerchant.h>
#include <_root.NavBarTitle.h>
#include <_root.NewCouponMerchantStep4Page.h>
#include <_root.P.h>
#include <_root.Row.h>
#include <_root.Separator.h>
#include <app18.Button.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.DockPanel.h>
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

// public partial sealed class NewCouponMerchantStep4Page :2
// {
// static NewCouponMerchantStep4Page() :24
static void NewCouponMerchantStep4Page__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    NewCouponMerchantStep4Page::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"navBar"*/], ::STRINGS[2/*"temp_eb20"*/], ::STRINGS[3/*"temp_eb21"*/]);
    NewCouponMerchantStep4Page::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"File"*/]);
    NewCouponMerchantStep4Page::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Value"*/]);
}

static void NewCouponMerchantStep4Page_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("navBar");
    ::STRINGS[2] = uString::Const("temp_eb20");
    ::STRINGS[3] = uString::Const("temp_eb21");
    ::STRINGS[4] = uString::Const("File");
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("coupon");
    ::STRINGS[7] = uString::Const("macroCategory");
    ::STRINGS[8] = uString::Const("icon");
    ::STRINGS[9] = uString::Const("name");
    ::STRINGS[10] = uString::Const("microCategory");
    ::STRINGS[11] = uString::Const("price");
    ::STRINGS[12] = uString::Const("code");
    ::STRINGS[13] = uString::Const("qrcode");
    ::STRINGS[14] = uString::Const("barcode");
    ::STRINGS[15] = uString::Const("onTapFindMerchant");
    ::STRINGS[16] = uString::Const("user");
    ::STRINGS[17] = uString::Const(" ");
    ::STRINGS[18] = uString::Const("surname");
    ::STRINGS[19] = uString::Const("onTapCancelCoupon");
    ::STRINGS[20] = uString::Const("Pages/NewCouponMerchant/NewCouponMerchantStep4Page.ux");
    ::STRINGS[21] = uString::Const("Nuovo buono: valore");
    ::STRINGS[22] = uString::Const("Il nuovo buono \303\250 stato creato correttamente");
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(NewCouponMerchantStep4Page, __g_nametable1), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NewCouponMerchantStep4Page, navBar), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(NewCouponMerchantStep4Page, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(NewCouponMerchantStep4Page, temp_eb20), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(NewCouponMerchantStep4Page, temp_eb21), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(NewCouponMerchantStep4Page, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponMerchantStep4Page, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(NewCouponMerchantStep4Page, temp2_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponMerchantStep4Page, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponMerchantStep4Page, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponMerchantStep4Page, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(NewCouponMerchantStep4Page, temp6_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(NewCouponMerchantStep4Page, temp7_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NewCouponMerchantStep4Page, temp8_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&NewCouponMerchantStep4Page::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NewCouponMerchantStep4Page::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NewCouponMerchantStep4Page::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* NewCouponMerchantStep4Page_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::BasePage_typeof();
    options.FieldCount = 135;
    options.InterfaceCount = 18;
    options.ObjectSize = sizeof(NewCouponMerchantStep4Page);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("NewCouponMerchantStep4Page", options);
    type->fp_build_ = NewCouponMerchantStep4Page_build;
    type->fp_cctor_ = NewCouponMerchantStep4Page__cctor_5_fn;
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

// public NewCouponMerchantStep4Page(Fuse.Navigation.Router router, Fuse.Visual navBar) :28
void NewCouponMerchantStep4Page__ctor_9_fn(NewCouponMerchantStep4Page* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_9(router1, navBar1);
}

// private void InitializeUX() :36
void NewCouponMerchantStep4Page__InitializeUX1_fn(NewCouponMerchantStep4Page* __this)
{
    __this->InitializeUX1();
}

// public NewCouponMerchantStep4Page New(Fuse.Navigation.Router router, Fuse.Visual navBar) :28
void NewCouponMerchantStep4Page__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, NewCouponMerchantStep4Page** __retval)
{
    *__retval = NewCouponMerchantStep4Page::New6(router1, navBar1);
}

uSStrong<uArray*> NewCouponMerchantStep4Page::__g_static_nametable1_;
::g::Uno::UX::Selector NewCouponMerchantStep4Page::__selector0_;
::g::Uno::UX::Selector NewCouponMerchantStep4Page::__selector1_;

// public NewCouponMerchantStep4Page(Fuse.Navigation.Router router, Fuse.Visual navBar) [instance] :28
void NewCouponMerchantStep4Page::ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ctor_8();
    router = router1;
    navBar = navBar1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :36
void NewCouponMerchantStep4Page::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, NewCouponMerchantStep4Page::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp10 = ::g::Fuse::Reactive::Member::New1(temp9, ::STRINGS[7/*"macroCategory"*/]);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp, NewCouponMerchantStep4Page::__selector0_);
    ::g::Fuse::Reactive::Member* temp11 = ::g::Fuse::Reactive::Member::New1(temp10, ::STRINGS[8/*"icon"*/]);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp13 = ::g::Fuse::Reactive::Member::New1(temp12, ::STRINGS[7/*"macroCategory"*/]);
    ::g::P* temp1 = ::g::P::New4();
    temp1_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp1, NewCouponMerchantStep4Page::__selector1_);
    ::g::Fuse::Reactive::Member* temp14 = ::g::Fuse::Reactive::Member::New1(temp13, ::STRINGS[9/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp16 = ::g::Fuse::Reactive::Member::New1(temp15, ::STRINGS[10/*"microCategory"*/]);
    ::g::Fuse::Controls::Image* temp2 = ::g::Fuse::Controls::Image::New3();
    temp2_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp2, NewCouponMerchantStep4Page::__selector0_);
    ::g::Fuse::Reactive::Member* temp17 = ::g::Fuse::Reactive::Member::New1(temp16, ::STRINGS[8/*"icon"*/]);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp19 = ::g::Fuse::Reactive::Member::New1(temp18, ::STRINGS[10/*"microCategory"*/]);
    ::g::P* temp3 = ::g::P::New4();
    temp3_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp3, NewCouponMerchantStep4Page::__selector1_);
    ::g::Fuse::Reactive::Member* temp20 = ::g::Fuse::Reactive::Member::New1(temp19, ::STRINGS[9/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::P* temp4 = ::g::P::New4();
    temp4_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp4, NewCouponMerchantStep4Page::__selector1_);
    ::g::Fuse::Reactive::Member* temp22 = ::g::Fuse::Reactive::Member::New1(temp21, ::STRINGS[11/*"price"*/]);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::P* temp5 = ::g::P::New4();
    temp5_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp5, NewCouponMerchantStep4Page::__selector1_);
    ::g::Fuse::Reactive::Member* temp24 = ::g::Fuse::Reactive::Member::New1(temp23, ::STRINGS[12/*"code"*/]);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::Fuse::Controls::Image* temp6 = ::g::Fuse::Controls::Image::New3();
    temp6_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp6, NewCouponMerchantStep4Page::__selector0_);
    ::g::Fuse::Reactive::Member* temp26 = ::g::Fuse::Reactive::Member::New1(temp25, ::STRINGS[13/*"qrcode"*/]);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::Fuse::Controls::Image* temp7 = ::g::Fuse::Controls::Image::New3();
    temp7_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp7, NewCouponMerchantStep4Page::__selector0_);
    ::g::Fuse::Reactive::Member* temp28 = ::g::Fuse::Reactive::Member::New1(temp27, ::STRINGS[14/*"barcode"*/]);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"onTapFindMe...*/]);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp31 = ::g::Fuse::Reactive::Member::New1(temp30, ::STRINGS[16/*"user"*/]);
    ::g::Fuse::Reactive::Member* temp32 = ::g::Fuse::Reactive::Member::New1(temp31, ::STRINGS[9/*"name"*/]);
    uString* temp33 = ::STRINGS[17/*" "*/];
    ::g::Fuse::Reactive::Constant* temp34 = ::g::Fuse::Reactive::Constant::New1(temp33);
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coupon"*/]);
    ::g::Fuse::Reactive::Member* temp36 = ::g::Fuse::Reactive::Member::New1(temp35, ::STRINGS[16/*"user"*/]);
    ::g::Fuse::Reactive::Member* temp37 = ::g::Fuse::Reactive::Member::New1(temp36, ::STRINGS[18/*"surname"*/]);
    ::g::Fuse::Reactive::Add* temp38 = ::g::Fuse::Reactive::Add::New1(temp34, temp37);
    ::g::P* temp8 = ::g::P::New4();
    temp8_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp8, NewCouponMerchantStep4Page::__selector1_);
    ::g::Fuse::Reactive::Add* temp39 = ::g::Fuse::Reactive::Add::New1(temp32, temp38);
    ::g::Fuse::Reactive::Data* temp40 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"onTapCancel...*/]);
    ::g::Fuse::Reactive::JavaScript* temp41 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::NavBarTitle* temp42 = ::g::NavBarTitle::New4(navBar);
    ::g::Fuse::Controls::DockPanel* temp43 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::BannerMerchant* temp44 = ::g::BannerMerchant::New4();
    ::g::Fuse::Controls::ScrollView* temp45 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp46 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::B* temp47 = ::g::B::New4();
    ::g::Separator* temp48 = ::g::Separator::New4();
    ::g::Fuse::Controls::StackPanel* temp49 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Row* temp50 = ::g::Row::New5();
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp_File_inst, (uObject*)temp11, 3);
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp14, 3);
    ::g::P* temp53 = ::g::P::New4();
    ::g::Row* temp54 = ::g::Row::New5();
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp2_File_inst, (uObject*)temp17, 3);
    ::g::Fuse::Reactive::DataBinding* temp56 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp20, 3);
    ::g::P* temp57 = ::g::P::New4();
    ::g::Row* temp58 = ::g::Row::New5();
    ::g::icon::Euro* temp59 = ::g::icon::Euro::New4();
    ::g::Fuse::Reactive::DataBinding* temp60 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp22, 3);
    ::g::P* temp61 = ::g::P::New4();
    ::g::Row* temp62 = ::g::Row::New5();
    ::g::icon::Qrcode* temp63 = ::g::icon::Qrcode::New4();
    ::g::Fuse::Reactive::DataBinding* temp64 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp24, 3);
    ::g::P* temp65 = ::g::P::New4();
    ::g::Fuse::Controls::Grid* temp66 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp67 = ::g::Fuse::Reactive::DataBinding::New1(temp6_File_inst, (uObject*)temp26, 3);
    ::g::Fuse::Controls::StackPanel* temp68 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp69 = ::g::Fuse::Reactive::DataBinding::New1(temp7_File_inst, (uObject*)temp28, 3);
    ::g::P* temp70 = ::g::P::New4();
    ::g::Separator* temp71 = ::g::Separator::New4();
    ::g::app18::Button* temp72 = ::g::app18::Button::New4();
    temp_eb20 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29);
    ::g::P* temp73 = ::g::P::New4();
    ::g::Row* temp74 = ::g::Row::New5();
    ::g::icon::Profile* temp75 = ::g::icon::Profile::New4();
    ::g::Fuse::Reactive::DataBinding* temp76 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp39, 3);
    ::g::P* temp77 = ::g::P::New4();
    ::g::P* temp78 = ::g::P::New4();
    ::g::app18::Button* temp79 = ::g::app18::Button::New4();
    temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp40);
    temp41->LineNumber(3);
    temp41->FileName(::STRINGS[20/*"Pages/NewCo...*/]);
    temp41->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::NewCouponMerchantStep4Page66ab8623()));
    temp42->Text(::STRINGS[21/*"Nuovo buono...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp46->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    temp47->Value(::STRINGS[22/*"Il nuovo bu...*/]);
    temp47->Color(::g::Uno::Float4__New2(0.007843138f, 0.6431373f, 0.372549f, 1.0f));
    temp48->Margin(::g::Uno::Float4__New2(-35.0f, 20.0f, -35.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    temp->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    temp53->Value(::STRINGS[23/*"Categoria"*/]);
    temp53->FontSize(12.0f);
    temp53->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    temp2->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp2->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp2->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp3->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp56);
    temp57->Value(::STRINGS[24/*"Prodotto"*/]);
    temp57->FontSize(12.0f);
    temp57->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    temp59->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp59->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp59->Alignment(9);
    temp4->FontSize(24.0f);
    temp4->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp60);
    temp61->Value(::STRINGS[25/*"Valore"*/]);
    temp61->FontSize(12.0f);
    temp61->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    temp63->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp63->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp63->Alignment(9);
    temp5->FontSize(24.0f);
    temp5->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp64);
    temp65->Value(::STRINGS[26/*"Codice"*/]);
    temp65->FontSize(12.0f);
    temp65->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp66->Columns(::STRINGS[27/*"1*,1*"*/]);
    temp66->Margin(::g::Uno::Float4__New2(0.0f, 17.0f, 0.0f, 17.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    temp6->Width(::g::Uno::UX::Size__New1(109.0f, 1));
    temp6->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp67);
    temp68->ItemSpacing(13.0f);
    temp68->Width(::g::Uno::UX::Size__New1(87.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    temp7->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp69);
    temp70->Value(::STRINGS[28/*"SALVA IMMAG...*/]);
    temp70->TextWrapping(1);
    temp70->TextAlignment(1);
    temp72->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp72->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp72->Margin(::g::Uno::Float4__New2(0.0f, 17.0f, 0.0f, 0.0f));
    temp72->Value(::STRINGS[29/*"TROVA UN NE...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp72, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb20)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb20);
    temp73->Value(::STRINGS[30/*"Questo buon...*/]);
    temp73->FontSize(14.0f);
    temp73->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp73->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    temp75->FontSize(20.0f);
    temp75->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp75->Alignment(9);
    temp8->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp8->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp76);
    temp77->Value(::STRINGS[31/*"Intestatario"*/]);
    temp77->FontSize(12.0f);
    temp77->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp78->Value(::STRINGS[32/*"Puoi annull...*/]);
    temp78->TextWrapping(1);
    temp78->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp78->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp79->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp79->Value(::STRINGS[33/*"ANNULLA QUE...*/]);
    temp79->BackgroundColor(::g::Uno::Float4__New2(0.8156863f, 0.007843138f, 0.1058824f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp79, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb21)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb21);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
}

// public NewCouponMerchantStep4Page New(Fuse.Navigation.Router router, Fuse.Visual navBar) [static] :28
NewCouponMerchantStep4Page* NewCouponMerchantStep4Page::New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    NewCouponMerchantStep4Page* obj1 = (NewCouponMerchantStep4Page*)uNew(NewCouponMerchantStep4Page_typeof());
    obj1->ctor_9(router1, navBar1);
    return obj1;
}
// }

} // ::g
