// This file was generated based on /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/EffectHelpers.Blur.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct EffectHelpers;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Effects{

// internal partial sealed class EffectHelpers :9
// {
uType* EffectHelpers_typeof();
void EffectHelpers__ctor__fn(EffectHelpers* __this);
void EffectHelpers__Blur_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float* sigma, ::g::Uno::Graphics::Framebuffer** __retval);
void EffectHelpers__BlurHorizontal_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int* samples, ::g::Uno::Graphics::Framebuffer** __retval);
void EffectHelpers__BlurVertical_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int* samples, ::g::Uno::Graphics::Framebuffer** __retval);
void EffectHelpers__GaussianBlurSeparable_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2* dir, float* sigma, int* samples);
void EffectHelpers__init_DrawCalls_fn(EffectHelpers* __this);
void EffectHelpers__get_Instance_fn(EffectHelpers** __retval);
void EffectHelpers__New1_fn(EffectHelpers** __retval);
void EffectHelpers__ResampleGaussian5tap_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2* size, ::g::Uno::Graphics::Framebuffer** __retval);

struct EffectHelpers : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_2aabda0d;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_44444bad;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6379debe;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_8e4c5d82;
    static uSStrong<EffectHelpers*> _instance_;
    static uSStrong<EffectHelpers*>& _instance() { return _instance_; }
    uStrong< ::g::Uno::Graphics::IndexBuffer*> GaussianBlurSeparable_VertexData_2aabda0d_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> GaussianBlurSeparable_VertexData_2aabda0d_2_5_3;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ResampleBilinear_VertexData_44444bad_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> ResampleBilinear_VertexData_44444bad_2_5_3;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ResampleGaussian5tap_VertexData_8e4c5d82_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> ResampleGaussian5tap_VertexData_8e4c5d82_2_5_3;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ResampleGaussian9tap_VertexData_6379debe_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> ResampleGaussian9tap_VertexData_6379debe_2_5_3;

    void ctor_();
    ::g::Uno::Graphics::Framebuffer* Blur(::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float sigma);
    ::g::Uno::Graphics::Framebuffer* BlurHorizontal(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int samples);
    ::g::Uno::Graphics::Framebuffer* BlurVertical(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int samples);
    void GaussianBlurSeparable(::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2 dir, float sigma, int samples);
    void init_DrawCalls();
    ::g::Uno::Graphics::Framebuffer* ResampleGaussian5tap(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2 size);
    static EffectHelpers* New1();
    static EffectHelpers* Instance();
};
// }

}}} // ::g::Fuse::Effects
