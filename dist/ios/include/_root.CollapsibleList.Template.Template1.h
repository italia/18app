// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/CollapsibleList.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CollapsibleList__Template;}
namespace g{struct CollapsibleList__Template__Template1;}

namespace g{

// public partial sealed class CollapsibleList.Template.Template1 :45
// {
::g::Uno::UX::Template_type* CollapsibleList__Template__Template1_typeof();
void CollapsibleList__Template__Template1__ctor_1_fn(CollapsibleList__Template__Template1* __this, ::g::CollapsibleList__Template* parent, ::g::Fuse::Triggers::WhileTrue* parentInstance);
void CollapsibleList__Template__Template1__New1_fn(CollapsibleList__Template__Template1* __this, uObject** __retval);
void CollapsibleList__Template__Template1__New2_fn(::g::CollapsibleList__Template* parent, ::g::Fuse::Triggers::WhileTrue* parentInstance, CollapsibleList__Template__Template1** __retval);

struct CollapsibleList__Template__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::CollapsibleList__Template*> __parent1;
    uWeak< ::g::Fuse::Triggers::WhileTrue*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CollapsibleList__Template__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CollapsibleList__Template__Template1_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CollapsibleList__Template__Template1_typeof()->Init(), __selector2_; }
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    uStrong< ::g::Uno::UX::Property1*> temp_Description_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Title_inst;

    void ctor_1(::g::CollapsibleList__Template* parent, ::g::Fuse::Triggers::WhileTrue* parentInstance);
    static CollapsibleList__Template__Template1* New2(::g::CollapsibleList__Template* parent, ::g::Fuse::Triggers::WhileTrue* parentInstance);
};
// }

} // ::g
