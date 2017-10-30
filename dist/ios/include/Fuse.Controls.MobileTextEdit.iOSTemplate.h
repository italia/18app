// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/TextControls/MobileTextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct MobileTextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct MobileTextEdit__iOSTemplate;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class MobileTextEdit.iOSTemplate :193
// {
::g::Uno::UX::Template_type* MobileTextEdit__iOSTemplate_typeof();
void MobileTextEdit__iOSTemplate__ctor_1_fn(MobileTextEdit__iOSTemplate* __this, ::g::Fuse::Controls::MobileTextEdit* parent);
void MobileTextEdit__iOSTemplate__New1_fn(MobileTextEdit__iOSTemplate* __this, uObject** __retval);
void MobileTextEdit__iOSTemplate__New2_fn(::g::Fuse::Controls::MobileTextEdit* parent, MobileTextEdit__iOSTemplate** __retval);

struct MobileTextEdit__iOSTemplate : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::MobileTextEdit*> _parent;

    void ctor_1(::g::Fuse::Controls::MobileTextEdit* parent);
    static MobileTextEdit__iOSTemplate* New2(::g::Fuse::Controls::MobileTextEdit* parent);
};
// }

}}} // ::g::Fuse::Controls
