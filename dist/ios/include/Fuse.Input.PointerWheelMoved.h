// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/PointerEvents.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerWheelMoved;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerWheelMoved :123
// {
::g::Fuse::VisualEvent_type* PointerWheelMoved_typeof();
void PointerWheelMoved__ctor_1_fn(PointerWheelMoved* __this);
void PointerWheelMoved__Invoke_fn(PointerWheelMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerWheelMovedArgs* args);
void PointerWheelMoved__New1_fn(PointerWheelMoved** __retval);

struct PointerWheelMoved : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static PointerWheelMoved* New1();
};
// }

}}} // ::g::Fuse::Input
