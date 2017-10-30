// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/TextControls/TextInputControl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputActionArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class TextInputActionArgs :10
// {
::g::Fuse::VisualEventArgs_type* TextInputActionArgs_typeof();
void TextInputActionArgs__ctor_2_fn(TextInputActionArgs* __this, ::g::Fuse::Visual* visual, int* type);
void TextInputActionArgs__New3_fn(::g::Fuse::Visual* visual, int* type, TextInputActionArgs** __retval);
void TextInputActionArgs__get_Type_fn(TextInputActionArgs* __this, int* __retval);
void TextInputActionArgs__set_Type_fn(TextInputActionArgs* __this, int* value);

struct TextInputActionArgs : ::g::Fuse::VisualEventArgs
{
    int _Type;

    void ctor_2(::g::Fuse::Visual* visual, int type);
    int Type();
    void Type(int value);
    static TextInputActionArgs* New3(::g::Fuse::Visual* visual, int type);
};
// }

}}} // ::g::Fuse::Controls
