// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsVideo_bundle.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.VideoImpl.EmptyVideo.h>
#include <Fuse.Controls.VideoImpl.GraphicsVideoService.h>
#include <Fuse.Controls.VideoImpl.iOS.VideoLoader.h>
#include <Fuse.Controls.VideoImpl.IVideoCallbacks.h>
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Fuse.Controls.VideoImpl.IVideoService.h>
#include <Fuse.Controls.VideoImpl.LoadingClosure.h>
#include <Fuse.Controls.VideoImpl.Scale9Rectangle.h>
#include <Fuse.Controls.VideoImpl.VideoDiskCache.h>
#include <Fuse.Controls.VideoImpl.VideoDrawElement.h>
#include <Fuse.Controls.VideoImpl.VideoLoader.h>
#include <Fuse.Controls.VideoImpl.VideoVisual.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UShort.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[11];
static uType* TYPES[24];

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/IVideoPlayer.uno
// ------------------------------------------------------------------------

// internal sealed class EmptyVideo :30
// {
static void EmptyVideo_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(EmptyVideo_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(EmptyVideo_type, interface1));
}

EmptyVideo_type* EmptyVideo_typeof()
{
    static uSStrong<EmptyVideo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EmptyVideo);
    options.TypeSize = sizeof(EmptyVideo_type);
    type = (EmptyVideo_type*)uClassType::New("Fuse.Controls.VideoImpl.EmptyVideo", options);
    type->fp_build_ = EmptyVideo_build;
    type->fp_ctor_ = (void*)EmptyVideo__New1_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))EmptyVideo__UnoIDisposableDispose_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))EmptyVideo__FuseControlsVideoImplIVideoPlayerPause_fn;
    type->interface0.fp_Play = (void(*)(uObject*))EmptyVideo__FuseControlsVideoImplIVideoPlayerPlay_fn;
    type->interface0.fp_Update = (void(*)(uObject*))EmptyVideo__FuseControlsVideoImplIVideoPlayerUpdate_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Duration_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Position_fn;
    type->interface0.fp_get_Volume = (void(*)(uObject*, float*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Volume_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Volume_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Size_fn;
    type->interface0.fp_get_RotationDegrees = (void(*)(uObject*, int*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_RotationDegrees_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_VideoTexture_fn;
    type->interface0.fp_add_FrameAvailable = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_FrameAvailable_fn;
    type->interface0.fp_remove_FrameAvailable = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_FrameAvailable_fn;
    type->interface0.fp_add_ErrorOccurred = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_ErrorOccurred_fn;
    type->interface0.fp_remove_ErrorOccurred = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_ErrorOccurred_fn;
    return type;
}

// public generated EmptyVideo() :30
void EmptyVideo__ctor__fn(EmptyVideo* __this)
{
    __this->ctor_();
}

// private double Fuse.Controls.VideoImpl.IVideoPlayer.get_Duration() :32
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Duration_fn(EmptyVideo* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :35
void EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_ErrorOccurred_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :35
void EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_ErrorOccurred_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.add_FrameAvailable(Uno.EventHandler value) :34
void EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_FrameAvailable_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.remove_FrameAvailable(Uno.EventHandler value) :34
void EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_FrameAvailable_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.Pause() :41
void EmptyVideo__FuseControlsVideoImplIVideoPlayerPause_fn(EmptyVideo* __this)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.Play() :42
void EmptyVideo__FuseControlsVideoImplIVideoPlayerPlay_fn(EmptyVideo* __this)
{
}

// private double Fuse.Controls.VideoImpl.IVideoPlayer.get_Position() :33
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Position_fn(EmptyVideo* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.set_Position(double value) :33
void EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Position_fn(EmptyVideo* __this, double* value)
{
}

// private int Fuse.Controls.VideoImpl.IVideoPlayer.get_RotationDegrees() :38
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_RotationDegrees_fn(EmptyVideo* __this, int* __retval)
{
    return *__retval = 0, void();
}

// private int2 Fuse.Controls.VideoImpl.IVideoPlayer.get_Size() :37
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Size_fn(EmptyVideo* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = ::g::Uno::Int2__New1(0), void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.Update() :43
void EmptyVideo__FuseControlsVideoImplIVideoPlayerUpdate_fn(EmptyVideo* __this)
{
}

// private Uno.Graphics.VideoTexture Fuse.Controls.VideoImpl.IVideoPlayer.get_VideoTexture() :39
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_VideoTexture_fn(EmptyVideo* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    return *__retval = NULL, void();
}

// private float Fuse.Controls.VideoImpl.IVideoPlayer.get_Volume() :36
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Volume_fn(EmptyVideo* __this, float* __retval)
{
    return *__retval = 0.0f, void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.set_Volume(float value) :36
void EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Volume_fn(EmptyVideo* __this, float* value)
{
}

// public generated EmptyVideo New() :30
void EmptyVideo__New1_fn(EmptyVideo** __retval)
{
    *__retval = EmptyVideo::New1();
}

// private void Uno.IDisposable.Dispose() :40
void EmptyVideo__UnoIDisposableDispose_fn(EmptyVideo* __this)
{
}

// public generated EmptyVideo() [instance] :30
void EmptyVideo::ctor_()
{
}

// public generated EmptyVideo New() [static] :30
EmptyVideo* EmptyVideo::New1()
{
    EmptyVideo* obj1 = (EmptyVideo*)uNew(EmptyVideo_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoContainer.uno
// --------------------------------------------------------------------------

// internal sealed class GraphicsVideoService :93
// {
// static generated GraphicsVideoService() :93
static void GraphicsVideoService__cctor__fn(uType* __type)
{
    GraphicsVideoService::CompletionTimeThreshold_ = 0.05f;
}

static void GraphicsVideoService_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Exception_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[0/*Uno.Exception*/], NULL);
    ::TYPES[3] = ::g::Fuse::Controls::VideoImpl::IVideoCallbacks_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::TYPES[0/*Uno.Exception*/], NULL);
    ::TYPES[7] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::VideoImpl::IVideoService_typeof(), offsetof(GraphicsVideoService_type, interface0),
        ::TYPES[7/*Uno.IDisposable*/], offsetof(GraphicsVideoService_type, interface1));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(GraphicsVideoService, _autoPlay), 0,
        ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/], offsetof(GraphicsVideoService, _callbacks), 0,
        ::g::Uno::Double_typeof(), offsetof(GraphicsVideoService, _durationCache), 0,
        ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/], offsetof(GraphicsVideoService, _empty), 0,
        ::g::Uno::Bool_typeof(), offsetof(GraphicsVideoService, _isLooping), 0,
        ::TYPES[7/*Uno.IDisposable*/], offsetof(GraphicsVideoService, _loading), 0,
        ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/], offsetof(GraphicsVideoService, _player), 0,
        ::g::Uno::Int_typeof(), offsetof(GraphicsVideoService, _rotationCache), 0,
        ::g::Uno::Int2_typeof(), offsetof(GraphicsVideoService, _sizeCache), 0,
        ::g::Uno::Float_typeof(), offsetof(GraphicsVideoService, _volume), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&GraphicsVideoService::CompletionTimeThreshold_, uFieldFlagsStatic);
}

GraphicsVideoService_type* GraphicsVideoService_typeof()
{
    static uSStrong<GraphicsVideoService_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GraphicsVideoService);
    options.TypeSize = sizeof(GraphicsVideoService_type);
    type = (GraphicsVideoService_type*)uClassType::New("Fuse.Controls.VideoImpl.GraphicsVideoService", options);
    type->fp_build_ = GraphicsVideoService_build;
    type->fp_cctor_ = GraphicsVideoService__cctor__fn;
    type->interface0.fp_Play = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServicePlay_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServicePause_fn;
    type->interface0.fp_Load = (void(*)(uObject*, uString*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad_fn;
    type->interface0.fp_Load1 = (void(*)(uObject*, ::g::Uno::UX::FileSource*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad1_fn;
    type->interface0.fp_Update = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceUpdate_fn;
    type->interface0.fp_Unload = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceUnload_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))GraphicsVideoService__UnoIDisposableDispose_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Duration_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Size_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_VideoTexture_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Volume_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Position_fn;
    type->interface0.fp_set_IsLooping = (void(*)(uObject*, bool*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_IsLooping_fn;
    type->interface0.fp_set_AutoPlay = (void(*)(uObject*, bool*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_AutoPlay_fn;
    type->interface0.fp_get_IsValid = (void(*)(uObject*, bool*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_IsValid_fn;
    type->interface0.fp_get_RotationDegrees = (void(*)(uObject*, int*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_RotationDegrees_fn;
    return type;
}

// public GraphicsVideoService(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) :107
void GraphicsVideoService__ctor__fn(GraphicsVideoService* __this, uObject* callbacks)
{
    __this->ctor_(callbacks);
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_AutoPlay(bool value) :160
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_AutoPlay_fn(GraphicsVideoService* __this, bool* value)
{
    bool value_ = *value;
    __this->_autoPlay = value_;
}

// private double Fuse.Controls.VideoImpl.IVideoService.get_Duration() :130
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Duration_fn(GraphicsVideoService* __this, double* __retval)
{
    return *__retval = __this->_durationCache, void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_IsLooping(bool value) :157
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_IsLooping_fn(GraphicsVideoService* __this, bool* value)
{
    bool value_ = *value;
    __this->_isLooping = value_;
}

// private bool Fuse.Controls.VideoImpl.IVideoService.get_IsValid() :162
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_IsValid_fn(GraphicsVideoService* __this, bool* __retval)
{
    return *__retval = __this->_player != NULL, void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.Load(string url) :167
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad_fn(GraphicsVideoService* __this, uString* url)
{
    try
    {
        __this->Reset();
        __this->_loading = ::g::Fuse::Controls::VideoImpl::LoadingClosure::Load(url, uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer>*/], (void*)GraphicsVideoService__OnLoaded_fn, __this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)GraphicsVideoService__OnLoadingError_fn, __this));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
        return;
    }

    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnLoading(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
}

// private void Fuse.Controls.VideoImpl.IVideoService.Load(Uno.UX.FileSource file) :182
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad1_fn(GraphicsVideoService* __this, ::g::Uno::UX::FileSource* file)
{
    try
    {
        __this->Reset();
        __this->_loading = ::g::Fuse::Controls::VideoImpl::LoadingClosure::Load1(file, uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer>*/], (void*)GraphicsVideoService__OnLoaded_fn, __this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)GraphicsVideoService__OnLoadingError_fn, __this));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
        return;
    }

    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnLoading(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
}

// private void Fuse.Controls.VideoImpl.IVideoService.Pause() :122
void GraphicsVideoService__FuseControlsVideoImplIVideoServicePause_fn(GraphicsVideoService* __this)
{
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Pause(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
}

// private void Fuse.Controls.VideoImpl.IVideoService.Play() :112
void GraphicsVideoService__FuseControlsVideoImplIVideoServicePlay_fn(GraphicsVideoService* __this)
{
    if (__this->IsCompleted())
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), 0.0);

    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Play(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
}

// private double Fuse.Controls.VideoImpl.IVideoService.get_Position() :152
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Position_fn(GraphicsVideoService* __this, double* __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/])), void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_Position(double value) :153
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Position_fn(GraphicsVideoService* __this, double* value)
{
    double value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), value_);
}

// private int Fuse.Controls.VideoImpl.IVideoService.get_RotationDegrees() :165
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_RotationDegrees_fn(GraphicsVideoService* __this, int* __retval)
{
    return *__retval = __this->_rotationCache, void();
}

// private int2 Fuse.Controls.VideoImpl.IVideoService.get_Size() :136
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Size_fn(GraphicsVideoService* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = __this->_sizeCache, void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.Unload() :228
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceUnload_fn(GraphicsVideoService* __this)
{
    __this->Reset();
}

// private void Fuse.Controls.VideoImpl.IVideoService.Update() :206
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceUpdate_fn(GraphicsVideoService* __this)
{
    if (__this->_player != NULL)
    {
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Update(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));

        if (__this->IsCompleted())
        {
            if (__this->_isLooping)
            {
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Pause(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), 0.0);
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Play(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
            }
            else
            {
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Pause(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
                ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnCompleted(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
            }
        }
    }
}

// private Uno.Graphics.VideoTexture Fuse.Controls.VideoImpl.IVideoService.get_VideoTexture() :141
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_VideoTexture_fn(GraphicsVideoService* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::VideoTexture(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/])), void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_Volume(float value) :147
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Volume_fn(GraphicsVideoService* __this, float* value)
{
    float value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Volume(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), __this->_volume = value_);
}

// private bool get_IsCompleted() :199
void GraphicsVideoService__get_IsCompleted_fn(GraphicsVideoService* __this, bool* __retval)
{
    *__retval = __this->IsCompleted();
}

// public GraphicsVideoService New(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) :107
void GraphicsVideoService__New1_fn(uObject* callbacks, GraphicsVideoService** __retval)
{
    *__retval = GraphicsVideoService::New1(callbacks);
}

// private void OnLoaded(Fuse.Controls.VideoImpl.IVideoPlayer player) :263
void GraphicsVideoService__OnLoaded_fn(GraphicsVideoService* __this, uObject* player)
{
    __this->OnLoaded(player);
}

// private void OnLoadingError(Uno.Exception e) :275
void GraphicsVideoService__OnLoadingError_fn(GraphicsVideoService* __this, ::g::Uno::Exception* e)
{
    __this->OnLoadingError(e);
}

// private void OnPlayerError(object sender, Uno.Exception e) :280
void GraphicsVideoService__OnPlayerError_fn(GraphicsVideoService* __this, uObject* sender, ::g::Uno::Exception* e)
{
    __this->OnPlayerError(sender, e);
}

// private void OnPlayerFrameAvailable(object sender, Uno.EventArgs args) :286
void GraphicsVideoService__OnPlayerFrameAvailable_fn(GraphicsVideoService* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPlayerFrameAvailable(sender, args);
}

// private Fuse.Controls.VideoImpl.IVideoPlayer get_Player() :99
void GraphicsVideoService__get_Player_fn(GraphicsVideoService* __this, uObject** __retval)
{
    *__retval = __this->Player();
}

// private void Reset() :239
void GraphicsVideoService__Reset_fn(GraphicsVideoService* __this)
{
    __this->Reset();
}

// private void SetPlayer(Fuse.Controls.VideoImpl.IVideoPlayer player) :255
void GraphicsVideoService__SetPlayer_fn(GraphicsVideoService* __this, uObject* player)
{
    __this->SetPlayer(player);
}

// private void Uno.IDisposable.Dispose() :233
void GraphicsVideoService__UnoIDisposableDispose_fn(GraphicsVideoService* __this)
{
    __this->Reset();
    __this->_callbacks = NULL;
}

float GraphicsVideoService::CompletionTimeThreshold_;

// public GraphicsVideoService(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) [instance] :107
void GraphicsVideoService::ctor_(uObject* callbacks)
{
    _empty = (uObject*)::g::Fuse::Controls::VideoImpl::EmptyVideo::New1();
    _volume = 1.0f;
    _callbacks = callbacks;
}

// private bool get_IsCompleted() [instance] :199
bool GraphicsVideoService::IsCompleted()
{
    return ::g::Uno::Math::Abs(_durationCache - ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]))) < (double)GraphicsVideoService::CompletionTimeThreshold_;
}

// private void OnLoaded(Fuse.Controls.VideoImpl.IVideoPlayer player) [instance] :263
void GraphicsVideoService::OnLoaded(uObject* player)
{
    _durationCache = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Duration(uInterface(uPtr(player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
    _sizeCache = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Size(uInterface(player, ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
    _rotationCache = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::RotationDegrees(uInterface(player, ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
    SetPlayer(player);
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnReady(uInterface(uPtr(_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));

    if (_autoPlay)
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Play(uInterface(uPtr(Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
}

// private void OnLoadingError(Uno.Exception e) [instance] :275
void GraphicsVideoService::OnLoadingError(::g::Uno::Exception* e)
{
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
}

// private void OnPlayerError(object sender, Uno.Exception e) [instance] :280
void GraphicsVideoService::OnPlayerError(uObject* sender, ::g::Uno::Exception* e)
{
    Reset();
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
}

// private void OnPlayerFrameAvailable(object sender, Uno.EventArgs args) [instance] :286
void GraphicsVideoService::OnPlayerFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnFrameAvailable(uInterface(uPtr(_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
}

// private Fuse.Controls.VideoImpl.IVideoPlayer get_Player() [instance] :99
uObject* GraphicsVideoService::Player()
{
    uObject* ind1;
    ind1 = _player;
    return (ind1 != NULL) ? ind1 : (uObject*)_empty;
}

// private void Reset() [instance] :239
void GraphicsVideoService::Reset()
{
    if (_player != NULL)
    {
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::remove_FrameAvailable(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)GraphicsVideoService__OnPlayerFrameAvailable_fn, this));
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::remove_ErrorOccurred(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler<Uno.Exception>*/], (void*)GraphicsVideoService__OnPlayerError_fn, this));
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_player), ::TYPES[7/*Uno.IDisposable*/]));
        _player = NULL;
    }

    if (_loading != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_loading), ::TYPES[7/*Uno.IDisposable*/]));
        _loading = NULL;
    }
}

// private void SetPlayer(Fuse.Controls.VideoImpl.IVideoPlayer player) [instance] :255
void GraphicsVideoService::SetPlayer(uObject* player)
{
    _player = player;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::add_FrameAvailable(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)GraphicsVideoService__OnPlayerFrameAvailable_fn, this));
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::add_ErrorOccurred(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler<Uno.Exception>*/], (void*)GraphicsVideoService__OnPlayerError_fn, this));
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Volume(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), _volume);
}

