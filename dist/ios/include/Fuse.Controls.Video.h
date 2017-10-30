// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/Video.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Video;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Video :125
// {
struct Video_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Triggers::IMediaPlayback interface18;
    ::g::Fuse::Triggers::IPlayback interface19;
    ::g::Fuse::Triggers::IProgress interface20;
};

Video_type* Video_typeof();
void Video__get_AutoPlay_fn(Video* __this, bool* __retval);
void Video__set_AutoPlay_fn(Video* __this, bool* value);
void Video__get_ContentAlignment_fn(Video* __this, int* __retval);
void Video__set_ContentAlignment_fn(Video* __this, int* value);
void Video__get_File_fn(Video* __this, ::g::Uno::UX::FileSource** __retval);
void Video__set_File_fn(Video* __this, ::g::Uno::UX::FileSource* value);
void Video__get_IsLooping_fn(Video* __this, bool* __retval);
void Video__set_IsLooping_fn(Video* __this, bool* value);
void Video__OnParamChanged_fn(Video* __this);
void Video__OnProgressChanged_fn(Video* __this, uObject* sender, ::g::Uno::EventArgs* args);
void Video__OnRenderParamChanged_fn(Video* __this);
void Video__OnRooted_fn(Video* __this);
void Video__OnSourceChanged_fn(Video* __this);
void Video__OnUnrooted_fn(Video* __this);
void Video__add_ParamChanged_fn(Video* __this, uDelegate* value);
void Video__remove_ParamChanged_fn(Video* __this, uDelegate* value);
void Video__Pause_fn(Video* __this);
void Video__get_Playback_fn(Video* __this, uObject** __retval);
void Video__set_Playback_fn(Video* __this, uObject* value);
void Video__PlayTo_fn(Video* __this, double* progress);
void Video__get_Position_fn(Video* __this, double* __retval);
void Video__set_Position_fn(Video* __this, double* value);
void Video__get_Progress_fn(Video* __this, double* __retval);
void Video__set_Progress_fn(Video* __this, double* value);
void Video__add_ProgressChanged_fn(Video* __this, uDelegate* value);
void Video__remove_ProgressChanged_fn(Video* __this, uDelegate* value);
void Video__add_RenderParamChanged_fn(Video* __this, uDelegate* value);
void Video__remove_RenderParamChanged_fn(Video* __this, uDelegate* value);
void Video__Resume_fn(Video* __this);
void Video__get_Scale9Margin_fn(Video* __this, ::g::Uno::Float4* __retval);
void Video__set_Scale9Margin_fn(Video* __this, ::g::Uno::Float4* value);
void Video__SetPlayback_fn(Video* __this, uObject* playback);
void Video__add_SourceChanged_fn(Video* __this, uDelegate* value);
void Video__remove_SourceChanged_fn(Video* __this, uDelegate* value);
void Video__Stop_fn(Video* __this);
void Video__get_StretchDirection_fn(Video* __this, int* __retval);
void Video__set_StretchDirection_fn(Video* __this, int* value);
void Video__get_StretchMode_fn(Video* __this, int* __retval);
void Video__set_StretchMode_fn(Video* __this, int* value);
void Video__get_StretchSizing_fn(Video* __this, int* __retval);
void Video__set_StretchSizing_fn(Video* __this, int* value);
void Video__get_Url_fn(Video* __this, uString** __retval);
void Video__set_Url_fn(Video* __this, uString* value);
void Video__get_Volume_fn(Video* __this, float* __retval);
void Video__set_Volume_fn(Video* __this, float* value);

struct Video : ::g::Fuse::Controls::Panel
{
    bool _autoPlay;
    int _contentAlignment;
    uStrong< ::g::Uno::UX::FileSource*> _file;
    bool _hasScale9Margin;
    bool _isLooping;
    uStrong<uObject*> _playback;
    static ::g::Uno::UX::Selector _progressName_;
    static ::g::Uno::UX::Selector& _progressName() { return _progressName_; }
    ::g::Uno::Float4 _scale9Margin;
    int _stretchDirection;
    int _stretchMode;
    int _stretchSizing;
    uStrong<uString*> _url;
    float _volume;
    uStrong<uDelegate*> ParamChanged1;
    uStrong<uDelegate*> ProgressChanged1;
    uStrong<uDelegate*> RenderParamChanged1;
    uStrong<uDelegate*> SourceChanged1;

    bool AutoPlay();
    void AutoPlay(bool value);
    int ContentAlignment();
    void ContentAlignment(int value);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    bool IsLooping();
    void IsLooping(bool value);
    void OnParamChanged();
    void OnProgressChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnRenderParamChanged();
    void OnSourceChanged();
    void add_ParamChanged(uDelegate* value);
    void remove_ParamChanged(uDelegate* value);
    void Pause();
    uObject* Playback();
    void Playback(uObject* value);
    void PlayTo(double progress);
    double Position();
    void Position(double value);
    double Progress();
    void Progress(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void add_RenderParamChanged(uDelegate* value);
    void remove_RenderParamChanged(uDelegate* value);
    void Resume();
    ::g::Uno::Float4 Scale9Margin();
    void Scale9Margin(::g::Uno::Float4 value);
    void SetPlayback(uObject* playback);
    void add_SourceChanged(uDelegate* value);
    void remove_SourceChanged(uDelegate* value);
    void Stop();
    int StretchDirection();
    void StretchDirection(int value);
    int StretchMode();
    void StretchMode(int value);
    int StretchSizing();
    void StretchSizing(int value);
    uString* Url();
    void Url(uString* value);
    float Volume();
    void Volume(float value);
};
// }

}}} // ::g::Fuse::Controls
