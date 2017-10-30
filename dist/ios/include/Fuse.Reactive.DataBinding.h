// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/DataBinding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.ExpressionBinding.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IObserver.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct DataBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DataBinding :45
// {
struct DataBinding_type : ::g::Fuse::Reactive::ExpressionBinding_type
{
    ::g::Fuse::Reactive::IObserver interface2;
    ::g::Fuse::INameListener interface3;
    ::g::Uno::UX::IPropertyListener interface4;
};

DataBinding_type* DataBinding_typeof();
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uObject* key, int* mode);
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval);
void DataBinding__get_Clear_fn(DataBinding* __this, bool* __retval);
void DataBinding__ClearFailed_fn(DataBinding* __this);
void DataBinding__ClearValue_fn(DataBinding* __this);
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name);
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue);
void DataBinding__FuseReactiveIObserverOnClear_fn(DataBinding* __this);
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message);
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, uObject* values);
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__FuseReactiveIObserverOnRemoveAt_fn(DataBinding* __this, int* index);
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue);
void DataBinding__InvalidListOperation_fn(DataBinding* __this);
void DataBinding__MarkFailed_fn(DataBinding* __this, uString* message);
void DataBinding__New1_fn(::g::Uno::UX::Property* target, uObject* key, int* mode, DataBinding** __retval);
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value);
void DataBinding__OnRooted_fn(DataBinding* __this);
void DataBinding__OnUnrooted_fn(DataBinding* __this);
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue);
void DataBinding__get_Read_fn(DataBinding* __this, bool* __retval);
void DataBinding__SetTarget_fn(DataBinding* __this, uObject* value);
void DataBinding__SubscribeResource_fn(DataBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval);
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval);
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value);
void DataBinding__ToSelector_fn(uObject* newValue, ::g::Uno::UX::Selector* __retval);
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue);
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval);
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval);
void DataBinding__TypeToJSName_fn(uType* t, uString** __retval);
void DataBinding__UnlistenNameRegistry_fn(DataBinding* __this);
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void DataBinding__get_Write_fn(DataBinding* __this, bool* __retval);

struct DataBinding : ::g::Fuse::Reactive::ExpressionBinding
{
    uStrong< ::g::Fuse::Triggers::BusyTask*> _busyTask;
    uStrong<uObject*> _currentValue;
    int _mode;
    uStrong<uString*> _registryName;
    uStrong<uObject*> _subscription;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_2(::g::Uno::UX::Property* target, uObject* key, int mode);
    bool Acceptor(uObject* obj);
    bool Clear();
    void ClearFailed();
    void ClearValue();
    void InvalidListOperation();
    void MarkFailed(uString* message);
    void PushValue(uObject* newValue);
    bool Read();
    void SetTarget(uObject* value);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    void TryPushAsMarshalledValue(uObject* newValue);
    bool TryPushAsName(uObject* newValue);
    bool TryPushAsValue(uObject* newValue);
    void UnlistenNameRegistry();
    bool Write();
    static DataBinding* New1(::g::Uno::UX::Property* target, uObject* key, int mode);
    static ::g::Uno::UX::Selector ToSelector(uObject* newValue);
    static uString* TypeToJSName(uType* t);
};
// }

}}} // ::g::Fuse::Reactive
