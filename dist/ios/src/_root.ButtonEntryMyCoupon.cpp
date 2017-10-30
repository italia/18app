// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ButtonEntryMyCoupon.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_ButtonEntryMyCoupon_Category.h>
#include <_root.app18_accessor_ButtonEntryMyCoupon_Currency.h>
#include <_root.app18_accessor_ButtonEntryMyCoupon_icon.h>
#include <_root.app18_accessor_ButtonEntryMyCoupon_Price.h>
#include <_root.app18_accessor_ButtonEntryMyCoupon_ShopPlace.h>
#include <_root.app18_accessor_ButtonEntryMyCoupon_State.h>
#include <_root.app18_accessor_ButtonEntryMyCoupon_TypeCoupon.h>
#include <_root.app18_FuseControlsImage_File_Property.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.app18_FuseTriggersWhileString_Value_Property.h>
#include <_root.B.h>
#include <_root.ButtonEntryMyCoupon.h>
#include <_root.P.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.WhileString.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[15];
static uType* TYPES[2];

namespace g{

// public partial sealed class ButtonEntryMyCoupon :2
// {
// static ButtonEntryMyCoupon() :135
static void ButtonEntryMyCoupon__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ButtonEntryMyCoupon::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"File"*/]);
    ButtonEntryMyCoupon::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void ButtonEntryMyCoupon_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const(" ");
    ::STRINGS[3] = uString::Const("40, 2*,1*,10");
    ::STRINGS[4] = uString::Const("Valido");
    ::STRINGS[5] = uString::Const(">");
    ::STRINGS[6] = uString::Const("Usato");
    ::STRINGS[7] = uString::Const("Category");
    ::STRINGS[8] = uString::Const("Currency");
    ::STRINGS[9] = uString::Const("icon");
    ::STRINGS[10] = uString::Const("id");
    ::STRINGS[11] = uString::Const("Price");
    ::STRINGS[12] = uString::Const("ShopPlace");
    ::STRINGS[13] = uString::Const("State");
    ::STRINGS[14] = uString::Const("TypeCoupon");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::app18_accessor_ButtonEntryMyCoupon_Category_typeof(),
        ::g::app18_accessor_ButtonEntryMyCoupon_Currency_typeof(),
        ::g::app18_accessor_ButtonEntryMyCoupon_icon_typeof(),
        ::g::app18_accessor_ButtonEntryMyCoupon_Price_typeof(),
        ::g::app18_accessor_ButtonEntryMyCoupon_ShopPlace_typeof(),
        ::g::app18_accessor_ButtonEntryMyCoupon_State_typeof(),
        ::g::app18_accessor_ButtonEntryMyCoupon_TypeCoupon_typeof(),
        ::g::Uno::UX::Selector_typeof());
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
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(113,
        ::g::Uno::String_typeof(), offsetof(ButtonEntryMyCoupon, _field_Category), 0,
        ::g::Uno::String_typeof(), offsetof(ButtonEntryMyCoupon, _field_Currency), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(ButtonEntryMyCoupon, _field_icon), 0,
        ::g::Uno::String_typeof(), offsetof(ButtonEntryMyCoupon, _field_id), 0,
        ::g::Uno::String_typeof(), offsetof(ButtonEntryMyCoupon, _field_Price), 0,
        ::g::Uno::String_typeof(), offsetof(ButtonEntryMyCoupon, _field_ShopPlace), 0,
        ::g::Uno::String_typeof(), offsetof(ButtonEntryMyCoupon, _field_State), 0,
        ::g::Uno::String_typeof(), offsetof(ButtonEntryMyCoupon, _field_TypeCoupon), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp5_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntryMyCoupon, temp9_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ButtonEntryMyCoupon::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ButtonEntryMyCoupon::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ButtonEntryMyCoupon_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Grid_typeof();
    options.FieldCount = 134;
    options.InterfaceCount = 18;
    options.DependencyCount = 8;
    options.ObjectSize = sizeof(ButtonEntryMyCoupon);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ButtonEntryMyCoupon", options);
    type->fp_build_ = ButtonEntryMyCoupon_build;
    type->fp_ctor_ = (void*)ButtonEntryMyCoupon__New5_fn;
    type->fp_cctor_ = ButtonEntryMyCoupon__cctor_4_fn;
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

// public ButtonEntryMyCoupon() :139
void ButtonEntryMyCoupon__ctor_8_fn(ButtonEntryMyCoupon* __this)
{
    __this->ctor_8();
}

// public string get_Category() :8
void ButtonEntryMyCoupon__get_Category_fn(ButtonEntryMyCoupon* __this, uString** __retval)
{
    *__retval = __this->Category();
}

// public void set_Category(string value) :9
void ButtonEntryMyCoupon__set_Category_fn(ButtonEntryMyCoupon* __this, uString* value)
{
    __this->Category(value);
}

// public string get_Currency() :38
void ButtonEntryMyCoupon__get_Currency_fn(ButtonEntryMyCoupon* __this, uString** __retval)
{
    *__retval = __this->Currency();
}

// public void set_Currency(string value) :39
void ButtonEntryMyCoupon__set_Currency_fn(ButtonEntryMyCoupon* __this, uString* value)
{
    __this->Currency(value);
}

// public Uno.UX.FileSource get_icon() :113
void ButtonEntryMyCoupon__get_icon_fn(ButtonEntryMyCoupon* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->icon();
}

// public void set_icon(Uno.UX.FileSource value) :114
void ButtonEntryMyCoupon__set_icon_fn(ButtonEntryMyCoupon* __this, ::g::Uno::UX::FileSource* value)
{
    __this->icon(value);
}

// public string get_id() :98
void ButtonEntryMyCoupon__get_id_fn(ButtonEntryMyCoupon* __this, uString** __retval)
{
    *__retval = __this->id();
}

// public void set_id(string value) :99
void ButtonEntryMyCoupon__set_id_fn(ButtonEntryMyCoupon* __this, uString* value)
{
    __this->id(value);
}

// private void InitializeUX() :143
void ButtonEntryMyCoupon__InitializeUX_fn(ButtonEntryMyCoupon* __this)
{
    __this->InitializeUX();
}

// public ButtonEntryMyCoupon New() :139
void ButtonEntryMyCoupon__New5_fn(ButtonEntryMyCoupon** __retval)
{
    *__retval = ButtonEntryMyCoupon::New5();
}

// public string get_Price() :23
void ButtonEntryMyCoupon__get_Price_fn(ButtonEntryMyCoupon* __this, uString** __retval)
{
    *__retval = __this->Price();
}

// public void set_Price(string value) :24
void ButtonEntryMyCoupon__set_Price_fn(ButtonEntryMyCoupon* __this, uString* value)
{
    __this->Price(value);
}

// public void SetCategory(string value, Uno.UX.IPropertyListener origin) :11
void ButtonEntryMyCoupon__SetCategory_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin)
{
    __this->SetCategory(value, origin);
}

