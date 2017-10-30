// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ThreadWorker.Mirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IThreadWorker.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Builtins;}}}}
namespace g{namespace Fuse{namespace Reactive{struct ClassInstance;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Int3;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal partial sealed class ThreadWorker :8
// {
struct ThreadWorker_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Uno::Threading::IDispatcher interface1;
    ::g::Fuse::Scripting::IThreadWorker interface2;
};

ThreadWorker_type* ThreadWorker_typeof();
void ThreadWorker__ctor__fn(ThreadWorker* __this);
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this);
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__CreateContext_fn(uObject* worker, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__CreateMirror_fn(ThreadWorker* __this, uObject* obj, uObject** __retval);
void ThreadWorker__Dispose_fn(ThreadWorker* __this);
void ThreadWorker__FindRootTable_fn(::g::Uno::UX::NameTable* names, ::g::Uno::UX::NameTable** __retval);
void ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn(ThreadWorker* __this, uObject** __retval);
void ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval);
void ThreadWorker__FuseScriptingIThreadWorkerWrap_fn(ThreadWorker* __this, uObject* obj, uObject** __retval);
void ThreadWorker__get_FuseJS_fn(::g::Fuse::Reactive::FuseJS::Builtins** __retval);
void ThreadWorker__GetClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval);
void ThreadWorker__GetClassInstance_fn(ThreadWorker* __this, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ::g::Fuse::Reactive::ClassInstance** __retval);
void ThreadWorker__GetClassInstance1_fn(ThreadWorker* __this, ::g::Uno::UX::NameTable* scope, ::g::Fuse::Reactive::ClassInstance** __retval);
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__New1_fn(ThreadWorker** __retval);
void ThreadWorker__OnTerminating_fn(ThreadWorker* __this, int* newState);
void ThreadWorker__Reflect_fn(ThreadWorker* __this, uObject* obj, uObject** __retval);
void ThreadWorker__RegisterClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval);
void ThreadWorker__Run_fn(ThreadWorker* __this);
void ThreadWorker__RunInner_fn(ThreadWorker* __this);
void ThreadWorker__ToArray_fn(ThreadWorker* __this, ::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray1_fn(ThreadWorker* __this, ::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray2_fn(ThreadWorker* __this, ::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray3_fn(ThreadWorker* __this, ::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray4_fn(ThreadWorker* __this, ::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__ToArray5_fn(ThreadWorker* __this, ::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval);
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval);
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval);
void ThreadWorker__WrapScriptClass_fn(ThreadWorker* __this, uObject* obj, uObject** __retval);

struct ThreadWorker : uObject
{
    uStrong< ::g::Fuse::PropertyHandle*> _classInstanceProperty;
    static uSStrong< ::g::Fuse::Scripting::Context*> _context_;
    static uSStrong< ::g::Fuse::Scripting::Context*>& _context() { return ThreadWorker_typeof()->Init(), _context_; }
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _exceptionQueue;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> _fuseJS_;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*>& _fuseJS() { return ThreadWorker_typeof()->Init(), _fuseJS_; }
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _idle;
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _queue;
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _ready;
    int _reflectionDepth;
    uStrong< ::g::Uno::Collections::Dictionary*> _registeredClasses;
    uStrong< ::g::Fuse::Scripting::Function*> _setSuperclass;
    bool _subscribedForClosing;
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _terminate;
    uStrong< ::g::Uno::Threading::Thread*> _thread;

    void ctor_();
    void CheckAndThrow();
    ::g::Fuse::Scripting::Context* Context();
    uObject* CreateMirror(uObject* obj);
    void Dispose();
    ::g::Fuse::Scripting::Function* GetClass(::g::Fuse::Scripting::ScriptClass* sc);
    ::g::Fuse::Reactive::ClassInstance* GetClassInstance(uObject* obj, ::g::Uno::UX::NameTable* rootTable);
    ::g::Fuse::Reactive::ClassInstance* GetClassInstance1(::g::Uno::UX::NameTable* scope);
    void Invoke(uDelegate* action);
    void OnTerminating(int newState);
    uObject* Reflect(uObject* obj);
    ::g::Fuse::Scripting::Function* RegisterClass(::g::Fuse::Scripting::ScriptClass* sc);
    void Run();
    void RunInner();
    ::g::Fuse::Scripting::Array* ToArray(::g::Uno::Float2 v);
    ::g::Fuse::Scripting::Array* ToArray1(::g::Uno::Float3 v);
    ::g::Fuse::Scripting::Array* ToArray2(::g::Uno::Float4 v);
    ::g::Fuse::Scripting::Array* ToArray3(::g::Uno::Int2 v);
    ::g::Fuse::Scripting::Array* ToArray4(::g::Uno::Int3 v);
    ::g::Fuse::Scripting::Array* ToArray5(::g::Uno::Int4 v);
    uObject* Unwrap(uObject* dc);
    uObject* WrapScriptClass(uObject* obj);
    static ::g::Fuse::Scripting::Context* CreateContext(uObject* worker);
    static ::g::Uno::UX::NameTable* FindRootTable(::g::Uno::UX::NameTable* names);
    static ThreadWorker* New1();
    static uObject* Wrap(uObject* obj);
    static ::g::Fuse::Reactive::FuseJS::Builtins* FuseJS();
};
// }

}}} // ::g::Fuse::Reactive
