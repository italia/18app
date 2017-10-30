// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/Object.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.Scripting.Object.h>
#include <JavaScriptCore/JavaScript.h>
#include <JavaScriptCore/JSObjectRef.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Object;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal sealed extern class Object :8
// {
::g::Fuse::Scripting::Object_type* Object_typeof();
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* value);
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval);
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval);
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval);
void Object__GetHashCode_fn(Object* __this, int* __retval);
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval);
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval);
void Object__set_Item_fn(Object* __this, uString* key, uObject* value);
void Object__get_Keys_fn(Object* __this, uArray** __retval);
void Object__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* value, Object** __retval);

struct Object : ::g::Fuse::Scripting::Object
{
    uStrong< ::g::Fuse::Scripting::JavaScriptCore::Context*> _context;
    ::JSObjectRef _value;

    void ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef value);
    static Object* New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef value);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
