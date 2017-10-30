// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoVisual.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.Video.h>
#include <Fuse.Controls.VideoImpl.IVideoCallbacks.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct VideoVisual;}}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal sealed extern class VideoVisual :52
// {
struct VideoVisual_type : ::g::Fuse::Controls::Graphics::ControlVisual_type
{
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks interface12;
    ::g::Fuse::Triggers::IMediaPlayback interface13;
    ::g::Fuse::Triggers::IPlayback interface14;
    ::g::Fuse::Triggers::IProgress interface15;
};

VideoVisual_type* VideoVisual_typeof();
void VideoVisual__ctor_5_fn(VideoVisual* __this);
void VideoVisual__Attach_fn(VideoVisual* __this);
void VideoVisual__Detach_fn(VideoVisual* __this);
void VideoVisual__Draw_fn(VideoVisual* __this, ::g::Fuse::DrawContext* dc);
void VideoVisual__get_FlipSize_fn(VideoVisual* __this, bool* __retval);
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnCompleted_fn(VideoVisual* __this);
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnError_fn(VideoVisual* __this, ::g::Uno::Exception* e);
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnFrameAvailable_fn(VideoVisual* __this);
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnLoading_fn(VideoVisual* __this);
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnReady_fn(VideoVisual* __this);
void VideoVisual__FuseTriggersIMediaPlaybackget_Position_fn(VideoVisual* __this, double* __retval);
void VideoVisual__FuseTriggersIMediaPlaybackset_Position_fn(VideoVisual* __this, double* value);
void VideoVisual__FuseTriggersIPlaybackPause_fn(VideoVisual* __this);
void VideoVisual__FuseTriggersIPlaybackPlayTo_fn(VideoVisual* __this, double* progress);
void VideoVisual__FuseTriggersIPlaybackget_Progress_fn(VideoVisual* __this, double* __retval);
void VideoVisual__FuseTriggersIPlaybackset_Progress_fn(VideoVisual* __this, double* value);
void VideoVisual__FuseTriggersIPlaybackResume_fn(VideoVisual* __this);
void VideoVisual__FuseTriggersIPlaybackStop_fn(VideoVisual* __this);
void VideoVisual__FuseTriggersIProgressget_Progress_fn(VideoVisual* __this, double* __retval);
void VideoVisual__FuseTriggersIProgressadd_ProgressChanged_fn(VideoVisual* __this, uDelegate* value);
void VideoVisual__FuseTriggersIProgressremove_ProgressChanged_fn(VideoVisual* __this, uDelegate* value);
void VideoVisual__GetMarginSize_fn(VideoVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void VideoVisual__GetSize_fn(VideoVisual* __this, ::g::Uno::Float2* __retval);
void VideoVisual__New2_fn(VideoVisual** __retval);
void VideoVisual__OnArrangeMarginBox_fn(VideoVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void VideoVisual__OnHitTest_fn(VideoVisual* __this, ::g::Fuse::HitTestContext* htc);
void VideoVisual__OnParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnProgressChanged_fn(VideoVisual* __this);
void VideoVisual__OnRenderParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnSourceChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoVisual__OnUpdate_fn(VideoVisual* __this);
void VideoVisual__add_ProgressChanged_fn(VideoVisual* __this, uDelegate* value);
void VideoVisual__remove_ProgressChanged_fn(VideoVisual* __this, uDelegate* value);
void VideoVisual__ResetTriggers_fn(VideoVisual* __this);

struct VideoVisual : ::g::Fuse::Controls::Graphics::ControlVisual
{
    uStrong< ::g::Fuse::Triggers::BusyTask*> _busyTask;
    ::g::Uno::Float2 _drawOrigin;
    ::g::Uno::Float2 _drawSize;
    ::g::Uno::Float2 _origin;
    ::g::Uno::Float2 _scale;
    ::g::Uno::Int2 _sizeCache;
    uStrong< ::g::Fuse::Internal::SizingContainer*> _sizing;
    ::g::Uno::Float4 _uvClip;
    uStrong<uObject*> _videoService;
    float _volume;
    uStrong<uDelegate*> ProgressChanged1;

    void ctor_5();
    bool FlipSize();
    ::g::Uno::Float2 GetSize();
    void OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnProgressChanged();
    void OnRenderParamChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnUpdate();
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void ResetTriggers();
    static VideoVisual* New2();
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
