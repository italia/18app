// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/TextControls/MobileTextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct MobileTextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct MobileTextEdit__AndroidTemplate;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class MobileTextEdit.AndroidTemplate :175
// {
::g::Uno::UX::Template_type* MobileTextEdit__AndroidTemplate_typeof();
void MobileTextEdit__AndroidTemplate__ctor_1_fn(MobileTextEdit__AndroidTemplate* __this, ::g::Fuse::Controls::MobileTextEdit* parent);
void MobileTextEdit__AndroidTemplate__New1_fn(MobileTextEdit__AndroidTemplate* __this, uObject** __retval);
void MobileTextEdit__AndroidTemplate__New2_fn(::g::Fuse::Controls::MobileTextEdit* parent, MobileTextEdit__AndroidTemplate** __retval);

struct MobileTextEdit__AndroidTemplate : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::MobileTextEdit*> _parent;

    void ctor_1(::g::Fuse::Controls::MobileTextEdit* parent);
    static MobileTextEdit__AndroidTemplate* New2(::g::Fuse::Controls::MobileTextEdit* parent);
};
// }

}}} // ::g::Fuse::Controls
