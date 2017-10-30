// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/CollapsibleList.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.app18_FuseReactiveEach_Items_Property.h>
#include <_root.app18_FuseTriggersWhileBool_Value_Property.h>
#include <_root.app18_FuseTriggersWhileString_Value_Property.h>
#include <_root.CollapsibleList.h>
#include <_root.CollapsibleList.Template.h>
#include <_root.CollapsibleList.Template.Template1.h>
#include <_root.P.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroup.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileString.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>

namespace g{

// public partial sealed class CollapsibleList.Template :35
// {
// static Template() :89
static void CollapsibleList__Template__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    CollapsibleList__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    CollapsibleList__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Items"));
}

static void CollapsibleList__Template_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetFields(2,
        ::g::CollapsibleList_typeof(), offsetof(CollapsibleList__Template, __parent1), uFieldFlagsWeak,
        ::g::CollapsibleList_typeof(), offsetof(CollapsibleList__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CollapsibleList__Template, __self_Value_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CollapsibleList__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CollapsibleList__Template, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(CollapsibleList__Template, temp2_Items_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleList__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleList__Template::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* CollapsibleList__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(CollapsibleList__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CollapsibleList.Template", options);
    type->fp_build_ = CollapsibleList__Template_build;
    type->fp_cctor_ = CollapsibleList__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CollapsibleList__Template__New1_fn;
    return type;
}

// public Template(CollapsibleList parent, CollapsibleList parentInstance) :39
void CollapsibleList__Template__ctor_1_fn(CollapsibleList__Template* __this, ::g::CollapsibleList* parent, ::g::CollapsibleList* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :92
void CollapsibleList__Template__New1_fn(CollapsibleList__Template* __this, uObject** __retval)
{
    ::g::Fuse::Triggers::WhileTrue* __self1 = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::P* temp = ::g::P::New4();
    __this->temp_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp, CollapsibleList__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("group"));
    ::g::Fuse::Triggers::WhileString* temp1 = ::g::Fuse::Triggers::WhileString::New2();
    __this->temp1_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp1, CollapsibleList__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("group"));
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    __this->temp2_Items_inst = ::g::app18_FuseReactiveEach_Items_Property::New1(temp2, CollapsibleList__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(uString::Const("items"));
    __this->__self_Value_inst1 = ::g::app18_FuseTriggersWhileBool_Value_Property::New1(__self1, CollapsibleList__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(uString::Const("visible"));
    ::g::Fuse::NodeGroup* temp7 = ::g::Fuse::NodeGroup::New2();
    ::g::Fuse::Controls::Grid* temp8 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Triggers::LayoutAnimation* temp10 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp11 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp4, 3);
    CollapsibleList__Template__Template1* temp13 = CollapsibleList__Template__Template1::New2(__this, __self1);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Items_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp6, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp1->Equals2(uString::Const(""));
    temp1->Invert(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp12);
    temp8->Columns(uString::Const("1*"));
    temp8->Padding(::g::Uno::Float4__New2(0.0f, 30.0f, 30.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    temp->Color(::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f));
    temp->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp11);
    temp11->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp11->Duration(0.5);
    temp11->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionChange_);
    temp11->Easing(::g::Fuse::Animations::Easing::QuadraticOut_);
    temp11->EasingBack(::g::Fuse::Animations::Easing::QuadraticIn_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp15);
    return *__retval = __self1, void();
}

// public Template New(CollapsibleList parent, CollapsibleList parentInstance) :39
void CollapsibleList__Template__New2_fn(::g::CollapsibleList* parent, ::g::CollapsibleList* parentInstance, CollapsibleList__Template** __retval)
{
    *__retval = CollapsibleList__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CollapsibleList__Template::__selector0_;
::g::Uno::UX::Selector CollapsibleList__Template::__selector1_;

// public Template(CollapsibleList parent, CollapsibleList parentInstance) [instance] :39
void CollapsibleList__Template::ctor_1(::g::CollapsibleList* parent, ::g::CollapsibleList* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(CollapsibleList parent, CollapsibleList parentInstance) [static] :39
CollapsibleList__Template* CollapsibleList__Template::New2(::g::CollapsibleList* parent, ::g::CollapsibleList* parentInstance)
{
    CollapsibleList__Template* obj1 = (CollapsibleList__Template*)uNew(CollapsibleList__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
