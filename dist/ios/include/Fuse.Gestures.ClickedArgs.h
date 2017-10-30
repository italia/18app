// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Clicked.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.CustomPointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Gestures{struct ClickedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ClickedArgs :7
// {
::g::Fuse::VisualEventArgs_type* ClickedArgs_typeof();
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, ClickedArgs** __retval);

struct ClickedArgs : ::g::Fuse::Input::CustomPointerEventArgs
{
    void ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
    static ClickedArgs* New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Gestures