// public GraphicsVideoService New(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) [static] :107
GraphicsVideoService* GraphicsVideoService::New1(uObject* callbacks)
{
    GraphicsVideoService* obj2 = (GraphicsVideoService*)uNew(GraphicsVideoService_typeof());
    obj2->ctor_(callbacks);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoContainer.uno
// --------------------------------------------------------------------------

// internal abstract interface IVideoCallbacks :42
// {
uInterfaceType* IVideoCallbacks_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.VideoImpl.IVideoCallbacks", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/IVideoPlayer.uno
// ------------------------------------------------------------------------

// internal abstract interface IVideoPlayer :11
// {
uInterfaceType* IVideoPlayer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.VideoImpl.IVideoPlayer", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoContainer.uno
// --------------------------------------------------------------------------

// internal abstract interface IVideoService :16
// {
uInterfaceType* IVideoService_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.VideoImpl.IVideoService", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoContainer.uno
// --------------------------------------------------------------------------

// internal sealed class LoadingClosure :51
// {
static void LoadingClosure_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LoadingClosure_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), offsetof(LoadingClosure, _error), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingClosure, _isDisposed), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), NULL), offsetof(LoadingClosure, _loaded), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), NULL), offsetof(LoadingClosure, _loaderFuture), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), NULL), offsetof(LoadingClosure, _thenFuture), 0);
}

