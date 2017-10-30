// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct Value;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class Value :85
// {
uClassType* Value_typeof();
void Value__ToNumber_fn(uObject* obj, double* __retval);

struct Value : uObject
{
    static double ToNumber(uObject* obj);
};
// }

}}} // ::g::Fuse::Scripting
