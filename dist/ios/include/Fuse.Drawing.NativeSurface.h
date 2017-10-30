// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/CoreGraphics/NativeSurface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.CoreGraphicsSurface.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Fuse{namespace Drawing{struct NativeSurface;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class NativeSurface :9
// {
::g::Fuse::Drawing::CoreGraphicsSurface_type* NativeSurface_typeof();
void NativeSurface__ctor_2_fn(NativeSurface* __this);
void NativeSurface__Begin_fn(NativeSurface* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float* pixelsPerPoint);
void NativeSurface__Begin1_fn(NativeSurface* __this, void** cgContext, float* pixelsPerPoint);
void NativeSurface__End_fn(NativeSurface* __this);
void NativeSurface__New1_fn(NativeSurface** __retval);
void NativeSurface__PrepareImageFill_fn(NativeSurface* __this, ::g::Fuse::Drawing::ImageFill* img);
void NativeSurface__SetCGContext_fn(void** cp, void** cgContext);
void NativeSurface__VerifyBegun_fn(NativeSurface* __this);

struct NativeSurface : ::g::Fuse::Drawing::CoreGraphicsSurface
{
    void* _cgContext;

    void ctor_2();
    void Begin1(void* cgContext, float pixelsPerPoint);
    static NativeSurface* New1();
    static void SetCGContext(void* cp, void* cgContext);
};
// }

}}} // ::g::Fuse::Drawing