LoadingClosure_type* LoadingClosure_typeof()
{
    static uSStrong<LoadingClosure_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadingClosure);
    options.TypeSize = sizeof(LoadingClosure_type);
    type = (LoadingClosure_type*)uClassType::New("Fuse.Controls.VideoImpl.LoadingClosure", options);
    type->fp_build_ = LoadingClosure_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))LoadingClosure__UnoIDisposableDispose_fn;
    return type;
}

// private LoadingClosure(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) :69
void LoadingClosure__ctor__fn(LoadingClosure* __this, ::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error)
{
    __this->ctor_(loadedFuture, loaded, error);
}

// public static Uno.IDisposable Load(string url, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) :53
void LoadingClosure__Load_fn(uString* url, uDelegate* loaded, uDelegate* error, uObject** __retval)
{
    *__retval = LoadingClosure::Load(url, loaded, error);
}

// public static Uno.IDisposable Load(Uno.UX.FileSource file, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) :58
void LoadingClosure__Load1_fn(::g::Uno::UX::FileSource* file, uDelegate* loaded, uDelegate* error, uObject** __retval)
{
    *__retval = LoadingClosure::Load1(file, loaded, error);
}

// private LoadingClosure New(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) :69
void LoadingClosure__New1_fn(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error, LoadingClosure** __retval)
{
    *__retval = LoadingClosure::New1(loadedFuture, loaded, error);
}

// private void Uno.IDisposable.Dispose() :81
void LoadingClosure__UnoIDisposableDispose_fn(LoadingClosure* __this)
{
    if (!__this->_isDisposed)
    {
        uPtr(__this->_loaderFuture)->Cancel(false);
        uPtr(__this->_loaderFuture)->Dispose();
        uPtr(__this->_thenFuture)->Dispose();
        __this->_isDisposed = true;
    }
}

