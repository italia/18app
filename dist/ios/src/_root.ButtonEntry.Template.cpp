// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ButtonEntry.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_ButtonEntry_TextColor.h>
#include <_root.app18_FuseControlsTextControl_Color_Property.h>
#include <_root.ButtonEntry.h>
#include <_root.ButtonEntry.Template.h>
#include <_root.P.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{

// public partial sealed class ButtonEntry.Template :50
// {
// static Template() :60
static void ButtonEntry__Template__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ButtonEntry__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Color"*/]);
}

static void ButtonEntry__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const(">");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::app18_accessor_ButtonEntry_TextColor_typeof());
    type->SetFields(2,
        ::g::ButtonEntry_typeof(), offsetof(ButtonEntry__Template, __parent1), uFieldFlagsWeak,
        ::g::ButtonEntry_typeof(), offsetof(ButtonEntry__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ButtonEntry__Template, __self_Color_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ButtonEntry__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ButtonEntry__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ButtonEntry__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ButtonEntry.Template", options);
    type->fp_build_ = ButtonEntry__Template_build;
    type->fp_cctor_ = ButtonEntry__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ButtonEntry__Template__New1_fn;
    return type;
}

// public Template(ButtonEntry parent, ButtonEntry parentInstance) :54
void ButtonEntry__Template__ctor_1_fn(ButtonEntry__Template* __this, ::g::ButtonEntry* parent, ::g::ButtonEntry* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :63
void ButtonEntry__Template__New1_fn(ButtonEntry__Template* __this, uObject** __retval)
{
    ::g::P* __self1 = ::g::P::New4();
    ::g::Fuse::Reactive::Constant* temp = ::g::Fuse::Reactive::Constant::New1(__this->__parent1);
    __this->__self_Color_inst1 = ::g::app18_FuseControlsTextControl_Color_Property::New1(__self1, ButtonEntry__Template::__selector0_);
    ::g::Fuse::Reactive::Property* temp1 = ::g::Fuse::Reactive::Property::New1(temp, ::g::app18_accessor_ButtonEntry_TextColor::Singleton_);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Color_inst1, (uObject*)temp1, 1);
    __self1->Value(::STRINGS[1/*">"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    return *__retval = __self1, void();
}

// public Template New(ButtonEntry parent, ButtonEntry parentInstance) :54
void ButtonEntry__Template__New2_fn(::g::ButtonEntry* parent, ::g::ButtonEntry* parentInstance, ButtonEntry__Template** __retval)
{
    *__retval = ButtonEntry__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ButtonEntry__Template::__selector0_;

// public Template(ButtonEntry parent, ButtonEntry parentInstance) [instance] :54
void ButtonEntry__Template::ctor_1(::g::ButtonEntry* parent, ::g::ButtonEntry* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(ButtonEntry parent, ButtonEntry parentInstance) [static] :54
ButtonEntry__Template* ButtonEntry__Template::New2(::g::ButtonEntry* parent, ::g::ButtonEntry* parentInstance)
{
    ButtonEntry__Template* obj1 = (ButtonEntry__Template*)uNew(ButtonEntry__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
