// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/CollapsibleList.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_CollapsibleEntry_Description_Property.h>
#include <_root.app18_CollapsibleEntry_Title_Property.h>
#include <_root.app18_FuseTriggersWhileBool_Value_Property.h>
#include <_root.CollapsibleEntry.h>
#include <_root.CollapsibleList.Template.h>
#include <_root.CollapsibleList.Template.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroup.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[6];
static uType* TYPES[2];

namespace g{

// public partial sealed class CollapsibleList.Template.Template1 :45
// {
// static Template1() :57
static void CollapsibleList__Template__Template1__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    CollapsibleList__Template__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Title"*/]);
    CollapsibleList__Template__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Description"*/]);
    CollapsibleList__Template__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
}

static void CollapsibleList__Template__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Title");
    ::STRINGS[1] = uString::Const("Description");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("title");
    ::STRINGS[4] = uString::Const("description");
    ::STRINGS[5] = uString::Const("visible");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::CollapsibleList__Template_typeof(), offsetof(CollapsibleList__Template__Template1, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(CollapsibleList__Template__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CollapsibleList__Template__Template1, __self_Value_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CollapsibleList__Template__Template1, temp_Description_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CollapsibleList__Template__Template1, temp_Title_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleList__Template__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleList__Template__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleList__Template__Template1::__selector2_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* CollapsibleList__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(CollapsibleList__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CollapsibleList.Template.Template1", options);
    type->fp_build_ = CollapsibleList__Template__Template1_build;
    type->fp_cctor_ = CollapsibleList__Template__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CollapsibleList__Template__Template1__New1_fn;
    return type;
}

// public Template1(CollapsibleList.Template parent, Fuse.Triggers.WhileTrue parentInstance) :49
void CollapsibleList__Template__Template1__ctor_1_fn(CollapsibleList__Template__Template1* __this, ::g::CollapsibleList__Template* parent, ::g::Fuse::Triggers::WhileTrue* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :60
void CollapsibleList__Template__Template1__New1_fn(CollapsibleList__Template__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Triggers::WhileTrue* __self1 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::CollapsibleEntry* temp = ::g::CollapsibleEntry::New5();
    __this->temp_Title_inst = ::g::app18_CollapsibleEntry_Title_Property::New1(temp, CollapsibleList__Template__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"title"*/]);
    __this->temp_Description_inst = ::g::app18_CollapsibleEntry_Description_Property::New1(temp, CollapsibleList__Template__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"description"*/]);
    __this->__self_Value_inst1 = ::g::app18_FuseTriggersWhileBool_Value_Property::New1(__self1, CollapsibleList__Template__Template1::__selector2_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"visible"*/]);
    ::g::Fuse::NodeGroup* temp4 = ::g::Fuse::NodeGroup::New2();
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Title_inst, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Description_inst, (uObject*)temp2, 3);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp3, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    return *__retval = __self1, void();
}

// public Template1 New(CollapsibleList.Template parent, Fuse.Triggers.WhileTrue parentInstance) :49
void CollapsibleList__Template__Template1__New2_fn(::g::CollapsibleList__Template* parent, ::g::Fuse::Triggers::WhileTrue* parentInstance, CollapsibleList__Template__Template1** __retval)
{
    *__retval = CollapsibleList__Template__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CollapsibleList__Template__Template1::__selector0_;
::g::Uno::UX::Selector CollapsibleList__Template__Template1::__selector1_;
::g::Uno::UX::Selector CollapsibleList__Template__Template1::__selector2_;

// public Template1(CollapsibleList.Template parent, Fuse.Triggers.WhileTrue parentInstance) [instance] :49
void CollapsibleList__Template__Template1::ctor_1(::g::CollapsibleList__Template* parent, ::g::Fuse::Triggers::WhileTrue* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(CollapsibleList.Template parent, Fuse.Triggers.WhileTrue parentInstance) [static] :49
CollapsibleList__Template__Template1* CollapsibleList__Template__Template1::New2(::g::CollapsibleList__Template* parent, ::g::Fuse::Triggers::WhileTrue* parentInstance)
{
    CollapsibleList__Template__Template1* obj1 = (CollapsibleList__Template__Template1*)uNew(CollapsibleList__Template__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
