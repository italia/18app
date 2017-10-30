// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/ElementBatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ISoftDisposable.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlas;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatch;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatchEntry;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatcher;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class ElementBatcher :27
// {
struct ElementBatcher_type : uType
{
    ::g::Fuse::Resources::ISoftDisposable interface0;
    ::g::Uno::IDisposable interface1;
};

ElementBatcher_type* ElementBatcher_typeof();
void ElementBatcher__ctor__fn(ElementBatcher* __this);
void ElementBatcher__AddElement_fn(ElementBatcher* __this, ::g::Fuse::Visual* elm);
void ElementBatcher__allocAtlas_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas** __retval);
void ElementBatcher__allocBatch_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas* atlas, ::g::Fuse::Elements::ElementBatch** __retval);
void ElementBatcher__DiscardAtlasing_fn(ElementBatcher* __this);
void ElementBatcher__DiscardBatching_fn(ElementBatcher* __this);
void ElementBatcher__Dispose_fn(ElementBatcher* __this);
void ElementBatcher__Draw_fn(ElementBatcher* __this, ::g::Fuse::DrawContext* dc);
void ElementBatcher__FuseResourcesISoftDisposableSoftDispose_fn(ElementBatcher* __this);
void ElementBatcher__get_MaxElementPixels_fn(int* __retval);
void ElementBatcher__get_MaxElementSize_fn(::g::Uno::Int2* __retval);
void ElementBatcher__New1_fn(ElementBatcher** __retval);
void ElementBatcher__OnAtlasSizeChanged_fn(ElementBatcher* __this, uObject* sender, ::g::Uno::EventArgs* args);
void ElementBatcher__Remove_fn(ElementBatcher* __this, ::g::Fuse::Elements::Element* elm);
void ElementBatcher__RemoveAllElements_fn(ElementBatcher* __this);
void ElementBatcher__ShouldBatchElement_fn(::g::Fuse::Visual* node, bool* __retval);
void ElementBatcher__ShouldBatchElementWithCachingMode_fn(int* mode, bool* __retval);
void ElementBatcher__ShouldBatchElementWithSize_fn(::g::Uno::Int2* size, bool* __retval);
void ElementBatcher__UpdateDrawList_fn(ElementBatcher* __this);

struct ElementBatcher : uObject
{
    uStrong< ::g::Uno::Collections::List*> _atlasPool;
    uStrong< ::g::Uno::Collections::List*> _batchPool;
    uStrong< ::g::Uno::Collections::List*> _drawList;
    uStrong< ::g::Uno::Collections::List*> _elements;
    uStrong< ::g::Uno::Collections::List*> _reinsertCheckList;
    bool DrawListValid;
    float MaxSpilledRatio;

    void ctor_();
    void AddElement(::g::Fuse::Visual* elm);
    ::g::Fuse::Elements::ElementAtlas* allocAtlas();
    ::g::Fuse::Elements::ElementBatch* allocBatch(::g::Fuse::Elements::ElementAtlas* atlas);
    void DiscardAtlasing();
    void DiscardBatching();
    void Dispose();
    void Draw(::g::Fuse::DrawContext* dc);
    void OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void Remove(::g::Fuse::Elements::Element* elm);
    void RemoveAllElements();
    void UpdateDrawList();
    static ElementBatcher* New1();
    static bool ShouldBatchElement(::g::Fuse::Visual* node);
    static bool ShouldBatchElementWithCachingMode(int mode);
    static bool ShouldBatchElementWithSize(::g::Uno::Int2 size);
    static int MaxElementPixels();
    static ::g::Uno::Int2 MaxElementSize();
};
// }

}}} // ::g::Fuse::Elements
