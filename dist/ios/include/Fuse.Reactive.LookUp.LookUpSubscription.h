// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/LookUp.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ValueForwarder.IValueListener.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct LookUp;}}}
namespace g{namespace Fuse{namespace Reactive{struct LookUp__LookUpSubscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class LookUp.LookUpSubscription :34
// {
struct LookUp__LookUpSubscription_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Reactive::IObserver interface1;
    ::g::Fuse::Reactive::IListener interface2;
    ::g::Fuse::Reactive::ValueForwarder__IValueListener interface3;
};

LookUp__LookUpSubscription_type* LookUp__LookUpSubscription_typeof();
void LookUp__LookUpSubscription__ctor__fn(LookUp__LookUpSubscription* __this, ::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener);
void LookUp__LookUpSubscription__ClearDiagnostic_fn(LookUp__LookUpSubscription* __this);
void LookUp__LookUpSubscription__Dispose_fn(LookUp__LookUpSubscription* __this);
void LookUp__LookUpSubscription__DisposeCollectionObservableSub_fn(LookUp__LookUpSubscription* __this);
void LookUp__LookUpSubscription__DisposeIndexSub_fn(LookUp__LookUpSubscription* __this);
void LookUp__LookUpSubscription__FuseReactiveIObserverOnAdd_fn(LookUp__LookUpSubscription* __this, uObject* addedValue);
void LookUp__LookUpSubscription__FuseReactiveIObserverOnClear_fn(LookUp__LookUpSubscription* __this);
void LookUp__LookUpSubscription__FuseReactiveIObserverOnFailed_fn(LookUp__LookUpSubscription* __this, uString* message);
void LookUp__LookUpSubscription__FuseReactiveIObserverOnInsertAt_fn(LookUp__LookUpSubscription* __this, int* index, uObject* value);
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAll_fn(LookUp__LookUpSubscription* __this, uObject* values);
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAt_fn(LookUp__LookUpSubscription* __this, int* index, uObject* value);
void LookUp__LookUpSubscription__FuseReactiveIObserverOnRemoveAt_fn(LookUp__LookUpSubscription* __this, int* index);
void LookUp__LookUpSubscription__FuseReactiveIObserverOnSet_fn(LookUp__LookUpSubscription* __this, uObject* newValue);
void LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerNewValue_fn(LookUp__LookUpSubscription* __this, uObject* value);
void LookUp__LookUpSubscription__New1_fn(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener, LookUp__LookUpSubscription** __retval);
void LookUp__LookUpSubscription__NewCollection_fn(LookUp__LookUpSubscription* __this, uObject* col);
void LookUp__LookUpSubscription__NewIndex_fn(LookUp__LookUpSubscription* __this, uObject* ind);
void LookUp__LookUpSubscription__OnNewData_fn(LookUp__LookUpSubscription* __this, uObject* source, uObject* value);
void LookUp__LookUpSubscription__PushNewData_fn(LookUp__LookUpSubscription* __this, uObject* value);
void LookUp__LookUpSubscription__ResultChanged_fn(LookUp__LookUpSubscription* __this);
void LookUp__LookUpSubscription__SetDiagnostic_fn(LookUp__LookUpSubscription* __this, uString* message, uObject* source);

struct LookUp__LookUpSubscription : uObject
{
    uStrong<uObject*> _collection;
    uStrong<uObject*> _colObservableSub;
    uStrong<uObject*> _colSub;
    uStrong<uObject*> _diag;
    bool _hasCollection;
    bool _hasIndex;
    uStrong<uObject*> _index;
    uStrong<uObject*> _indexForwarder;
    uStrong<uObject*> _indexSub;
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::Reactive::LookUp*> _lu;

    void ctor_(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener);
    void ClearDiagnostic();
    void Dispose();
    void DisposeCollectionObservableSub();
    void DisposeIndexSub();
    void NewCollection(uObject* col);
    void NewIndex(uObject* ind);
    void OnNewData(uObject* source, uObject* value);
    void PushNewData(uObject* value);
    void ResultChanged();
    void SetDiagnostic(uString* message, uObject* source);
    static LookUp__LookUpSubscription* New1(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
