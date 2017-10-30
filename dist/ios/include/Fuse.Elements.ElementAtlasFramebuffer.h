// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/ElementAtlasPool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebuffer;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolEntry;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class ElementAtlasFramebuffer :9
// {
uType* ElementAtlasFramebuffer_typeof();
void ElementAtlasFramebuffer__ctor__fn(ElementAtlasFramebuffer* __this);
void ElementAtlasFramebuffer__Collect_fn(ElementAtlasFramebuffer* __this);
void ElementAtlasFramebuffer__Dispose_fn(ElementAtlasFramebuffer* __this);
void ElementAtlasFramebuffer__add_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value);
void ElementAtlasFramebuffer__remove_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value);
void ElementAtlasFramebuffer__New1_fn(ElementAtlasFramebuffer** __retval);
void ElementAtlasFramebuffer__Pin_fn(ElementAtlasFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval);
void ElementAtlasFramebuffer__get_Pinned_fn(ElementAtlasFramebuffer* __this, bool* __retval);
void ElementAtlasFramebuffer__set_Pinned_fn(ElementAtlasFramebuffer* __this, bool* value);
void ElementAtlasFramebuffer__get_Size_fn(::g::Uno::Int2* __retval);
void ElementAtlasFramebuffer__Unpin_fn(ElementAtlasFramebuffer* __this);

struct ElementAtlasFramebuffer : uObject
{
    uStrong< ::g::Uno::Collections::LinkedListNode*> _fb;
    bool _Pinned;
    uStrong<uDelegate*> FramebufferCollected1;

    void ctor_();
    void Collect();
    void Dispose();
    void add_FramebufferCollected(uDelegate* value);
    void remove_FramebufferCollected(uDelegate* value);
    ::g::Uno::Graphics::Framebuffer* Pin();
    bool Pinned();
    void Pinned(bool value);
    void Unpin();
    static ElementAtlasFramebuffer* New1();
    static ::g::Uno::Int2 Size();
};
// }

}}} // ::g::Fuse::Elements
