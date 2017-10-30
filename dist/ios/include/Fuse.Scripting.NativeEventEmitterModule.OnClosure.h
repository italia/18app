// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeEventEmitterModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEventEmitterModule__OnClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativeEventEmitterModule.OnClosure :210
// {
uType* NativeEventEmitterModule__OnClosure_typeof();
void NativeEventEmitterModule__OnClosure__ctor__fn(NativeEventEmitterModule__OnClosure* __this, uObject* eventName, uDelegate* listener);
void NativeEventEmitterModule__OnClosure__New1_fn(uObject* eventName, uDelegate* listener, NativeEventEmitterModule__OnClosure** __retval);
void NativeEventEmitterModule__OnClosure__On_fn(NativeEventEmitterModule__OnClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o);

struct NativeEventEmitterModule__OnClosure : uObject
{
    uStrong<uObject*> _eventName;
    uStrong<uDelegate*> _listener;

    void ctor_(uObject* eventName, uDelegate* listener);
    void On(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o);
    static NativeEventEmitterModule__OnClosure* New1(uObject* eventName, uDelegate* listener);
};
// }

}}} // ::g::Fuse::Scripting
