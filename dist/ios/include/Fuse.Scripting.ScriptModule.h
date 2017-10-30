// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptModule.Evaluate.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Module.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace IO{struct Bundle;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public partial class ScriptModule :10
// {
struct ScriptModule_type : ::g::Fuse::Scripting::Module_type
{
    void(*fp_CallModuleFunc)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Function*, uArray*);
    void(*fp_GenerateArgs)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**);
    void(*fp_GenerateRequireTable)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Uno::Collections::Dictionary**);
};

ScriptModule_type* ScriptModule_typeof();
void ScriptModule__ctor_1_fn(ScriptModule* __this);
void ScriptModule__Acceptor_fn(ScriptModule* __this, uObject* obj, bool* __retval);
void ScriptModule__get_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle** __retval);
void ScriptModule__set_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle* value);
void ScriptModule__CallModuleFunc_fn(ScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args);
void ScriptModule__get_Code_fn(ScriptModule* __this, uString** __retval);
void ScriptModule__set_Code_fn(ScriptModule* __this, uString* value);
void ScriptModule__ComputePath_fn(ScriptModule* __this, uString* moduleId, bool* isFile, uString** __retval);
void ScriptModule__ComputePath1_fn(uString* sourcePath, uString* moduleId, uString** __retval);
void ScriptModule__Evaluate_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result);
void ScriptModule__get_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval);
void ScriptModule__set_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource* value);
void ScriptModule__get_FileName_fn(ScriptModule* __this, uString** __retval);
void ScriptModule__set_FileName_fn(ScriptModule* __this, uString* value);
void ScriptModule__GenerateArgs_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval);
void ScriptModule__GenerateRequireTable_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Uno::Collections::Dictionary** __retval);
void ScriptModule__GetEffectiveCode_fn(ScriptModule* __this, uString** __retval);
void ScriptModule__GetFile_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval);
void ScriptModule__GetPreambleNewlines_fn(ScriptModule* __this, int* __retval);
void ScriptModule__GetSourcePath_fn(ScriptModule* __this, uString** __retval);
void ScriptModule__IsPathEqual_fn(uString* src, uString* path, bool* __retval);
void ScriptModule__get_LineNumberOffset_fn(ScriptModule* __this, int* __retval);
void ScriptModule__set_LineNumberOffset_fn(ScriptModule* __this, int* value);
void ScriptModule__LookForFile_fn(ScriptModule* __this, uString* path, ::g::Uno::IO::BundleFile** __retval);
void ScriptModule__get_Postamble_fn(ScriptModule* __this, uString** __retval);
void ScriptModule__set_Postamble_fn(ScriptModule* __this, uString* value);
void ScriptModule__get_Preamble_fn(ScriptModule* __this, uString** __retval);
void ScriptModule__set_Preamble_fn(ScriptModule* __this, uString* value);
void ScriptModule__TryResolve_fn(ScriptModule* __this, uString* path, bool* isFile, ::g::Fuse::Scripting::Module** __retval);

struct ScriptModule : ::g::Fuse::Scripting::Module
{
    uStrong< ::g::Uno::IO::Bundle*> _bundle;
    uStrong<uString*> _code;
    uStrong< ::g::Uno::UX::FileSource*> _file;
    uStrong<uString*> _fileName;
    int _lineNumberOffset;
    static uSStrong<uString*> ModuleContainsAnErrorMessage_;
    static uSStrong<uString*>& ModuleContainsAnErrorMessage() { return ModuleContainsAnErrorMessage_; }
    uStrong<uString*> _Postamble;
    uStrong<uString*> _Preamble;

    void ctor_1();
    bool Acceptor(uObject* obj);
    ::g::Uno::IO::Bundle* Bundle();
    void Bundle(::g::Uno::IO::Bundle* value);
    void CallModuleFunc(::g::Fuse::Scripting::Function* moduleFunc, uArray* args) { (((ScriptModule_type*)__type)->fp_CallModuleFunc)(this, moduleFunc, args); }
    uString* Code();
    void Code(uString* value);
    uString* ComputePath(uString* moduleId, bool* isFile);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    uString* FileName();
    void FileName(uString* value);
    uString* GenerateArgs(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args) { uString* __retval; return (((ScriptModule_type*)__type)->fp_GenerateArgs)(this, c, result, args, &__retval), __retval; }
    ::g::Uno::Collections::Dictionary* GenerateRequireTable(::g::Fuse::Scripting::Context* c) { ::g::Uno::Collections::Dictionary* __retval; return (((ScriptModule_type*)__type)->fp_GenerateRequireTable)(this, c, &__retval), __retval; }
    uString* GetEffectiveCode();
    int GetPreambleNewlines();
    uString* GetSourcePath();
    int LineNumberOffset();
    void LineNumberOffset(int value);
    ::g::Uno::IO::BundleFile* LookForFile(uString* path);
    uString* Postamble();
    void Postamble(uString* value);
    uString* Preamble();
    void Preamble(uString* value);
    ::g::Fuse::Scripting::Module* TryResolve(uString* path, bool isFile);
    static void CallModuleFunc(ScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args) { ScriptModule__CallModuleFunc_fn(__this, moduleFunc, args); }
    static uString* ComputePath1(uString* sourcePath, uString* moduleId);
    static uString* GenerateArgs(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args) { uString* __retval; return ScriptModule__GenerateArgs_fn(__this, c, result, args, &__retval), __retval; }
    static ::g::Uno::Collections::Dictionary* GenerateRequireTable(ScriptModule* __this, ::g::Fuse::Scripting::Context* c) { ::g::Uno::Collections::Dictionary* __retval; return ScriptModule__GenerateRequireTable_fn(__this, c, &__retval), __retval; }
    static bool IsPathEqual(uString* src, uString* path);
};
// }

}}} // ::g::Fuse::Scripting
