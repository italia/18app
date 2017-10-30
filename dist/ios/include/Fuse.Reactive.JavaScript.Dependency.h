// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/JavaScript.Dependencies.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Reactive{struct JavaScript__Dependency;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class JavaScript.Dependency :13
// {
struct JavaScript__Dependency_type : uType
{
    ::g::Fuse::Reactive::IListener interface0;
};

JavaScript__Dependency_type* JavaScript__Dependency_typeof();
void JavaScript__Dependency__get_Expression_fn(JavaScript__Dependency* __this, uObject** __retval);
void JavaScript__Dependency__set_Expression_fn(JavaScript__Dependency* __this, uObject* value);
void JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn(JavaScript__Dependency* __this, uObject* source, uObject* data);
void JavaScript__Dependency__get_Name_fn(JavaScript__Dependency* __this, uString** __retval);
void JavaScript__Dependency__set_Name_fn(JavaScript__Dependency* __this, uString* value);
void JavaScript__Dependency__Subscribe_fn(JavaScript__Dependency* __this, ::g::Fuse::Reactive::JavaScript* script);
void JavaScript__Dependency__Unsubscribe_fn(JavaScript__Dependency* __this);

struct JavaScript__Dependency : uObject
{
    uStrong<uObject*> _expSubscription;
    uStrong< ::g::Fuse::Reactive::JavaScript*> _script;
    bool HasValue;
    uStrong<uObject*> Value;
    uStrong<uObject*> _Expression;
    uStrong<uString*> _Name;

    uObject* Expression();
    void Expression(uObject* value);
    uString* Name();
    void Name(uString* value);
    void Subscribe(::g::Fuse::Reactive::JavaScript* script);
    void Unsubscribe();
};
// }

}}} // ::g::Fuse::Reactive
