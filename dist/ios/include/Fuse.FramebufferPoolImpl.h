// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/FramebufferPool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ISoftDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct CacheFramebuffer;}}
namespace g{namespace Fuse{struct FramebufferPoolImpl;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{

// internal sealed class FramebufferPoolImpl :61
// {
struct FramebufferPoolImpl_type : uType
{
    ::g::Fuse::Resources::ISoftDisposable interface0;
};

FramebufferPoolImpl_type* FramebufferPoolImpl_typeof();
void FramebufferPoolImpl__ctor__fn(FramebufferPoolImpl* __this);
void FramebufferPoolImpl__CollectCacheFramebuffers_fn(FramebufferPoolImpl* __this);
void FramebufferPoolImpl__FindBuffer_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, int* flags, ::g::Uno::Graphics::Framebuffer** __retval);
void FramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn(FramebufferPoolImpl* __this);
void FramebufferPoolImpl__Lock_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval);
void FramebufferPoolImpl__New1_fn(FramebufferPoolImpl** __retval);
void FramebufferPoolImpl__Register_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb);
void FramebufferPoolImpl__Release_fn(FramebufferPoolImpl* __this, ::g::Uno::Graphics::Framebuffer* fb);
void FramebufferPoolImpl__UnRegister_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb);
void FramebufferPoolImpl__Update_fn(FramebufferPoolImpl* __this);

struct FramebufferPoolImpl : uObject
{
    uStrong< ::g::Uno::Collections::List*> cacheFramebuffers;
    int frame;
    uStrong< ::g::Uno::Collections::List*> framebufferPool;
    int framebuffersProvidedSinceLastCollect;
    uStrong< ::g::Uno::Collections::Dictionary*> lastFrameUsed;
    uStrong< ::g::Uno::Collections::HashSet*> lockedFramebuffers;
    int pixelsProvidedSinceLastCollect;

    void ctor_();
    void CollectCacheFramebuffers();
    ::g::Uno::Graphics::Framebuffer* FindBuffer(int width, int height, int format, int flags);
    ::g::Uno::Graphics::Framebuffer* Lock(int width, int height, int format, bool depth);
    void Register(::g::Fuse::CacheFramebuffer* cfb);
    void Release(::g::Uno::Graphics::Framebuffer* fb);
    void UnRegister(::g::Fuse::CacheFramebuffer* cfb);
    void Update();
    static FramebufferPoolImpl* New1();
};
// }

}} // ::g::Fuse
