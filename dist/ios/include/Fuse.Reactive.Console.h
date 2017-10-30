// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/DebugLog.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{struct Console;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal static class Console :24
// {
uClassType* Console_typeof();
void Console__Dir_fn(uArray* args, uObject** __retval);
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent);
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent);
void Console__Init_fn(::g::Fuse::Scripting::Context* c);
void Console__Log_fn(uArray* args, uObject** __retval);

struct Console : uObject
{
    static uObject* Dir(uArray* args);
    static void Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent);
    static void Indent(::g::Uno::Text::StringBuilder* builder, int indent);
    static void Init(::g::Fuse::Scripting::Context* c);
    static uObject* Log(uArray* args);
};
// }

}}} // ::g::Fuse::Reactive
