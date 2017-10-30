// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/AspectBoxSizing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.BoxSizing.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct FillAspectBoxSizing;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class FillAspectBoxSizing :19
// {
::g::Fuse::Elements::BoxSizing_type* FillAspectBoxSizing_typeof();
void FillAspectBoxSizing__ctor_1_fn(FillAspectBoxSizing* __this);
void FillAspectBoxSizing__CalcArrangePaddingSize_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void FillAspectBoxSizing__CalcBoxPlacement_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval);
void FillAspectBoxSizing__CalcMarginSize_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void FillAspectBoxSizing__Fit_fn(FillAspectBoxSizing* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* max, float* aspect, ::g::Uno::Float2* __retval);
void FillAspectBoxSizing__New1_fn(FillAspectBoxSizing** __retval);
void FillAspectBoxSizing__Pick_fn(FillAspectBoxSizing* __this, ::g::Uno::Float2* sz, float* aspect, ::g::Uno::Float2* __retval);

struct FillAspectBoxSizing : ::g::Fuse::Elements::BoxSizing
{
    static uSStrong<FillAspectBoxSizing*> Singleton_;
    static uSStrong<FillAspectBoxSizing*>& Singleton() { return Singleton_; }

    void ctor_1();
    ::g::Uno::Float2 Fit(::g::Uno::Float2 sz, ::g::Uno::Float2 max, float aspect);
    ::g::Uno::Float2 Pick(::g::Uno::Float2 sz, float aspect);
    static FillAspectBoxSizing* New1();
};
// }

}}} // ::g::Fuse::Elements
