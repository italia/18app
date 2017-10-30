// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/LimitBoxSizing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.BoxSizing.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LimitBoxSizing;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class LimitBoxSizing :6
// {
::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof();
void LimitBoxSizing__ctor_1_fn(LimitBoxSizing* __this);
void LimitBoxSizing__CalcArrangePaddingSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void LimitBoxSizing__CalcBoxPlacement_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval);
void LimitBoxSizing__CalcMarginSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void LimitBoxSizing__Limit_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* std, ::g::Uno::Float2* __retval);
void LimitBoxSizing__New1_fn(LimitBoxSizing** __retval);

struct LimitBoxSizing : ::g::Fuse::Elements::BoxSizing
{
    static uSStrong<LimitBoxSizing*> Singleton_;
    static uSStrong<LimitBoxSizing*>& Singleton() { return Singleton_; }

    void ctor_1();
    ::g::Uno::Float2 Limit(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 std);
    static LimitBoxSizing* New1();
};
// }

}}} // ::g::Fuse::Elements