// public void SetCurrency(string value, Uno.UX.IPropertyListener origin) :41
void ButtonEntryMyCoupon__SetCurrency_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin)
{
    __this->SetCurrency(value, origin);
}

// public void Seticon(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) :116
void ButtonEntryMyCoupon__Seticon_fn(ButtonEntryMyCoupon* __this, ::g::Uno::UX::FileSource* value, uObject* origin)
{
    __this->Seticon(value, origin);
}

// public void Setid(string value, Uno.UX.IPropertyListener origin) :101
void ButtonEntryMyCoupon__Setid_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin)
{
    __this->Setid(value, origin);
}

// public void SetPrice(string value, Uno.UX.IPropertyListener origin) :26
void ButtonEntryMyCoupon__SetPrice_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin)
{
    __this->SetPrice(value, origin);
}

// public void SetShopPlace(string value, Uno.UX.IPropertyListener origin) :71
void ButtonEntryMyCoupon__SetShopPlace_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin)
{
    __this->SetShopPlace(value, origin);
}

// public void SetState(string value, Uno.UX.IPropertyListener origin) :56
void ButtonEntryMyCoupon__SetState_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin)
{
    __this->SetState(value, origin);
}

// public void SetTypeCoupon(string value, Uno.UX.IPropertyListener origin) :86
void ButtonEntryMyCoupon__SetTypeCoupon_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin)
{
    __this->SetTypeCoupon(value, origin);
}

// public string get_ShopPlace() :68
void ButtonEntryMyCoupon__get_ShopPlace_fn(ButtonEntryMyCoupon* __this, uString** __retval)
{
    *__retval = __this->ShopPlace();
}

