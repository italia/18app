// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/PointerEvents.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerMovedArgs :35
// {
::g::Fuse::VisualEventArgs_type* PointerMovedArgs_typeof();
void PointerMovedArgs__ctor_3_fn(PointerMovedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
void PointerMovedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerMovedArgs** __retval);

struct PointerMovedArgs : ::g::Fuse::Input::PointerEventArgs
{
    void ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
    static PointerMovedArgs* New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