// private LoadingClosure(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [instance] :69
void LoadingClosure::ctor_(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error)
{
    _loaded = loaded;
    _error = error;
    _loaderFuture = loadedFuture;
    _thenFuture = ((::g::Uno::Threading::Future1*)uPtr(_loaderFuture)->Then1(_loaded, _error));
}

// public static Uno.IDisposable Load(string url, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [static] :53
uObject* LoadingClosure::Load(uString* url, uDelegate* loaded, uDelegate* error)
{
    return (uObject*)LoadingClosure::New1(::g::Fuse::Controls::VideoImpl::VideoLoader::Load(url), loaded, error);
}

// public static Uno.IDisposable Load(Uno.UX.FileSource file, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [static] :58
uObject* LoadingClosure::Load1(::g::Uno::UX::FileSource* file, uDelegate* loaded, uDelegate* error)
{
    return (uObject*)LoadingClosure::New1(::g::Fuse::Controls::VideoImpl::VideoLoader::Load1(file), loaded, error);
}

// private LoadingClosure New(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [static] :69
LoadingClosure* LoadingClosure::New1(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error)
{
    LoadingClosure* obj1 = (LoadingClosure*)uNew(LoadingClosure_typeof());
    obj1->ctor_(loadedFuture, loaded, error);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoVisual.uno
// -----------------------------------------------------------------------

// internal sealed class Scale9Rectangle :371
// {
// static generated Scale9Rectangle() :371
static void Scale9Rectangle__cctor__fn(uType* __type)
{
    Scale9Rectangle::Impl_ = Scale9Rectangle::New1();
}

static void Scale9Rectangle_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[9] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Float3_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Scale9Rectangle, _draw_e60caa7b), 0,
        ::TYPES[9/*ushort[]*/], offsetof(Scale9Rectangle, Draw_indices_e60caa7b_1_2_12), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(Scale9Rectangle, Draw_xv_e60caa7b_1_3_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Scale9Rectangle, Draw_xv_e60caa7b_1_3_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Scale9Rectangle, Draw_yv_e60caa7b_1_4_6), 0,
        type, (uintptr_t)&Scale9Rectangle::Impl_, uFieldFlagsStatic);
}

uType* Scale9Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Scale9Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.Scale9Rectangle", options);
    type->fp_build_ = Scale9Rectangle_build;
    type->fp_ctor_ = (void*)Scale9Rectangle__New1_fn;
    type->fp_cctor_ = Scale9Rectangle__cctor__fn;
    return type;
}

// public generated Scale9Rectangle() :371
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin) :375
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4* margin)
{
    __this->Draw(dc, element, *size, *scaleTextureSize, tex, *margin);
}

// private generated void init_DrawCalls() :371
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated Scale9Rectangle New() :371
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval)
{
    *__retval = Scale9Rectangle::New1();
}

uSStrong<Scale9Rectangle*> Scale9Rectangle::Impl_;

// public generated Scale9Rectangle() [instance] :371
void Scale9Rectangle::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin) [instance] :375
void Scale9Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4 margin)
{
    _draw_e60caa7b.BlendEnabled(true);
    _draw_e60caa7b.DepthTestEnabled(false);
    _draw_e60caa7b.CullFace(0);
    _draw_e60caa7b.BlendSrcRgb(2);
    _draw_e60caa7b.BlendDstRgb(3);
    _draw_e60caa7b.BlendDstAlpha(3);
    _draw_e60caa7b.Use();
    _draw_e60caa7b.Attrib1(0, 3, Draw_xv_e60caa7b_1_3_3, 12, 0);
    _draw_e60caa7b.Attrib1(1, 3, Draw_yv_e60caa7b_1_4_6, 12, 0);
    _draw_e60caa7b.Uniform(2, margin.X);
    _draw_e60caa7b.Uniform(3, size.X - margin.Z);
    _draw_e60caa7b.Uniform(4, size.X);
    _draw_e60caa7b.Uniform(5, margin.Y);
    _draw_e60caa7b.Uniform(6, size.Y - margin.W);
    _draw_e60caa7b.Uniform(7, size.Y);
    _draw_e60caa7b.Uniform12(8, uPtr(element)->WorldTransform());
    _draw_e60caa7b.Uniform12(9, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(dc)->Viewport()), ::TYPES[8/*Fuse.IRenderViewport*/])));
    _draw_e60caa7b.Uniform(10, scaleTextureSize.X - margin.Z);
    _draw_e60caa7b.Uniform(11, scaleTextureSize.X);
    _draw_e60caa7b.Uniform(12, scaleTextureSize.Y - margin.W);
    _draw_e60caa7b.Uniform(13, scaleTextureSize.Y);
    _draw_e60caa7b.Uniform2(14, scaleTextureSize);
    _draw_e60caa7b.Sampler7(15, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_e60caa7b.Draw(uPtr(Draw_indices_e60caa7b_1_2_12)->Length(), 2, Draw_xv_e60caa7b_1_3_2);
}

// private generated void init_DrawCalls() [instance] :371
void Scale9Rectangle::init_DrawCalls()
{
    uArray* indices_e60caa7b_1_2_1 = uArray::Init<int>(::TYPES[9/*ushort[]*/], 54, 0, 4, 5, 0, 5, 1, 1, 5, 6, 1, 6, 2, 2, 6, 7, 2, 7, 3, 4, 8, 9, 4, 9, 5, 5, 9, 10, 5, 10, 6, 6, 10, 11, 6, 11, 7, 8, 12, 13, 8, 13, 9, 9, 13, 14, 9, 14, 10, 10, 14, 15, 10, 15, 11);
    Draw_xv_e60caa7b_1_3_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(indices_e60caa7b_1_2_1), 0);
    Draw_xv_e60caa7b_1_3_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[10/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_yv_e60caa7b_1_4_6 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[10/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_indices_e60caa7b_1_2_12 = indices_e60caa7b_1_2_1;
    _draw_e60caa7b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsVideo_bundle::Scale9Rectangleda875692());
}

// public generated Scale9Rectangle New() [static] :371
Scale9Rectangle* Scale9Rectangle::New1()
{
    Scale9Rectangle* obj1 = (Scale9Rectangle*)uNew(Scale9Rectangle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoDiskCache.uno
// --------------------------------------------------------------------------

// internal static class VideoDiskCache :11
// {
// static VideoDiskCache() :17
static void VideoDiskCache__cctor__fn(uType* __type)
{
    VideoDiskCache::_files_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[11/*Uno.Collections.Dictionary<string, string>*/]));
    ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[12/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)VideoDiskCache__OnTerminating_fn));
}

static void VideoDiskCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("/tempVideo");
    ::STRINGS[1] = uString::Const(".");
    ::STRINGS[2] = uString::Const("Deleting temporary file: ");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoDiskCache.uno");
    ::TYPES[11] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::TYPES[14/*int*/], (uintptr_t)&VideoDiskCache::_fileCount_, uFieldFlagsStatic,
        ::TYPES[11/*Uno.Collections.Dictionary<string, string>*/], (uintptr_t)&VideoDiskCache::_files_, uFieldFlagsStatic);
}

