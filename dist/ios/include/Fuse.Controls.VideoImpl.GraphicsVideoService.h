// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoContainer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.VideoImpl.IVideoService.h>
#include <Uno.IDisposable.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct GraphicsVideoService;}}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal sealed class GraphicsVideoService :93
// {
struct GraphicsVideoService_type : uType
{
    ::g::Fuse::Controls::VideoImpl::IVideoService interface0;
    ::g::Uno::IDisposable interface1;
};

GraphicsVideoService_type* GraphicsVideoService_typeof();
void GraphicsVideoService__ctor__fn(GraphicsVideoService* __this, uObject* callbacks);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_AutoPlay_fn(GraphicsVideoService* __this, bool* value);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Duration_fn(GraphicsVideoService* __this, double* __retval);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_IsLooping_fn(GraphicsVideoService* __this, bool* value);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_IsValid_fn(GraphicsVideoService* __this, bool* __retval);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad_fn(GraphicsVideoService* __this, uString* url);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad1_fn(GraphicsVideoService* __this, ::g::Uno::UX::FileSource* file);
void GraphicsVideoService__FuseControlsVideoImplIVideoServicePause_fn(GraphicsVideoService* __this);
void GraphicsVideoService__FuseControlsVideoImplIVideoServicePlay_fn(GraphicsVideoService* __this);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Position_fn(GraphicsVideoService* __this, double* __retval);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Position_fn(GraphicsVideoService* __this, double* value);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_RotationDegrees_fn(GraphicsVideoService* __this, int* __retval);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Size_fn(GraphicsVideoService* __this, ::g::Uno::Int2* __retval);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceUnload_fn(GraphicsVideoService* __this);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceUpdate_fn(GraphicsVideoService* __this);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_VideoTexture_fn(GraphicsVideoService* __this, ::g::Uno::Graphics::VideoTexture** __retval);
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Volume_fn(GraphicsVideoService* __this, float* value);
void GraphicsVideoService__get_IsCompleted_fn(GraphicsVideoService* __this, bool* __retval);
void GraphicsVideoService__New1_fn(uObject* callbacks, GraphicsVideoService** __retval);
void GraphicsVideoService__OnLoaded_fn(GraphicsVideoService* __this, uObject* player);
void GraphicsVideoService__OnLoadingError_fn(GraphicsVideoService* __this, ::g::Uno::Exception* e);
void GraphicsVideoService__OnPlayerError_fn(GraphicsVideoService* __this, uObject* sender, ::g::Uno::Exception* e);
void GraphicsVideoService__OnPlayerFrameAvailable_fn(GraphicsVideoService* __this, uObject* sender, ::g::Uno::EventArgs* args);
void GraphicsVideoService__get_Player_fn(GraphicsVideoService* __this, uObject** __retval);
void GraphicsVideoService__Reset_fn(GraphicsVideoService* __this);
void GraphicsVideoService__SetPlayer_fn(GraphicsVideoService* __this, uObject* player);
void GraphicsVideoService__UnoIDisposableDispose_fn(GraphicsVideoService* __this);

struct GraphicsVideoService : uObject
{
    bool _autoPlay;
    uStrong<uObject*> _callbacks;
    double _durationCache;
    uStrong<uObject*> _empty;
    bool _isLooping;
    uStrong<uObject*> _loading;
    uStrong<uObject*> _player;
    int _rotationCache;
    ::g::Uno::Int2 _sizeCache;
    float _volume;
    static float CompletionTimeThreshold_;
    static float& CompletionTimeThreshold() { return CompletionTimeThreshold_; }

    void ctor_(uObject* callbacks);
    bool IsCompleted();
    void OnLoaded(uObject* player);
    void OnLoadingError(::g::Uno::Exception* e);
    void OnPlayerError(uObject* sender, ::g::Uno::Exception* e);
    void OnPlayerFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args);
    uObject* Player();
    void Reset();
    void SetPlayer(uObject* player);
    static GraphicsVideoService* New1(uObject* callbacks);
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
