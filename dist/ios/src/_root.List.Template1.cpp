// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/List.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_ButtonEntry_icon_Property.h>
#include <_root.app18_ButtonEntry_Value_Property.h>
#include <_root.ButtonEntry.h>
#include <_root.List.h>
#include <_root.List.Template1.h>
#include <_root.Separator.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroup.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[4];

namespace g{

// public partial sealed class List.Template1 :85
// {
// static Template1() :97
static void List__Template1__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    List__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"icon"*/]);
    List__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void List__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("icon");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("onTapItemList");
    ::STRINGS[3] = uString::Const("name");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetFields(2,
        ::g::List_typeof(), offsetof(List__Template1, __parent1), uFieldFlagsWeak,
        ::g::List_typeof(), offsetof(List__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(List__Template1, temp_eb6), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(List__Template1, temp_icon_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(List__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&List__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&List__Template1::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* List__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(List__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("List.Template1", options);
    type->fp_build_ = List__Template1_build;
    type->fp_cctor_ = List__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))List__Template1__New1_fn;
    return type;
}

// public Template1(List parent, List parentInstance) :89
void List__Template1__ctor_1_fn(List__Template1* __this, ::g::List* parent, ::g::List* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :100
void List__Template1__New1_fn(List__Template1* __this, uObject** __retval)
{
    ::g::Fuse::NodeGroup* __self1 = ::g::Fuse::NodeGroup::New2();
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"onTapItemList"*/]);
    ::g::ButtonEntry* temp = ::g::ButtonEntry::New5();
    __this->temp_icon_inst = ::g::app18_ButtonEntry_icon_Property::New1(temp, List__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[0/*"icon"*/]);
    __this->temp_Value_inst = ::g::app18_ButtonEntry_Value_Property::New1(temp, List__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"name"*/]);
    ::g::Fuse::Gestures::Clicked* temp4 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp5 = ::g::Fuse::Triggers::Actions::Callback::New2();
    __this->temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_icon_inst, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp3, 3);
    ::g::Separator* temp8 = ::g::Separator::New4();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb6);
    temp5->add_Handler(uDelegate::New(::TYPES[3/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    return *__retval = __self1, void();
}

// public Template1 New(List parent, List parentInstance) :89
void List__Template1__New2_fn(::g::List* parent, ::g::List* parentInstance, List__Template1** __retval)
{
    *__retval = List__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector List__Template1::__selector0_;
::g::Uno::UX::Selector List__Template1::__selector1_;

// public Template1(List parent, List parentInstance) [instance] :89
void List__Template1::ctor_1(::g::List* parent, ::g::List* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(List parent, List parentInstance) [static] :89
List__Template1* List__Template1::New2(::g::List* parent, ::g::List* parentInstance)
{
    List__Template1* obj1 = (List__Template1*)uNew(List__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
