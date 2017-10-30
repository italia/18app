// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSObjectUtils.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct JSObjectUtils;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class JSObjectUtils :3
// {
uClassType* JSObjectUtils_typeof();
void JSObjectUtils__ValueOrDefault1_fn(uType* __type, uArray* args, int* index, void* defaultValue, uTRef __retval);

struct JSObjectUtils : uObject
{
    template<class T>
    static T ValueOrDefault1(uType* __type, uArray* args, int index, T defaultValue) { T __retval; return JSObjectUtils__ValueOrDefault1_fn(__type, args, &index, uConstrain(__type->U(0), defaultValue), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