uClassType* VideoDiskCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.VideoImpl.VideoDiskCache", options);
    type->fp_build_ = VideoDiskCache_build;
    type->fp_cctor_ = VideoDiskCache__cctor__fn;
    return type;
}

// public static string GetFileExtension(string fileName) :48
void VideoDiskCache__GetFileExtension_fn(uString* fileName, uString** __retval)
{
    *__retval = VideoDiskCache::GetFileExtension(fileName);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource) :35
void VideoDiskCache__GetFilePath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval)
{
    *__retval = VideoDiskCache::GetFilePath(fileSource);
}

// private static void OnTerminating(Fuse.Platform.ApplicationState newState) :22
void VideoDiskCache__OnTerminating_fn(int* newState)
{
    VideoDiskCache::OnTerminating(*newState);
}

int VideoDiskCache::_fileCount_;
uSStrong< ::g::Uno::Collections::Dictionary*> VideoDiskCache::_files_;

// public static string GetFileExtension(string fileName) [static] :48
uString* VideoDiskCache::GetFileExtension(uString* fileName)
{
    VideoDiskCache_typeof()->Init();
    uArray* strings = ::g::Uno::String::Split(uPtr(fileName), uArray::Init<int>(::TYPES[13/*char[]*/], 1, '.'));
    return uPtr(strings)->Strong<uString*>(uPtr(strings)->Length() - 1);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource) [static] :35
uString* VideoDiskCache::GetFilePath(::g::Uno::UX::FileSource* fileSource)
{
    VideoDiskCache_typeof()->Init();
    bool ret2;
    uString* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(VideoDiskCache::_files_), uPtr(fileSource)->Name, &ret2), ret2))
    {
        uArray* bytes = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[0/*"/tempVideo"*/]), ::g::Uno::Int::ToString(VideoDiskCache::_fileCount_, ::TYPES[14/*int*/])), ::STRINGS[1/*"."*/]), VideoDiskCache::GetFileExtension(fileSource->Name));
        VideoDiskCache::_fileCount_++;
        ::g::Uno::IO::File::WriteAllBytes(path, bytes);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(VideoDiskCache::_files_), fileSource->Name, path);
    }

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(VideoDiskCache::_files_), uPtr(fileSource)->Name, &ret3), ret3);
}

// private static void OnTerminating(Fuse.Platform.ApplicationState newState) [static] :22
void VideoDiskCache::OnTerminating(int newState)
{
    VideoDiskCache_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > ret4;
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::TYPES[12/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)VideoDiskCache__OnTerminating_fn));
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(VideoDiskCache::_files_), &ret4), ret4);

    {
        const auto __finally_fun = [&]()
        {
            enum1.Dispose(::TYPES[15/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum1.MoveNext(::TYPES[15/*Uno.Collections.Dictionary<string, string>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uString*> > pair = enum1.Current(::TYPES[15/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);

            if (::g::Uno::IO::File::Exists(pair.Value(::TYPES[16/*Uno.Collections.KeyValuePair<string, string>*/])))
            {
                ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[2/*"Deleting te...*/], pair.Value(::TYPES[16/*Uno.Collections.KeyValuePair<string, string>*/])), 0, ::STRINGS[3/*"/usr/local/...*/], 29);
                ::g::Uno::IO::File::Delete(pair.Value(::TYPES[16/*Uno.Collections.KeyValuePair<string, string>*/]));
            }
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoVisual.uno
// -----------------------------------------------------------------------

// internal sealed class VideoDrawElement :337
// {
// static generated VideoDrawElement() :337
static void VideoDrawElement__cctor__fn(uType* __type)
{
    VideoDrawElement::Impl_ = VideoDrawElement::New1();
}

static void VideoDrawElement_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[17] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(VideoDrawElement, _draw_46004d37), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(VideoDrawElement, Draw_LocalTransform_46004d37_3_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(VideoDrawElement, Draw_LocalTransform_46004d37_3_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(VideoDrawElement, Draw_VertexData_46004d37_6_2_1), 0,
        type, (uintptr_t)&VideoDrawElement::Impl_, uFieldFlagsStatic);
}

uType* VideoDrawElement_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(VideoDrawElement);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.VideoDrawElement", options);
    type->fp_build_ = VideoDrawElement_build;
    type->fp_ctor_ = (void*)VideoDrawElement__New1_fn;
    type->fp_cctor_ = VideoDrawElement__cctor__fn;
    return type;
}

// public generated VideoDrawElement() :337
void VideoDrawElement__ctor__fn(VideoDrawElement* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex, int rotation) :341
void VideoDrawElement__Draw_fn(VideoDrawElement* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::VideoTexture* tex, int* rotation)
{
    __this->Draw(dc, element, *offset, *size, *uvPosition, *uvSize, tex, *rotation);
}

// private generated void init_DrawCalls() :337
void VideoDrawElement__init_DrawCalls_fn(VideoDrawElement* __this)
{
    __this->init_DrawCalls();
}

// public generated VideoDrawElement New() :337
void VideoDrawElement__New1_fn(VideoDrawElement** __retval)
{
    *__retval = VideoDrawElement::New1();
}

uSStrong<VideoDrawElement*> VideoDrawElement::Impl_;

