// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeEventEmitterModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEventEmitterModule__EmitClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativeEventEmitterModule.EmitClosure :163
// {
uType* NativeEventEmitterModule__EmitClosure_typeof();
void NativeEventEmitterModule__EmitClosure__ctor__fn(NativeEventEmitterModule__EmitClosure* __this, uArray* args);
void NativeEventEmitterModule__EmitClosure__Emit_fn(NativeEventEmitterModule__EmitClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o);
void NativeEventEmitterModule__EmitClosure__New1_fn(uArray* args, NativeEventEmitterModule__EmitClosure** __retval);

struct NativeEventEmitterModule__EmitClosure : uObject
{
    uStrong<uArray*> _args;

    void ctor_(uArray* args);
    void Emit(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o);
    static NativeEventEmitterModule__EmitClosure* New1(uArray* args);
};
// }

}}} // ::g::Fuse::Scripting
