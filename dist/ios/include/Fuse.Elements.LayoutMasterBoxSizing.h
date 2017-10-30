// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/LayoutMasterBoxSizing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.BoxSizing.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutMasterBoxSizing;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutMasterBoxSizing__LayoutMasterData;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class LayoutMasterBoxSizing :18
// {
::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof();
void LayoutMasterBoxSizing__ctor_1_fn(LayoutMasterBoxSizing* __this);
void LayoutMasterBoxSizing__CalcArrangePaddingSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void LayoutMasterBoxSizing__CalcBoxPlacement_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval);
void LayoutMasterBoxSizing__CalcMarginSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void LayoutMasterBoxSizing__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval);
void LayoutMasterBoxSizing__GetLayoutMasterData_fn(::g::Fuse::Elements::Element* elm, LayoutMasterBoxSizing__LayoutMasterData** __retval);
void LayoutMasterBoxSizing__IsContentRelativeSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval);
void LayoutMasterBoxSizing__New1_fn(LayoutMasterBoxSizing** __retval);
void LayoutMasterBoxSizing__RequestLayout_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element);
void LayoutMasterBoxSizing__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);

struct LayoutMasterBoxSizing : ::g::Fuse::Elements::BoxSizing
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _layoutMasterDataProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _layoutMasterDataProperty() { return _layoutMasterDataProperty_; }
    static uSStrong<LayoutMasterBoxSizing*> Singleton_;
    static uSStrong<LayoutMasterBoxSizing*>& Singleton() { return Singleton_; }

    void ctor_1();
    static ::g::Fuse::Elements::Element* GetLayoutMaster(::g::Fuse::Elements::Element* elm);
    static LayoutMasterBoxSizing__LayoutMasterData* GetLayoutMasterData(::g::Fuse::Elements::Element* elm);
    static LayoutMasterBoxSizing* New1();
    static void SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);
};
// }

}}} // ::g::Fuse::Elements
