// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Tapped.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.CustomPointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Gestures{struct TappedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class TappedArgs :9
// {
::g::Fuse::VisualEventArgs_type* TappedArgs_typeof();
void TappedArgs__ctor_4_fn(TappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
void TappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, TappedArgs** __retval);

struct TappedArgs : ::g::Fuse::Input::CustomPointerEventArgs
{
    void ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
    static TappedArgs* New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Gestures
