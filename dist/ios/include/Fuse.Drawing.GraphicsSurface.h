// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/CoreGraphics/GraphicsSurface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.CoreGraphicsSurface.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Drawing{struct GraphicsSurface;}}}
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class GraphicsSurface :17
// {
::g::Fuse::Drawing::CoreGraphicsSurface_type* GraphicsSurface_typeof();
void GraphicsSurface__ctor_2_fn(GraphicsSurface* __this);
void GraphicsSurface__Begin_fn(GraphicsSurface* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float* pixelsPerPoint);
void GraphicsSurface__BeginImpl_fn(void** cp, int* width, int* height, int* glTexture, bool* __retval);
void GraphicsSurface__End_fn(GraphicsSurface* __this);
void GraphicsSurface__EndImpl_fn(void** cp);
void GraphicsSurface__LoadImagePoor_fn(void** cp, int* width, int* height, void** __retval);
void GraphicsSurface__New1_fn(GraphicsSurface** __retval);
void GraphicsSurface__PrepareImageFill_fn(GraphicsSurface* __this, ::g::Fuse::Drawing::ImageFill* img);
void GraphicsSurface__VerifyBegun_fn(GraphicsSurface* __this);

struct GraphicsSurface : ::g::Fuse::Drawing::CoreGraphicsSurface
{
    uStrong< ::g::Uno::Graphics::Framebuffer*> _buffer;
    uStrong< ::g::Fuse::DrawContext*> _drawContext;
    ::g::Uno::Float2 _size;

    void ctor_2();
    static bool BeginImpl(void* cp, int width, int height, int glTexture);
    static void EndImpl(void* cp);
    static void* LoadImagePoor(void* cp, int width, int height);
    static GraphicsSurface* New1();
};
// }

}}} // ::g::Fuse::Drawing
