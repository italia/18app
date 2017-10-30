// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/List.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_List_Items.h>
#include <_root.app18_accessor_List_Selected.h>
#include <_root.app18_accessor_List_Title.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.app18_FuseReactiveEach_Items_Property.h>
#include <_root.app18_FuseReactiveWhileCount_Items_Property.h>
#include <_root.app18_FuseTriggersWhileString_Value_Property.h>
#include <_root.H3.h>
#include <_root.List.h>
#include <_root.List.Template.h>
#include <_root.List.Template1.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layer.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileNotEmpty.h>
#include <Fuse.Triggers.WhileString.h>
#include <Fuse.Triggers.WhileStringTest.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>

namespace g{

// public partial sealed class List :2
// {
// static List() :133
static void List__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    List::__selector01_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
    List::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
}

static void List_build(uType* type)
{
    type->SetDependencies(
        ::g::app18_accessor_List_Items_typeof(),
        ::g::app18_accessor_List_Selected_typeof(),
        ::g::app18_accessor_List_Title_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface16),
        ::g::Fuse::Controls::Native::IScrollViewHost_typeof(), offsetof(::g::Fuse::Controls::ScrollViewBase_type, interface17));
    type->SetFields(126,
        uObject_typeof(), offsetof(List, _field_Items), 0,
        uObject_typeof(), offsetof(List, _field_Selected), 0,
        ::g::Uno::String_typeof(), offsetof(List, _field_Title), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(List, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(List, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(List, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(List, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(List, temp4_Items_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&List::__selector01_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&List::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::ScrollViewBase_type* List_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ScrollViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::ScrollView_typeof();
    options.FieldCount = 136;
    options.InterfaceCount = 18;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(List);
    options.TypeSize = sizeof(::g::Fuse::Controls::ScrollViewBase_type);
    type = (::g::Fuse::Controls::ScrollViewBase_type*)uClassType::New("List", options);
    type->fp_build_ = List_build;
    type->fp_ctor_ = (void*)List__New5_fn;
    type->fp_cctor_ = List__cctor_5_fn;
    type->interface17.fp_OnScrollPositionChanged = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::ScrollViewBase__FuseControlsNativeIScrollViewHostOnScrollPositionChanged_fn;
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

// public List() :137
void List__ctor_8_fn(List* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :141
void List__InitializeUX1_fn(List* __this)
{
    __this->InitializeUX1();
}

// public object get_Items() :8
void List__get_Items_fn(List* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :9
void List__set_Items_fn(List* __this, uObject* value)
{
    __this->Items(value);
}

// public List New() :137
void List__New5_fn(List** __retval)
{
    *__retval = List::New5();
}

// public object get_Selected() :23
void List__get_Selected_fn(List* __this, uObject** __retval)
{
    *__retval = __this->Selected();
}

// public void set_Selected(object value) :24
void List__set_Selected_fn(List* __this, uObject* value)
{
    __this->Selected(value);
}

// public void SetItems(object value, Uno.UX.IPropertyListener origin) :11
void List__SetItems_fn(List* __this, uObject* value, uObject* origin)
{
    __this->SetItems(value, origin);
}

// public void SetSelected(object value, Uno.UX.IPropertyListener origin) :26
void List__SetSelected_fn(List* __this, uObject* value, uObject* origin)
{
    __this->SetSelected(value, origin);
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) :41
void List__SetTitle_fn(List* __this, uString* value, uObject* origin)
{
    __this->SetTitle(value, origin);
}

// public string get_Title() :38
void List__get_Title_fn(List* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :39
void List__set_Title_fn(List* __this, uString* value)
{
    __this->Title(value);
}

::g::Uno::UX::Selector List::__selector01_;
::g::Uno::UX::Selector List::__selector1_;

// public List() [instance] :137
void List::ctor_8()
{
    ctor_7();
    InitializeUX1();
}

// private void InitializeUX() [instance] :141
void List::InitializeUX1()
{
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::app18_FuseReactiveEach_Items_Property::New1(temp, List::__selector01_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::app18_accessor_List_Selected::Singleton_);
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::WhileNotEmpty* temp1 = ::g::Fuse::Reactive::WhileNotEmpty::New3();
    temp1_Items_inst = ::g::app18_FuseReactiveWhileCount_Items_Property::New1(temp1, List::__selector01_);
    ::g::Fuse::Reactive::Property* temp8 = ::g::Fuse::Reactive::Property::New1(temp7, ::g::app18_accessor_List_Selected::Singleton_);
    ::g::Fuse::Reactive::Constant* temp9 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::H3* temp2 = ::g::H3::New4();
    temp2_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp2, List::__selector1_);
    ::g::Fuse::Reactive::Property* temp10 = ::g::Fuse::Reactive::Property::New1(temp9, ::g::app18_accessor_List_Title::Singleton_);
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::WhileString* temp3 = ::g::Fuse::Triggers::WhileString::New2();
    temp3_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp3, List::__selector1_);
    ::g::Fuse::Reactive::Property* temp12 = ::g::Fuse::Reactive::Property::New1(temp11, ::g::app18_accessor_List_Title::Singleton_);
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Each* temp4 = ::g::Fuse::Reactive::Each::New4();
    temp4_Items_inst = ::g::app18_FuseReactiveEach_Items_Property::New1(temp4, List::__selector01_);
    ::g::Fuse::Reactive::Property* temp14 = ::g::Fuse::Reactive::Property::New1(temp13, ::g::app18_accessor_List_Items::Singleton_);
    ::g::Fuse::Controls::StackPanel* temp15 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp16 = ::g::Fuse::Controls::Rectangle::New3();
    List__Template* temp17 = List__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp6, 1);
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp8, 1);
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp10, 1);
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp12, 1);
    List__Template1* temp22 = List__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Items_inst, (uObject*)temp14, 1);
    temp15->Margin(::g::Uno::Float4__New2(23.0f, 0.0f, 23.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp19);
    temp16->CornerRadius(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    temp16->Color(::g::Uno::Float4__New2(0.9921569f, 0.9921569f, 0.9921569f, 1.0f));
    temp16->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp18);
    temp3->Test(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp21);
    temp2->Alignment(1);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 25.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
}

// public object get_Items() [instance] :8
uObject* List::Items()
{
    return _field_Items;
}

// public void set_Items(object value) [instance] :9
void List::Items(uObject* value)
{
    SetItems(value, NULL);
}

// public object get_Selected() [instance] :23
uObject* List::Selected()
{
    return _field_Selected;
}

// public void set_Selected(object value) [instance] :24
void List::Selected(uObject* value)
{
    SetSelected(value, NULL);
}

// public void SetItems(object value, Uno.UX.IPropertyListener origin) [instance] :11
void List::SetItems(uObject* value, uObject* origin)
{
    if (value != _field_Items)
    {
        _field_Items = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Items")), origin);
    }
}

// public void SetSelected(object value, Uno.UX.IPropertyListener origin) [instance] :26
void List::SetSelected(uObject* value, uObject* origin)
{
    if (value != _field_Selected)
    {
        _field_Selected = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Selected")), origin);
    }
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) [instance] :41
void List::SetTitle(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Title))
    {
        _field_Title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Title")), origin);
    }
}

// public string get_Title() [instance] :38
uString* List::Title()
{
    return _field_Title;
}

// public void set_Title(string value) [instance] :39
void List::Title(uString* value)
{
    SetTitle(value, NULL);
}

// public List New() [static] :137
List* List::New5()
{
    List* obj1 = (List*)uNew(List_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
