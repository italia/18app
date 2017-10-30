// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ValueMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.IRaw.h>
#include <Fuse.Reactive.ValueMirror.h>
namespace g{namespace Fuse{namespace Reactive{struct ListMirror;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ListMirror :26
// {
struct ListMirror_type : ::g::Fuse::Reactive::ValueMirror_type
{
    ::g::Fuse::IArray interface1;
    void(*fp_get_Item)(::g::Fuse::Reactive::ListMirror*, int*, uObject**);
    void(*fp_get_Length)(::g::Fuse::Reactive::ListMirror*, int*);
};

ListMirror_type* ListMirror_typeof();
void ListMirror__ctor_1_fn(ListMirror* __this, uObject* raw);

struct ListMirror : ::g::Fuse::Reactive::ValueMirror
{
    void ctor_1(uObject* raw);
    uObject* Item(int index) { uObject* __retval; return (((ListMirror_type*)__type)->fp_get_Item)(this, &index, &__retval), __retval; }
    int Length() { int __retval; return (((ListMirror_type*)__type)->fp_get_Length)(this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