// public generated VideoDrawElement() [instance] :337
void VideoDrawElement::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex, int rotation) [instance] :341
void VideoDrawElement::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::VideoTexture* tex, int rotation)
{
    ::g::Uno::Float4x4 LocalTransform_46004d37_3_9_4 = ::g::Uno::Matrix::Mul10(Draw_LocalTransform_46004d37_3_9_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Draw_LocalTransform_46004d37_3_9_3, ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f));
    _draw_46004d37.BlendEnabled(true);
    _draw_46004d37.DepthTestEnabled(false);
    _draw_46004d37.CullFace(uPtr(dc)->CullFace());
    _draw_46004d37.BlendSrcRgb(2);
    _draw_46004d37.BlendDstRgb(3);
    _draw_46004d37.BlendDstAlpha(3);
    _draw_46004d37.Const1(0, rotation);
    _draw_46004d37.Use();
    _draw_46004d37.Attrib1(1, 2, Draw_VertexData_46004d37_6_2_1, 8, 0);
    _draw_46004d37.Uniform12(2, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[8/*Fuse.IRenderViewport*/])));
    _draw_46004d37.Uniform2(3, uvSize);
    _draw_46004d37.Uniform2(4, uvPosition);
    _draw_46004d37.Uniform12(5, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_46004d37_3_9_4, uPtr(element)->WorldTransform()) : LocalTransform_46004d37_3_9_4);
    _draw_46004d37.Sampler7(6, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_46004d37.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :337
void VideoDrawElement::init_DrawCalls()
{
    Draw_VertexData_46004d37_6_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[17/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Draw_LocalTransform_46004d37_3_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Draw_LocalTransform_46004d37_3_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_46004d37 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsVideo_bundle::VideoDrawElement5c829975());
}

// public generated VideoDrawElement New() [static] :337
VideoDrawElement* VideoDrawElement::New1()
{
    VideoDrawElement* obj1 = (VideoDrawElement*)uNew(VideoDrawElement_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoLoader.uno
// -----------------------------------------------------------------------

// internal static class VideoLoader :12
// {
static void VideoLoader_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Video not supported on this platform");
}

uClassType* VideoLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.VideoImpl.VideoLoader", options);
    type->fp_build_ = VideoLoader_build;
    return type;
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) :14
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource file) :23
void VideoLoader__Load1_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) [static] :14
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoLoader::Load(url);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Video not s...*/]));
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource file) [static] :23
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::UX::FileSource* file)
{
    return ::g::Fuse::Controls::VideoImpl::iOS::VideoLoader::Load2(file);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Video not s...*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoVisual.uno
// -----------------------------------------------------------------------

// internal sealed extern class VideoVisual :52
// {
static void VideoVisual_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Video error");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoVisual.uno");
    ::STRINGS[7] = uString::Const("Fuse.Controls.VideoImpl.IVideoCallbacks.OnError");
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[9] = uString::Const("IPlayback.PlayTo(double) not supported in Fuse.Controls.Video");
    ::STRINGS[10] = uString::Const("Fuse.Triggers.IPlayback.PlayTo");
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[18] = ::g::Uno::Action_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::VideoImpl::IVideoService_typeof();
    ::TYPES[20] = ::g::Fuse::Triggers::IPlayback_typeof();
    ::TYPES[21] = ::g::Fuse::Triggers::IMediaPlayback_typeof();
    ::TYPES[22] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::Video_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Controls::VideoImpl::Scale9Rectangle_typeof(),
        ::g::Fuse::Controls::VideoImpl::VideoDrawElement_typeof(),
        ::g::Fuse::Triggers::WhileCompleted_typeof(),
        ::g::Fuse::Triggers::WhilePaused_typeof(),
        ::g::Fuse::Triggers::WhilePlaying_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VideoVisual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(VideoVisual_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(VideoVisual_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(VideoVisual_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VideoVisual_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VideoVisual_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(VideoVisual_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(VideoVisual_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(VideoVisual_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(VideoVisual_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(VideoVisual_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(VideoVisual_type, interface11),
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks_typeof(), offsetof(VideoVisual_type, interface12),
        ::TYPES[21/*Fuse.Triggers.IMediaPlayback*/], offsetof(VideoVisual_type, interface13),
        ::TYPES[20/*Fuse.Triggers.IPlayback*/], offsetof(VideoVisual_type, interface14),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(VideoVisual_type, interface15));
    type->SetFields(68,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(VideoVisual, _busyTask), 0,
        ::g::Uno::Float2_typeof(), offsetof(VideoVisual, _drawOrigin), 0,
        ::g::Uno::Float2_typeof(), offsetof(VideoVisual, _drawSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(VideoVisual, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(VideoVisual, _scale), 0,
        ::g::Uno::Int2_typeof(), offsetof(VideoVisual, _sizeCache), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(VideoVisual, _sizing), 0,
        ::g::Uno::Float4_typeof(), offsetof(VideoVisual, _uvClip), 0,
        ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/], offsetof(VideoVisual, _videoService), 0,
        ::g::Uno::Float_typeof(), offsetof(VideoVisual, _volume), 0,
        ::TYPES[23/*Uno.UX.ValueChangedHandler<double>*/], offsetof(VideoVisual, ProgressChanged1), 0);
}

VideoVisual_type* VideoVisual_typeof()
{
    static uSStrong<VideoVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Graphics::ControlVisual_typeof();
    options.FieldCount = 79;
    options.InterfaceCount = 16;
    options.DependencyCount = 6;
    options.ObjectSize = sizeof(VideoVisual);
    options.TypeSize = sizeof(VideoVisual_type);
    type = (VideoVisual_type*)uClassType::New("Fuse.Controls.VideoImpl.VideoVisual", options);
    type->fp_build_ = VideoVisual_build;
    type->fp_ctor_ = (void*)VideoVisual__New2_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Detach_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))VideoVisual__Draw_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Visual*, ::g::Fuse::HitTestContext*))VideoVisual__OnHitTest_fn;
    type->interface12.fp_OnFrameAvailable = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnFrameAvailable_fn;
    type->interface12.fp_OnError = (void(*)(uObject*, ::g::Uno::Exception*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnError_fn;
    type->interface12.fp_OnLoading = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnLoading_fn;
    type->interface12.fp_OnReady = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnReady_fn;
    type->interface12.fp_OnCompleted = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnCompleted_fn;
    type->interface14.fp_Stop = (void(*)(uObject*))VideoVisual__FuseTriggersIPlaybackStop_fn;
    type->interface14.fp_PlayTo = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIPlaybackPlayTo_fn;
    type->interface14.fp_Pause = (void(*)(uObject*))VideoVisual__FuseTriggersIPlaybackPause_fn;
    type->interface14.fp_Resume = (void(*)(uObject*))VideoVisual__FuseTriggersIPlaybackResume_fn;
    type->interface13.fp_get_Position = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIMediaPlaybackget_Position_fn;
    type->interface13.fp_set_Position = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIMediaPlaybackset_Position_fn;
    type->interface15.fp_get_Progress = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIProgressget_Progress_fn;
    type->interface14.fp_get_Progress = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIPlaybackget_Progress_fn;
    type->interface14.fp_set_Progress = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIPlaybackset_Progress_fn;
    type->interface15.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoVisual__FuseTriggersIProgressadd_ProgressChanged_fn;
    type->interface15.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoVisual__FuseTriggersIProgressremove_ProgressChanged_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public VideoVisual() :84
void VideoVisual__ctor_5_fn(VideoVisual* __this)
{
    __this->ctor_5();
}

// protected override sealed void Attach() :57
void VideoVisual__Attach_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret5;
    ::g::Fuse::Controls::Video* ret6;
    ::g::Fuse::Controls::Video* ret7;
    ::g::Fuse::Controls::Video* ret8;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->add_RenderParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->add_ParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->add_SourceChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)VideoVisual__OnUpdate_fn, __this), 0);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->SetPlayback((uObject*)__this);
    __this->OnRenderParamChanged(NULL, NULL);
    __this->OnParamChanged(NULL, NULL);
    __this->OnSourceChanged(NULL, NULL);
}

// protected override sealed void Detach() :71
void VideoVisual__Detach_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret9;
    ::g::Fuse::Controls::Video* ret10;
    ::g::Fuse::Controls::Video* ret11;
    ::g::Fuse::Controls::Video* ret12;
    ::g::Fuse::Controls::VideoImpl::IVideoService::Unload(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret9), ret9))->SetPlayback(NULL);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret10), ret10))->remove_RenderParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret11), ret11))->remove_ParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret12), ret12))->remove_SourceChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)VideoVisual__OnUpdate_fn, __this), 0);
}