// public void set_ShopPlace(string value) :69
void ButtonEntryMyCoupon__set_ShopPlace_fn(ButtonEntryMyCoupon* __this, uString* value)
{
    __this->ShopPlace(value);
}

// public string get_State() :53
void ButtonEntryMyCoupon__get_State_fn(ButtonEntryMyCoupon* __this, uString** __retval)
{
    *__retval = __this->State();
}

// public void set_State(string value) :54
void ButtonEntryMyCoupon__set_State_fn(ButtonEntryMyCoupon* __this, uString* value)
{
    __this->State(value);
}

// public string get_TypeCoupon() :83
void ButtonEntryMyCoupon__get_TypeCoupon_fn(ButtonEntryMyCoupon* __this, uString** __retval)
{
    *__retval = __this->TypeCoupon();
}

// public void set_TypeCoupon(string value) :84
void ButtonEntryMyCoupon__set_TypeCoupon_fn(ButtonEntryMyCoupon* __this, uString* value)
{
    __this->TypeCoupon(value);
}

::g::Uno::UX::Selector ButtonEntryMyCoupon::__selector0_;
::g::Uno::UX::Selector ButtonEntryMyCoupon::__selector1_;

// public ButtonEntryMyCoupon() [instance] :139
void ButtonEntryMyCoupon::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// public string get_Category() [instance] :8
uString* ButtonEntryMyCoupon::Category()
{
    return _field_Category;
}

// public void set_Category(string value) [instance] :9
void ButtonEntryMyCoupon::Category(uString* value)
{
    SetCategory(value, NULL);
}

// public string get_Currency() [instance] :38
uString* ButtonEntryMyCoupon::Currency()
{
    return _field_Currency;
}

// public void set_Currency(string value) [instance] :39
void ButtonEntryMyCoupon::Currency(uString* value)
{
    SetCurrency(value, NULL);
}

// public Uno.UX.FileSource get_icon() [instance] :113
::g::Uno::UX::FileSource* ButtonEntryMyCoupon::icon()
{
    return _field_icon;
}

// public void set_icon(Uno.UX.FileSource value) [instance] :114
void ButtonEntryMyCoupon::icon(::g::Uno::UX::FileSource* value)
{
    Seticon(value, NULL);
}

// public string get_id() [instance] :98
uString* ButtonEntryMyCoupon::id()
{
    return _field_id;
}

// public void set_id(string value) [instance] :99
void ButtonEntryMyCoupon::id(uString* value)
{
    Setid(value, NULL);
}

