// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/CollapsibleList.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_CollapsibleList_Items.h>
#include <_root.app18_accessor_CollapsibleList_Title.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.app18_FuseReactiveEach_Items_Property.h>
#include <_root.app18_FuseTriggersWhileString_Value_Property.h>
#include <_root.CollapsibleList.h>
#include <_root.CollapsibleList.Template.h>
#include <_root.H3.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.Property.h>
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

// public partial sealed class CollapsibleList :2
// {
// static CollapsibleList() :146
static void CollapsibleList__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    CollapsibleList::__selector01_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    CollapsibleList::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
}

static void CollapsibleList_build(uType* type)
{
    type->SetDependencies(
        ::g::app18_accessor_CollapsibleList_Items_typeof(),
        ::g::app18_accessor_CollapsibleList_Title_typeof(),
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
        uObject_typeof(), offsetof(CollapsibleList, _field_Items), 0,
        ::g::Uno::String_typeof(), offsetof(CollapsibleList, _field_Title), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CollapsibleList, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CollapsibleList, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(CollapsibleList, temp2_Items_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleList::__selector01_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleList::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::ScrollViewBase_type* CollapsibleList_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ScrollViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::ScrollView_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 18;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(CollapsibleList);
    options.TypeSize = sizeof(::g::Fuse::Controls::ScrollViewBase_type);
    type = (::g::Fuse::Controls::ScrollViewBase_type*)uClassType::New("CollapsibleList", options);
    type->fp_build_ = CollapsibleList_build;
    type->fp_ctor_ = (void*)CollapsibleList__New5_fn;
    type->fp_cctor_ = CollapsibleList__cctor_5_fn;
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

// public CollapsibleList() :150
void CollapsibleList__ctor_8_fn(CollapsibleList* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :154
void CollapsibleList__InitializeUX1_fn(CollapsibleList* __this)
{
    __this->InitializeUX1();
}

// public object get_Items() :8
void CollapsibleList__get_Items_fn(CollapsibleList* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :9
void CollapsibleList__set_Items_fn(CollapsibleList* __this, uObject* value)
{
    __this->Items(value);
}

// public CollapsibleList New() :150
void CollapsibleList__New5_fn(CollapsibleList** __retval)
{
    *__retval = CollapsibleList::New5();
}

// public void SetItems(object value, Uno.UX.IPropertyListener origin) :11
void CollapsibleList__SetItems_fn(CollapsibleList* __this, uObject* value, uObject* origin)
{
    __this->SetItems(value, origin);
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) :26
void CollapsibleList__SetTitle_fn(CollapsibleList* __this, uString* value, uObject* origin)
{
    __this->SetTitle(value, origin);
}

// public string get_Title() :23
void CollapsibleList__get_Title_fn(CollapsibleList* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :24
void CollapsibleList__set_Title_fn(CollapsibleList* __this, uString* value)
{
    __this->Title(value);
}

::g::Uno::UX::Selector CollapsibleList::__selector01_;
::g::Uno::UX::Selector CollapsibleList::__selector1_;

// public CollapsibleList() [instance] :150
void CollapsibleList::ctor_8()
{
    ctor_7();
    InitializeUX1();
}

// private void InitializeUX() [instance] :154
void CollapsibleList::InitializeUX1()
{
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::H3* temp = ::g::H3::New4();
    temp_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp, CollapsibleList::__selector01_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::app18_accessor_CollapsibleList_Title::Singleton_);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::WhileString* temp1 = ::g::Fuse::Triggers::WhileString::New2();
    temp1_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp1, CollapsibleList::__selector01_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::app18_accessor_CollapsibleList_Title::Singleton_);
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::app18_FuseReactiveEach_Items_Property::New1(temp2, CollapsibleList::__selector1_);
    ::g::Fuse::Reactive::Property* temp8 = ::g::Fuse::Reactive::Property::New1(temp7, ::g::app18_accessor_CollapsibleList_Items::Singleton_);
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, 1);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp6, 1);
    CollapsibleList__Template* temp12 = CollapsibleList__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp8, 1);
    temp9->Margin(::g::Uno::Float4__New2(23.0f, 0.0f, 23.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp1->Test(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp11);
    temp->Alignment(1);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 25.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
}

// public object get_Items() [instance] :8
uObject* CollapsibleList::Items()
{
    return _field_Items;
}

// public void set_Items(object value) [instance] :9
void CollapsibleList::Items(uObject* value)
{
    SetItems(value, NULL);
}

// public void SetItems(object value, Uno.UX.IPropertyListener origin) [instance] :11
void CollapsibleList::SetItems(uObject* value, uObject* origin)
{
    if (value != _field_Items)
    {
        _field_Items = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Items")), origin);
    }
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) [instance] :26
void CollapsibleList::SetTitle(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Title))
    {
        _field_Title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(uString::Const("Title")), origin);
    }
}

// public string get_Title() [instance] :23
uString* CollapsibleList::Title()
{
    return _field_Title;
}

// public void set_Title(string value) [instance] :24
void CollapsibleList::Title(uString* value)
{
    SetTitle(value, NULL);
}

// public CollapsibleList New() [static] :150
CollapsibleList* CollapsibleList::New5()
{
    CollapsibleList* obj1 = (CollapsibleList*)uNew(CollapsibleList_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
