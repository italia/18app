// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/FramebufferPool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct CacheFramebuffer;}}
namespace g{namespace Fuse{struct FramebufferPool;}}
namespace g{namespace Fuse{struct FramebufferPoolImpl;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{

// public static class FramebufferPool :10
// {
uClassType* FramebufferPool_typeof();
void FramebufferPool__EnsurePool_fn();
void FramebufferPool__get_Frame_fn(int* __retval);
void FramebufferPool__Lock_fn(int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval);
void FramebufferPool__Lock1_fn(::g::Uno::Int2* size, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval);
void FramebufferPool__Register_fn(::g::Fuse::CacheFramebuffer* cfb);
void FramebufferPool__Release_fn(::g::Uno::Graphics::Framebuffer* fb);
void FramebufferPool__UnRegister_fn(::g::Fuse::CacheFramebuffer* cfb);

struct FramebufferPool : uObject
{
    static uSStrong< ::g::Fuse::FramebufferPoolImpl*> framebufferPool_;
    static uSStrong< ::g::Fuse::FramebufferPoolImpl*>& framebufferPool() { return framebufferPool_; }

    static void EnsurePool();
    static ::g::Uno::Graphics::Framebuffer* Lock(int width, int height, int format, bool depth);
    static ::g::Uno::Graphics::Framebuffer* Lock1(::g::Uno::Int2 size, int format, bool depth);
    static void Register(::g::Fuse::CacheFramebuffer* cfb);
    static void Release(::g::Uno::Graphics::Framebuffer* fb);
    static void UnRegister(::g::Fuse::CacheFramebuffer* cfb);
    static int Frame();
};
// }

}} // ::g::Fuse
