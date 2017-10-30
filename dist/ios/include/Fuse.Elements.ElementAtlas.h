// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/ElementAtlas.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlas;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebuffer;}}}
namespace g{namespace Fuse{namespace Internal{struct RectPacker;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Rect;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class ElementAtlas :8
// {
uType* ElementAtlas_typeof();
void ElementAtlas__ctor__fn(ElementAtlas* __this);
void ElementAtlas__AddElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, bool* __retval);
void ElementAtlas__Dispose_fn(ElementAtlas* __this);
void ElementAtlas__FillFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, bool* drawAll, ::g::Uno::Rect* scissorRectInClipSpace);
void ElementAtlas__GetScissorRectInClipSpace_fn(::g::Fuse::DrawContext* dc, ::g::Uno::Rect* __retval);
void ElementAtlas__InvalidateElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm);
void ElementAtlas__New1_fn(ElementAtlas** __retval);
void ElementAtlas__OnFramebufferCollected_fn(ElementAtlas* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs);
void ElementAtlas__PinAndValidateFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer** __retval);
void ElementAtlas__ReinsertElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* cacheRect, bool* __retval);
void ElementAtlas__RemoveElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm);
void ElementAtlas__get_SpilledRatio_fn(ElementAtlas* __this, float* __retval);
void ElementAtlas__Unpin_fn(ElementAtlas* __this);
void ElementAtlas__WindowCoordToClipSpace_fn(::g::Uno::Float2* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Float2* __retval);
void ElementAtlas__WindowRectToClipSpace_fn(::g::Uno::Rect* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Rect* __retval);

struct ElementAtlas : uObject
{
    uStrong< ::g::Uno::Collections::List*> _elements;
    uStrong< ::g::Fuse::Elements::ElementAtlasFramebuffer*> _framebuffer;
    int _invalidElements;
    uStrong< ::g::Fuse::Internal::RectPacker*> _rectPacker;
    int _spilledPixels;

    void ctor_();
    bool AddElement(::g::Fuse::Elements::Element* elm);
    void Dispose();
    void FillFramebuffer(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, bool drawAll, ::g::Uno::Rect scissorRectInClipSpace);
    void InvalidateElement(::g::Fuse::Elements::Element* elm);
    void OnFramebufferCollected(uObject* sender, ::g::Uno::EventArgs* eventArgs);
    ::g::Uno::Graphics::Framebuffer* PinAndValidateFramebuffer(::g::Fuse::DrawContext* dc);
    bool ReinsertElement(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti cacheRect);
    void RemoveElement(::g::Fuse::Elements::Element* elm);
    float SpilledRatio();
    void Unpin();
    static ::g::Uno::Rect GetScissorRectInClipSpace(::g::Fuse::DrawContext* dc);
    static ElementAtlas* New1();
    static ::g::Uno::Float2 WindowCoordToClipSpace(::g::Uno::Float2 input, ::g::Uno::Int2 viewportSize);
    static ::g::Uno::Rect WindowRectToClipSpace(::g::Uno::Rect input, ::g::Uno::Int2 viewportSize);
};
// }

}}} // ::g::Fuse::Elements