// public override sealed void Draw(Fuse.DrawContext dc) :306
void VideoVisual__Draw_fn(VideoVisual* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Video* ret13;
    ::g::Fuse::Controls::Video* ret14;
    ::g::Uno::Graphics::VideoTexture* texture = ::g::Fuse::Controls::VideoImpl::IVideoService::VideoTexture(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]));

    if (texture == NULL)
        return;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret13), ret13))->StretchMode() == 4)
        uPtr(::g::Fuse::Controls::VideoImpl::Scale9Rectangle::Impl_)->Draw(dc, __this, __this->ActualSize(), __this->GetSize(), texture, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret14), ret14))->Scale9Margin());
    else
    {
        int rotation = ::g::Fuse::Controls::VideoImpl::IVideoService::RotationDegrees(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])) / 90;
        uPtr(::g::Fuse::Controls::VideoImpl::VideoDrawElement::Impl_)->Draw(dc, __this, __this->_drawOrigin, __this->_drawSize, (ind1 = __this->_uvClip, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Subtraction2((ind2 = __this->_uvClip, ::g::Uno::Float2__New2(ind2.Z, ind2.W)), (ind3 = __this->_uvClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y))), texture, rotation);
    }
}

// private bool get_FlipSize() :259
void VideoVisual__get_FlipSize_fn(VideoVisual* __this, bool* __retval)
{
    *__retval = __this->FlipSize();
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnCompleted() :121
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnCompleted_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret15;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret15), ret15), true);
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnError(Uno.Exception e) :101
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnError_fn(VideoVisual* __this, ::g::Uno::Exception* e)
{
    ::g::Fuse::Controls::Video* ret16;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::BusyTask::SetBusy((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret16), ret16), &__this->_busyTask, 16, uPtr(e)->Message());
    ::g::Fuse::Diagnostics::UnknownException(::STRINGS[5/*"Video error"*/], e, __this, ::STRINGS[6/*"/usr/local/...*/], 105, ::STRINGS[7/*"Fuse.Contro...*/]);
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnFrameAvailable() :91
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnFrameAvailable_fn(VideoVisual* __this)
{
    if (::g::Uno::Int2__op_Inequality(::g::Fuse::Controls::VideoImpl::IVideoService::Size(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])), __this->_sizeCache))
    {
        __this->_sizeCache = ::g::Fuse::Controls::VideoImpl::IVideoService::Size(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]));
        __this->InvalidateLayout(2);
    }

    __this->InvalidateVisual();
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnLoading() :109
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnLoading_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret17;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::BusyTask::SetBusy((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret17), ret17), &__this->_busyTask, 1, ::STRINGS[8/*""*/]);
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnReady() :115
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnReady_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret18;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::BusyTask::SetBusy((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret18), ret18), &__this->_busyTask, 0, ::STRINGS[8/*""*/]);
}

// private double Fuse.Triggers.IMediaPlayback.get_Position() :136
void VideoVisual__FuseTriggersIMediaPlaybackget_Position_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])), void();
}

// private void Fuse.Triggers.IMediaPlayback.set_Position(double value) :137
void VideoVisual__FuseTriggersIMediaPlaybackset_Position_fn(VideoVisual* __this, double* value)
{
    double value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]), value_);
}

// private void Fuse.Triggers.IPlayback.Pause() :160
void VideoVisual__FuseTriggersIPlaybackPause_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret19;

    if (::g::Fuse::Controls::VideoImpl::IVideoService::IsValid(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])))
    {
        ::g::Fuse::Controls::VideoImpl::IVideoService::Pause(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]));
        __this->ResetTriggers();
        ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret19), ret19), true);
    }
}

// private void Fuse.Triggers.IPlayback.PlayTo(double progress) :152
void VideoVisual__FuseTriggersIPlaybackPlayTo_fn(VideoVisual* __this, double* progress)
{
    ::g::Fuse::Diagnostics::Unsupported(::STRINGS[9/*"IPlayback.P...*/], __this, ::STRINGS[6/*"/usr/local/...*/], 154, ::STRINGS[10/*"Fuse.Trigge...*/]);
}

// private double Fuse.Triggers.IPlayback.get_Progress() :187
void VideoVisual__FuseTriggersIPlaybackget_Progress_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = (::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])) > 1e-05) ? ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])) / ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])) : 0.0, void();
}

// private void Fuse.Triggers.IPlayback.set_Progress(double value) :188
void VideoVisual__FuseTriggersIPlaybackset_Progress_fn(VideoVisual* __this, double* value)
{
    double value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]), ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])) * value_);
}

// private void Fuse.Triggers.IPlayback.Resume() :170
void VideoVisual__FuseTriggersIPlaybackResume_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret20;

    if (::g::Fuse::Controls::VideoImpl::IVideoService::IsValid(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])))
    {
        __this->ResetTriggers();
        ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret20), ret20), true);
        ::g::Fuse::Controls::VideoImpl::IVideoService::Play(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]));
    }
}

// private void Fuse.Triggers.IPlayback.Stop() :145
void VideoVisual__FuseTriggersIPlaybackStop_fn(VideoVisual* __this)
{
    ::g::Fuse::Triggers::IPlayback::Pause(uInterface((uObject*)__this, ::TYPES[20/*Fuse.Triggers.IPlayback*/]));
    ::g::Fuse::Triggers::IMediaPlayback::Position(uInterface((uObject*)__this, ::TYPES[21/*Fuse.Triggers.IMediaPlayback*/]), 0.0);
}

// private double Fuse.Triggers.IProgress.get_Progress() :182
void VideoVisual__FuseTriggersIProgressget_Progress_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = (::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])) > 1e-05) ? ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])) / ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])) : 0.0, void();
}

// private void Fuse.Triggers.IProgress.add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :197
void VideoVisual__FuseTriggersIProgressadd_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// private void Fuse.Triggers.IProgress.remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :198
void VideoVisual__FuseTriggersIProgressremove_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :266
void VideoVisual__GetMarginSize_fn(VideoVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::Controls::Video* ret21;
    ::g::Fuse::Controls::Video* ret22;
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret21), ret21))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret22), ret22))->AbsoluteZoom();
    return *__retval = uPtr(__this->_sizing)->ExpandFillSize(__this->GetSize(), lp_), void();
}

// private float2 GetSize() :274
void VideoVisual__GetSize_fn(VideoVisual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// public VideoVisual New() :84
void VideoVisual__New2_fn(VideoVisual** __retval)
{
    *__retval = VideoVisual::New2();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :287
void VideoVisual__OnArrangeMarginBox_fn(VideoVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret23;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Controls::Video* ret24;
    ::g::Fuse::Controls::Video* ret25;
    ::g::Uno::Float2 size = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret23), ret23);
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret24), ret24))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret25), ret25))->AbsoluteZoom();
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    __this->_scale = uPtr(__this->_sizing)->CalcScale(size, contentDesiredSize);
    __this->_origin = uPtr(__this->_sizing)->CalcOrigin(size, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale));
    __this->_drawOrigin = __this->_origin;
    __this->_drawSize = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale);
    __this->_uvClip = uPtr(__this->_sizing)->CalcClip(size, &__this->_drawOrigin, &__this->_drawSize);
    return *__retval = size, void();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :324
