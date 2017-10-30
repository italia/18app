// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise.h>
#include <Fuse.Controls.VideoImpl.iOS.VideoPlayer.h>
#include <Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <OpenGL.GLTextureHandle.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
static uString* STRINGS[2];
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/iOS/VideoImpl.uno
// -------------------------------------------------------------------------

// internal sealed extern class VideoPlayer :11
// {
static void VideoPlayer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unknown playback error");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(VideoPlayer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(VideoPlayer_type, interface1));
    type->SetFields(0,
        ::g::Uno::Graphics::VideoTexture_typeof(), offsetof(VideoPlayer, _currentTexture), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(VideoPlayer, _currentTextureHandle), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(VideoPlayer, _handle), 0,
        ::TYPES[1/*Uno.EventHandler<Uno.Exception>*/], offsetof(VideoPlayer, ErrorOccurred1), 0,
        ::TYPES[2/*Uno.EventHandler*/], offsetof(VideoPlayer, FrameAvailable1), 0);
}

VideoPlayer_type* VideoPlayer_typeof()
{
    static uSStrong<VideoPlayer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(VideoPlayer);
    options.TypeSize = sizeof(VideoPlayer_type);
    type = (VideoPlayer_type*)uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoPlayer", options);
    type->fp_build_ = VideoPlayer_build;
    type->interface0.fp_Play = (void(*)(uObject*))VideoPlayer__Play_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))VideoPlayer__Pause_fn;
    type->interface0.fp_Update = (void(*)(uObject*))VideoPlayer__Update_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))VideoPlayer__get_VideoTexture_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))VideoPlayer__get_Size_fn;
    type->interface0.fp_get_RotationDegrees = (void(*)(uObject*, int*))VideoPlayer__get_RotationDegrees_fn;
    type->interface0.fp_get_Volume = (void(*)(uObject*, float*))VideoPlayer__get_Volume_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))VideoPlayer__set_Volume_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))VideoPlayer__get_Duration_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))VideoPlayer__get_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))VideoPlayer__set_Position_fn;
    type->interface0.fp_add_FrameAvailable = (void(*)(uObject*, uDelegate*))VideoPlayer__add_FrameAvailable_fn;
    type->interface0.fp_remove_FrameAvailable = (void(*)(uObject*, uDelegate*))VideoPlayer__remove_FrameAvailable_fn;
    type->interface0.fp_add_ErrorOccurred = (void(*)(uObject*, uDelegate*))VideoPlayer__add_ErrorOccurred_fn;
    type->interface0.fp_remove_ErrorOccurred = (void(*)(uObject*, uDelegate*))VideoPlayer__remove_ErrorOccurred_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))VideoPlayer__Dispose_fn;
    return type;
}

// public VideoPlayer(string uri, Uno.Action onLoaded, Uno.Action onLoadError) :78
void VideoPlayer__ctor__fn(VideoPlayer* __this, uString* uri, uDelegate* onLoaded, uDelegate* onLoadError)
{
    __this->ctor_(uri, onLoaded, onLoadError);
}

// public void Dispose() :99
void VideoPlayer__Dispose_fn(VideoPlayer* __this)
{
    __this->Dispose();
}

// public double get_Duration() :42
void VideoPlayer__get_Duration_fn(VideoPlayer* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :74
void VideoPlayer__add_ErrorOccurred_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_ErrorOccurred(value);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :74
void VideoPlayer__remove_ErrorOccurred_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_ErrorOccurred(value);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) :73
void VideoPlayer__add_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_FrameAvailable(value);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) :73
void VideoPlayer__remove_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_FrameAvailable(value);
}

// public VideoPlayer New(string uri, Uno.Action onLoaded, Uno.Action onLoadError) :78
void VideoPlayer__New1_fn(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError, VideoPlayer** __retval)
{
    *__retval = VideoPlayer::New1(uri, onLoaded, onLoadError);
}

// private void OnFrameAvailable() :85
void VideoPlayer__OnFrameAvailable_fn(VideoPlayer* __this)
{
    __this->OnFrameAvailable();
}

// public void Pause() :56
void VideoPlayer__Pause_fn(VideoPlayer* __this)
{
    __this->Pause();
}

// public void Play() :51
void VideoPlayer__Play_fn(VideoPlayer* __this)
{
    __this->Play();
}

// private void PlayerErrorHandler() :92
void VideoPlayer__PlayerErrorHandler_fn(VideoPlayer* __this)
{
    __this->PlayerErrorHandler();
}

