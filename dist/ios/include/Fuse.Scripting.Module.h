// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Module.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Module;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class Module :7
// {
struct Module_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_CreateExportsObject)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, uObject**);
    void(*fp_Evaluate)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*);
    void(*fp_GetFile)(::g::Fuse::Scripting::Module*, ::g::Uno::UX::FileSource**);
};

Module_type* Module_typeof();
void Module__ctor__fn(Module* __this);
void Module__CreateExportsObject_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval);
void Module__Dispose_fn(Module* __this);
void Module__Evaluate1_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval);
void Module__EvaluateExports_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, uObject** __retval);
void Module__GetFile_fn(Module* __this, ::g::Uno::UX::FileSource** __retval);
void Module__get_IsEvaluated_fn(Module* __this, bool* __retval);
void Module__MarkEvaluated_fn(Module* __this);

struct Module : uObject
{
    uStrong<uDelegate*> _evaluated;
    bool _isEvaluated;

    void ctor_();
    uObject* CreateExportsObject(::g::Fuse::Scripting::Context* c) { uObject* __retval; return (((Module_type*)__type)->fp_CreateExportsObject)(this, c, &__retval), __retval; }
    void Dispose();
    void Evaluate(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result) { (((Module_type*)__type)->fp_Evaluate)(this, c, result); }
    ::g::Fuse::Scripting::ModuleResult* Evaluate1(::g::Fuse::Scripting::Context* c, uString* id);
    uObject* EvaluateExports(::g::Fuse::Scripting::Context* c, uString* id);
    ::g::Uno::UX::FileSource* GetFile() { ::g::Uno::UX::FileSource* __retval; return (((Module_type*)__type)->fp_GetFile)(this, &__retval), __retval; }
    bool IsEvaluated();
    void MarkEvaluated();
    static uObject* CreateExportsObject(Module* __this, ::g::Fuse::Scripting::Context* c) { uObject* __retval; return Module__CreateExportsObject_fn(__this, c, &__retval), __retval; }
    static ::g::Uno::UX::FileSource* GetFile(Module* __this) { ::g::Uno::UX::FileSource* __retval; return Module__GetFile_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
