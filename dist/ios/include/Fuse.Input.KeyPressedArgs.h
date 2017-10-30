// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/Keyboard.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct KeyPressedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class KeyPressedArgs :46
// {
::g::Fuse::VisualEventArgs_type* KeyPressedArgs_typeof();
void KeyPressedArgs__ctor_3_fn(KeyPressedArgs* __this, int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual);
void KeyPressedArgs__New3_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual, KeyPressedArgs** __retval);

struct KeyPressedArgs : ::g::Fuse::Input::KeyEventArgs
{
    void ctor_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual);
    static KeyPressedArgs* New3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
