// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/CollapsibleList.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CollapsibleList;}
namespace g{struct CollapsibleList__Template;}

namespace g{

// public partial sealed class CollapsibleList.Template :35
// {
::g::Uno::UX::Template_type* CollapsibleList__Template_typeof();
void CollapsibleList__Template__ctor_1_fn(CollapsibleList__Template* __this, ::g::CollapsibleList* parent, ::g::CollapsibleList* parentInstance);
void CollapsibleList__Template__New1_fn(CollapsibleList__Template* __this, uObject** __retval);
void CollapsibleList__Template__New2_fn(::g::CollapsibleList* parent, ::g::CollapsibleList* parentInstance, CollapsibleList__Template** __retval);

struct CollapsibleList__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::CollapsibleList*> __parent1;
    uWeak< ::g::CollapsibleList*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CollapsibleList__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CollapsibleList__Template_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Items_inst;

    void ctor_1(::g::CollapsibleList* parent, ::g::CollapsibleList* parentInstance);
    static CollapsibleList__Template* New2(::g::CollapsibleList* parent, ::g::CollapsibleList* parentInstance);
};
// }

} // ::g
