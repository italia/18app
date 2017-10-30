// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/Array.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.Scripting.Array.h>
#include <JavaScriptCore/JavaScript.h>
#include <JavaScriptCore/JSObjectRef.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Array;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal sealed extern class Array :7
// {
::g::Fuse::Scripting::Array_type* Array_typeof();
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array);
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval);
void Array__GetHashCode_fn(Array* __this, int* __retval);
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval);
void Array__set_Item_fn(Array* __this, int* index, uObject* value);
void Array__get_Length_fn(Array* __this, int* __retval);
void Array__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array, Array** __retval);

struct Array : ::g::Fuse::Scripting::Array
{
    uStrong< ::g::Fuse::Scripting::JavaScriptCore::Context*> _context;
    ::JSObjectRef _value;

    void ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array);
    static Array* New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
