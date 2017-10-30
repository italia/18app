// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ItemListSelected.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ItemListSelected;}
namespace g{struct ItemListSelected__Template;}

namespace g{

// public partial sealed class ItemListSelected.Template :5
// {
::g::Uno::UX::Template_type* ItemListSelected__Template_typeof();
void ItemListSelected__Template__ctor_1_fn(ItemListSelected__Template* __this, ::g::ItemListSelected* parent, ::g::ItemListSelected* parentInstance);
void ItemListSelected__Template__New1_fn(ItemListSelected__Template* __this, uObject** __retval);
void ItemListSelected__Template__New2_fn(::g::ItemListSelected* parent, ::g::ItemListSelected* parentInstance, ItemListSelected__Template** __retval);

struct ItemListSelected__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::ItemListSelected*> __parent1;
    uWeak< ::g::ItemListSelected*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ItemListSelected__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::ItemListSelected* parent, ::g::ItemListSelected* parentInstance);
    static ItemListSelected__Template* New2(::g::ItemListSelected* parent, ::g::ItemListSelected* parentInstance);
};
// }

} // ::g
