// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ObjectMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.IRaw.h>
#include <Fuse.Reactive.ValueMirror.h>
namespace g{namespace Fuse{namespace Reactive{struct ObjectMirror;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ObjectMirror :6
// {
struct ObjectMirror_type : ::g::Fuse::Reactive::ValueMirror_type
{
    ::g::Fuse::IObject interface1;
};

ObjectMirror_type* ObjectMirror_typeof();
void ObjectMirror__ctor_1_fn(ObjectMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval);
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval);
void ObjectMirror__get_Keys_fn(ObjectMirror* __this, uArray** __retval);
void ObjectMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval);
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this);

struct ObjectMirror : ::g::Fuse::Reactive::ValueMirror
{
    uStrong< ::g::Uno::Collections::Dictionary*> _props;

    void ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
    bool ContainsKey(uString* key);
    uObject* Item(uString* key);
    uArray* Keys();
    static ObjectMirror* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Reactive
