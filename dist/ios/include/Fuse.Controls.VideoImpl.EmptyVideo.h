// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/IVideoPlayer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct EmptyVideo;}}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal sealed class EmptyVideo :30
// {
struct EmptyVideo_type : uType
{
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer interface0;
    ::g::Uno::IDisposable interface1;
};

EmptyVideo_type* EmptyVideo_typeof();
void EmptyVideo__ctor__fn(EmptyVideo* __this);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Duration_fn(EmptyVideo* __this, double* __retval);
void EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_ErrorOccurred_fn(EmptyVideo* __this, uDelegate* value);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_ErrorOccurred_fn(EmptyVideo* __this, uDelegate* value);
void EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_FrameAvailable_fn(EmptyVideo* __this, uDelegate* value);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_FrameAvailable_fn(EmptyVideo* __this, uDelegate* value);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerPause_fn(EmptyVideo* __this);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerPlay_fn(EmptyVideo* __this);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Position_fn(EmptyVideo* __this, double* __retval);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Position_fn(EmptyVideo* __this, double* value);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_RotationDegrees_fn(EmptyVideo* __this, int* __retval);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Size_fn(EmptyVideo* __this, ::g::Uno::Int2* __retval);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerUpdate_fn(EmptyVideo* __this);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_VideoTexture_fn(EmptyVideo* __this, ::g::Uno::Graphics::VideoTexture** __retval);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Volume_fn(EmptyVideo* __this, float* __retval);
void EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Volume_fn(EmptyVideo* __this, float* value);
void EmptyVideo__New1_fn(EmptyVideo** __retval);
void EmptyVideo__UnoIDisposableDispose_fn(EmptyVideo* __this);

struct EmptyVideo : uObject
{
    void ctor_();
    static EmptyVideo* New1();
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
