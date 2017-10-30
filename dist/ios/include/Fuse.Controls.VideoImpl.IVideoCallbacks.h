// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoContainer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal abstract interface IVideoCallbacks :42
// {
uInterfaceType* IVideoCallbacks_typeof();

struct IVideoCallbacks
{
    void(*fp_OnCompleted)(uObject*);
    void(*fp_OnError)(uObject*, ::g::Uno::Exception*);
    void(*fp_OnFrameAvailable)(uObject*);
    void(*fp_OnLoading)(uObject*);
    void(*fp_OnReady)(uObject*);
    static void OnCompleted(const uInterface& __this) { __this.VTable<IVideoCallbacks>()->fp_OnCompleted(__this); }
    static void OnError(const uInterface& __this, ::g::Uno::Exception* e) { __this.VTable<IVideoCallbacks>()->fp_OnError(__this, e); }
    static void OnFrameAvailable(const uInterface& __this) { __this.VTable<IVideoCallbacks>()->fp_OnFrameAvailable(__this); }
    static void OnLoading(const uInterface& __this) { __this.VTable<IVideoCallbacks>()->fp_OnLoading(__this); }
    static void OnReady(const uInterface& __this) { __this.VTable<IVideoCallbacks>()->fp_OnReady(__this); }
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
