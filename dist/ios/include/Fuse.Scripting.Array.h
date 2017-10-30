// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class Array :9
// {
struct Array_type : uType
{
    ::g::Fuse::IArray interface0;
    void(*fp_Equals2)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*);
    void(*fp_get_Item)(::g::Fuse::Scripting::Array*, int*, uObject**);
    void(*fp_set_Item)(::g::Fuse::Scripting::Array*, int*, uObject*);
    void(*fp_get_Length)(::g::Fuse::Scripting::Array*, int*);
};

Array_type* Array_typeof();
void Array__ctor__fn(Array* __this);
void Array__Equals_fn(Array* __this, uObject* o, bool* __retval);
void Array__GetHashCode_fn(Array* __this, int* __retval);

struct Array : uObject
{
    void ctor_();
    bool Equals2(Array* a) { bool __retval; return (((Array_type*)__type)->fp_Equals2)(this, a, &__retval), __retval; }
    uObject* Item(int index) { uObject* __retval; return (((Array_type*)__type)->fp_get_Item)(this, &index, &__retval), __retval; }
    void Item(int index, uObject* value) { (((Array_type*)__type)->fp_set_Item)(this, &index, value); }
    int Length() { int __retval; return (((Array_type*)__type)->fp_get_Length)(this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
