// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/TextService.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.TextEnteredArgs.h>
#include <Fuse.Input.TextEnteredHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct TextEntered;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class TextEntered :44
// {
::g::Fuse::VisualEvent_type* TextEntered_typeof();
void TextEntered__Invoke_fn(TextEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args);

struct TextEntered : ::g::Fuse::VisualEvent
{
};
// }

}}} // ::g::Fuse::Input
