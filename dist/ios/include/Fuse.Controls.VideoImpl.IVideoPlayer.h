// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/IVideoPlayer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal abstract interface IVideoPlayer :11
// {
uInterfaceType* IVideoPlayer_typeof();

struct IVideoPlayer
{
    void(*fp_get_Duration)(uObject*, double*);
    void(*fp_add_ErrorOccurred)(uObject*, uDelegate*);
    void(*fp_remove_ErrorOccurred)(uObject*, uDelegate*);
    void(*fp_add_FrameAvailable)(uObject*, uDelegate*);
    void(*fp_remove_FrameAvailable)(uObject*, uDelegate*);
    void(*fp_Pause)(uObject*);
    void(*fp_Play)(uObject*);
    void(*fp_get_Position)(uObject*, double*);
    void(*fp_set_Position)(uObject*, double*);
    void(*fp_get_RotationDegrees)(uObject*, int*);
    void(*fp_get_Size)(uObject*, ::g::Uno::Int2*);
    void(*fp_Update)(uObject*);
    void(*fp_get_VideoTexture)(uObject*, ::g::Uno::Graphics::VideoTexture**);
    void(*fp_get_Volume)(uObject*, float*);
    void(*fp_set_Volume)(uObject*, float*);
    static double Duration(const uInterface& __this) { double __retval; return __this.VTable<IVideoPlayer>()->fp_get_Duration(__this, &__retval), __retval; }
    static void add_ErrorOccurred(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_add_ErrorOccurred(__this, value); }
    static void remove_ErrorOccurred(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_remove_ErrorOccurred(__this, value); }
    static void add_FrameAvailable(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_add_FrameAvailable(__this, value); }
    static void remove_FrameAvailable(const uInterface& __this, uDelegate* value) { __this.VTable<IVideoPlayer>()->fp_remove_FrameAvailable(__this, value); }
    static void Pause(const uInterface& __this) { __this.VTable<IVideoPlayer>()->fp_Pause(__this); }
    static void Play(const uInterface& __this) { __this.VTable<IVideoPlayer>()->fp_Play(__this); }
    static double Position(const uInterface& __this) { double __retval; return __this.VTable<IVideoPlayer>()->fp_get_Position(__this, &__retval), __retval; }
    static void Position(const uInterface& __this, double value) { __this.VTable<IVideoPlayer>()->fp_set_Position(__this, &value); }
    static int RotationDegrees(const uInterface& __this) { int __retval; return __this.VTable<IVideoPlayer>()->fp_get_RotationDegrees(__this, &__retval), __retval; }
    static ::g::Uno::Int2 Size(const uInterface& __this);
    static void Update(const uInterface& __this) { __this.VTable<IVideoPlayer>()->fp_Update(__this); }
    static ::g::Uno::Graphics::VideoTexture* VideoTexture(const uInterface& __this) { ::g::Uno::Graphics::VideoTexture* __retval; return __this.VTable<IVideoPlayer>()->fp_get_VideoTexture(__this, &__retval), __retval; }
    static float Volume(const uInterface& __this) { float __retval; return __this.VTable<IVideoPlayer>()->fp_get_Volume(__this, &__retval), __retval; }
    static void Volume(const uInterface& __this, float value) { __this.VTable<IVideoPlayer>()->fp_set_Volume(__this, &value); }
};

}}}} // ::g::Fuse::Controls::VideoImpl

#include <Uno.Int2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

inline ::g::Uno::Int2 IVideoPlayer::Size(const uInterface& __this) { ::g::Uno::Int2 __retval; return __this.VTable<IVideoPlayer>()->fp_get_Size(__this, &__retval), __retval; }
// }

}}}} // ::g::Fuse::Controls::VideoImpl
