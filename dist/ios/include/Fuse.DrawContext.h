// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/DrawContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct RenderTargetEntry;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct RenderTarget;}}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{

// public sealed class DrawContext :28
// {
uType* DrawContext_typeof();
void DrawContext__ctor__fn(DrawContext* __this, uObject* viewport);
void DrawContext__CaptureRootbuffer_fn(DrawContext* __this);
void DrawContext__CheckGLError_fn(DrawContext* __this, uString* filePath, int* lineNumber, uString* memberName);
void DrawContext__Clear_fn(DrawContext* __this, ::g::Uno::Float4* color, float* depth);
void DrawContext__get_CullFace_fn(DrawContext* __this, int* __retval);
void DrawContext__GetLocalToClipTransform_fn(DrawContext* __this, ::g::Fuse::Visual* n, ::g::Uno::Float4x4* __retval);
void DrawContext__GetRenderTargetEntry_fn(DrawContext* __this, ::g::Fuse::RenderTargetEntry** __retval);
void DrawContext__get_GLFramebuffer_fn(DrawContext* __this, uint32_t* __retval);
void DrawContext__set_GLFramebuffer_fn(DrawContext* __this, uint32_t* value);
void DrawContext__get_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* __retval);
void DrawContext__set_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* value);
void DrawContext__get_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* __retval);
void DrawContext__set_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* value);
void DrawContext__get_IsCaching_fn(DrawContext* __this, bool* __retval);
void DrawContext__set_IsCaching_fn(DrawContext* __this, bool* value);
void DrawContext__New1_fn(uObject* viewport, DrawContext** __retval);
void DrawContext__OnRenderTargetChange_fn(DrawContext* __this);
void DrawContext__PopRenderTarget_fn(DrawContext* __this);
void DrawContext__PopRenderTargetFrustum_fn(DrawContext* __this);
void DrawContext__PopScissor_fn(DrawContext* __this);
void DrawContext__PopViewport_fn(DrawContext* __this);
void DrawContext__PushRenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb);
void DrawContext__PushRenderTarget1_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt);
void DrawContext__PushRenderTarget2_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glscissor);
void DrawContext__PushRenderTargetFrustum_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb, uObject* frustum);
void DrawContext__PushScissor_fn(DrawContext* __this, ::g::Uno::Recti* scissor);
void DrawContext__PushViewport_fn(DrawContext* __this, uObject* v);
void DrawContext__ReleaseRootbuffer_fn(DrawContext* __this);
void DrawContext__get_RenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget** __retval);
void DrawContext__add_RenderTargetChange_fn(DrawContext* __this, uDelegate* value);
void DrawContext__remove_RenderTargetChange_fn(DrawContext* __this, uDelegate* value);
void DrawContext__get_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* __retval);
void DrawContext__set_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* value);
void DrawContext__get_Viewport_fn(DrawContext* __this, uObject** __retval);
void DrawContext__get_ViewportPixelsPerPoint_fn(DrawContext* __this, float* __retval);

struct DrawContext : uObject
{
    int _cullFace;
    uStrong< ::g::Uno::Collections::List*> _cullFaces;
    uint32_t _glFramebuffer;
    ::g::Uno::Int4 _glScissor;
    uStrong< ::g::Uno::Collections::List*> _glScissors;
    ::g::Uno::Int4 _glViewport;
    void* _handle;
    uStrong< ::g::Uno::Graphics::RenderTarget*> _renderTarget;
    uStrong< ::g::Uno::Collections::List*> _renderTargets;
    uStrong< ::g::Uno::Graphics::RenderTarget*> _rootbuffer;
    uStrong<uObject*> _viewport;
    uStrong< ::g::Uno::Collections::List*> _viewports;
    bool _IsCaching;
    uStrong<uDelegate*> RenderTargetChange1;

    void ctor_(uObject* viewport);
    void CaptureRootbuffer();
    void CheckGLError(uString* filePath, int lineNumber, uString* memberName);
    void Clear(::g::Uno::Float4 color, float depth);
    int CullFace();
    ::g::Uno::Float4x4 GetLocalToClipTransform(::g::Fuse::Visual* n);
    ::g::Fuse::RenderTargetEntry* GetRenderTargetEntry();
    uint32_t GLFramebuffer();
    void GLFramebuffer(uint32_t value);
    ::g::Uno::Int4 GLScissor();
    void GLScissor(::g::Uno::Int4 value);
    ::g::Uno::Int2 GLViewportPixelSize();
    void GLViewportPixelSize(::g::Uno::Int2 value);
    bool IsCaching();
    void IsCaching(bool value);
    void OnRenderTargetChange();
    void PopRenderTarget();
    void PopRenderTargetFrustum();
    void PopScissor();
    void PopViewport();
    void PushRenderTarget(::g::Uno::Graphics::Framebuffer* fb);
    void PushRenderTarget1(::g::Uno::Graphics::RenderTarget* rt);
    void PushRenderTarget2(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glscissor);
    void PushRenderTargetFrustum(::g::Uno::Graphics::Framebuffer* fb, uObject* frustum);
    void PushScissor(::g::Uno::Recti scissor);
    void PushViewport(uObject* v);
    void ReleaseRootbuffer();
    ::g::Uno::Graphics::RenderTarget* RenderTarget();
    void add_RenderTargetChange(uDelegate* value);
    void remove_RenderTargetChange(uDelegate* value);
    ::g::Uno::Recti Scissor();
    void Scissor(::g::Uno::Recti value);
    uObject* Viewport();
    float ViewportPixelsPerPoint();
    static DrawContext* New1(uObject* viewport);
};
// }

}} // ::g::Fuse
