// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class Object :32
// {
struct Object_type : uType
{
    ::g::Fuse::IObject interface0;
    void(*fp_CallMethod)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**);
    void(*fp_ContainsKey)(::g::Fuse::Scripting::Object*, uString*, bool*);
    void(*fp_Equals2)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*);
    void(*fp_InstanceOf)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*);
    void(*fp_get_Item)(::g::Fuse::Scripting::Object*, uString*, uObject**);
    void(*fp_set_Item)(::g::Fuse::Scripting::Object*, uString*, uObject*);
    void(*fp_get_Keys)(::g::Fuse::Scripting::Object*, uArray**);
};

Object_type* Object_typeof();
void Object__ctor__fn(Object* __this);
void Object__Equals_fn(Object* __this, uObject* o, bool* __retval);
void Object__GetHashCode_fn(Object* __this, int* __retval);

struct Object : uObject
{
    void ctor_();
    uObject* CallMethod(uString* name, uArray* args) { uObject* __retval; return (((Object_type*)__type)->fp_CallMethod)(this, name, args, &__retval), __retval; }
    bool ContainsKey(uString* key) { bool __retval; return (((Object_type*)__type)->fp_ContainsKey)(this, key, &__retval), __retval; }
    bool Equals2(Object* o) { bool __retval; return (((Object_type*)__type)->fp_Equals2)(this, o, &__retval), __retval; }
    bool InstanceOf(::g::Fuse::Scripting::Function* type) { bool __retval; return (((Object_type*)__type)->fp_InstanceOf)(this, type, &__retval), __retval; }
    uObject* Item(uString* key) { uObject* __retval; return (((Object_type*)__type)->fp_get_Item)(this, key, &__retval), __retval; }
    void Item(uString* key, uObject* value) { (((Object_type*)__type)->fp_set_Item)(this, key, value); }
    uArray* Keys() { uArray* __retval; return (((Object_type*)__type)->fp_get_Keys)(this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
