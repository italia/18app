// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.FastProperties1.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.FastProperty1Link.h>
namespace g{namespace Fuse{struct FastProperty1Link1;}}

namespace g{
namespace Fuse{

// internal sealed class FastProperty1Link<T> :57
// {
uType* FastProperty1Link1_typeof();
void FastProperty1Link1__ctor_1_fn(FastProperty1Link1* __this, int* p, void* value);
void FastProperty1Link1__New2_fn(uType* __type, int* p, void* value, FastProperty1Link1** __retval);

struct FastProperty1Link1 : ::g::Fuse::FastProperty1Link
{
    uTField Value() { return __type->Field(this, 2); }

    template<class T>
    void ctor_1(int p, T value) { FastProperty1Link1__ctor_1_fn(this, &p, uConstrain(__type->T(0), value)); }
    template<class T>
    static FastProperty1Link1* New2(uType* __type, int p, T value) { FastProperty1Link1* __retval; return FastProperty1Link1__New2_fn(__type, &p, uConstrain(__type->T(0), value), &__retval), __retval; }
};
// }

}} // ::g::Fuse
