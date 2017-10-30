// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/.uno/ux13/Fuse.Controls.TextControl.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl__Template1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class TextControl.Template1 :26
// {
::g::Uno::UX::Template_type* TextControl__Template1_typeof();
void TextControl__Template1__ctor_1_fn(TextControl__Template1* __this, ::g::Fuse::Controls::TextControl* parent, ::g::Fuse::Controls::TextControl* parentInstance);
void TextControl__Template1__New1_fn(TextControl__Template1* __this, uObject** __retval);
void TextControl__Template1__New2_fn(::g::Fuse::Controls::TextControl* parent, ::g::Fuse::Controls::TextControl* parentInstance, TextControl__Template1** __retval);

struct TextControl__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::TextControl*> __parent1;
    uWeak< ::g::Fuse::Controls::TextControl*> __parentInstance1;

    void ctor_1(::g::Fuse::Controls::TextControl* parent, ::g::Fuse::Controls::TextControl* parentInstance);
    static TextControl__Template1* New2(::g::Fuse::Controls::TextControl* parent, ::g::Fuse::Controls::TextControl* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
