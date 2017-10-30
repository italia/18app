// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/ValueObserver.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct ValueForwarder;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ValueForwarder :77
// {
::g::Fuse::Reactive::ValueObserver_type* ValueForwarder_typeof();
void ValueForwarder__ctor_1_fn(ValueForwarder* __this, uObject* obs, uObject* listener);
void ValueForwarder__New1_fn(uObject* obs, uObject* listener, ValueForwarder** __retval);
void ValueForwarder__PushData_fn(ValueForwarder* __this, uObject* newValue);

struct ValueForwarder : ::g::Fuse::Reactive::ValueObserver
{
    uStrong<uObject*> _listener;

    void ctor_1(uObject* obs, uObject* listener);
    static ValueForwarder* New1(uObject* obs, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
