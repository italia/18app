// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoContainer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal abstract interface IVideoService :16
// {
uInterfaceType* IVideoService_typeof();

struct IVideoService
{
    void(*fp_set_AutoPlay)(uObject*, bool*);
    void(*fp_get_Duration)(uObject*, double*);
    void(*fp_set_IsLooping)(uObject*, bool*);
    void(*fp_get_IsValid)(uObject*, bool*);
    void(*fp_Load)(uObject*, uString*);
    void(*fp_Load1)(uObject*, ::g::Uno::UX::FileSource*);
    void(*fp_Pause)(uObject*);
    void(*fp_Play)(uObject*);
    void(*fp_get_Position)(uObject*, double*);
    void(*fp_set_Position)(uObject*, double*);
    void(*fp_get_RotationDegrees)(uObject*, int*);
    void(*fp_get_Size)(uObject*, ::g::Uno::Int2*);
    void(*fp_Unload)(uObject*);
    void(*fp_Update)(uObject*);
    void(*fp_get_VideoTexture)(uObject*, ::g::Uno::Graphics::VideoTexture**);
    void(*fp_set_Volume)(uObject*, float*);
    static void AutoPlay(const uInterface& __this, bool value) { __this.VTable<IVideoService>()->fp_set_AutoPlay(__this, &value); }
    static double Duration(const uInterface& __this) { double __retval; return __this.VTable<IVideoService>()->fp_get_Duration(__this, &__retval), __retval; }
    static void IsLooping(const uInterface& __this, bool value) { __this.VTable<IVideoService>()->fp_set_IsLooping(__this, &value); }
    static bool IsValid(const uInterface& __this) { bool __retval; return __this.VTable<IVideoService>()->fp_get_IsValid(__this, &__retval), __retval; }
    static void Load(const uInterface& __this, uString* url) { __this.VTable<IVideoService>()->fp_Load(__this, url); }
    static void Load1(const uInterface& __this, ::g::Uno::UX::FileSource* file) { __this.VTable<IVideoService>()->fp_Load1(__this, file); }
    static void Pause(const uInterface& __this) { __this.VTable<IVideoService>()->fp_Pause(__this); }
    static void Play(const uInterface& __this) { __this.VTable<IVideoService>()->fp_Play(__this); }
    static double Position(const uInterface& __this) { double __retval; return __this.VTable<IVideoService>()->fp_get_Position(__this, &__retval), __retval; }
    static void Position(const uInterface& __this, double value) { __this.VTable<IVideoService>()->fp_set_Position(__this, &value); }
    static int RotationDegrees(const uInterface& __this) { int __retval; return __this.VTable<IVideoService>()->fp_get_RotationDegrees(__this, &__retval), __retval; }
    static ::g::Uno::Int2 Size(const uInterface& __this);
    static void Unload(const uInterface& __this) { __this.VTable<IVideoService>()->fp_Unload(__this); }
    static void Update(const uInterface& __this) { __this.VTable<IVideoService>()->fp_Update(__this); }
    static ::g::Uno::Graphics::VideoTexture* VideoTexture(const uInterface& __this) { ::g::Uno::Graphics::VideoTexture* __retval; return __this.VTable<IVideoService>()->fp_get_VideoTexture(__this, &__retval), __retval; }
    static void Volume(const uInterface& __this, float value) { __this.VTable<IVideoService>()->fp_set_Volume(__this, &value); }
};

}}}} // ::g::Fuse::Controls::VideoImpl

#include <Uno.Int2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

inline ::g::Uno::Int2 IVideoService::Size(const uInterface& __this) { ::g::Uno::Int2 __retval; return __this.VTable<IVideoService>()->fp_get_Size(__this, &__retval), __retval; }
// }

}}}} // ::g::Fuse::Controls::VideoImpl
