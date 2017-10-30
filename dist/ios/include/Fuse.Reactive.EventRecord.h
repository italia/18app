// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/EventRecord.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Uno.Object.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Reactive{struct EventRecord;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{template<class TKey, class TValue>struct KeyValuePair;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class EventRecord :9
// {
struct EventRecord_type : uType
{
    ::g::Fuse::Reactive::IEventRecord interface0;
    ::g::Fuse::Scripting::IEventSerializer interface1;
};

EventRecord_type* EventRecord_typeof();
void EventRecord__ctor__fn(EventRecord* __this, uObject* args, uObject* sender);
void EventRecord__AddObject_fn(EventRecord* __this, uString* key, uObject* value);
void EventRecord__get_Args_fn(EventRecord* __this, uObject** __retval);
void EventRecord__get_Data_fn(EventRecord* __this, uObject** __retval);
void EventRecord__FuseScriptingIEventSerializerAddBool_fn(EventRecord* __this, uString* key, bool* value);
void EventRecord__FuseScriptingIEventSerializerAddDouble_fn(EventRecord* __this, uString* key, double* value);
void EventRecord__FuseScriptingIEventSerializerAddInt_fn(EventRecord* __this, uString* key, int* value);
void EventRecord__FuseScriptingIEventSerializerAddObject_fn(EventRecord* __this, uString* key, uObject* value);
void EventRecord__FuseScriptingIEventSerializerAddString_fn(EventRecord* __this, uString* key, uString* value);
void EventRecord__New1_fn(uObject* args, uObject* sender, EventRecord** __retval);
void EventRecord__get_Node_fn(EventRecord* __this, ::g::Fuse::Node** __retval);
void EventRecord__get_Sender_fn(EventRecord* __this, ::g::Uno::UX::Selector* __retval);

struct EventRecord : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _args;
    uStrong<uObject*> _data;
    uStrong< ::g::Fuse::Node*> _node;
    ::g::Uno::UX::Selector _sender;

    void ctor_(uObject* args, uObject* sender);
    void AddObject(uString* key, uObject* value);
    uObject* Args();
    uObject* Data();
    ::g::Fuse::Node* Node();
    ::g::Uno::UX::Selector Sender();
    static EventRecord* New1(uObject* args, uObject* sender);
};
// }

}}} // ::g::Fuse::Reactive
