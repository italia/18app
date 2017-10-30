// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ObservableProperty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableProperty;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal class ObservableProperty :26
// {
struct ObservableProperty_type : uType
{
    ::g::Fuse::Reactive::IObserver interface0;
    ::g::Uno::UX::IPropertyListener interface1;
};

ObservableProperty_type* ObservableProperty_typeof();
void ObservableProperty__ctor__fn(ObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
void ObservableProperty__FuseReactiveIObserverOnAdd_fn(ObservableProperty* __this, uObject* addedValue);
void ObservableProperty__FuseReactiveIObserverOnClear_fn(ObservableProperty* __this);
void ObservableProperty__FuseReactiveIObserverOnFailed_fn(ObservableProperty* __this, uString* message);
void ObservableProperty__FuseReactiveIObserverOnInsertAt_fn(ObservableProperty* __this, int* index, uObject* value);
void ObservableProperty__FuseReactiveIObserverOnNewAll_fn(ObservableProperty* __this, uObject* values);
void ObservableProperty__FuseReactiveIObserverOnNewAt_fn(ObservableProperty* __this, int* index, uObject* newValue);
void ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn(ObservableProperty* __this, int* index);
void ObservableProperty__FuseReactiveIObserverOnSet_fn(ObservableProperty* __this, uObject* newValue);
void ObservableProperty__GetObservable_fn(ObservableProperty* __this, ::g::Fuse::Reactive::Observable** __retval);
void ObservableProperty__New1_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ObservableProperty** __retval);
void ObservableProperty__PushValue_fn(ObservableProperty* __this, uObject* val);
void ObservableProperty__Reset_fn(ObservableProperty* __this);
void ObservableProperty__Set_fn(ObservableProperty* __this, uObject* value);
void ObservableProperty__Subscribe_fn(ObservableProperty* __this);
void ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(ObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct ObservableProperty : uObject
{
    uStrong< ::g::Fuse::Scripting::Object*> _obj;
    uStrong< ::g::Fuse::Reactive::Observable*> _observable;
    uStrong< ::g::Uno::UX::Property*> _property;
    uStrong<uObject*> _subscription;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
    ::g::Fuse::Reactive::Observable* GetObservable();
    void PushValue(uObject* val);
    void Reset();
    void Set(uObject* value);
    void Subscribe();
    static ObservableProperty* New1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
};
// }

}}} // ::g::Fuse::Reactive
