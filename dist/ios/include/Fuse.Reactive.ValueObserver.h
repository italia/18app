// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/ValueObserver.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ValueObserver;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract class ValueObserver :7
// {
struct ValueObserver_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Reactive::IObserver interface1;
    void(*fp_Dispose)(::g::Fuse::Reactive::ValueObserver*);
    void(*fp_PushData)(::g::Fuse::Reactive::ValueObserver*, uObject*);
};

ValueObserver_type* ValueObserver_typeof();
void ValueObserver__ctor__fn(ValueObserver* __this);
void ValueObserver__Dispose_fn(ValueObserver* __this);
void ValueObserver__FuseReactiveIObserverOnAdd_fn(ValueObserver* __this, uObject* addedValue);
void ValueObserver__FuseReactiveIObserverOnClear_fn(ValueObserver* __this);
void ValueObserver__FuseReactiveIObserverOnFailed_fn(ValueObserver* __this, uString* message);
void ValueObserver__FuseReactiveIObserverOnInsertAt_fn(ValueObserver* __this, int* index, uObject* value);
void ValueObserver__FuseReactiveIObserverOnNewAll_fn(ValueObserver* __this, uObject* values);
void ValueObserver__FuseReactiveIObserverOnNewAt_fn(ValueObserver* __this, int* index, uObject* value);
void ValueObserver__FuseReactiveIObserverOnRemoveAt_fn(ValueObserver* __this, int* index);
void ValueObserver__FuseReactiveIObserverOnSet_fn(ValueObserver* __this, uObject* newValue);
void ValueObserver__Subscribe_fn(ValueObserver* __this, uObject* obs);
void ValueObserver__Unsubscribe_fn(ValueObserver* __this);

struct ValueObserver : uObject
{
    uStrong<uObject*> _obs;
    uStrong<uObject*> _obsSub;

    void ctor_();
    void Dispose() { (((ValueObserver_type*)__type)->fp_Dispose)(this); }
    void PushData(uObject* newValue) { (((ValueObserver_type*)__type)->fp_PushData)(this, newValue); }
    void Subscribe(uObject* obs);
    void Unsubscribe();
    static void Dispose(ValueObserver* __this) { ValueObserver__Dispose_fn(__this); }
};
// }

}}} // ::g::Fuse::Reactive
