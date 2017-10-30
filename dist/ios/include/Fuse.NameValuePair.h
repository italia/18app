// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/NameValuePair.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct NameValuePair;}}

namespace g{
namespace Fuse{

// public sealed class NameValuePair :17
// {
struct NameValuePair_type : uType
{
    ::g::Fuse::IObject interface0;
};

NameValuePair_type* NameValuePair_typeof();
void NameValuePair__FuseIObjectContainsKey_fn(NameValuePair* __this, uString* key, bool* __retval);
void NameValuePair__FuseIObjectget_Item_fn(NameValuePair* __this, uString* key, uObject** __retval);
void NameValuePair__FuseIObjectget_Keys_fn(NameValuePair* __this, uArray** __retval);
void NameValuePair__get_Name_fn(NameValuePair* __this, uString** __retval);
void NameValuePair__set_Name_fn(NameValuePair* __this, uString* value);
void NameValuePair__ToString_fn(NameValuePair* __this, uString** __retval);
void NameValuePair__get_Value_fn(NameValuePair* __this, uObject** __retval);
void NameValuePair__set_Value_fn(NameValuePair* __this, uObject* value);

struct NameValuePair : uObject
{
    uStrong<uString*> _Name;
    uStrong<uObject*> _Value;

    uString* Name();
    void Name(uString* value);
    uObject* Value();
    void Value(uObject* value);
};
// }

}} // ::g::Fuse
