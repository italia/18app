// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMember.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ScriptMethod :59
// {
struct ScriptMethod_type : uType
{
    void(*fp_Call)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**);
};

ScriptMethod_type* ScriptMethod_typeof();
void ScriptMethod__ctor_1_fn(ScriptMethod* __this, uString* name, int* thread);

struct ScriptMethod : ::g::Fuse::Scripting::ScriptMember
{
    int Thread;

    void ctor_1(uString* name, int thread);
    uObject* Call(::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args) { uObject* __retval; return (((ScriptMethod_type*)__type)->fp_Call)(this, c, obj, args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
