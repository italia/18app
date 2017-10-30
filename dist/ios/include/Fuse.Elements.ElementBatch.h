// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/ElementBatch.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.IElementBatchDrawable.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Graphics.VertexAttributeInfo.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlas;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatch;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatchEntry;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatcher;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class ElementBatch :72
// {
struct ElementBatch_type : uType
{
    ::g::Fuse::Elements::IElementBatchDrawable interface0;
    ::g::Uno::Collections::IEnumerable interface1;
};

ElementBatch_type* ElementBatch_typeof();
void ElementBatch__ctor__fn(ElementBatch* __this, ::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas);
void ElementBatch__AddElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm);
void ElementBatch__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval);
void ElementBatch__Dispose_fn(ElementBatch* __this);
void ElementBatch__Draw_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace);
void ElementBatch__FillIndexBuffer_fn(ElementBatch* __this);
void ElementBatch__FillVertexPositionBuffer_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc);
void ElementBatch__FillVertexTexCoordBuffer_fn(ElementBatch* __this);
void ElementBatch__GetCachingRect_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* __retval);
void ElementBatch__GetEnumerator_fn(ElementBatch* __this, uObject** __retval);
void ElementBatch__init_DrawCalls_fn(ElementBatch* __this);
void ElementBatch__InvalidateOpacity_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm);
void ElementBatch__InvalidateRenderBounds_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm);
void ElementBatch__InvalidateTransform_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm);
void ElementBatch__IsFull_fn(ElementBatch* __this, bool* __retval);
void ElementBatch__New1_fn(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas, ElementBatch** __retval);
void ElementBatch__PickVisual_fn(::g::Fuse::Elements::ElementBatchEntry* e, ::g::Fuse::Visual** __retval);
void ElementBatch__RemoveElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm);
void ElementBatch__get_RenderBounds_fn(ElementBatch* __this, ::g::Fuse::VisualBounds** __retval);
void ElementBatch__TryGetCachingRect_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* cachingRect, bool* __retval);

struct ElementBatch : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f8c70145;
    uStrong< ::g::Fuse::Elements::ElementAtlas*> _elementAtlas;
    uStrong< ::g::Fuse::Elements::ElementBatcher*> _elementBatcher;
    uStrong< ::g::Uno::Collections::List*> _elements;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> _indexBuffer;
    bool _indexBufferValid;
    ::g::Uno::Graphics::VertexAttributeInfo _positionInfo;
    int _prevElementCount;
    uStrong< ::g::Fuse::VisualBounds*> _renderBounds;
    uStrong< ::g::Uno::Buffer*> _tempBuffer;
    ::g::Uno::Graphics::VertexAttributeInfo _texCoordInfo;
    bool _vertexPositionBufferValid;
    bool _vertexTexCoordBufferValid;

    void ctor_(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas);
    void AddElement(::g::Fuse::Elements::Element* elm);
    void Dispose();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace);
    void FillIndexBuffer();
    void FillVertexPositionBuffer(::g::Fuse::DrawContext* dc);
    void FillVertexTexCoordBuffer();
    uObject* GetEnumerator();
    void init_DrawCalls();
    void InvalidateOpacity(::g::Fuse::Elements::Element* elm);
    void InvalidateRenderBounds(::g::Fuse::Elements::Element* elm);
    void InvalidateTransform(::g::Fuse::Elements::Element* elm);
    bool IsFull();
    void RemoveElement(::g::Fuse::Elements::Element* elm);
    ::g::Fuse::VisualBounds* RenderBounds();
    static ::g::Uno::Recti ConservativelySnapToCoveringIntegers(::g::Uno::Rect r);
    static ::g::Uno::Recti GetCachingRect(::g::Fuse::Elements::Element* elm);
    static ElementBatch* New1(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas);
    static ::g::Fuse::Visual* PickVisual(::g::Fuse::Elements::ElementBatchEntry* e);
    static bool TryGetCachingRect(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* cachingRect);
};
// }

}}} // ::g::Fuse::Elements