// public double get_Position() :47
void VideoPlayer__get_Position_fn(VideoPlayer* __this, double* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(double value) :48
void VideoPlayer__set_Position_fn(VideoPlayer* __this, double* value)
{
    __this->Position(*value);
}

// public int get_RotationDegrees() :31
void VideoPlayer__get_RotationDegrees_fn(VideoPlayer* __this, int* __retval)
{
    *__retval = __this->RotationDegrees();
}

// public int2 get_Size() :26
void VideoPlayer__get_Size_fn(VideoPlayer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private OpenGL.GLTextureHandle get_TextureHandle() :21
void VideoPlayer__get_TextureHandle_fn(VideoPlayer* __this, uint32_t* __retval)
{
    *__retval = __this->TextureHandle();
}

// public void Update() :62
void VideoPlayer__Update_fn(VideoPlayer* __this)
{
    __this->Update();
}

// public Uno.Graphics.VideoTexture get_VideoTexture() :16
void VideoPlayer__get_VideoTexture_fn(VideoPlayer* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    *__retval = __this->VideoTexture();
}

// public float get_Volume() :36
void VideoPlayer__get_Volume_fn(VideoPlayer* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :37
void VideoPlayer__set_Volume_fn(VideoPlayer* __this, float* value)
{
    __this->Volume(*value);
}

// public VideoPlayer(string uri, Uno.Action onLoaded, Uno.Action onLoadError) [instance] :78
void VideoPlayer::ctor_(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError)
{
    _handle = ::g::Uno::IntPtr::Zero_;
    _handle = ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::AllocateVideoState();
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::Initialize(_handle, uri, onLoaded, onLoadError);
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::SetErrorHandler(_handle, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoPlayer__PlayerErrorHandler_fn, this));
}

// public void Dispose() [instance] :99
void VideoPlayer::Dispose()
{
    if (::g::Uno::IntPtr::op_Inequality(_handle, ::g::Uno::IntPtr::Zero_))
    {
        ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::FreeVideoState(_handle);
        _handle = ::g::Uno::IntPtr::Zero_;
    }
}

// public double get_Duration() [instance] :42
double VideoPlayer::Duration()
{
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetDuration(_handle);
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :74
void VideoPlayer::add_ErrorOccurred(uDelegate* value)
{
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ErrorOccurred1, value), ::TYPES[1/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :74
void VideoPlayer::remove_ErrorOccurred(uDelegate* value)
{
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ErrorOccurred1, value), ::TYPES[1/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) [instance] :73
void VideoPlayer::add_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameAvailable1, value), ::TYPES[2/*Uno.EventHandler*/]);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) [instance] :73
void VideoPlayer::remove_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameAvailable1, value), ::TYPES[2/*Uno.EventHandler*/]);
}

// private void OnFrameAvailable() [instance] :85
void VideoPlayer::OnFrameAvailable()
{
    uDelegate* handler = FrameAvailable1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// public void Pause() [instance] :56
void VideoPlayer::Pause()
{
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::Pause(_handle);
}

// public void Play() [instance] :51
void VideoPlayer::Play()
{
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::Play(_handle);
}

// private void PlayerErrorHandler() [instance] :92
void VideoPlayer::PlayerErrorHandler()
{
    uDelegate* handler = ErrorOccurred1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Uno::Exception*)::g::Uno::Exception::New2(::STRINGS[0/*"Unknown pla...*/]));
}

// public double get_Position() [instance] :47
double VideoPlayer::Position()
{
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetPosition(_handle);
}

// public void set_Position(double value) [instance] :48
void VideoPlayer::Position(double value)
{
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::SetPosition(_handle, value);
}

// public int get_RotationDegrees() [instance] :31
int VideoPlayer::RotationDegrees()
{
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetRotation(_handle);
}

// public int2 get_Size() [instance] :26
::g::Uno::Int2 VideoPlayer::Size()
{
    return ::g::Uno::Int2__New2(::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetWidth(_handle), ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetHeight(_handle));
}

// private OpenGL.GLTextureHandle get_TextureHandle() [instance] :21
uint32_t VideoPlayer::TextureHandle()
{
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::UpdateTexture(_handle);
}

// public void Update() [instance] :62
void VideoPlayer::Update()
{
    uint32_t textureHandle = TextureHandle();

    if (::g::OpenGL::GLTextureHandle::op_Inequality(textureHandle, _currentTextureHandle))
    {
        _currentTextureHandle = textureHandle;
        _currentTexture = ::g::Uno::Graphics::VideoTexture::New1(_currentTextureHandle);
        OnFrameAvailable();
    }
}

