// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentDictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public interfacemodifiers class Context :18
// {
struct Context_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Scripting::Context*);
    void(*fp_Evaluate)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**);
    void(*fp_get_GlobalObject)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**);
};

Context_type* Context_typeof();
void Context__ctor__fn(Context* __this, uObject* worker);
void Context__CallbackToFunction_fn(Context* __this, uDelegate* c, ::g::Fuse::Scripting::Function** __retval);
void Context__DeleteGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* mr);
void Context__get_Dispatcher_fn(Context* __this, uObject** __retval);
void Context__Invoke_fn(Context* __this, uDelegate* action);
void Context__NewArray_fn(Context* __this, uArray* values, ::g::Fuse::Scripting::Array** __retval);
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__ObjectDefineProperty_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool* enumerable, bool* configurable);
void Context__ObjectDefineProperty1_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool* enumerable, bool* configurable);
void Context__get_Observable_fn(Context* __this, ::g::Fuse::Scripting::Function** __retval);
void Context__ParseJson_fn(Context* __this, uString* json, uObject** __retval);
void Context__RegisterGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* result);
void Context__get_ThreadWorker_fn(Context* __this, uObject** __retval);
void Context__TryGetGlobalModuleResult_fn(Context* __this, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval);
void Context__Unwrap_fn(Context* __this, uObject* obj, uObject** __retval);
void Context__Wrap_fn(Context* __this, uObject* obj, uObject** __retval);

struct Context : uObject
{
    uStrong< ::g::Fuse::Scripting::Function*> _identity;
    uStrong< ::g::Uno::Threading::ConcurrentDictionary*> _moduleResults;
    uStrong< ::g::Fuse::Scripting::Function*> _newArray;
    uStrong< ::g::Fuse::Scripting::Function*> _newObject;
    uStrong< ::g::Fuse::Scripting::Function*> _parseJson;
    uStrong<uObject*> _worker;

    void ctor_(uObject* worker);
    ::g::Fuse::Scripting::Function* CallbackToFunction(uDelegate* c);
    void DeleteGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* mr);
    uObject* Dispatcher();
    void Dispose() { (((Context_type*)__type)->fp_Dispose)(this); }
    uObject* Evaluate(uString* fileName, uString* code) { uObject* __retval; return (((Context_type*)__type)->fp_Evaluate)(this, fileName, code, &__retval), __retval; }
    ::g::Fuse::Scripting::Object* GlobalObject() { ::g::Fuse::Scripting::Object* __retval; return (((Context_type*)__type)->fp_get_GlobalObject)(this, &__retval), __retval; }
    void Invoke(uDelegate* action);
    ::g::Fuse::Scripting::Array* NewArray(uArray* values);
    ::g::Fuse::Scripting::Object* NewObject();
    void ObjectDefineProperty(::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool enumerable, bool configurable);
    void ObjectDefineProperty1(::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool enumerable, bool configurable);
    ::g::Fuse::Scripting::Function* Observable();
    uObject* ParseJson(uString* json);
    void RegisterGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* result);
    uObject* ThreadWorker();
    ::g::Fuse::Scripting::ModuleResult* TryGetGlobalModuleResult(uString* id);
    uObject* Unwrap(uObject* obj);
    uObject* Wrap(uObject* obj);
};
// }

}}} // ::g::Fuse::Scripting
