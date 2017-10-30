// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/IScriptEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IScriptObject :15
// {
uInterfaceType* IScriptObject_typeof();

struct IScriptObject
{
    void(*fp_get_ScriptContext)(uObject*, ::g::Fuse::Scripting::Context**);
    void(*fp_get_ScriptObject)(uObject*, uObject**);
    void(*fp_SetScriptObject)(uObject*, uObject*, ::g::Fuse::Scripting::Context*);
    static ::g::Fuse::Scripting::Context* ScriptContext(const uInterface& __this) { ::g::Fuse::Scripting::Context* __retval; return __this.VTable<IScriptObject>()->fp_get_ScriptContext(__this, &__retval), __retval; }
    static uObject* ScriptObject(const uInterface& __this) { uObject* __retval; return __this.VTable<IScriptObject>()->fp_get_ScriptObject(__this, &__retval), __retval; }
    static void SetScriptObject(const uInterface& __this, uObject* obj, ::g::Fuse::Scripting::Context* context) { __this.VTable<IScriptObject>()->fp_SetScriptObject(__this, obj, context); }
};
// }

}}} // ::g::Fuse::Scripting
