// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/iOS/VideoImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace iOS{struct VideoPlayer;}}}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// internal sealed extern class VideoPlayer :11
// {
struct VideoPlayer_type : uType
{
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer interface0;
    ::g::Uno::IDisposable interface1;
};

VideoPlayer_type* VideoPlayer_typeof();
void VideoPlayer__ctor__fn(VideoPlayer* __this, uString* uri, uDelegate* onLoaded, uDelegate* onLoadError);
void VideoPlayer__Dispose_fn(VideoPlayer* __this);
void VideoPlayer__get_Duration_fn(VideoPlayer* __this, double* __retval);
void VideoPlayer__add_ErrorOccurred_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__remove_ErrorOccurred_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__add_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__remove_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value);
void VideoPlayer__New1_fn(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError, VideoPlayer** __retval);
void VideoPlayer__OnFrameAvailable_fn(VideoPlayer* __this);
void VideoPlayer__Pause_fn(VideoPlayer* __this);
void VideoPlayer__Play_fn(VideoPlayer* __this);
void VideoPlayer__PlayerErrorHandler_fn(VideoPlayer* __this);
void VideoPlayer__get_Position_fn(VideoPlayer* __this, double* __retval);
void VideoPlayer__set_Position_fn(VideoPlayer* __this, double* value);
void VideoPlayer__get_RotationDegrees_fn(VideoPlayer* __this, int* __retval);
void VideoPlayer__get_Size_fn(VideoPlayer* __this, ::g::Uno::Int2* __retval);
void VideoPlayer__get_TextureHandle_fn(VideoPlayer* __this, uint32_t* __retval);
void VideoPlayer__Update_fn(VideoPlayer* __this);
void VideoPlayer__get_VideoTexture_fn(VideoPlayer* __this, ::g::Uno::Graphics::VideoTexture** __retval);
void VideoPlayer__get_Volume_fn(VideoPlayer* __this, float* __retval);
void VideoPlayer__set_Volume_fn(VideoPlayer* __this, float* value);

struct VideoPlayer : uObject
{
    uStrong< ::g::Uno::Graphics::VideoTexture*> _currentTexture;
    uint32_t _currentTextureHandle;
    void* _handle;
    uStrong<uDelegate*> ErrorOccurred1;
    uStrong<uDelegate*> FrameAvailable1;

    void ctor_(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError);
    void Dispose();
    double Duration();
    void add_ErrorOccurred(uDelegate* value);
    void remove_ErrorOccurred(uDelegate* value);
    void add_FrameAvailable(uDelegate* value);
    void remove_FrameAvailable(uDelegate* value);
    void OnFrameAvailable();
    void Pause();
    void Play();
    void PlayerErrorHandler();
    double Position();
    void Position(double value);
    int RotationDegrees();
    ::g::Uno::Int2 Size();
    uint32_t TextureHandle();
    void Update();
    ::g::Uno::Graphics::VideoTexture* VideoTexture();
    float Volume();
    void Volume(float value);
    static VideoPlayer* New1(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError);
};
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
