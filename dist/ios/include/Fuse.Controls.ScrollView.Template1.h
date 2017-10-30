// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/.uno/ux13/Fuse.Controls.ScrollView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollView__Template1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class ScrollView.Template1 :26
// {
::g::Uno::UX::Template_type* ScrollView__Template1_typeof();
void ScrollView__Template1__ctor_1_fn(ScrollView__Template1* __this, ::g::Fuse::Controls::ScrollView* parent, ::g::Fuse::Controls::ScrollView* parentInstance);
void ScrollView__Template1__New1_fn(ScrollView__Template1* __this, uObject** __retval);
void ScrollView__Template1__New2_fn(::g::Fuse::Controls::ScrollView* parent, ::g::Fuse::Controls::ScrollView* parentInstance, ScrollView__Template1** __retval);

struct ScrollView__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::ScrollView*> __parent1;
    uWeak< ::g::Fuse::Controls::ScrollView*> __parentInstance1;

    void ctor_1(::g::Fuse::Controls::ScrollView* parent, ::g::Fuse::Controls::ScrollView* parentInstance);
    static ScrollView__Template1* New2(::g::Fuse::Controls::ScrollView* parent, ::g::Fuse::Controls::ScrollView* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
