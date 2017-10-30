// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct TextEditSpeedHack;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class TextEditSpeedHack :779
// {
uClassType* TextEditSpeedHack_typeof();
void TextEditSpeedHack__Run_fn();
void TextEditSpeedHack__RunInner_fn(::g::ObjC::Object* win);

struct TextEditSpeedHack : uObject
{
    static bool _done_;
    static bool& _done() { return _done_; }

    static void Run();
    static void RunInner(::g::ObjC::Object* win);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
