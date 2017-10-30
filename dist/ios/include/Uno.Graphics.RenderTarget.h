// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Graphics/RenderTarget.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct RenderTarget;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public sealed class RenderTarget :8
// {
struct RenderTarget_type : uType
{
    ::g::Uno::IDisposable interface0;
};

RenderTarget_type* RenderTarget_typeof();
void RenderTarget__ctor__fn(RenderTarget* __this);
void RenderTarget__Create_fn(::g::Uno::Graphics::Texture2D* texture, int* mip, bool* depth, RenderTarget** __retval);
void RenderTarget__Dispose_fn(RenderTarget* __this);
void RenderTarget__get_GLDepthBufferHandle_fn(RenderTarget* __this, uint32_t* __retval);
void RenderTarget__set_GLDepthBufferHandle_fn(RenderTarget* __this, uint32_t* value);
void RenderTarget__get_GLFramebufferHandle_fn(RenderTarget* __this, uint32_t* __retval);
void RenderTarget__set_GLFramebufferHandle_fn(RenderTarget* __this, uint32_t* value);
void RenderTarget__get_HasDepth_fn(RenderTarget* __this, bool* __retval);
void RenderTarget__set_HasDepth_fn(RenderTarget* __this, bool* value);
void RenderTarget__get_IsDisposed_fn(RenderTarget* __this, bool* __retval);
void RenderTarget__set_IsDisposed_fn(RenderTarget* __this, bool* value);
void RenderTarget__New1_fn(RenderTarget** __retval);
void RenderTarget__get_OwnsGLDepthBufferHandle_fn(RenderTarget* __this, bool* __retval);
void RenderTarget__set_OwnsGLDepthBufferHandle_fn(RenderTarget* __this, bool* value);
void RenderTarget__get_OwnsGLFramebufferHandle_fn(RenderTarget* __this, bool* __retval);
void RenderTarget__set_OwnsGLFramebufferHandle_fn(RenderTarget* __this, bool* value);
void RenderTarget__get_Size_fn(RenderTarget* __this, ::g::Uno::Int2* __retval);
void RenderTarget__set_Size_fn(RenderTarget* __this, ::g::Uno::Int2* value);

struct RenderTarget : uObject
{
    uint32_t _GLDepthBufferHandle;
    uint32_t _GLFramebufferHandle;
    bool _HasDepth;
    bool _IsDisposed;
    bool _OwnsGLDepthBufferHandle;
    bool _OwnsGLFramebufferHandle;
    ::g::Uno::Int2 _Size;

    void ctor_();
    void Dispose();
    uint32_t GLDepthBufferHandle();
    void GLDepthBufferHandle(uint32_t value);
    uint32_t GLFramebufferHandle();
    void GLFramebufferHandle(uint32_t value);
    bool HasDepth();
    void HasDepth(bool value);
    bool IsDisposed();
    void IsDisposed(bool value);
    bool OwnsGLDepthBufferHandle();
    void OwnsGLDepthBufferHandle(bool value);
    bool OwnsGLFramebufferHandle();
    void OwnsGLFramebufferHandle(bool value);
    ::g::Uno::Int2 Size();
    void Size(::g::Uno::Int2 value);
    static RenderTarget* Create(::g::Uno::Graphics::Texture2D* texture, int mip, bool depth);
    static RenderTarget* New1();
};
// }

}}} // ::g::Uno::Graphics
