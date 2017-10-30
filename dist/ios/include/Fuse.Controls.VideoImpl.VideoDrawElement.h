// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoVisual.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct VideoDrawElement;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal sealed class VideoDrawElement :337
// {
uType* VideoDrawElement_typeof();
void VideoDrawElement__ctor__fn(VideoDrawElement* __this);
void VideoDrawElement__Draw_fn(VideoDrawElement* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::VideoTexture* tex, int* rotation);
void VideoDrawElement__init_DrawCalls_fn(VideoDrawElement* __this);
void VideoDrawElement__New1_fn(VideoDrawElement** __retval);

struct VideoDrawElement : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_46004d37;
    ::g::Uno::Float4x4 Draw_LocalTransform_46004d37_3_9_2;
    ::g::Uno::Float4x4 Draw_LocalTransform_46004d37_3_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_VertexData_46004d37_6_2_1;
    static uSStrong<VideoDrawElement*> Impl_;
    static uSStrong<VideoDrawElement*>& Impl() { return Impl_; }

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::VideoTexture* tex, int rotation);
    void init_DrawCalls();
    static VideoDrawElement* New1();
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
