// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ButtonEntry.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_ButtonEntry_icon.h>
#include <_root.app18_accessor_ButtonEntry_TextColor.h>
#include <_root.app18_accessor_ButtonEntry_Value.h>
#include <_root.app18_FuseControlsImage_File_Property.h>
#include <_root.app18_FuseControlsTextControl_Color_Property.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.ButtonEntry.h>
#include <_root.ButtonEntry.Template.h>
#include <_root.P.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.Property.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial class ButtonEntry :2
// {
// static ButtonEntry() :79
static void ButtonEntry__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ButtonEntry::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("File"));
    ButtonEntry::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    ButtonEntry::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
}

static void ButtonEntry_build(uType* type)
{
    type->SetDependencies(
        ::g::app18_accessor_ButtonEntry_icon_typeof(),
        ::g::app18_accessor_ButtonEntry_TextColor_typeof(),
        ::g::app18_accessor_ButtonEntry_Value_typeof(),
        ::g::Uno::UX::Selector_typeof());
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
    type->SetFields(113,
        ::g::Uno::UX::FileSource_typeof(), offsetof(ButtonEntry, _field_icon), 0,
        ::g::Uno::Float4_typeof(), offsetof(ButtonEntry, _field_TextColor), 0,
        ::g::Uno::String_typeof(), offsetof(ButtonEntry, _field_Value), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(ButtonEntry, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ButtonEntry, temp1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ButtonEntry, temp1_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ButtonEntry::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ButtonEntry::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ButtonEntry::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ButtonEntry_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Grid_typeof();
    options.FieldCount = 122;
    options.InterfaceCount = 18;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(ButtonEntry);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ButtonEntry", options);
    type->fp_build_ = ButtonEntry_build;
    type->fp_ctor_ = (void*)ButtonEntry__New5_fn;
    type->fp_cctor_ = ButtonEntry__cctor_4_fn;
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

// public ButtonEntry() :83
void ButtonEntry__ctor_8_fn(ButtonEntry* __this)
{
    __this->ctor_8();
}

// public Uno.UX.FileSource get_icon() :23
void ButtonEntry__get_icon_fn(ButtonEntry* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->icon();
}

// public void set_icon(Uno.UX.FileSource value) :24
void ButtonEntry__set_icon_fn(ButtonEntry* __this, ::g::Uno::UX::FileSource* value)
{
    __this->icon(value);
}

// private void InitializeUX() :87
void ButtonEntry__InitializeUX_fn(ButtonEntry* __this)
{
    __this->InitializeUX();
}

// public ButtonEntry New() :83
void ButtonEntry__New5_fn(ButtonEntry** __retval)
{
    *__retval = ButtonEntry::New5();
}

// public void Seticon(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) :26
void ButtonEntry__Seticon_fn(ButtonEntry* __this, ::g::Uno::UX::FileSource* value, uObject* origin)
{
    __this->Seticon(value, origin);
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) :41
void ButtonEntry__SetTextColor_fn(ButtonEntry* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetTextColor(*value, origin);
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) :11
void ButtonEntry__SetValue_fn(ButtonEntry* __this, uString* value, uObject* origin)
{
    __this->SetValue(value, origin);
}

// public float4 get_TextColor() :38
void ButtonEntry__get_TextColor_fn(ButtonEntry* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :39
void ButtonEntry__set_TextColor_fn(ButtonEntry* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public string get_Value() :8
void ButtonEntry__get_Value_fn(ButtonEntry* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :9
void ButtonEntry__set_Value_fn(ButtonEntry* __this, uString* value)
{
    __this->Value(value);
}

::g::Uno::UX::Selector ButtonEntry::__selector0_;
::g::Uno::UX::Selector ButtonEntry::__selector1_;
::g::Uno::UX::Selector ButtonEntry::__selector2_;

// public ButtonEntry() [instance] :83
void ButtonEntry::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// public Uno.UX.FileSource get_icon() [instance] :23
::g::Uno::UX::FileSource* ButtonEntry::icon()
{
    return _field_icon;
}

// public void set_icon(Uno.UX.FileSource value) [instance] :24
void ButtonEntry::icon(::g::Uno::UX::FileSource* value)
{
    Seticon(value, NULL);
}

// private void InitializeUX() [instance] :87
void ButtonEntry::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp, ButtonEntry::__selector0_);
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::app18_accessor_ButtonEntry_icon::Singleton_);
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::P* temp1 = ::g::P::New4();
    temp1_Color_inst = ::g::app18_FuseControlsTextControl_Color_Property::New1(temp1, ButtonEntry::__selector1_);
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::app18_accessor_ButtonEntry_TextColor::Singleton_);
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp1, ButtonEntry::__selector2_);
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::app18_accessor_ButtonEntry_Value::Singleton_);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(temp_File_inst, (uObject*)temp3, 1);
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Color_inst, (uObject*)temp5, 1);
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp7, 1);
    ::g::Fuse::Reactive::Each* temp11 = ::g::Fuse::Reactive::Each::New4();
    ButtonEntry__Template* temp12 = ButtonEntry__Template::New2(this, this);
    Columns(uString::Const("40, 1*, 10"));
    HitTestMode(6);
    Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    TextColor(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    temp->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp8);
    temp1->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp10);
    temp11->Count1(1);
    temp11->TemplateKey(uString::Const("RightIcon"));
    temp11->TemplateSource((uObject*)this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
}

// public void Seticon(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) [instance] :26
void ButtonEntry::Seticon(::g::Uno::UX::FileSource* value, uObject* origin)
{
    if (value != _field_icon)
    {
        _field_icon = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("icon")), origin);
    }
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :41
void ButtonEntry::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_TextColor))
    {
        _field_TextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("TextColor")), origin);
    }
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) [instance] :11
void ButtonEntry::SetValue(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Value))
    {
        _field_Value = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Value")), origin);
    }
}

// public float4 get_TextColor() [instance] :38
::g::Uno::Float4 ButtonEntry::TextColor()
{
    return _field_TextColor;
}

// public void set_TextColor(float4 value) [instance] :39
void ButtonEntry::TextColor(::g::Uno::Float4 value)
{
    SetTextColor(value, NULL);
}

// public string get_Value() [instance] :8
uString* ButtonEntry::Value()
{
    return _field_Value;
}

// public void set_Value(string value) [instance] :9
void ButtonEntry::Value(uString* value)
{
    SetValue(value, NULL);
}

// public ButtonEntry New() [static] :83
ButtonEntry* ButtonEntry::New5()
{
    ButtonEntry* obj1 = (ButtonEntry*)uNew(ButtonEntry_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
