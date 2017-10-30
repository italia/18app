// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Utilities/HashcodeHelper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct HashCodeHelper;}}}

namespace g{
namespace Uno{
namespace Time{

// internal static class HashCodeHelper :3
// {
uClassType* HashCodeHelper_typeof();
void HashCodeHelper__Hash_fn(uType* __type, int* code, void* value, int* __retval);
void HashCodeHelper__Initialize_fn(int* __retval);
void HashCodeHelper__MakeHash_fn(int* code, int* value, int* __retval);

struct HashCodeHelper : uObject
{
    template<class T>
    static int Hash(uType* __type, int code, T value) { int __retval; return HashCodeHelper__Hash_fn(__type, &code, uConstrain(__type->U(0), value), &__retval), __retval; }
    static int Initialize();
    static int MakeHash(int code, int value);
};
// }

}}} // ::g::Uno::Time
