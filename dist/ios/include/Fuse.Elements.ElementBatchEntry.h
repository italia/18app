// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/ElementBatch.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlas;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatch;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatchEntry;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class ElementBatchEntry :7
// {
uType* ElementBatchEntry_typeof();
void ElementBatchEntry__ctor__fn(ElementBatchEntry* __this, ::g::Fuse::Elements::Element* elm);
void ElementBatchEntry__GetEffectiveOpacity_fn(ElementBatchEntry* __this, float* __retval);
void ElementBatchEntry__InvalidateRenderBounds_fn(ElementBatchEntry* __this);
void ElementBatchEntry__InvalidateTransform_fn(ElementBatchEntry* __this);
void ElementBatchEntry__InvalidateVisual_fn(ElementBatchEntry* __this);
void ElementBatchEntry__InvalidateVisualComposition_fn(ElementBatchEntry* __this);
void ElementBatchEntry__New1_fn(::g::Fuse::Elements::Element* elm, ElementBatchEntry** __retval);
void ElementBatchEntry__OnRemoved_fn(ElementBatchEntry* __this);

struct ElementBatchEntry : uObject
{
    uStrong< ::g::Fuse::Elements::ElementAtlas*> _atlas;
    uStrong< ::g::Fuse::Elements::ElementBatch*> _batch;
    uStrong< ::g::Fuse::Elements::Element*> _elm;
    float _opacity;
    ::g::Uno::Recti AtlasRect;
    bool IsValid;

    void ctor_(::g::Fuse::Elements::Element* elm);
    float GetEffectiveOpacity();
    void InvalidateRenderBounds();
    void InvalidateTransform();
    void InvalidateVisual();
    void InvalidateVisualComposition();
    void OnRemoved();
    static ElementBatchEntry* New1(::g::Fuse::Elements::Element* elm);
};
// }

}}} // ::g::Fuse::Elements