void VideoVisual__OnHitTest_fn(VideoVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    ::g::Uno::Float2 lp = uPtr(htc)->LocalPoint();

    if ((((lp.X >= __this->_drawOrigin.X) && (lp.X <= (__this->_drawOrigin.X + __this->_drawSize.X))) && (lp.Y >= __this->_drawOrigin.Y)) && (lp.Y <= (__this->_drawOrigin.Y + __this->_drawSize.Y)))
        uPtr(htc)->Hit(__this);

    ::g::Fuse::Visual__OnHitTest_fn(__this, htc);
}

// private void OnParamChanged(object sender, Uno.EventArgs args) :227
void VideoVisual__OnParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParamChanged(sender, args);
}

// private void OnProgressChanged() :202
void VideoVisual__OnProgressChanged_fn(VideoVisual* __this)
{
    __this->OnProgressChanged();
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args) :218
void VideoVisual__OnRenderParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnRenderParamChanged(sender, args);
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) :234
void VideoVisual__OnSourceChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSourceChanged(sender, args);
}

// private void OnUpdate() :211
void VideoVisual__OnUpdate_fn(VideoVisual* __this)
{
    __this->OnUpdate();
}

// private generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :201
void VideoVisual__add_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// private generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :201
void VideoVisual__remove_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// private void ResetTriggers() :249
void VideoVisual__ResetTriggers_fn(VideoVisual* __this)
{
    __this->ResetTriggers();
}

// public VideoVisual() [instance] :84
void VideoVisual::ctor_5()
{
    _sizeCache = ::g::Uno::Int2__New2(0, 0);
    _volume = 1.0f;
    ctor_4();
    _sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _videoService = (uObject*)::g::Fuse::Controls::VideoImpl::GraphicsVideoService::New1((uObject*)this);
}

// private bool get_FlipSize() [instance] :259
bool VideoVisual::FlipSize()
{
    int degrees = ::g::Fuse::Controls::VideoImpl::IVideoService::RotationDegrees(uInterface(uPtr(_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]));
    return (degrees == 90) || (degrees == 270);
}

// private float2 GetSize() [instance] :274
::g::Uno::Float2 VideoVisual::GetSize()
{
    ::g::Uno::Float2 size = ::g::Uno::Float2__op_Implicit1(::g::Fuse::Controls::VideoImpl::IVideoService::Size(uInterface(uPtr(_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])));

    if (FlipSize())
        size = ::g::Uno::Float2__New2(size.Y, size.X);

    return size;
}

// private void OnParamChanged(object sender, Uno.EventArgs args) [instance] :227
void VideoVisual::OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret26;
    ::g::Fuse::Controls::Video* ret27;
    ::g::Fuse::Controls::Video* ret28;
    ::g::Fuse::Controls::VideoImpl::IVideoService::IsLooping(uInterface(uPtr(_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret26), ret26))->IsLooping());
    ::g::Fuse::Controls::VideoImpl::IVideoService::AutoPlay(uInterface(uPtr(_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret27), ret27))->AutoPlay());
    ::g::Fuse::Controls::VideoImpl::IVideoService::Volume(uInterface(uPtr(_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret28), ret28))->Volume());
}

// private void OnProgressChanged() [instance] :202
void VideoVisual::OnProgressChanged()
{
    ::g::Uno::UX::ValueChangedArgs* ret29;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
    {
        double progress = ::g::Fuse::Triggers::IPlayback::Progress(uInterface((uObject*)this, ::TYPES[20/*Fuse.Triggers.IPlayback*/]));
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[22/*Uno.UX.ValueChangedArgs<double>*/], uCRef(progress), &ret29), ret29));
    }
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args) [instance] :218
void VideoVisual::OnRenderParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret30;
    ::g::Fuse::Controls::Video* ret31;
    ::g::Fuse::Controls::Video* ret32;
    ::g::Fuse::Controls::Video* ret33;
    uPtr(_sizing)->SetStretchMode(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret30), ret30))->StretchMode());
    uPtr(_sizing)->SetStretchDirection(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret31), ret31))->StretchDirection());
    uPtr(_sizing)->SetStretchSizing(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret32), ret32))->StretchSizing());
    uPtr(_sizing)->SetAlignment(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret33), ret33))->ContentAlignment());
    InvalidateVisual();
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) [instance] :234
void VideoVisual::OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret34;
    ::g::Fuse::Controls::Video* ret35;
    ::g::Fuse::Controls::Video* ret36;
    ::g::Fuse::Controls::Video* ret37;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret34), ret34))->File() != NULL)
    {
        ::g::Fuse::Controls::VideoImpl::IVideoService::Load1(uInterface(uPtr(_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret35), ret35))->File());
        return;
    }

    if (::g::Uno::String::op_Inequality(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret36), ret36))->Url(), NULL))
    {
        ::g::Fuse::Controls::VideoImpl::IVideoService::Load(uInterface(uPtr(_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret37), ret37))->Url());
        return;
    }
}

// private void OnUpdate() [instance] :211
void VideoVisual::OnUpdate()
{
    ::g::Fuse::Controls::VideoImpl::IVideoService::Update(uInterface(uPtr(_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/]));

    if (::g::Fuse::Controls::VideoImpl::IVideoService::IsValid(uInterface(uPtr(_videoService), ::TYPES[19/*Fuse.Controls.VideoImpl.IVideoService*/])))
        OnProgressChanged();
}

// private generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :201
void VideoVisual::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[23/*Uno.UX.ValueChangedHandler<double>*/]);
}

// private generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :201
void VideoVisual::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[23/*Uno.UX.ValueChangedHandler<double>*/]);
}

// private void ResetTriggers() [instance] :249
void VideoVisual::ResetTriggers()
{
    ::g::Fuse::Controls::Video* ret38;
    ::g::Fuse::Controls::Video* ret39;
    ::g::Fuse::Controls::Video* ret40;
    ::g::Fuse::Controls::Video* ret41;
    ::g::Fuse::Triggers::BusyTask::SetBusy((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret38), ret38), &_busyTask, 0, ::STRINGS[8/*""*/]);
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret39), ret39), false);
    ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret40), ret40), false);
    ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret41), ret41), false);
}

// public VideoVisual New() [static] :84
VideoVisual* VideoVisual::New2()
{
    VideoVisual* obj4 = (VideoVisual*)uNew(VideoVisual_typeof());
    obj4->ctor_5();
    return obj4;
}
// }

}}}} // ::g::Fuse::Controls::VideoImpl
