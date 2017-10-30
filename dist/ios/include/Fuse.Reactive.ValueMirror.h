// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ValueMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IRaw.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ValueMirror;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ValueMirror :7
// {
struct ValueMirror_type : uType
{
    ::g::Fuse::IRaw interface0;
    void(*fp_Unsubscribe)(::g::Fuse::Reactive::ValueMirror*);
};

ValueMirror_type* ValueMirror_typeof();
void ValueMirror__ctor__fn(ValueMirror* __this, uObject* raw);
void ValueMirror__get_Raw_fn(ValueMirror* __this, uObject** __retval);
void ValueMirror__Unsubscribe1_fn(uObject* obj);

struct ValueMirror : uObject
{
    uStrong<uObject*> _raw;

    void ctor_(uObject* raw);
    uObject* Raw();
    void Unsubscribe() { (((ValueMirror_type*)__type)->fp_Unsubscribe)(this); }
    static void Unsubscribe1(uObject* obj);
};
// }

}}} // ::g::Fuse::Reactive
