// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ItemListSelected.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ItemListSelected.h>
#include <_root.ItemListSelected.Template.h>
#include <_root.P.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];

namespace g{

// public partial sealed class ItemListSelected.Template :5
// {
// static Template() :14
static void ItemListSelected__Template__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ItemListSelected__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"RightIcon"*/]);
}

static void ItemListSelected__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("RightIcon");
    ::STRINGS[1] = uString::Const("V");
    type->SetFields(2,
        ::g::ItemListSelected_typeof(), offsetof(ItemListSelected__Template, __parent1), uFieldFlagsWeak,
        ::g::ItemListSelected_typeof(), offsetof(ItemListSelected__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ItemListSelected__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ItemListSelected__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ItemListSelected__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ItemListSelected.Template", options);
    type->fp_build_ = ItemListSelected__Template_build;
    type->fp_cctor_ = ItemListSelected__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ItemListSelected__Template__New1_fn;
    return type;
}

// public Template(ItemListSelected parent, ItemListSelected parentInstance) :9
void ItemListSelected__Template__ctor_1_fn(ItemListSelected__Template* __this, ::g::ItemListSelected* parent, ::g::ItemListSelected* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :17
void ItemListSelected__Template__New1_fn(ItemListSelected__Template* __this, uObject** __retval)
{
    ::g::P* __self1 = ::g::P::New4();
    __self1->Value(::STRINGS[1/*"V"*/]);
    __self1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    __self1->Name(ItemListSelected__Template::__selector0_);
    return *__retval = __self1, void();
}

// public Template New(ItemListSelected parent, ItemListSelected parentInstance) :9
void ItemListSelected__Template__New2_fn(::g::ItemListSelected* parent, ::g::ItemListSelected* parentInstance, ItemListSelected__Template** __retval)
{
    *__retval = ItemListSelected__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ItemListSelected__Template::__selector0_;

// public Template(ItemListSelected parent, ItemListSelected parentInstance) [instance] :9
void ItemListSelected__Template::ctor_1(::g::ItemListSelected* parent, ::g::ItemListSelected* parentInstance)
{
    ctor_(::STRINGS[0/*"RightIcon"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(ItemListSelected parent, ItemListSelected parentInstance) [static] :9
ItemListSelected__Template* ItemListSelected__Template::New2(::g::ItemListSelected* parent, ::g::ItemListSelected* parentInstance)
{
    ItemListSelected__Template* obj1 = (ItemListSelected__Template*)uNew(ItemListSelected__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
