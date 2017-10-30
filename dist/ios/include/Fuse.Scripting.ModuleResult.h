// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ModuleResult.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Module;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptException;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ModuleResult :10
// {
uType* ModuleResult_typeof();
void ModuleResult__ctor__fn(ModuleResult* __this, ::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj);
void ModuleResult__AddDependency_fn(ModuleResult* __this, uDelegate* invalidateCallback);
void ModuleResult__Dispose_fn(ModuleResult* __this);
void ModuleResult__get_Error_fn(ModuleResult* __this, ::g::Fuse::Scripting::ScriptException** __retval);
void ModuleResult__set_Error_fn(ModuleResult* __this, ::g::Fuse::Scripting::ScriptException* value);
void ModuleResult__Invalidate_fn(ModuleResult* __this);
void ModuleResult__New1_fn(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj, ModuleResult** __retval);
void ModuleResult__OnDataChanged_fn(ModuleResult* __this, uObject* sender, ::g::Uno::EventArgs* args);
void ModuleResult__OnDisposed_fn(ModuleResult* __this);
void ModuleResult__OnGlobalKeyChanged_fn(ModuleResult* __this, uString* key);
void ModuleResult__ToString_fn(ModuleResult* __this, uString** __retval);

struct ModuleResult : uObject
{
    bool _fileListening;
    bool _globalKeyListening;
    uStrong< ::g::Uno::Collections::List*> _invalidateCallbacks;
    uStrong< ::g::Fuse::Scripting::Context*> Context;
    uStrong<uString*> Id;
    uStrong< ::g::Fuse::Scripting::Module*> Module;
    uStrong< ::g::Fuse::Scripting::Object*> Object;
    uStrong< ::g::Fuse::Scripting::ScriptException*> _Error;

    void ctor_(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj);
    void AddDependency(uDelegate* invalidateCallback);
    void Dispose();
    ::g::Fuse::Scripting::ScriptException* Error();
    void Error(::g::Fuse::Scripting::ScriptException* value);
    void Invalidate();
    void OnDataChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnDisposed();
    void OnGlobalKeyChanged(uString* key);
    static ModuleResult* New1(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Scripting
