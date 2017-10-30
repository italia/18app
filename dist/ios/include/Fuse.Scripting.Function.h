// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class Function :58
// {
struct Function_type : uType
{
    void(*fp_Call)(::g::Fuse::Scripting::Function*, uArray*, uObject**);
    void(*fp_Construct)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**);
    void(*fp_Equals2)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*);
};

Function_type* Function_typeof();
void Function__ctor__fn(Function* __this);
void Function__Equals_fn(Function* __this, uObject* o, bool* __retval);
void Function__GetHashCode_fn(Function* __this, int* __retval);

struct Function : uObject
{
    void ctor_();
    uObject* Call(uArray* args) { uObject* __retval; return (((Function_type*)__type)->fp_Call)(this, args, &__retval), __retval; }
    ::g::Fuse::Scripting::Object* Construct(uArray* args) { ::g::Fuse::Scripting::Object* __retval; return (((Function_type*)__type)->fp_Construct)(this, args, &__retval), __retval; }
    bool Equals2(Function* f) { bool __retval; return (((Function_type*)__type)->fp_Equals2)(this, f, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