// private void InitializeUX() [instance] :143
void ButtonEntryMyCoupon::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp, ButtonEntryMyCoupon::__selector0_);
    ::g::Fuse::Reactive::Property* temp12 = ::g::Fuse::Reactive::Property::New1(temp11, ::g::app18_accessor_ButtonEntryMyCoupon_icon::Singleton_);
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::B* temp1 = ::g::B::New4();
    temp1_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp1, ButtonEntryMyCoupon::__selector1_);
    ::g::Fuse::Reactive::Property* temp14 = ::g::Fuse::Reactive::Property::New1(temp13, ::g::app18_accessor_ButtonEntryMyCoupon_Category::Singleton_);
    ::g::Fuse::Reactive::Constant* temp15 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::P* temp2 = ::g::P::New4();
    temp2_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp2, ButtonEntryMyCoupon::__selector1_);
    ::g::Fuse::Reactive::Property* temp16 = ::g::Fuse::Reactive::Property::New1(temp15, ::g::app18_accessor_ButtonEntryMyCoupon_TypeCoupon::Singleton_);
    ::g::Fuse::Reactive::Constant* temp17 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp18 = ::g::Fuse::Reactive::Property::New1(temp17, ::g::app18_accessor_ButtonEntryMyCoupon_Price::Singleton_);
    uString* temp19 = ::STRINGS[2/*" "*/];
    ::g::Fuse::Reactive::Constant* temp20 = ::g::Fuse::Reactive::Constant::New1(temp19);
    ::g::Fuse::Reactive::Constant* temp21 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp22 = ::g::Fuse::Reactive::Property::New1(temp21, ::g::app18_accessor_ButtonEntryMyCoupon_Currency::Singleton_);
    ::g::Fuse::Reactive::Add* temp23 = ::g::Fuse::Reactive::Add::New1(temp20, temp22);
    ::g::B* temp3 = ::g::B::New4();
    temp3_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp3, ButtonEntryMyCoupon::__selector1_);
    ::g::Fuse::Reactive::Add* temp24 = ::g::Fuse::Reactive::Add::New1(temp18, temp23);
    ::g::Fuse::Reactive::Constant* temp25 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::WhileString* temp4 = ::g::Fuse::Triggers::WhileString::New2();
    temp4_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp4, ButtonEntryMyCoupon::__selector1_);
    ::g::Fuse::Reactive::Property* temp26 = ::g::Fuse::Reactive::Property::New1(temp25, ::g::app18_accessor_ButtonEntryMyCoupon_State::Singleton_);
    ::g::Fuse::Reactive::Constant* temp27 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Image* temp5 = ::g::Fuse::Controls::Image::New3();
    temp5_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp5, ButtonEntryMyCoupon::__selector0_);
    ::g::Fuse::Reactive::Property* temp28 = ::g::Fuse::Reactive::Property::New1(temp27, ::g::app18_accessor_ButtonEntryMyCoupon_icon::Singleton_);
    ::g::Fuse::Reactive::Constant* temp29 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::B* temp6 = ::g::B::New4();
    temp6_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp6, ButtonEntryMyCoupon::__selector1_);
    ::g::Fuse::Reactive::Property* temp30 = ::g::Fuse::Reactive::Property::New1(temp29, ::g::app18_accessor_ButtonEntryMyCoupon_Category::Singleton_);
    ::g::Fuse::Reactive::Constant* temp31 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::P* temp7 = ::g::P::New4();
    temp7_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp7, ButtonEntryMyCoupon::__selector1_);
    ::g::Fuse::Reactive::Property* temp32 = ::g::Fuse::Reactive::Property::New1(temp31, ::g::app18_accessor_ButtonEntryMyCoupon_TypeCoupon::Singleton_);
    ::g::Fuse::Reactive::Constant* temp33 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::P* temp8 = ::g::P::New4();
    temp8_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp8, ButtonEntryMyCoupon::__selector1_);
    ::g::Fuse::Reactive::Property* temp34 = ::g::Fuse::Reactive::Property::New1(temp33, ::g::app18_accessor_ButtonEntryMyCoupon_ShopPlace::Singleton_);
    ::g::Fuse::Reactive::Constant* temp35 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp36 = ::g::Fuse::Reactive::Property::New1(temp35, ::g::app18_accessor_ButtonEntryMyCoupon_Price::Singleton_);
    uString* temp37 = ::STRINGS[2/*" "*/];
    ::g::Fuse::Reactive::Constant* temp38 = ::g::Fuse::Reactive::Constant::New1(temp37);
    ::g::Fuse::Reactive::Constant* temp39 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp40 = ::g::Fuse::Reactive::Property::New1(temp39, ::g::app18_accessor_ButtonEntryMyCoupon_Currency::Singleton_);
    ::g::Fuse::Reactive::Add* temp41 = ::g::Fuse::Reactive::Add::New1(temp38, temp40);
    ::g::B* temp9 = ::g::B::New4();
    temp9_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp9, ButtonEntryMyCoupon::__selector1_);
    ::g::Fuse::Reactive::Add* temp42 = ::g::Fuse::Reactive::Add::New1(temp36, temp41);
    ::g::Fuse::Reactive::Constant* temp43 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::WhileString* temp10 = ::g::Fuse::Triggers::WhileString::New2();
    temp10_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp10, ButtonEntryMyCoupon::__selector1_);
    ::g::Fuse::Reactive::Property* temp44 = ::g::Fuse::Reactive::Property::New1(temp43, ::g::app18_accessor_ButtonEntryMyCoupon_State::Singleton_);
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp_File_inst, (uObject*)temp12, 1);
    ::g::Fuse::Controls::StackPanel* temp46 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp47 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp14, 1);
    ::g::Fuse::Reactive::DataBinding* temp48 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp16, 1);
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp24, 3);
    ::g::P* temp50 = ::g::P::New4();
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp26, 1);
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(temp5_File_inst, (uObject*)temp28, 1);
    ::g::Fuse::Controls::StackPanel* temp53 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp54 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp30, 1);
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp32, 1);
    ::g::Fuse::Reactive::DataBinding* temp56 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp34, 1);
    ::g::Fuse::Controls::Rectangle* temp57 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp58 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp42, 3);
    ::g::P* temp59 = ::g::P::New4();
    ::g::Fuse::Reactive::DataBinding* temp60 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp44, 1);
    Columns(::STRINGS[3/*"40, 2*,1*,10"*/]);
    HitTestMode(6);
    Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp4->Equals2(::STRINGS[4/*"Valido"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    temp->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    temp1->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp47);
    temp2->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    temp2->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp48);
    temp3->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp50->Value(::STRINGS[5/*">"*/]);
    temp50->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    temp10->Equals2(::STRINGS[6/*"Usato"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp60);
    temp5->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp5->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp5->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp6->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp6->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp54);
    temp7->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp7->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp8->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp8->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp56);
    temp9->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp58);
    temp57->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp57->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp57->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp59->Value(::STRINGS[5/*">"*/]);
    temp59->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
}

