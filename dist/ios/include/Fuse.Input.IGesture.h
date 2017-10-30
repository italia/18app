// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/Gesture.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct GesturePriorityConfig;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract interface IGesture :50
// {
uInterfaceType* IGesture_typeof();

struct IGesture
{
    void(*fp_OnCaptureChanged)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int*, int*);
    void(*fp_OnLostCapture)(uObject*, bool*);
    void(*fp_OnPointerMoved)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int*);
    void(*fp_OnPointerPressed)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int*);
    void(*fp_OnPointerReleased)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int*);
    void(*fp_get_Priority)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*);
    static void OnCaptureChanged(const uInterface& __this, ::g::Fuse::Input::PointerEventArgs* args, int howNew, int howPrev) { __this.VTable<IGesture>()->fp_OnCaptureChanged(__this, args, &howNew, &howPrev); }
    static void OnLostCapture(const uInterface& __this, bool forced) { __this.VTable<IGesture>()->fp_OnLostCapture(__this, &forced); }
    static int OnPointerMoved(const uInterface& __this, ::g::Fuse::Input::PointerMovedArgs* args) { int __retval; return __this.VTable<IGesture>()->fp_OnPointerMoved(__this, args, &__retval), __retval; }
    static int OnPointerPressed(const uInterface& __this, ::g::Fuse::Input::PointerPressedArgs* args) { int __retval; return __this.VTable<IGesture>()->fp_OnPointerPressed(__this, args, &__retval), __retval; }
    static int OnPointerReleased(const uInterface& __this, ::g::Fuse::Input::PointerReleasedArgs* args) { int __retval; return __this.VTable<IGesture>()->fp_OnPointerReleased(__this, args, &__retval), __retval; }
    static ::g::Fuse::Input::GesturePriorityConfig Priority(const uInterface& __this);
};

}}} // ::g::Fuse::Input

#include <Fuse.Input.GesturePriorityConfig.h>

namespace g{
namespace Fuse{
namespace Input{

inline ::g::Fuse::Input::GesturePriorityConfig IGesture::Priority(const uInterface& __this) { ::g::Fuse::Input::GesturePriorityConfig __retval; return __this.VTable<IGesture>()->fp_get_Priority(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Input
