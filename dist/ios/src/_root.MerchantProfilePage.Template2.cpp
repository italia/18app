// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MerchantProfilePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MerchantProfilePage.h>
#include <_root.MerchantProfilePage.Template2.h>
#include <Fuse.Node.h>
#include <icon.Map.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MerchantProfilePage.Template2 :49
// {
// static Template2() :58
static void MerchantProfilePage__Template2__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    MerchantProfilePage__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Icon"*/]);
}

static void MerchantProfilePage__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Icon");
    type->SetFields(2,
        ::g::MerchantProfilePage_typeof(), offsetof(MerchantProfilePage__Template2, __parent1), uFieldFlagsWeak,
        ::g::MerchantProfilePage_typeof(), offsetof(MerchantProfilePage__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantProfilePage__Template2::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MerchantProfilePage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MerchantProfilePage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MerchantProfilePage.Template2", options);
    type->fp_build_ = MerchantProfilePage__Template2_build;
    type->fp_cctor_ = MerchantProfilePage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MerchantProfilePage__Template2__New1_fn;
    return type;
}

// public Template2(MerchantProfilePage parent, MerchantProfilePage parentInstance) :53
void MerchantProfilePage__Template2__ctor_1_fn(MerchantProfilePage__Template2* __this, ::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :61
void MerchantProfilePage__Template2__New1_fn(MerchantProfilePage__Template2* __this, uObject** __retval)
{
    ::g::icon::Map* __self1 = ::g::icon::Map::New4();
    __self1->Name(MerchantProfilePage__Template2::__selector0_);
    return *__retval = __self1, void();
}

// public Template2 New(MerchantProfilePage parent, MerchantProfilePage parentInstance) :53
void MerchantProfilePage__Template2__New2_fn(::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance, MerchantProfilePage__Template2** __retval)
{
    *__retval = MerchantProfilePage__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MerchantProfilePage__Template2::__selector0_;

// public Template2(MerchantProfilePage parent, MerchantProfilePage parentInstance) [instance] :53
void MerchantProfilePage__Template2::ctor_1(::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance)
{
    ctor_(::STRINGS[0/*"Icon"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MerchantProfilePage parent, MerchantProfilePage parentInstance) [static] :53
MerchantProfilePage__Template2* MerchantProfilePage__Template2::New2(::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance)
{
    MerchantProfilePage__Template2* obj1 = (MerchantProfilePage__Template2*)uNew(MerchantProfilePage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
