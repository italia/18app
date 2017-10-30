// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/TextInputPrice.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_TextInputPrice_PlaceholderText.h>
#include <_root.app18_accessor_TextInputPrice_Value.h>
#include <_root.app18_FuseControlsTextInput_PlaceholderText_Property.h>
#include <_root.app18_FuseControlsTextInputControl_Value_Property.h>
#include <_root.H2.h>
#include <_root.StaticResources.h>
#include <_root.TextInputPrice.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{

// public partial sealed class TextInputPrice :2
// {
// static TextInputPrice() :36
static void TextInputPrice__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    TextInputPrice::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    TextInputPrice::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Placeholder...*/]);
}

static void TextInputPrice_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("PlaceholderText");
    ::STRINGS[2] = uString::Const("\342\202\254");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::app18_accessor_TextInputPrice_PlaceholderText_typeof(),
        ::g::app18_accessor_TextInputPrice_Value_typeof(),
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
    type->SetFields(112,
        ::g::Uno::String_typeof(), offsetof(TextInputPrice, _field_PlaceholderText), 0,
        uObject_typeof(), offsetof(TextInputPrice, _field_Value), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(TextInputPrice, temp_PlaceholderText_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(TextInputPrice, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TextInputPrice::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&TextInputPrice::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* TextInputPrice_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 118;
    options.InterfaceCount = 18;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(TextInputPrice);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("TextInputPrice", options);
    type->fp_build_ = TextInputPrice_build;
    type->fp_ctor_ = (void*)TextInputPrice__New4_fn;
    type->fp_cctor_ = TextInputPrice__cctor_4_fn;
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

// public TextInputPrice() :40
void TextInputPrice__ctor_7_fn(TextInputPrice* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :44
void TextInputPrice__InitializeUX_fn(TextInputPrice* __this)
{
    __this->InitializeUX();
}

// public TextInputPrice New() :40
void TextInputPrice__New4_fn(TextInputPrice** __retval)
{
    *__retval = TextInputPrice::New4();
}

// public string get_PlaceholderText() :8
void TextInputPrice__get_PlaceholderText_fn(TextInputPrice* __this, uString** __retval)
{
    *__retval = __this->PlaceholderText();
}

// public void set_PlaceholderText(string value) :9
void TextInputPrice__set_PlaceholderText_fn(TextInputPrice* __this, uString* value)
{
    __this->PlaceholderText(value);
}

// public void SetPlaceholderText(string value, Uno.UX.IPropertyListener origin) :11
void TextInputPrice__SetPlaceholderText_fn(TextInputPrice* __this, uString* value, uObject* origin)
{
    __this->SetPlaceholderText(value, origin);
}

// public void SetValue(object value, Uno.UX.IPropertyListener origin) :26
void TextInputPrice__SetValue_fn(TextInputPrice* __this, uObject* value, uObject* origin)
{
    __this->SetValue(value, origin);
}

// public object get_Value() :23
void TextInputPrice__get_Value_fn(TextInputPrice* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :24
void TextInputPrice__set_Value_fn(TextInputPrice* __this, uObject* value)
{
    __this->Value(value);
}

::g::Uno::UX::Selector TextInputPrice::__selector0_;
::g::Uno::UX::Selector TextInputPrice::__selector1_;

// public TextInputPrice() [instance] :40
void TextInputPrice::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :44
void TextInputPrice::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::app18_FuseControlsTextInputControl_Value_Property::New1(temp, TextInputPrice::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::app18_accessor_TextInputPrice_Value::Singleton_);
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_PlaceholderText_inst = ::g::app18_FuseControlsTextInput_PlaceholderText_Property::New1(temp, TextInputPrice::__selector1_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::app18_accessor_TextInputPrice_PlaceholderText::Singleton_);
    ::g::Fuse::Controls::StackPanel* temp5 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp6 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(temp_PlaceholderText_inst, (uObject*)temp4, 1);
    ::g::H2* temp9 = ::g::H2::New4();
    temp5->Orientation(0);
    temp5->ItemSpacing(6.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.9411765f, 0.9411765f, 0.9411765f, 1.0f));
    temp->MaxLength(6);
    temp->FontSize(30.0f);
    temp->InputHint(5);
    temp->MinWidth(::g::Uno::UX::Size__New1(104.0f, 1));
    temp->Font(::g::StaticResources::BaseFont());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    temp6->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    temp6->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp6->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp6->Alignment(12);
    temp9->Value(::STRINGS[2/*"€"*/]);
    temp9->Margin(::g::Uno::Float4__New2(0.0f, 2.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
}

// public string get_PlaceholderText() [instance] :8
uString* TextInputPrice::PlaceholderText()
{
    return _field_PlaceholderText;
}

// public void set_PlaceholderText(string value) [instance] :9
void TextInputPrice::PlaceholderText(uString* value)
{
    SetPlaceholderText(value, NULL);
}

// public void SetPlaceholderText(string value, Uno.UX.IPropertyListener origin) [instance] :11
void TextInputPrice::SetPlaceholderText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_PlaceholderText))
    {
        _field_PlaceholderText = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Placeholder...*/]), origin);
    }
}

// public void SetValue(object value, Uno.UX.IPropertyListener origin) [instance] :26
void TextInputPrice::SetValue(uObject* value, uObject* origin)
{
    if (value != _field_Value)
    {
        _field_Value = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]), origin);
    }
}

// public object get_Value() [instance] :23
uObject* TextInputPrice::Value()
{
    return _field_Value;
}

// public void set_Value(object value) [instance] :24
void TextInputPrice::Value(uObject* value)
{
    SetValue(value, NULL);
}

// public TextInputPrice New() [static] :40
TextInputPrice* TextInputPrice::New4()
{
    TextInputPrice* obj1 = (TextInputPrice*)uNew(TextInputPrice_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
