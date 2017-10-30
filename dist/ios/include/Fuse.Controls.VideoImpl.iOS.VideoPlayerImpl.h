// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/iOS/VideoImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace iOS{struct VideoPlayerImpl;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// internal static extern class VideoPlayerImpl :115
// {
uClassType* VideoPlayerImpl_typeof();
void VideoPlayerImpl__AllocateVideoState_fn(void** __retval);
void VideoPlayerImpl__FreeVideoState_fn(void** videoState);
void VideoPlayerImpl__GetDuration_fn(void** videoState, double* __retval);
void VideoPlayerImpl__GetHeight_fn(void** videoState, int* __retval);
void VideoPlayerImpl__GetPosition_fn(void** videoState, double* __retval);
void VideoPlayerImpl__GetRotation_fn(void** videoState, int* __retval);
void VideoPlayerImpl__GetVolume_fn(void** videoState, float* __retval);
void VideoPlayerImpl__GetWidth_fn(void** videoState, int* __retval);
void VideoPlayerImpl__Initialize_fn(void** videoState, uString* uri, uDelegate* loadedCallback, uDelegate* errorCallback);
void VideoPlayerImpl__Pause_fn(void** videoState);
void VideoPlayerImpl__Play_fn(void** videoState);
void VideoPlayerImpl__SetErrorHandler_fn(void** videoState, uDelegate* errorHandler);
void VideoPlayerImpl__SetPosition_fn(void** videoState, double* position);
void VideoPlayerImpl__SetVolume_fn(void** videoState, float* volume);
void VideoPlayerImpl__UpdateTexture_fn(void** videoState, uint32_t* __retval);

struct VideoPlayerImpl : uObject
{
    static void* AllocateVideoState();
    static void FreeVideoState(void* videoState);
    static double GetDuration(void* videoState);
    static int GetHeight(void* videoState);
    static double GetPosition(void* videoState);
    static int GetRotation(void* videoState);
    static float GetVolume(void* videoState);
    static int GetWidth(void* videoState);
    static void Initialize(void* videoState, uString* uri, uDelegate* loadedCallback, uDelegate* errorCallback);
    static void Pause(void* videoState);
    static void Play(void* videoState);
    static void SetErrorHandler(void* videoState, uDelegate* errorHandler);
    static void SetPosition(void* videoState, double position);
    static void SetVolume(void* videoState, float volume);
    static uint32_t UpdateTexture(void* videoState);
};
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
