// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NewCouponStep1Page.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.app18_List_Items_Property.h>
#include <_root.List.h>
#include <_root.NavBarTitle.h>
#include <_root.NewCouponStep1Page.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
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
static uString* STRINGS[7];
static uType* TYPES[4];

namespace g{

// public partial sealed class NewCouponStep1Page :2
// {
// static NewCouponStep1Page() :12
static void NewCouponStep1Page__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    NewCouponStep1Page::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"navBar"*/]);
    NewCouponStep1Page::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Items"*/]);
}

static void NewCouponStep1Page_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("navBar");
    ::STRINGS[2] = uString::Const("Items");
    ::STRINGS[3] = uString::Const("items");
    ::STRINGS[4] = uString::Const("Pages/NewCoupon/NewCouponStep1Page.ux");
    ::STRINGS[5] = uString::Const("Nuovo buono: categoria");
    ::STRINGS[6] = uString::Const("Scegli la categoria");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(NewCouponStep1Page, __g_nametable1), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NewCouponStep1Page, navBar), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(NewCouponStep1Page, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(NewCouponStep1Page, temp_Items_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&NewCouponStep1Page::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NewCouponStep1Page::__selector0_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* NewCouponStep1Page_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::BasePage_typeof();
    options.FieldCount = 124;
    options.InterfaceCount = 18;
    options.ObjectSize = sizeof(NewCouponStep1Page);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("NewCouponStep1Page", options);
    type->fp_build_ = NewCouponStep1Page_build;
    type->fp_cctor_ = NewCouponStep1Page__cctor_5_fn;
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

// public NewCouponStep1Page(Fuse.Navigation.Router router, Fuse.Visual navBar) :16
void NewCouponStep1Page__ctor_9_fn(NewCouponStep1Page* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_9(router1, navBar1);
}

// private void InitializeUX() :24
void NewCouponStep1Page__InitializeUX1_fn(NewCouponStep1Page* __this)
{
    __this->InitializeUX1();
}

// public NewCouponStep1Page New(Fuse.Navigation.Router router, Fuse.Visual navBar) :16
void NewCouponStep1Page__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, NewCouponStep1Page** __retval)
{
    *__retval = NewCouponStep1Page::New6(router1, navBar1);
}

uSStrong<uArray*> NewCouponStep1Page::__g_static_nametable1_;
::g::Uno::UX::Selector NewCouponStep1Page::__selector0_;

// public NewCouponStep1Page(Fuse.Navigation.Router router, Fuse.Visual navBar) [instance] :16
void NewCouponStep1Page::ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ctor_8();
    router = router1;
    navBar = navBar1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :24
void NewCouponStep1Page::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, NewCouponStep1Page::__g_static_nametable1_);
    ::g::List* temp = ::g::List::New5();
    temp_Items_inst = ::g::app18_List_Items_Property::New1(temp, NewCouponStep1Page::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"items"*/]);
    ::g::Fuse::Reactive::JavaScript* temp2 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::NavBarTitle* temp3 = ::g::NavBarTitle::New4(navBar);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp1, 3);
    temp2->LineNumber(3);
    temp2->FileName(::STRINGS[4/*"Pages/NewCo...*/]);
    temp2->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::NewCouponStep1Page1d7683a0()));
    temp3->Text(::STRINGS[5/*"Nuovo buono...*/]);
    temp->Title(::STRINGS[6/*"Scegli la c...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public NewCouponStep1Page New(Fuse.Navigation.Router router, Fuse.Visual navBar) [static] :16
NewCouponStep1Page* NewCouponStep1Page::New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    NewCouponStep1Page* obj1 = (NewCouponStep1Page*)uNew(NewCouponStep1Page_typeof());
    obj1->ctor_9(router1, navBar1);
    return obj1;
}
// }

} // ::g
