// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ButtonEntry.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ButtonEntry;}
namespace g{struct ButtonEntry__Template;}

namespace g{

// public partial sealed class ButtonEntry.Template :50
// {
::g::Uno::UX::Template_type* ButtonEntry__Template_typeof();
void ButtonEntry__Template__ctor_1_fn(ButtonEntry__Template* __this, ::g::ButtonEntry* parent, ::g::ButtonEntry* parentInstance);
void ButtonEntry__Template__New1_fn(ButtonEntry__Template* __this, uObject** __retval);
void ButtonEntry__Template__New2_fn(::g::ButtonEntry* parent, ::g::ButtonEntry* parentInstance, ButtonEntry__Template** __retval);

struct ButtonEntry__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::ButtonEntry*> __parent1;
    uWeak< ::g::ButtonEntry*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ButtonEntry__Template_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> __self_Color_inst1;

    void ctor_1(::g::ButtonEntry* parent, ::g::ButtonEntry* parentInstance);
    static ButtonEntry__Template* New2(::g::ButtonEntry* parent, ::g::ButtonEntry* parentInstance);
};
// }

} // ::g
