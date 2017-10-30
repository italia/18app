// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Type.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public sealed class Type :23
// {
uType* Type_typeof();
void Type__get_BaseType_fn(uType* __this, uType** __retval);
void Type__Equals_fn(uType* __this, uObject* obj, bool* __retval);
void Type__get_FullName_fn(uType* __this, uString** __retval);
void Type__GetHashCode_fn(uType* __this, int* __retval);
void Type__GetInterfaces_fn(uType* __this, uArray** __retval);
void Type__get_IsClass_fn(uType* __this, bool* __retval);
void Type__get_IsEnum_fn(uType* __this, bool* __retval);
void Type__get_IsInterface_fn(uType* __this, bool* __retval);
void Type__IsSubclassOf_fn(uType* __this, uType* c, bool* __retval);
void Type__get_IsValueType_fn(uType* __this, bool* __retval);
void Type__op_Equality_fn(uType* a, uType* b, bool* __retval);
void Type__op_Inequality_fn(uType* a, uType* b, bool* __retval);
void Type__ToString_fn(uType* __this, uString** __retval);

struct Type
{
    static uSStrong<uArray*> EmptyTypes_;
    static uSStrong<uArray*>& EmptyTypes() { return EmptyTypes_; }

    static uType* BaseType(uType* __this);
    static uString* FullName(uType* __this);
    static uArray* GetInterfaces(uType* __this);
    static bool IsClass(uType* __this);
    static bool IsEnum(uType* __this);
    static bool IsInterface(uType* __this);
    static bool IsSubclassOf(uType* __this, uType* c);
    static bool IsValueType(uType* __this);
    static bool op_Equality(uType* a, uType* b);
    static bool op_Inequality(uType* a, uType* b);
};
// }

}} // ::g::Uno
