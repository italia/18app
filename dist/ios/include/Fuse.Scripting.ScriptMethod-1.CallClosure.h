// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod1__CallClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptMethod<T>.CallClosure :126
// {
uType* ScriptMethod1__CallClosure_typeof();
void ScriptMethod1__CallClosure__ctor__fn(ScriptMethod1__CallClosure* __this, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args);
void ScriptMethod1__CallClosure__New1_fn(uType* __type, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, ScriptMethod1__CallClosure** __retval);
void ScriptMethod1__CallClosure__Run_fn(ScriptMethod1__CallClosure* __this);

struct ScriptMethod1__CallClosure : uObject
{
    uStrong<uArray*> _args;
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong<uDelegate*> _method;
    uStrong<uObject*> _obj;

    void ctor_(uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args);
    void Run();
    static ScriptMethod1__CallClosure* New1(uType* __type, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args);
};
// }

}}} // ::g::Fuse::Scripting
