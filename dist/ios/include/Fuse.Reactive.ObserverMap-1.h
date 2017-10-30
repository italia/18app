// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/ObserverMap.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ObserverMap;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract class ObserverMap<T> :23
// {
struct ObserverMap_type : uType
{
    ::g::Fuse::Reactive::IObserver interface0;
    void(*fp_Map)(::g::Fuse::Reactive::ObserverMap*, uObject*, uObject**);
    void(*fp_OnUpdated)(::g::Fuse::Reactive::ObserverMap*);
    void(*fp_Unmap)(::g::Fuse::Reactive::ObserverMap*, uObject*, uObject**);
};

ObserverMap_type* ObserverMap_typeof();
void ObserverMap__ctor__fn(ObserverMap* __this);
void ObserverMap__Add_fn(ObserverMap* __this, uObject* value);
void ObserverMap__Attach_fn(ObserverMap* __this, uObject* src, uObject* slave);
void ObserverMap__Clear_fn(ObserverMap* __this);
void ObserverMap__get_Count_fn(ObserverMap* __this, int* __retval);
void ObserverMap__Detach_fn(ObserverMap* __this);
void ObserverMap__FuseReactiveIObserverOnAdd_fn(ObserverMap* __this, uObject* addedValue);
void ObserverMap__FuseReactiveIObserverOnClear_fn(ObserverMap* __this);
void ObserverMap__FuseReactiveIObserverOnFailed_fn(ObserverMap* __this, uString* message);
void ObserverMap__FuseReactiveIObserverOnInsertAt_fn(ObserverMap* __this, int* index, uObject* value);
void ObserverMap__FuseReactiveIObserverOnNewAll_fn(ObserverMap* __this, uObject* values);
void ObserverMap__FuseReactiveIObserverOnNewAt_fn(ObserverMap* __this, int* index, uObject* newValue);
void ObserverMap__FuseReactiveIObserverOnRemoveAt_fn(ObserverMap* __this, int* index);
void ObserverMap__FuseReactiveIObserverOnSet_fn(ObserverMap* __this, uObject* newValue);
void ObserverMap__get_Item_fn(ObserverMap* __this, int* index, uObject** __retval);
void ObserverMap__set_Item_fn(ObserverMap* __this, int* index, uObject* value);
void ObserverMap__OnUpdated_fn(ObserverMap* __this);
void ObserverMap__RemoveAt_fn(ObserverMap* __this, int* index);
void ObserverMap__UpdateBacking_fn(ObserverMap* __this);
void ObserverMap__UVUnmap_fn(ObserverMap* __this, uObject* mv, uObject** __retval);

struct ObserverMap : uObject
{
    uStrong< ::g::Uno::Collections::List*> _list;
    uStrong<uObject*> _observable;
    uStrong<uObject*> _slave;
    uStrong<uObject*> _source;
    uStrong<uObject*> _subscription;

    void ctor_();
    void Add(uObject* value);
    void Attach(uObject* src, uObject* slave);
    void Clear();
    int Count();
    void Detach();
    uObject* Item(int index);
    void Item(int index, uObject* value);
    uObject* Map(uObject* v) { uObject* __retval; return (((ObserverMap_type*)__type)->fp_Map)(this, v, &__retval), __retval; }
    void OnUpdated() { (((ObserverMap_type*)__type)->fp_OnUpdated)(this); }
    void RemoveAt(int index);
    uObject* Unmap(uObject* mv) { uObject* __retval; return (((ObserverMap_type*)__type)->fp_Unmap)(this, mv, &__retval), __retval; }
    void UpdateBacking();
    uObject* UVUnmap(uObject* mv);
    static void OnUpdated(ObserverMap* __this) { ObserverMap__OnUpdated_fn(__this); }
};
// }

}}} // ::g::Fuse::Reactive
