// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Internal/SizingContainer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class SizingContainer :7
// {
uType* SizingContainer_typeof();
void SizingContainer__ctor__fn(SizingContainer* __this);
void SizingContainer__CalcClip_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float4* __retval);
void SizingContainer__CalcContentSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Uno::Int2* pixelSize, ::g::Uno::Float2* __retval);
void SizingContainer__CalcOrigin_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float2* __retval);
void SizingContainer__CalcScale_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, ::g::Uno::Float2* __retval);
void SizingContainer__CalcScale1_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, bool* autoWidth, bool* autoHeight, ::g::Uno::Float2* __retval);
void SizingContainer__ExpandFillSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void SizingContainer__New1_fn(SizingContainer** __retval);
void SizingContainer__get_PaddingHeight_fn(SizingContainer* __this, float* __retval);
void SizingContainer__get_PaddingWidth_fn(SizingContainer* __this, float* __retval);
void SizingContainer__SetAlignment_fn(SizingContainer* __this, int* a, bool* __retval);
void SizingContainer__SetStretchDirection_fn(SizingContainer* __this, int* dir, bool* __retval);
void SizingContainer__SetStretchMode_fn(SizingContainer* __this, int* mode, bool* __retval);
void SizingContainer__SetStretchSizing_fn(SizingContainer* __this, int* ss, bool* __retval);
void SizingContainer__SnapSize_fn(SizingContainer* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* __retval);

struct SizingContainer : uObject
{
    float absoluteZoom;
    int align;
    ::g::Uno::Float4 padding;
    bool snapToPixels;
    int stretchDirection;
    int stretchMode;
    int stretchSizing;

    void ctor_();
    ::g::Uno::Float4 CalcClip(::g::Uno::Float2 availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize);
    ::g::Uno::Float2 CalcContentSize(::g::Uno::Float2 size, ::g::Uno::Int2 pixelSize);
    ::g::Uno::Float2 CalcOrigin(::g::Uno::Float2 availableSize, ::g::Uno::Float2 contentActualSize);
    ::g::Uno::Float2 CalcScale(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize);
    ::g::Uno::Float2 CalcScale1(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight);
    ::g::Uno::Float2 ExpandFillSize(::g::Uno::Float2 size, ::g::Fuse::LayoutParams lp);
    float PaddingHeight();
    float PaddingWidth();
    bool SetAlignment(int a);
    bool SetStretchDirection(int dir);
    bool SetStretchMode(int mode);
    bool SetStretchSizing(int ss);
    ::g::Uno::Float2 SnapSize(::g::Uno::Float2 sz);
    static SizingContainer* New1();
};
// }

}}} // ::g::Fuse::Internal