// public Uno.Graphics.VideoTexture get_VideoTexture() [instance] :16
::g::Uno::Graphics::VideoTexture* VideoPlayer::VideoTexture()
{
    return _currentTexture;
}

// public float get_Volume() [instance] :36
float VideoPlayer::Volume()
{
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::GetVolume(_handle);
}

// public void set_Volume(float value) [instance] :37
void VideoPlayer::Volume(float value)
{
    ::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl::SetVolume(_handle, value);
}

// public VideoPlayer New(string uri, Uno.Action onLoaded, Uno.Action onLoadError) [static] :78
VideoPlayer* VideoPlayer::New1(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError)
{
    VideoPlayer* obj1 = (VideoPlayer*)uNew(VideoPlayer_typeof());
    obj1->ctor_(uri, onLoaded, onLoadError);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/iOS/VideoPlayer.uno
// ---------------------------------------------------------------------------

// private sealed class VideoLoader.VideoPromise :16
// {
static void VideoLoader__VideoPromise_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Failed to load");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), NULL));
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(VideoLoader__VideoPromise, _isCancelled), 0,
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(VideoLoader__VideoPromise, _player), 0,
        ::g::Uno::Bool_typeof(), offsetof(VideoLoader__VideoPromise, _readyToDispose), 0);
}

::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VideoLoader__VideoPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise", options);
    type->fp_build_ = VideoLoader__VideoPromise_build;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))VideoLoader__VideoPromise__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))VideoLoader__VideoPromise__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))VideoLoader__VideoPromise__Dispose_fn;
    return type;
}

// public VideoPromise(string url) :20
void VideoLoader__VideoPromise__ctor_7_fn(VideoLoader__VideoPromise* __this, uString* url)
{
    __this->ctor_7(url);
}

// public override sealed void Cancel([bool shutdownGracefully]) :41
void VideoLoader__VideoPromise__Cancel_fn(VideoLoader__VideoPromise* __this, bool* shutdownGracefully)
{
    __this->ScheduleDispose();
}

// public override sealed void Dispose() :64
void VideoLoader__VideoPromise__Dispose_fn(VideoLoader__VideoPromise* __this)
{
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    __this->ScheduleDispose();
}

// private void DoDispose() :55
void VideoLoader__VideoPromise__DoDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->DoDispose();
}

// public VideoPromise New(string url) :20
void VideoLoader__VideoPromise__New5_fn(uString* url, VideoLoader__VideoPromise** __retval)
{
    *__retval = VideoLoader__VideoPromise::New5(url);
}

// private void OnLoaded() :25
void VideoLoader__VideoPromise__OnLoaded_fn(VideoLoader__VideoPromise* __this)
{
    __this->OnLoaded();
}

// private void OnLoadError() :32
void VideoLoader__VideoPromise__OnLoadError_fn(VideoLoader__VideoPromise* __this)
{
    __this->OnLoadError();
}

// private void ScheduleDispose() :46
void VideoLoader__VideoPromise__ScheduleDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->ScheduleDispose();
}

// public VideoPromise(string url) [instance] :20
void VideoLoader__VideoPromise::ctor_7(uString* url)
{
    ctor_3();
    _player = (uObject*)::g::Fuse::Controls::VideoImpl::iOS::VideoPlayer::New1(url, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoLoader__VideoPromise__OnLoaded_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoLoader__VideoPromise__OnLoadError_fn, this));
}

// private void DoDispose() [instance] :55
void VideoLoader__VideoPromise::DoDispose()
{
    if (_readyToDispose)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_player), ::TYPES[3/*Uno.IDisposable*/]));
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// private void OnLoaded() [instance] :25
void VideoLoader__VideoPromise::OnLoaded()
{
    _readyToDispose = true;

    if (!_isCancelled)
        ::g::Uno::Threading::Promise__Resolve_fn(this, _player);
}

// private void OnLoadError() [instance] :32
void VideoLoader__VideoPromise::OnLoadError()
{
    _readyToDispose = true;

    if (!_isCancelled)
        Reject(::g::Uno::Exception::New2(::STRINGS[1/*"Failed to l...*/]));
}

// private void ScheduleDispose() [instance] :46
void VideoLoader__VideoPromise::ScheduleDispose()
{
    if (!_isCancelled)
    {
        _isCancelled = true;
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// public VideoPromise New(string url) [static] :20
VideoLoader__VideoPromise* VideoLoader__VideoPromise::New5(uString* url)
{
    VideoLoader__VideoPromise* obj1 = (VideoLoader__VideoPromise*)uNew(VideoLoader__VideoPromise_typeof());
    obj1->ctor_7(url);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
