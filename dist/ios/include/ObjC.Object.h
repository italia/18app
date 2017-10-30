// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/ObjC.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.Object.h>
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace ObjC{

// public sealed extern class Object :37
// {
uType* Object_typeof();
void Object__ctor_1_fn(Object* __this, ::id* handle);
void Object__Create_fn(::id* handle, Object** __retval);
void Object__Equals_fn(Object* __this, uObject* x, bool* __retval);
void Object__GetHandle_fn(Object* o, ::id* __retval);
void Object__GetHashCode_fn(Object* __this, int* __retval);
void Object__New2_fn(::id* handle, Object** __retval);

struct Object : uObject
{
    ::id Handle;

    void ctor_1(::id handle);
    static Object* Create(::id handle);
    static ::id GetHandle(Object* o);
    static Object* New2(::id handle);
};
// }

}} // ::g::ObjC
