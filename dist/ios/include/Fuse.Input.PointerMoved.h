// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/PointerEvents.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerMoved;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerMoved :44
// {
::g::Fuse::VisualEvent_type* PointerMoved_typeof();
void PointerMoved__ctor_1_fn(PointerMoved* __this);
void PointerMoved__Invoke_fn(PointerMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void PointerMoved__New1_fn(PointerMoved** __retval);

struct PointerMoved : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static PointerMoved* New1();
};
// }

}}} // ::g::Fuse::Input
