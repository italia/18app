// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Graphics/Framebuffer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct RenderTarget;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Uno{
namespace Graphics{

// public sealed class Framebuffer :11
// {
struct Framebuffer_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Framebuffer_type* Framebuffer_typeof();
void Framebuffer__ctor__fn(Framebuffer* __this, ::g::Uno::Int2* size, int* format, int* flags);
void Framebuffer__get_ColorBuffer_fn(Framebuffer* __this, ::g::Uno::Graphics::Texture2D** __retval);
void Framebuffer__set_ColorBuffer_fn(Framebuffer* __this, ::g::Uno::Graphics::Texture2D* value);
void Framebuffer__Dispose_fn(Framebuffer* __this);
void Framebuffer__get_Format_fn(Framebuffer* __this, int* __retval);
void Framebuffer__get_HasDepth_fn(Framebuffer* __this, bool* __retval);
void Framebuffer__New1_fn(::g::Uno::Int2* size, int* format, int* flags, Framebuffer** __retval);
void Framebuffer__get_RenderTarget_fn(Framebuffer* __this, ::g::Uno::Graphics::RenderTarget** __retval);
void Framebuffer__set_RenderTarget_fn(Framebuffer* __this, ::g::Uno::Graphics::RenderTarget* value);
void Framebuffer__get_Size_fn(Framebuffer* __this, ::g::Uno::Int2* __retval);

struct Framebuffer : uObject
{
    uStrong< ::g::Uno::Graphics::Texture2D*> _ColorBuffer;
    uStrong< ::g::Uno::Graphics::RenderTarget*> _RenderTarget;

    void ctor_(::g::Uno::Int2 size, int format, int flags);
    ::g::Uno::Graphics::Texture2D* ColorBuffer();
    void ColorBuffer(::g::Uno::Graphics::Texture2D* value);
    void Dispose();
    int Format();
    bool HasDepth();
    ::g::Uno::Graphics::RenderTarget* RenderTarget();
    void RenderTarget(::g::Uno::Graphics::RenderTarget* value);
    ::g::Uno::Int2 Size();
    static Framebuffer* New1(::g::Uno::Int2 size, int format, int flags);
};
// }

}}} // ::g::Uno::Graphics
