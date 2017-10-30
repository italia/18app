// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MerchantProfilePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MerchantProfilePage.h>
#include <_root.MerchantProfilePage.Template.h>
#include <Fuse.Node.h>
#include <icon.Map.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MerchantProfilePage.Template :7
// {
// static Template() :16
static void MerchantProfilePage__Template__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    MerchantProfilePage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Icon"*/]);
}

static void MerchantProfilePage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Icon");
    type->SetFields(2,
        ::g::MerchantProfilePage_typeof(), offsetof(MerchantProfilePage__Template, __parent1), uFieldFlagsWeak,
        ::g::MerchantProfilePage_typeof(), offsetof(MerchantProfilePage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantProfilePage__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MerchantProfilePage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MerchantProfilePage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MerchantProfilePage.Template", options);
    type->fp_build_ = MerchantProfilePage__Template_build;
    type->fp_cctor_ = MerchantProfilePage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MerchantProfilePage__Template__New1_fn;
    return type;
}

// public Template(MerchantProfilePage parent, MerchantProfilePage parentInstance) :11
void MerchantProfilePage__Template__ctor_1_fn(MerchantProfilePage__Template* __this, ::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :19
void MerchantProfilePage__Template__New1_fn(MerchantProfilePage__Template* __this, uObject** __retval)
{
    ::g::icon::Map* __self1 = ::g::icon::Map::New4();
    __self1->Name(MerchantProfilePage__Template::__selector0_);
    return *__retval = __self1, void();
}

// public Template New(MerchantProfilePage parent, MerchantProfilePage parentInstance) :11
void MerchantProfilePage__Template__New2_fn(::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance, MerchantProfilePage__Template** __retval)
{
    *__retval = MerchantProfilePage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MerchantProfilePage__Template::__selector0_;

// public Template(MerchantProfilePage parent, MerchantProfilePage parentInstance) [instance] :11
void MerchantProfilePage__Template::ctor_1(::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance)
{
    ctor_(::STRINGS[0/*"Icon"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MerchantProfilePage parent, MerchantProfilePage parentInstance) [static] :11
MerchantProfilePage__Template* MerchantProfilePage__Template::New2(::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance)
{
    MerchantProfilePage__Template* obj1 = (MerchantProfilePage__Template*)uNew(MerchantProfilePage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
