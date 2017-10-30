// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/List.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_ButtonEntry_icon_Property.h>
#include <_root.app18_ButtonEntry_Value_Property.h>
#include <_root.ButtonEntry.h>
#include <_root.ItemListSelected.h>
#include <_root.List.h>
#include <_root.List.Template.h>
#include <_root.Separator.h>
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroup.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{

// public partial sealed class List.Template :50
// {
// static Template() :61
static void List__Template__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    List__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"icon"*/]);
    List__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void List__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("icon");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("name");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::List_typeof(), offsetof(List__Template, __parent1), uFieldFlagsWeak,
        ::g::List_typeof(), offsetof(List__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(List__Template, temp_icon_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(List__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&List__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&List__Template::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* List__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(List__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("List.Template", options);
    type->fp_build_ = List__Template_build;
    type->fp_cctor_ = List__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))List__Template__New1_fn;
    return type;
}

// public Template(List parent, List parentInstance) :54
void List__Template__ctor_1_fn(List__Template* __this, ::g::List* parent, ::g::List* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :64
void List__Template__New1_fn(List__Template* __this, uObject** __retval)
{
    ::g::Fuse::NodeGroup* __self1 = ::g::Fuse::NodeGroup::New2();
    ::g::ItemListSelected* temp = ::g::ItemListSelected::New6();
    __this->temp_icon_inst = ::g::app18_ButtonEntry_icon_Property::New1(temp, List__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[0/*"icon"*/]);
    __this->temp_Value_inst = ::g::app18_ButtonEntry_Value_Property::New1(temp, List__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"name"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_icon_inst, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp2, 3);
    ::g::Separator* temp5 = ::g::Separator::New4();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    return *__retval = __self1, void();
}

// public Template New(List parent, List parentInstance) :54
void List__Template__New2_fn(::g::List* parent, ::g::List* parentInstance, List__Template** __retval)
{
    *__retval = List__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector List__Template::__selector0_;
::g::Uno::UX::Selector List__Template::__selector1_;

// public Template(List parent, List parentInstance) [instance] :54
void List__Template::ctor_1(::g::List* parent, ::g::List* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(List parent, List parentInstance) [static] :54
List__Template* List__Template::New2(::g::List* parent, ::g::List* parentInstance)
{
    List__Template* obj1 = (List__Template*)uNew(List__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