// public string get_Price() [instance] :23
uString* ButtonEntryMyCoupon::Price()
{
    return _field_Price;
}

// public void set_Price(string value) [instance] :24
void ButtonEntryMyCoupon::Price(uString* value)
{
    SetPrice(value, NULL);
}

// public void SetCategory(string value, Uno.UX.IPropertyListener origin) [instance] :11
void ButtonEntryMyCoupon::SetCategory(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Category))
    {
        _field_Category = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Category"*/]), origin);
    }
}

// public void SetCurrency(string value, Uno.UX.IPropertyListener origin) [instance] :41
void ButtonEntryMyCoupon::SetCurrency(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Currency))
    {
        _field_Currency = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Currency"*/]), origin);
    }
}

// public void Seticon(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) [instance] :116
void ButtonEntryMyCoupon::Seticon(::g::Uno::UX::FileSource* value, uObject* origin)
{
    if (value != _field_icon)
    {
        _field_icon = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"icon"*/]), origin);
    }
}

// public void Setid(string value, Uno.UX.IPropertyListener origin) [instance] :101
void ButtonEntryMyCoupon::Setid(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_id))
    {
        _field_id = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"id"*/]), origin);
    }
}

// public void SetPrice(string value, Uno.UX.IPropertyListener origin) [instance] :26
void ButtonEntryMyCoupon::SetPrice(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Price))
    {
        _field_Price = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Price"*/]), origin);
    }
}

// public void SetShopPlace(string value, Uno.UX.IPropertyListener origin) [instance] :71
void ButtonEntryMyCoupon::SetShopPlace(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_ShopPlace))
    {
        _field_ShopPlace = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"ShopPlace"*/]), origin);
    }
}

// public void SetState(string value, Uno.UX.IPropertyListener origin) [instance] :56
void ButtonEntryMyCoupon::SetState(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_State))
    {
        _field_State = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"State"*/]), origin);
    }
}

// public void SetTypeCoupon(string value, Uno.UX.IPropertyListener origin) [instance] :86
void ButtonEntryMyCoupon::SetTypeCoupon(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_TypeCoupon))
    {
        _field_TypeCoupon = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"TypeCoupon"*/]), origin);
    }
}

// public string get_ShopPlace() [instance] :68
uString* ButtonEntryMyCoupon::ShopPlace()
{
    return _field_ShopPlace;
}

// public void set_ShopPlace(string value) [instance] :69
void ButtonEntryMyCoupon::ShopPlace(uString* value)
{
    SetShopPlace(value, NULL);
}

// public string get_State() [instance] :53
uString* ButtonEntryMyCoupon::State()
{
    return _field_State;
}

// public void set_State(string value) [instance] :54
void ButtonEntryMyCoupon::State(uString* value)
{
    SetState(value, NULL);
}

// public string get_TypeCoupon() [instance] :83
uString* ButtonEntryMyCoupon::TypeCoupon()
{
    return _field_TypeCoupon;
}

// public void set_TypeCoupon(string value) [instance] :84
void ButtonEntryMyCoupon::TypeCoupon(uString* value)
{
    SetTypeCoupon(value, NULL);
}

// public ButtonEntryMyCoupon New() [static] :139
ButtonEntryMyCoupon* ButtonEntryMyCoupon::New5()
{
    ButtonEntryMyCoupon* obj1 = (ButtonEntryMyCoupon*)uNew(ButtonEntryMyCoupon_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
