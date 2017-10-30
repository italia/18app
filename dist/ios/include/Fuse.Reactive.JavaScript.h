// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/JavaScript.Dependencies.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.ValueForwarder.IValueListener.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Reactive{struct JavaScript__Dependency;}}}
namespace g{namespace Fuse{namespace Reactive{struct ModuleInstance;}}}
namespace g{namespace Fuse{namespace Reactive{struct RootableScriptModule;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Module;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptException;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public partial sealed class JavaScript :11
// {
struct JavaScript_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Scripting::IModuleProvider interface6;
    ::g::Fuse::Reactive::ValueForwarder__IValueListener interface7;
    ::g::Fuse::Node__ISiblingDataProvider interface8;
    ::g::Fuse::Reactive::IContext interface9;
};

JavaScript_type* JavaScript_typeof();
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable);
void JavaScript__get_Dependencies_fn(JavaScript* __this, uObject** __retval);
void JavaScript__DispatchEvaluate_fn(JavaScript* __this);
void JavaScript__DispatchEvaluateIfDependenciesReady_fn(JavaScript* __this);
void JavaScript__DisposeDependencySubscriptions_fn(JavaScript* __this);
void JavaScript__DisposeModuleInstance_fn(JavaScript* __this);
void JavaScript__DisposeSubscription_fn(JavaScript* __this);
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval);
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value);
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval);
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value);
void JavaScript__FuseNodeISiblingDataProviderget_Data_fn(JavaScript* __this, uObject** __retval);
void JavaScript__FuseReactiveIContextget_Node_fn(JavaScript* __this, ::g::Fuse::Node** __retval);
void JavaScript__FuseReactiveIContextSubscribe_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval);
void JavaScript__FuseReactiveIContextSubscribeResource_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval);
void JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn(JavaScript* __this, uObject* data);
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval);
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval);
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value);
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval);
void JavaScript__OnRooted_fn(JavaScript* __this);
void JavaScript__OnUnrooted_fn(JavaScript* __this);
void JavaScript__get_ScriptModule_fn(JavaScript* __this, ::g::Fuse::Reactive::RootableScriptModule** __retval);
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc);
void JavaScript__SetSiblingData_fn(JavaScript* __this, uObject* data);
void JavaScript__SubscribeToDependenciesAndDispatchEvaluate_fn(JavaScript* __this);
void JavaScript__UserScriptError_fn(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval);

struct JavaScript : ::g::Fuse::Behavior
{
    uStrong<uObject*> _currentDc;
    uStrong< ::g::Uno::Collections::List*> _dependencies;
    static int _javaScriptCounter_;
    static int& _javaScriptCounter() { return _javaScriptCounter_; }
    uStrong< ::g::Fuse::Reactive::ModuleInstance*> _moduleInstance;
    uStrong< ::g::Uno::UX::NameTable*> _nameTable;
    uStrong< ::g::Fuse::Reactive::RootableScriptModule*> _scriptModule;
    uStrong<uObject*> _siblingData;
    uStrong<uObject*> _sub;
    static uSStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker_;
    static uSStrong< ::g::Fuse::Reactive::ThreadWorker*>& _worker() { return _worker_; }

    void ctor_3(::g::Uno::UX::NameTable* nameTable);
    uObject* Dependencies();
    void DispatchEvaluate();
    void DispatchEvaluateIfDependenciesReady();
    void DisposeDependencySubscriptions();
    void DisposeModuleInstance();
    void DisposeSubscription();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    uString* FileName();
    void FileName(uString* value);
    int LineNumber();
    void LineNumber(int value);
    ::g::Fuse::Reactive::RootableScriptModule* ScriptModule();
    void SetDataContext(uObject* newDc);
    void SetSiblingData(uObject* data);
    void SubscribeToDependenciesAndDispatchEvaluate();
    static JavaScript* New2(::g::Uno::UX::NameTable* nameTable);
    static void UserScriptError(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static ::g::Fuse::Reactive::ThreadWorker* Worker();
};
// }

}}} // ::g::Fuse::Reactive
