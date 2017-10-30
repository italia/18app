// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/TextService.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct TextEnteredArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class TextEnteredArgs :27
// {
::g::Fuse::VisualEventArgs_type* TextEnteredArgs_typeof();
void TextEnteredArgs__Serialize_fn(TextEnteredArgs* __this, uObject* s);
void TextEnteredArgs__get_Text_fn(TextEnteredArgs* __this, uString** __retval);
void TextEnteredArgs__set_Text_fn(TextEnteredArgs* __this, uString* value);

struct TextEnteredArgs : ::g::Fuse::VisualEventArgs
{
    uStrong<uString*> _Text;

    uString* Text();
    void Text(uString* value);
};
// }

}}} // ::g::Fuse::Input
