// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/List.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct List;}
namespace g{struct List__Template1;}

namespace g{

// public partial sealed class List.Template1 :85
// {
::g::Uno::UX::Template_type* List__Template1_typeof();
void List__Template1__ctor_1_fn(List__Template1* __this, ::g::List* parent, ::g::List* parentInstance);
void List__Template1__New1_fn(List__Template1* __this, uObject** __retval);
void List__Template1__New2_fn(::g::List* parent, ::g::List* parentInstance, List__Template1** __retval);

struct List__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::List*> __parent1;
    uWeak< ::g::List*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return List__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return List__Template1_typeof()->Init(), __selector1_; }
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb6;
    uStrong< ::g::Uno::UX::Property1*> temp_icon_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_1(::g::List* parent, ::g::List* parentInstance);
    static List__Template1* New2(::g::List* parent, ::g::List* parentInstance);
};
// }

} // ::g
