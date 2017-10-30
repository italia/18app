// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/ElementAtlasPool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ISoftDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolEntry;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolImpl;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class ElementAtlasFramebufferPoolImpl :179
// {
struct ElementAtlasFramebufferPoolImpl_type : uType
{
    ::g::Fuse::Resources::ISoftDisposable interface0;
};

ElementAtlasFramebufferPoolImpl_type* ElementAtlasFramebufferPoolImpl_typeof();
void ElementAtlasFramebufferPoolImpl__ctor__fn(ElementAtlasFramebufferPoolImpl* __this);
void ElementAtlasFramebufferPoolImpl__AddEntry_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval);
void ElementAtlasFramebufferPoolImpl__DiscardPool_fn(ElementAtlasFramebufferPoolImpl* __this);
void ElementAtlasFramebufferPoolImpl__EnsurePool_fn(ElementAtlasFramebufferPoolImpl* __this);
void ElementAtlasFramebufferPoolImpl__FindFramebuffer_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval);
void ElementAtlasFramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn(ElementAtlasFramebufferPoolImpl* __this);
void ElementAtlasFramebufferPoolImpl__New1_fn(ElementAtlasFramebufferPoolImpl** __retval);
void ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged_fn(ElementAtlasFramebufferPoolImpl* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs);
void ElementAtlasFramebufferPoolImpl__UpdateUsage_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode* fb);

struct ElementAtlasFramebufferPoolImpl : uObject
{
    uStrong< ::g::Uno::Collections::LinkedList*> _framebufferPool;

    void ctor_();
    ::g::Uno::Collections::LinkedListNode* AddEntry();
    void DiscardPool();
    void EnsurePool();
    ::g::Uno::Collections::LinkedListNode* FindFramebuffer();
    void OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* eventArgs);
    void UpdateUsage(::g::Uno::Collections::LinkedListNode* fb);
    static ElementAtlasFramebufferPoolImpl* New1();
};
// }

}}} // ::g::Fuse::Elements
