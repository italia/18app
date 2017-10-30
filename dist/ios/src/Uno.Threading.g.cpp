// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Implementation/Posix/posix_mutex.h>
#include <Implementation/Posix/posix_thread.h>
#include <uBase/Thread.h>
#include <unistd.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.AggregateException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <Uno.Threading.AutoResetEvent.h>
#include <Uno.Threading.CancellationToken.h>
#include <Uno.Threading.CancellationTokenSource.h>
#include <Uno.Threading.ConcurrentDictionary-2.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.EventResetMode.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.Closure-1.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.Arg1Invoke-1.h>
#include <Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc-2.h>
#include <Uno.Threading.IDispatcherExtensions.Arg2Invoke-2.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.ITaskScheduler.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.PthreadHelpers.h>
#include <Uno.Threading.PthreadHelpers.MutexHandle.h>
#include <Uno.Threading.PthreadHelpers.ResetEventHandle.h>
#include <Uno.Threading.PthreadHelpers.ThreadHandle.h>
#include <Uno.Threading.SyncDispatcher.h>
#include <Uno.Threading.Task.h>
#include <Uno.Threading.TaskDelegate.h>
#include <Uno.Threading.TaskFuture-1.h>
#include <Uno.Threading.TaskStatus.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadPool.DefaultWorkItem.h>
#include <Uno.Threading.ThreadPool.h>
#include <Uno.Threading.ThreadPool.ParameterizedWorkItem-1.h>
#include <Uno.Threading.ThreadPool.WorkItem.h>
#include <Uno.Threading.ThreadPoolTaskScheduler.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.Threading.ThreadStateException.h>
#include <Uno/Support.h>
static uString* STRINGS[3];
static uType* TYPES[13];

namespace g{
namespace Uno{
namespace Threading{

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/IDispatcher.uno
// -----------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1Invoke<T> :27
// {
static void IDispatcherExtensions__Arg1Invoke_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(IDispatcherExtensions__Arg1Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg1Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1Invoke`1", options);
    type->fp_build_ = IDispatcherExtensions__Arg1Invoke_build;
    return type;
}

// public Arg1Invoke(Uno.Action<T> action, T arg) :31
void IDispatcherExtensions__Arg1Invoke__ctor__fn(IDispatcherExtensions__Arg1Invoke* __this, uDelegate* action, void* arg)
{
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1Invoke New(Uno.Action<T> action, T arg) :31
void IDispatcherExtensions__Arg1Invoke__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1Invoke** __retval)
{
    IDispatcherExtensions__Arg1Invoke* obj1 = (IDispatcherExtensions__Arg1Invoke*)uNew(__type);
    IDispatcherExtensions__Arg1Invoke__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :36
void IDispatcherExtensions__Arg1Invoke__Run_fn(IDispatcherExtensions__Arg1Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :36
void IDispatcherExtensions__Arg1Invoke::Run()
{
    uPtr(_action)->InvokeVoid(_arg());
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/IDispatcher.uno
// -----------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1InvokeFunc<T, TResult> :99
// {
static void IDispatcherExtensions__Arg1InvokeFunc_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(IDispatcherExtensions__Arg1InvokeFunc, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg1InvokeFunc_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1InvokeFunc);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2", options);
    type->fp_build_ = IDispatcherExtensions__Arg1InvokeFunc_build;
    return type;
}

// public Arg1InvokeFunc(Uno.Func<T, TResult> action, T arg) :103
void IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(IDispatcherExtensions__Arg1InvokeFunc* __this, uDelegate* action, void* arg)
{
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1InvokeFunc New(Uno.Func<T, TResult> action, T arg) :103
void IDispatcherExtensions__Arg1InvokeFunc__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1InvokeFunc** __retval)
{
    IDispatcherExtensions__Arg1InvokeFunc* obj1 = (IDispatcherExtensions__Arg1InvokeFunc*)uNew(__type);
    IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :108
void IDispatcherExtensions__Arg1InvokeFunc__Run_fn(IDispatcherExtensions__Arg1InvokeFunc* __this)
{
    __this->Run();
}

// public void Run() [instance] :108
void IDispatcherExtensions__Arg1InvokeFunc::Run()
{
    uT ret2(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));
    uPtr(_action)->Invoke(&ret2, 1, (void*)_arg());
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/IDispatcher.uno
// -----------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg2Invoke<T1, T2> :39
// {
static void IDispatcherExtensions__Arg2Invoke_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(IDispatcherExtensions__Arg2Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg2Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg2Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg2Invoke`2", options);
    type->fp_build_ = IDispatcherExtensions__Arg2Invoke_build;
    return type;
}

// public Arg2Invoke(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :44
void IDispatcherExtensions__Arg2Invoke__ctor__fn(IDispatcherExtensions__Arg2Invoke* __this, uDelegate* action, void* arg1, void* arg2)
{
    __this->_action = action;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public Arg2Invoke New(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :44
void IDispatcherExtensions__Arg2Invoke__New1_fn(uType* __type, uDelegate* action, void* arg1, void* arg2, IDispatcherExtensions__Arg2Invoke** __retval)
{
    IDispatcherExtensions__Arg2Invoke* obj1 = (IDispatcherExtensions__Arg2Invoke*)uNew(__type);
    IDispatcherExtensions__Arg2Invoke__ctor__fn(obj1, action, arg1, arg2);
    return *__retval = obj1, void();
}

// public void Run() :50
void IDispatcherExtensions__Arg2Invoke__Run_fn(IDispatcherExtensions__Arg2Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :50
void IDispatcherExtensions__Arg2Invoke::Run()
{
    uPtr(_action)->Invoke(2, (void*)_arg1(), (void*)_arg2());
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/AutoResetEvent.uno
// --------------------------------------------------------------------

// public sealed class AutoResetEvent :6
// {
static void AutoResetEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::EventWaitHandle_type, interface0));
    type->SetFields(1);
}

::g::Uno::Threading::EventWaitHandle_type* AutoResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::EventWaitHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::EventWaitHandle_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AutoResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::EventWaitHandle_type);
    type = (::g::Uno::Threading::EventWaitHandle_type*)uClassType::New("Uno.Threading.AutoResetEvent", options);
    type->fp_build_ = AutoResetEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::EventWaitHandle__Dispose_fn;
    return type;
}

// public AutoResetEvent(bool initialState) :8
void AutoResetEvent__ctor_1_fn(AutoResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public AutoResetEvent New(bool initialState) :8
void AutoResetEvent__New2_fn(bool* initialState, AutoResetEvent** __retval)
{
    *__retval = AutoResetEvent::New2(*initialState);
}

// public AutoResetEvent(bool initialState) [instance] :8
void AutoResetEvent::ctor_1(bool initialState)
{
    ctor_(initialState, 0);
}

// public AutoResetEvent New(bool initialState) [static] :8
AutoResetEvent* AutoResetEvent::New2(bool initialState)
{
    AutoResetEvent* obj1 = (AutoResetEvent*)uNew(AutoResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Tasks/Tasks.uno
// -----------------------------------------------------------------

// internal sealed class CancellationToken :33
// {
static void CancellationToken_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(CancellationToken, _IsCancellationRequested), 0);
}

uType* CancellationToken_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationToken);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationToken", options);
    type->fp_build_ = CancellationToken_build;
    type->fp_ctor_ = (void*)CancellationToken__New1_fn;
    return type;
}

// public CancellationToken() :40
void CancellationToken__ctor__fn(CancellationToken* __this)
{
    __this->ctor_();
}

// public generated bool get_IsCancellationRequested() :37
void CancellationToken__get_IsCancellationRequested_fn(CancellationToken* __this, bool* __retval)
{
    *__retval = __this->IsCancellationRequested();
}

// private generated void set_IsCancellationRequested(bool value) :37
void CancellationToken__set_IsCancellationRequested_fn(CancellationToken* __this, bool* value)
{
    __this->IsCancellationRequested(*value);
}

// public CancellationToken New() :40
void CancellationToken__New1_fn(CancellationToken** __retval)
{
    *__retval = CancellationToken::New1();
}

// internal void SetCancellationRequested() :45
void CancellationToken__SetCancellationRequested_fn(CancellationToken* __this)
{
    __this->SetCancellationRequested();
}

// public CancellationToken() [instance] :40
void CancellationToken::ctor_()
{
    IsCancellationRequested(false);
}

// public generated bool get_IsCancellationRequested() [instance] :37
bool CancellationToken::IsCancellationRequested()
{
    return _IsCancellationRequested;
}

// private generated void set_IsCancellationRequested(bool value) [instance] :37
void CancellationToken::IsCancellationRequested(bool value)
{
    _IsCancellationRequested = value;
}

// internal void SetCancellationRequested() [instance] :45
void CancellationToken::SetCancellationRequested()
{
    IsCancellationRequested(true);
}

// public CancellationToken New() [static] :40
CancellationToken* CancellationToken::New1()
{
    CancellationToken* obj1 = (CancellationToken*)uNew(CancellationToken_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Tasks/Tasks.uno
// -----------------------------------------------------------------

// internal sealed class CancellationTokenSource :8
// {
static void CancellationTokenSource_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::CancellationToken_typeof(), offsetof(CancellationTokenSource, _token), 0);
}

uType* CancellationTokenSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationTokenSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationTokenSource", options);
    type->fp_build_ = CancellationTokenSource_build;
    type->fp_ctor_ = (void*)CancellationTokenSource__New1_fn;
    return type;
}

// public CancellationTokenSource() :22
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this)
{
    __this->ctor_();
}

// public void Cancel() :27
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this)
{
    __this->Cancel();
}

// public CancellationTokenSource New() :22
void CancellationTokenSource__New1_fn(CancellationTokenSource** __retval)
{
    *__retval = CancellationTokenSource::New1();
}

// public Uno.Threading.CancellationToken get_Token() :17
void CancellationTokenSource__get_Token_fn(CancellationTokenSource* __this, ::g::Uno::Threading::CancellationToken** __retval)
{
    *__retval = __this->Token();
}

// public CancellationTokenSource() [instance] :22
void CancellationTokenSource::ctor_()
{
    _token = ::g::Uno::Threading::CancellationToken::New1();
}

// public void Cancel() [instance] :27
void CancellationTokenSource::Cancel()
{
    uPtr(_token)->SetCancellationRequested();
}

// public Uno.Threading.CancellationToken get_Token() [instance] :17
::g::Uno::Threading::CancellationToken* CancellationTokenSource::Token()
{
    return _token;
}

// public CancellationTokenSource New() [static] :22
CancellationTokenSource* CancellationTokenSource::New1()
{
    CancellationTokenSource* obj1 = (CancellationTokenSource*)uNew(CancellationTokenSource_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Future.uno
// ------------------------------------------------------------

// private sealed class Future<T>.Closure<T> :158
// {
static void Future1__Closure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL), offsetof(Future1__Closure, _action), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Future1__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(Future1__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Future`1.Closure`1", options);
    type->fp_build_ = Future1__Closure_build;
    return type;
}

// public Closure(Uno.Action<T> action, T result) :163
void Future1__Closure__ctor__fn(Future1__Closure* __this, uDelegate* action, void* result)
{
    __this->_action = action;
    __this->_result() = result;
}

// public Closure New(Uno.Action<T> action, T result) :163
void Future1__Closure__New1_fn(uType* __type, uDelegate* action, void* result, Future1__Closure** __retval)
{
    Future1__Closure* obj1 = (Future1__Closure*)uNew(__type);
    Future1__Closure__ctor__fn(obj1, action, result);
    return *__retval = obj1, void();
}

// public void Run() :169
void Future1__Closure__Run_fn(Future1__Closure* __this)
{
    __this->Run();
}

// public void Run() [instance] :169
void Future1__Closure::Run()
{
    uPtr(_action)->InvokeVoid(_result());
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ConcurrentDictionary.uno
// --------------------------------------------------------------------------

// public sealed class ConcurrentDictionary<TKey, TValue> :6
// {
static void ConcurrentDictionary_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[1] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[3] = ::g::Uno::Collections::List__Enumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::List_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(ConcurrentDictionary_type, interface0),
        ::TYPES[2/*Uno.Collections.ICollection`1*/]->MakeType(::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(ConcurrentDictionary_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(ConcurrentDictionary_type, interface2));
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1), NULL), offsetof(ConcurrentDictionary, _dictionary), 0,
        uObject_typeof(), offsetof(ConcurrentDictionary, _mutex), 0);
}

ConcurrentDictionary_type* ConcurrentDictionary_typeof()
{
    static uSStrong<ConcurrentDictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(ConcurrentDictionary);
    options.TypeSize = sizeof(ConcurrentDictionary_type);
    type = (ConcurrentDictionary_type*)uClassType::New("Uno.Threading.ConcurrentDictionary`2", options);
    type->fp_build_ = ConcurrentDictionary_build;
    type->fp_ctor_ = (void*)ConcurrentDictionary__New1_fn;
    type->interface0.fp_TryGetValue = (void(*)(uObject*, void*, uTRef, bool*))ConcurrentDictionary__TryGetValue_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ConcurrentDictionary__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ConcurrentDictionary__Add1_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ConcurrentDictionary__Remove1_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ConcurrentDictionary__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ConcurrentDictionary__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ConcurrentDictionary__GetEnumerator_fn;
    return type;
}

// public generated ConcurrentDictionary() :6
void ConcurrentDictionary__ctor__fn(ConcurrentDictionary* __this)
{
    __this->ctor_();
}

// public void Add(TKey key, TValue value) :50
void ConcurrentDictionary__Add_fn(ConcurrentDictionary* __this, void* key, void* value)
{
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_dictionary), key, value);
    }
}

// public void Add(Uno.Collections.KeyValuePair<TKey, TValue> keyValue) :114
void ConcurrentDictionary__Add1_fn(ConcurrentDictionary* __this, void* keyValue)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(2/*Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uT keyValue_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    keyValue_ = keyValue;
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr((uObject*)__this->_dictionary), __types[1]), keyValue_);
    }
}

// public void Clear() :99
void ConcurrentDictionary__Clear_fn(ConcurrentDictionary* __this)
{
    __this->Clear();
}

// public bool Contains(Uno.Collections.KeyValuePair<TKey, TValue> keyValue) :126
void ConcurrentDictionary__Contains_fn(ConcurrentDictionary* __this, void* keyValue, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(2/*Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uT keyValue_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret4;
    keyValue_ = keyValue;
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr((uObject*)__this->_dictionary), __types[1]), keyValue_, &ret4), ret4), void();
    }
}

// public bool ContainsKey(TKey key) :68
void ConcurrentDictionary__ContainsKey_fn(ConcurrentDictionary* __this, void* key, bool* __retval)
{
    bool ret5;
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_dictionary), key, &ret5), ret5), void();
    }
}

// public int get_Count() :107
void ConcurrentDictionary__get_Count_fn(ConcurrentDictionary* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>> GetEnumerator() :12
void ConcurrentDictionary__GetEnumerator_fn(ConcurrentDictionary* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public TValue get_Item(TKey key) :76
void ConcurrentDictionary__get_Item_fn(ConcurrentDictionary* __this, void* key, uTRef __retval)
{
    uT ret10(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), key, &ret10), ret10)), void();
    }
}

// public void set_Item(TKey key, TValue value) :81
void ConcurrentDictionary__set_Item_fn(ConcurrentDictionary* __this, void* key, void* value)
{
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), key, value);
    }
}

// public generated ConcurrentDictionary New() :6
void ConcurrentDictionary__New1_fn(uType* __type, ConcurrentDictionary** __retval)
{
    *__retval = ConcurrentDictionary::New1(__type);
}

// public bool Remove(TKey key) :62
void ConcurrentDictionary__Remove_fn(ConcurrentDictionary* __this, void* key, bool* __retval)
{
    bool ret7;
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_dictionary), key, &ret7), ret7), void();
    }
}

// public bool Remove(Uno.Collections.KeyValuePair<TKey, TValue> keyValue) :120
void ConcurrentDictionary__Remove1_fn(ConcurrentDictionary* __this, void* keyValue, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(2/*Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uT keyValue_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret8;
    keyValue_ = keyValue;
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr((uObject*)__this->_dictionary), __types[1]), keyValue_, &ret8), ret8), void();
    }
}

// public bool TryGetValue(TKey key, TValue& value) :56
void ConcurrentDictionary__TryGetValue_fn(ConcurrentDictionary* __this, void* key, uTRef value, bool* __retval)
{
    bool ret9;
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), key, value, &ret9), ret9), void();
    }
}

// public generated ConcurrentDictionary() [instance] :6
void ConcurrentDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
    };
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
    _mutex = ::g::Uno::Object::New();
}

// public void Clear() [instance] :99
void ConcurrentDictionary::Clear()
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_dictionary)->Clear();
    }
}

// public int get_Count() [instance] :107
int ConcurrentDictionary::Count()
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return uPtr(_dictionary)->Count();
    }
}

// public Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>> GetEnumerator() [instance] :12
uObject* ConcurrentDictionary::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.List<Uno.Collections.KeyValuePair<TKey, TValue>>.Enumerator*/),
        __type->Precalced(4/*Uno.Collections.List<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(__types[1], uPtr(_dictionary)->Count());
        result->AddRange((uObject*)_dictionary);
        return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(result, &ret6), ret6));
    }
}

// public generated ConcurrentDictionary New() [static] :6
ConcurrentDictionary* ConcurrentDictionary::New1(uType* __type)
{
    ConcurrentDictionary* obj1 = (ConcurrentDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ConcurrentQueue.uno
// ---------------------------------------------------------------------

// public sealed class ConcurrentQueue<T> :8
// {
static void ConcurrentQueue_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        uObject_typeof(), offsetof(ConcurrentQueue, _mutex), 0,
        ::TYPES[5/*Uno.Collections.Queue`1*/]->MakeType(type->T(0), NULL), offsetof(ConcurrentQueue, _queue), 0);
}

uType* ConcurrentQueue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.ConcurrentQueue`1", options);
    type->fp_build_ = ConcurrentQueue_build;
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    return type;
}

// public ConcurrentQueue() :13
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public int get_Count() :44
void ConcurrentQueue__get_Count_fn(ConcurrentQueue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void Enqueue(T item) :19
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* item)
{
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), item);
    }
}

// public bool get_IsEmpty() :57
void ConcurrentQueue__get_IsEmpty_fn(ConcurrentQueue* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public ConcurrentQueue New() :13
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& item) :25
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef item, bool* __retval)
{
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    bool ret = false;
    item.Default(__this->__type->T(0));
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(__this->_queue)->Count() > 0)
        {
            item.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
            ret = true;
        }
    }

    return *__retval = ret, void();
}

// public ConcurrentQueue() [instance] :13
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Object::New();
}

// public int get_Count() [instance] :44
int ConcurrentQueue::Count()
{
    int count = 0;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        count = uPtr(_queue)->Count();
    }

    return count;
}

// public bool get_IsEmpty() [instance] :57
bool ConcurrentQueue::IsEmpty()
{
    return Count() == 0;
}

// public ConcurrentQueue New() [static] :13
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ThreadPool.uno
// ----------------------------------------------------------------

// private sealed class ThreadPool.DefaultWorkItem :15
// {
static void ThreadPool__DefaultWorkItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(ThreadPool__DefaultWorkItem, _action), 0);
}

::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__DefaultWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ThreadPool__WorkItem_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadPool__DefaultWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.DefaultWorkItem", options);
    type->fp_build_ = ThreadPool__DefaultWorkItem_build;
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__DefaultWorkItem__Invoke_fn;
    return type;
}

// public DefaultWorkItem(Uno.Action action) :19
void ThreadPool__DefaultWorkItem__ctor_1_fn(ThreadPool__DefaultWorkItem* __this, uDelegate* action)
{
    __this->ctor_1(action);
}

// public override sealed void Invoke() :24
void ThreadPool__DefaultWorkItem__Invoke_fn(ThreadPool__DefaultWorkItem* __this)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid();
}

// public DefaultWorkItem New(Uno.Action action) :19
void ThreadPool__DefaultWorkItem__New1_fn(uDelegate* action, ThreadPool__DefaultWorkItem** __retval)
{
    *__retval = ThreadPool__DefaultWorkItem::New1(action);
}

// public DefaultWorkItem(Uno.Action action) [instance] :19
void ThreadPool__DefaultWorkItem::ctor_1(uDelegate* action)
{
    ctor_();
    _action = action;
}

// public DefaultWorkItem New(Uno.Action action) [static] :19
ThreadPool__DefaultWorkItem* ThreadPool__DefaultWorkItem::New1(uDelegate* action)
{
    ThreadPool__DefaultWorkItem* obj1 = (ThreadPool__DefaultWorkItem*)uNew(ThreadPool__DefaultWorkItem_typeof());
    obj1->ctor_1(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/EventWaitHandle.uno
// ---------------------------------------------------------------------

// public enum EventResetMode :6
uEnumType* EventResetMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.EventResetMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "AutoReset", 0LL,
        "ManualReset", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/EventWaitHandle.uno
// ---------------------------------------------------------------------

// public class EventWaitHandle :13
// {
static void EventWaitHandle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(EventWaitHandle_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::PthreadHelpers__ResetEventHandle_typeof(), offsetof(EventWaitHandle, _resetEventHandle), 0);
}

EventWaitHandle_type* EventWaitHandle_typeof()
{
    static uSStrong<EventWaitHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EventWaitHandle);
    options.TypeSize = sizeof(EventWaitHandle_type);
    type = (EventWaitHandle_type*)uClassType::New("Uno.Threading.EventWaitHandle", options);
    type->fp_build_ = EventWaitHandle_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))EventWaitHandle__Dispose_fn;
    return type;
}

// public EventWaitHandle(bool initialState, Uno.Threading.EventResetMode mode) :18
void EventWaitHandle__ctor__fn(EventWaitHandle* __this, bool* initialState, int* mode)
{
    __this->ctor_(*initialState, *mode);
}

// public void Dispose() :63
void EventWaitHandle__Dispose_fn(EventWaitHandle* __this)
{
    __this->Dispose();
}

// public bool Reset() :43
void EventWaitHandle__Reset_fn(EventWaitHandle* __this, bool* __retval)
{
    *__retval = __this->Reset();
}

// public bool Set() :53
void EventWaitHandle__Set_fn(EventWaitHandle* __this, bool* __retval)
{
    *__retval = __this->Set();
}

// public bool WaitOne() :28
void EventWaitHandle__WaitOne_fn(EventWaitHandle* __this, bool* __retval)
{
    *__retval = __this->WaitOne();
}

// public bool WaitOne(int timeoutMillis) :33
void EventWaitHandle__WaitOne1_fn(EventWaitHandle* __this, int* timeoutMillis, bool* __retval)
{
    *__retval = __this->WaitOne1(*timeoutMillis);
}

// public EventWaitHandle(bool initialState, Uno.Threading.EventResetMode mode) [instance] :18
void EventWaitHandle::ctor_(bool initialState, int mode)
{
    _resetEventHandle = ::g::Uno::Threading::PthreadHelpers::CreateResetEvent(initialState, mode == 0);
}

// public void Dispose() [instance] :63
void EventWaitHandle::Dispose()
{
    ::g::Uno::Threading::PthreadHelpers::DisposeResetEvent(_resetEventHandle);
}

// public bool Reset() [instance] :43
bool EventWaitHandle::Reset()
{
    return ::g::Uno::Threading::PthreadHelpers::ResetResetEvent(_resetEventHandle);
}

// public bool Set() [instance] :53
bool EventWaitHandle::Set()
{
    return ::g::Uno::Threading::PthreadHelpers::SetResetEvent(_resetEventHandle);
}

// public bool WaitOne() [instance] :28
bool EventWaitHandle::WaitOne()
{
    return WaitOne1(-1);
}

// public bool WaitOne(int timeoutMillis) [instance] :33
bool EventWaitHandle::WaitOne1(int timeoutMillis)
{
    int timeoutMillis_ = timeoutMillis;
    return ::g::Uno::Threading::PthreadHelpers::WaitOneResetEvent(_resetEventHandle, timeoutMillis_);
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Future.uno
// ------------------------------------------------------------

// public abstract class Future :7
// {
static void Future_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Future_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::FutureState_typeof(), offsetof(Future, _State), 0);
}

Future_type* Future_typeof()
{
    static uSStrong<Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Future);
    options.TypeSize = sizeof(Future_type);
    type = (Future_type*)uClassType::New("Uno.Threading.Future", options);
    type->fp_build_ = Future_build;
    return type;
}

// protected generated Future() :7
void Future__ctor__fn(Future* __this)
{
    __this->ctor_();
}

// public generated Uno.Threading.FutureState get_State() :9
void Future__get_State_fn(Future* __this, int* __retval)
{
    *__retval = __this->State();
}

// protected generated void set_State(Uno.Threading.FutureState value) :9
void Future__set_State_fn(Future* __this, int* value)
{
    __this->State(*value);
}

// protected generated Future() [instance] :7
void Future::ctor_()
{
}

// public generated Uno.Threading.FutureState get_State() [instance] :9
int Future::State()
{
    return _State;
}

// protected generated void set_State(Uno.Threading.FutureState value) [instance] :9
void Future::State(int value)
{
    _State = value;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Future.uno
// ------------------------------------------------------------

// public abstract class Future<T> :15
// {
static void Future1_build(uType* type)
{
    type->SetPrecalc(
        type->MakeMethod(0/*Invoke<T>*/, type->T(0), NULL),
        type->MakeMethod(0/*Invoke<Uno.Exception>*/, ::g::Uno::Exception_typeof(), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), NULL),
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), NULL));
    type->MethodTypes[0]->SetPrecalc(
        Future1__Closure_typeof()->MakeType(type->T(0), type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(1,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), NULL), offsetof(Future1, _catchables), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), NULL), offsetof(Future1, _chainables), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(Future1, _dispatcher), 0,
        ::g::Uno::Bool_typeof(), offsetof(Future1, _isDisposed), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(Future1, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), NULL), offsetof(Future1, _thenables), 0,
        ::g::Uno::Exception_typeof(), offsetof(Future1, Reason), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Uno::Threading::Future_type* Future1_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(Future1);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Future`1", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->fp_build_ = Future1_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))Future1__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Future1__Dispose_fn;
    return type;
}

// protected Future() :38
void Future1__ctor_1_fn(Future1* __this)
{
    __this->ctor_1();
}

// protected Future(Uno.Threading.IDispatcher dispatcher) :26
void Future1__ctor_2_fn(Future1* __this, uObject* dispatcher)
{
    __this->ctor_2(dispatcher);
}

// public override void Dispose() :41
void Future1__Dispose_fn(Future1* __this)
{
    if (!__this->_isDisposed)
    {
        uPtr(__this->_mutex)->Dispose();
        __this->_isDisposed = true;
    }
}

// protected void InternalReject(Uno.Exception reason) :79
void Future1__InternalReject_fn(Future1* __this, ::g::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

// protected void InternalResolve(T result) :50
void Future1__InternalResolve_fn(Future1* __this, void* result)
{
    uType* __types[] = {
        __this->__type->GetBase(Future1_typeof())->Precalced(0/*Uno.Threading.Future<T>.Invoke<T>*/),
    };
    uDelegate* ret4;
    ::g::Uno::Threading::Promise* ret5;
    ::g::Uno::Threading::Promise* ret6;
    uPtr(__this->_mutex)->WaitOne();

    if (__this->State() != 0)
    {
        uPtr(__this->_mutex)->ReleaseMutex();
        U_THROW(::g::Uno::Exception::New2(uString::Const("This promise is already resolved or rejected")));
    }

    __this->State(1);
    __this->Result() = result;

    try
    {
        while (uPtr(__this->_thenables)->Count() != 0)
            Future1__Invoke_fn(__this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_thenables), &ret4), ret4), result);

        while (uPtr(__this->_chainables)->Count() != 0)
            ::g::Uno::Threading::Promise__Resolve_fn(uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret5), ret5)), result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(__this->_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret6), ret6))->Reject(exception);
    }

    uPtr(__this->_mutex)->ReleaseMutex();
}

// private void Invoke<T1>(Uno.Action<T1> action, T1 arg) :108
void Future1__Invoke_fn(Future1* __this, uType* __type, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Future<T>.Closure<T1>*/),
    };
    Future1__Closure* ret7;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(__this->_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Future1__Closure__Run_fn, (Future1__Closure__New1_fn(__types[0], action, arg, &ret7), ret7)));
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) :118
void Future1__Then1_fn(Future1* __this, uDelegate* fulfilled, uDelegate* rejected, Future1** __retval)
{
    *__retval = __this->Then1(fulfilled, rejected);
}

// protected Future() [instance] :38
void Future1::ctor_1()
{
    _mutex = ::g::Uno::Threading::Mutex::New1();
    ctor_2((uObject*)::g::Uno::Threading::SyncDispatcher::New1());
}

// protected Future(Uno.Threading.IDispatcher dispatcher) [instance] :26
void Future1::ctor_2(uObject* dispatcher)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(4/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(3/*Uno.Collections.Queue<Uno.Action<T>>*/),
    };
    _mutex = ::g::Uno::Threading::Mutex::New1();
    ctor_();

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dispatcher")));

    _dispatcher = dispatcher;
    State(0);
    _catchables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[5/*Uno.Collections.Queue`1*/]->MakeType(::g::Uno::Action1_typeof()->MakeType(::TYPES[7/*Uno.Exception*/], NULL), NULL)));
    _chainables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _thenables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[1]));
}

// protected void InternalReject(Uno.Exception reason) [instance] :79
void Future1::InternalReject(::g::Uno::Exception* reason)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    uDelegate* ret1;
    ::g::Uno::Threading::Promise* ret2;
    ::g::Uno::Threading::Promise* ret3;
    uPtr(_mutex)->WaitOne();

    if (State() != 0)
    {
        uPtr(_mutex)->ReleaseMutex();
        U_THROW(::g::Uno::Exception::New2(uString::Const("This promise is already resolved or rejected")));
    }

    State(2);
    Reason = reason;

    try
    {
        while (uPtr(_catchables)->Count() != 0)
            Future1__Invoke_fn(this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_catchables), &ret1), ret1), reason);

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret2), ret2))->Reject(reason);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret3), ret3))->Reject(exception);
    }

    uPtr(_mutex)->ReleaseMutex();
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) [instance] :118
Future1* Future1::Then1(uDelegate* fulfilled, uDelegate* rejected)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(2/*Uno.Threading.Promise<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(0/*Uno.Threading.Future<T>.Invoke<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    ::g::Uno::Threading::Promise* chainable = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    uPtr(_mutex)->WaitOne();

    try
    {
        if (State() == 1)
        {
            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                Future1__Invoke_fn(this, __types[1], fulfilled, Result());
        }
        else if (State() == 2)
        {
            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                Future1__Invoke_fn(this, __types[2], rejected, Reason);
        }
        else
        {
            ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_chainables), chainable);

            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_thenables), fulfilled);

            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_catchables), rejected);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;
        uPtr(chainable)->Reject(exception);
    }

    uPtr(_mutex)->ReleaseMutex();
    return chainable;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/FutureState.uno
// -----------------------------------------------------------------

// public enum FutureState :7
uEnumType* FutureState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.FutureState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Pending", 0LL,
        "Resolved", 1LL,
        "Rejected", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/IDispatcher.uno
// -----------------------------------------------------------------

// public abstract interface IDispatcher :5
// {
uInterfaceType* IDispatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.IDispatcher", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/IDispatcher.uno
// -----------------------------------------------------------------

// public static class IDispatcherExtensions :10
// {
static void IDispatcherExtensions_build(uType* type)
{
    type->MethodTypes[0]->SetPrecalc(
        IDispatcherExtensions__Arg1Invoke_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        IDispatcherExtensions__Arg1InvokeFunc_typeof()->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        IDispatcherExtensions__Arg2Invoke_typeof()->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), NULL));
}

uClassType* IDispatcherExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(2, 1,0);
    type->MethodTypes[2] = type->NewMethodType(2, 1,0);
    type->fp_build_ = IDispatcherExtensions_build;
    return type;
}

// public static void Invoke1<T>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T> action, T arg) :12
void IDispatcherExtensions__Invoke1_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg1Invoke<T>*/),
    };
    IDispatcherExtensions__Arg1Invoke* ret1;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1Invoke__Run_fn, (IDispatcherExtensions__Arg1Invoke__New1_fn(__types[0], action, arg, &ret1), ret1)));
}

// public static void Invoke1<T, TResult>(Uno.Threading.IDispatcher dispatcher, Uno.Func<T, TResult> func, T arg) :74
void IDispatcherExtensions__Invoke11_fn(uType* __type, uObject* dispatcher, uDelegate* func, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc<T, TResult>*/),
    };
    IDispatcherExtensions__Arg1InvokeFunc* ret2;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1InvokeFunc__Run_fn, (IDispatcherExtensions__Arg1InvokeFunc__New1_fn(__types[0], func, arg, &ret2), ret2)));
}

// public static void Invoke2<T1, T2>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :17
void IDispatcherExtensions__Invoke2_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg1, void* arg2)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg2Invoke<T1, T2>*/),
    };
    IDispatcherExtensions__Arg2Invoke* ret3;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)IDispatcherExtensions__Arg2Invoke__Run_fn, (IDispatcherExtensions__Arg2Invoke__New1_fn(__types[0], action, arg1, arg2, &ret3), ret3)));
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Tasks/Tasks.uno
// -----------------------------------------------------------------

// internal abstract interface ITaskScheduler :205
// {
uInterfaceType* ITaskScheduler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.ITaskScheduler", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ManualResetEvent.uno
// ----------------------------------------------------------------------

// public sealed class ManualResetEvent :6
// {
static void ManualResetEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::EventWaitHandle_type, interface0));
    type->SetFields(1);
}

::g::Uno::Threading::EventWaitHandle_type* ManualResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::EventWaitHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::EventWaitHandle_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ManualResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::EventWaitHandle_type);
    type = (::g::Uno::Threading::EventWaitHandle_type*)uClassType::New("Uno.Threading.ManualResetEvent", options);
    type->fp_build_ = ManualResetEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::EventWaitHandle__Dispose_fn;
    return type;
}

// public ManualResetEvent(bool initialState) :8
void ManualResetEvent__ctor_1_fn(ManualResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public ManualResetEvent New(bool initialState) :8
void ManualResetEvent__New2_fn(bool* initialState, ManualResetEvent** __retval)
{
    *__retval = ManualResetEvent::New2(*initialState);
}

// public ManualResetEvent(bool initialState) [instance] :8
void ManualResetEvent::ctor_1(bool initialState)
{
    ctor_(initialState, 1);
}

// public ManualResetEvent New(bool initialState) [static] :8
ManualResetEvent* ManualResetEvent::New2(bool initialState)
{
    ManualResetEvent* obj1 = (ManualResetEvent*)uNew(ManualResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Threading/Monitor.uno
// ----------------------------------------------------------------------------

// public static class Monitor :8
// {
static void Monitor_build(uType* type)
{
}

uClassType* Monitor_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.Monitor", options);
    type->fp_build_ = Monitor_build;
    return type;
}

// public static void Enter(object obj) :10
void Monitor__Enter_fn(uObject* obj)
{
    Monitor::Enter(obj);
}

// public static void Exit(object obj) :33
void Monitor__Exit_fn(uObject* obj)
{
    Monitor::Exit(obj);
}

// public static void Enter(object obj) [static] :10
void Monitor::Enter(uObject* obj)
{
    if (uEnterCriticalIfNull(&uPtr(obj)->__lockptr))
    {
        obj->__lockptr = uBase::CreateMutex();
        uExitCritical();
    }
    
    uBase::LockMutex(obj->__lockptr);
}

// public static void Exit(object obj) [static] :33
void Monitor::Exit(uObject* obj)
{
    uBase::UnlockMutex(uPtr(obj)->__lockptr);
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Mutex.uno
// -----------------------------------------------------------

// public sealed class Mutex :8
// {
static void Mutex_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Mutex_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::PthreadHelpers__MutexHandle_typeof(), offsetof(Mutex, _mutexHandle), 0);
}

Mutex_type* Mutex_typeof()
{
    static uSStrong<Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mutex);
    options.TypeSize = sizeof(Mutex_type);
    type = (Mutex_type*)uClassType::New("Uno.Threading.Mutex", options);
    type->fp_build_ = Mutex_build;
    type->fp_ctor_ = (void*)Mutex__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Mutex__Dispose_fn;
    return type;
}

// public Mutex() :13
void Mutex__ctor__fn(Mutex* __this)
{
    __this->ctor_();
}

// public void Dispose() :48
void Mutex__Dispose_fn(Mutex* __this)
{
    __this->Dispose();
}

// public Mutex New() :13
void Mutex__New1_fn(Mutex** __retval)
{
    *__retval = Mutex::New1();
}

// public void ReleaseMutex() :38
void Mutex__ReleaseMutex_fn(Mutex* __this)
{
    __this->ReleaseMutex();
}

// public bool WaitOne() :23
void Mutex__WaitOne_fn(Mutex* __this, bool* __retval)
{
    *__retval = __this->WaitOne();
}

// public bool WaitOne(int millisecondsTimeout) :28
void Mutex__WaitOne1_fn(Mutex* __this, int* millisecondsTimeout, bool* __retval)
{
    *__retval = __this->WaitOne1(*millisecondsTimeout);
}

// public Mutex() [instance] :13
void Mutex::ctor_()
{
    ::g::Uno::Threading::PthreadHelpers::CreateMutex(&_mutexHandle);
}

// public void Dispose() [instance] :48
void Mutex::Dispose()
{
    ::g::Uno::Threading::PthreadHelpers::DisposeMutex(&_mutexHandle);
}

// public void ReleaseMutex() [instance] :38
void Mutex::ReleaseMutex()
{
    ::g::Uno::Threading::PthreadHelpers::ReleaseMutex(&_mutexHandle);
}

// public bool WaitOne() [instance] :23
bool Mutex::WaitOne()
{
    return WaitOne1(-1);
}

// public bool WaitOne(int millisecondsTimeout) [instance] :28
bool Mutex::WaitOne1(int millisecondsTimeout)
{
    return ::g::Uno::Threading::PthreadHelpers::WaitOneMutex(&_mutexHandle, millisecondsTimeout);
}

// public Mutex New() [static] :13
Mutex* Mutex::New1()
{
    Mutex* obj1 = (Mutex*)uNew(Mutex_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Implementation/Posix/PthreadHelpers.uno
// -----------------------------------------------------------------------------------------

// public struct PthreadHelpers.MutexHandle :40
// {
static void PthreadHelpers__MutexHandle_build(uType* type)
{
}

uStructType* PthreadHelpers__MutexHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(pthread_mutex_t);
    options.ValueSize = sizeof(pthread_mutex_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Threading.PthreadHelpers.MutexHandle", options);
    type->fp_build_ = PthreadHelpers__MutexHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ThreadPool.uno
// ----------------------------------------------------------------

// private sealed class ThreadPool.ParameterizedWorkItem<TState> :31
// {
static void ThreadPool__ParameterizedWorkItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(ThreadPool__ParameterizedWorkItem, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ThreadPool__WorkItem_typeof();
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ThreadPool__ParameterizedWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.ParameterizedWorkItem`1", options);
    type->fp_build_ = ThreadPool__ParameterizedWorkItem_build;
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__ParameterizedWorkItem__Invoke_fn;
    return type;
}

// public override sealed void Invoke() :42
void ThreadPool__ParameterizedWorkItem__Invoke_fn(ThreadPool__ParameterizedWorkItem* __this)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid(__this->_state());
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Promise.uno
// -------------------------------------------------------------

// public class Promise<T> :8
// {
static void Promise_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Threading::TaskFuture_typeof();
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        ::g::Uno::Threading::TaskFuture_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* Promise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future1_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Promise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Promise`1", options);
    type->fp_build_ = Promise_build;
    type->fp_ctor_ = (void*)Promise__New1_fn;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))Promise__Cancel_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public Promise() :30
void Promise__ctor_3_fn(Promise* __this)
{
    __this->ctor_3();
}

// public Promise(T result) :18
void Promise__ctor_4_fn(Promise* __this, void* result)
{
    __this->ctor_1();
    Promise__Resolve_fn(__this, result);
}

// public override void Cancel([bool shutdownGracefully]) :14
void Promise__Cancel_fn(Promise* __this, bool* shutdownGracefully)
{
}

// public Promise New() :30
void Promise__New1_fn(uType* __type, Promise** __retval)
{
    *__retval = Promise::New1(__type);
}

// public Promise New(T result) :18
void Promise__New2_fn(uType* __type, void* result, Promise** __retval)
{
    Promise* obj1 = (Promise*)uNew(__type);
    Promise__ctor_4_fn(obj1, result);
    return *__retval = obj1, void();
}

// public void Reject(Uno.Exception reason) :37
void Promise__Reject_fn(Promise* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// public void Resolve(T result) :32
void Promise__Resolve_fn(Promise* __this, void* result)
{
    ::g::Uno::Threading::Future1__InternalResolve_fn(__this, result);
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) :47
void Promise__Run_fn(uType* __type, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run(__type, func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :42
void Promise__Run1_fn(uType* __type, uObject* dispatcher, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run1(__type, dispatcher, func);
}

// public Promise() [instance] :30
void Promise::ctor_3()
{
    ctor_1();
}

// public void Reject(Uno.Exception reason) [instance] :37
void Promise::Reject(::g::Uno::Exception* reason)
{
    InternalReject(reason);
}

// public Promise New() [static] :30
Promise* Promise::New1(uType* __type)
{
    Promise* obj4 = (Promise*)uNew(__type);
    obj4->ctor_3();
    return obj4;
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) [static] :47
::g::Uno::Threading::Future1* Promise::Run(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.TaskFuture<T>*/),
    };
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New1(__types[0], func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :42
::g::Uno::Threading::Future1* Promise::Run1(uType* __type, uObject* dispatcher, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.TaskFuture<T>*/),
    };
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New2(__types[0], dispatcher, func);
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Implementation/Posix/PthreadHelpers.uno
// -----------------------------------------------------------------------------------------

// internal static extern class PthreadHelpers :5
// {
static void PthreadHelpers_build(uType* type)
{
}

uClassType* PthreadHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.PthreadHelpers", options);
    type->fp_build_ = PthreadHelpers_build;
    return type;
}

// public static void CreateMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) :45
void PthreadHelpers__CreateMutex_fn(pthread_mutex_t* mutexHandle)
{
    PthreadHelpers::CreateMutex(mutexHandle);
}

// public static Uno.Threading.PthreadHelpers.ResetEventHandle CreateResetEvent(bool initialState, bool autoReset) :112
void PthreadHelpers__CreateResetEvent_fn(bool* initialState, bool* autoReset, uPosixResetEvent ** __retval)
{
    *__retval = PthreadHelpers::CreateResetEvent(*initialState, *autoReset);
}

// public static Uno.Threading.PthreadHelpers.ThreadHandle CreateThread(Uno.Threading.Thread thread) :16
void PthreadHelpers__CreateThread_fn(::g::Uno::Threading::Thread* thread, pthread_t* __retval)
{
    *__retval = PthreadHelpers::CreateThread(thread);
}

// public static void DisposeMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) :62
void PthreadHelpers__DisposeMutex_fn(pthread_mutex_t* mutexHandle)
{
    PthreadHelpers::DisposeMutex(mutexHandle);
}

// public static void DisposeResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) :137
void PthreadHelpers__DisposeResetEvent_fn(uPosixResetEvent ** resetEventHandle)
{
    PthreadHelpers::DisposeResetEvent(*resetEventHandle);
}

// public static Uno.Threading.Thread GetCurrentThread() :143
void PthreadHelpers__GetCurrentThread_fn(::g::Uno::Threading::Thread** __retval)
{
    *__retval = PthreadHelpers::GetCurrentThread();
}

// public static void JoinThread(Uno.Threading.PthreadHelpers.ThreadHandle threadHandle) :25
void PthreadHelpers__JoinThread_fn(pthread_t* threadHandle)
{
    PthreadHelpers::JoinThread(*threadHandle);
}

// public static void ReleaseMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) :57
void PthreadHelpers__ReleaseMutex_fn(pthread_mutex_t* mutexHandle)
{
    PthreadHelpers::ReleaseMutex(mutexHandle);
}

// public static bool ResetResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) :127
void PthreadHelpers__ResetResetEvent_fn(uPosixResetEvent ** resetEventHandle, bool* __retval)
{
    *__retval = PthreadHelpers::ResetResetEvent(*resetEventHandle);
}

// public static void SetCurrentThread(Uno.Threading.Thread thread) :149
void PthreadHelpers__SetCurrentThread_fn(::g::Uno::Threading::Thread* thread)
{
    PthreadHelpers::SetCurrentThread(thread);
}

// public static bool SetResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) :132
void PthreadHelpers__SetResetEvent_fn(uPosixResetEvent ** resetEventHandle, bool* __retval)
{
    *__retval = PthreadHelpers::SetResetEvent(*resetEventHandle);
}

// public static void Sleep(int millis) :31
void PthreadHelpers__Sleep_fn(int* millis)
{
    PthreadHelpers::Sleep(*millis);
}

// public static bool WaitOneMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle, int millisecondsTimeout) :52
void PthreadHelpers__WaitOneMutex_fn(pthread_mutex_t* mutexHandle, int* millisecondsTimeout, bool* __retval)
{
    *__retval = PthreadHelpers::WaitOneMutex(mutexHandle, *millisecondsTimeout);
}

// public static bool WaitOneResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle, int timeoutMillis) :122
void PthreadHelpers__WaitOneResetEvent_fn(uPosixResetEvent ** resetEventHandle, int* timeoutMillis, bool* __retval)
{
    *__retval = PthreadHelpers::WaitOneResetEvent(*resetEventHandle, *timeoutMillis);
}

// public static void CreateMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) [static] :45
void PthreadHelpers::CreateMutex(pthread_mutex_t* mutexHandle)
{
    if (!uPthreadCreateMutex(mutexHandle) != 0)
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("uPthreadCreateMutex failed!")));
}

// public static Uno.Threading.PthreadHelpers.ResetEventHandle CreateResetEvent(bool initialState, bool autoReset) [static] :112
uPosixResetEvent * PthreadHelpers::CreateResetEvent(bool initialState, bool autoReset)
{
    uPosixResetEvent *resetEventHandle = uPosixCreateResetEvent(initialState, autoReset);
    
    if (resetEventHandle == NULL)
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("uPosixCreateResetEvent() failed!")));
    
    return resetEventHandle;
}

// public static Uno.Threading.PthreadHelpers.ThreadHandle CreateThread(Uno.Threading.Thread thread) [static] :16
pthread_t PthreadHelpers::CreateThread(::g::Uno::Threading::Thread* thread)
{
    pthread_t threadHandle;
    if (!uPthreadsCreateThread(thread, &threadHandle))
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("uPthreadsCreateThread failed!")));
    
    return threadHandle;
}

// public static void DisposeMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) [static] :62
void PthreadHelpers::DisposeMutex(pthread_mutex_t* mutexHandle)
{
    pthread_mutex_destroy(mutexHandle);
}

// public static void DisposeResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) [static] :137
void PthreadHelpers::DisposeResetEvent(uPosixResetEvent * resetEventHandle)
{
    uPosixDisposeResetEvent(resetEventHandle);
}

// public static Uno.Threading.Thread GetCurrentThread() [static] :143
::g::Uno::Threading::Thread* PthreadHelpers::GetCurrentThread()
{
    return uPthreadsGetCurrentThread();
}

// public static void JoinThread(Uno.Threading.PthreadHelpers.ThreadHandle threadHandle) [static] :25
void PthreadHelpers::JoinThread(pthread_t threadHandle)
{
    pthread_join(threadHandle, NULL);
}

// public static void ReleaseMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) [static] :57
void PthreadHelpers::ReleaseMutex(pthread_mutex_t* mutexHandle)
{
    pthread_mutex_unlock(mutexHandle);
}

// public static bool ResetResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) [static] :127
bool PthreadHelpers::ResetResetEvent(uPosixResetEvent * resetEventHandle)
{
    return uPosixResetResetEvent(resetEventHandle);
}

// public static void SetCurrentThread(Uno.Threading.Thread thread) [static] :149
void PthreadHelpers::SetCurrentThread(::g::Uno::Threading::Thread* thread)
{
    uPthreadsSetCurrentThread(thread);
}

// public static bool SetResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) [static] :132
bool PthreadHelpers::SetResetEvent(uPosixResetEvent * resetEventHandle)
{
    return uPosixSetResetEvent(resetEventHandle);
}

// public static void Sleep(int millis) [static] :31
void PthreadHelpers::Sleep(int millis)
{
    // TODO: deal with long sleeps (overflow in the multiplication)!
    usleep(millis * 1000);
}

// public static bool WaitOneMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle, int millisecondsTimeout) [static] :52
bool PthreadHelpers::WaitOneMutex(pthread_mutex_t* mutexHandle, int millisecondsTimeout)
{
    return uPthreadWaitOneMutex(mutexHandle, millisecondsTimeout);
}

// public static bool WaitOneResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle, int timeoutMillis) [static] :122
bool PthreadHelpers::WaitOneResetEvent(uPosixResetEvent * resetEventHandle, int timeoutMillis)
{
    return uPosixWaitOneResetEvent(resetEventHandle, timeoutMillis);
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Implementation/Posix/PthreadHelpers.uno
// -----------------------------------------------------------------------------------------

// public struct PthreadHelpers.ResetEventHandle :108
// {
static void PthreadHelpers__ResetEventHandle_build(uType* type)
{
}

uStructType* PthreadHelpers__ResetEventHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uPosixResetEvent *);
    options.ValueSize = sizeof(uPosixResetEvent *);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Threading.PthreadHelpers.ResetEventHandle", options);
    type->fp_build_ = PthreadHelpers__ResetEventHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/SyncDispatcher.uno
// --------------------------------------------------------------------

// internal sealed class SyncDispatcher :7
// {
static void SyncDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(SyncDispatcher_type, interface0));
}

SyncDispatcher_type* SyncDispatcher_typeof()
{
    static uSStrong<SyncDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SyncDispatcher);
    options.TypeSize = sizeof(SyncDispatcher_type);
    type = (SyncDispatcher_type*)uClassType::New("Uno.Threading.SyncDispatcher", options);
    type->fp_build_ = SyncDispatcher_build;
    type->fp_ctor_ = (void*)SyncDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))SyncDispatcher__Invoke_fn;
    return type;
}

// public generated SyncDispatcher() :7
void SyncDispatcher__ctor__fn(SyncDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :9
void SyncDispatcher__Invoke_fn(SyncDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated SyncDispatcher New() :7
void SyncDispatcher__New1_fn(SyncDispatcher** __retval)
{
    *__retval = SyncDispatcher::New1();
}

// public generated SyncDispatcher() [instance] :7
void SyncDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :9
void SyncDispatcher::Invoke(uDelegate* action)
{
    uPtr(action)->InvokeVoid();
}

// public generated SyncDispatcher New() [static] :7
SyncDispatcher* SyncDispatcher::New1()
{
    SyncDispatcher* obj1 = (SyncDispatcher*)uNew(SyncDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Tasks/Tasks.uno
// -----------------------------------------------------------------

// internal sealed class Task :64
// {
static void Task_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Exception_typeof();
    ::TYPES[8] = ::TYPES[7/*Uno.Exception*/]->Array();
    ::TYPES[9] = ::g::Uno::Threading::ITaskScheduler_typeof();
    type->SetDependencies(
        ::g::Uno::Threading::ThreadPoolTaskScheduler_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Task_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::CancellationTokenSource_typeof(), offsetof(Task, _cancellationTokenSource), 0,
        ::g::Uno::AggregateException_typeof(), offsetof(Task, _exception), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(Task, _manualResetEvent), 0,
        ::g::Uno::Threading::TaskDelegate_typeof(), offsetof(Task, _taskDelegate), 0,
        ::g::Uno::Threading::TaskStatus_typeof(), offsetof(Task, _taskStatus), 0);
}

Task_type* Task_typeof()
{
    static uSStrong<Task_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Task);
    options.TypeSize = sizeof(Task_type);
    type = (Task_type*)uClassType::New("Uno.Threading.Task", options);
    type->fp_build_ = Task_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Task__Dispose_fn;
    return type;
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) :105
void Task__ctor__fn(Task* __this, uDelegate* taskDelegate)
{
    __this->ctor_(taskDelegate);
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() :91
void Task__get_CancellationTokenSource_fn(Task* __this, ::g::Uno::Threading::CancellationTokenSource** __retval)
{
    *__retval = __this->CancellationTokenSource();
}

// public void Dispose() :120
void Task__Dispose_fn(Task* __this)
{
    __this->Dispose();
}

// public Uno.AggregateException get_Exception() :85
void Task__get_Exception_fn(Task* __this, ::g::Uno::AggregateException** __retval)
{
    *__retval = __this->Exception();
}

// protected void set_Exception(Uno.AggregateException value) :86
void Task__set_Exception_fn(Task* __this, ::g::Uno::AggregateException* value)
{
    __this->Exception(value);
}

// internal void Execute() :125
void Task__Execute_fn(Task* __this)
{
    __this->Execute();
}

// protected void InvokeTaskDelegate() :144
void Task__InvokeTaskDelegate_fn(Task* __this)
{
    __this->InvokeTaskDelegate();
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) :105
void Task__New1_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::New1(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) :164
void Task__Run_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::Run(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) :150
void Task__Run1_fn(uDelegate* taskDelegate, uObject* scheduler, Task** __retval)
{
    *__retval = Task::Run1(taskDelegate, scheduler);
}

// public Uno.Threading.TaskStatus get_Status() :79
void Task__get_Status_fn(Task* __this, int* __retval)
{
    *__retval = __this->Status();
}

// protected void set_Status(Uno.Threading.TaskStatus value) :80
void Task__set_Status_fn(Task* __this, int* value)
{
    __this->Status(*value);
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) [instance] :105
void Task::ctor_(uDelegate* taskDelegate)
{
    _cancellationTokenSource = ::g::Uno::Threading::CancellationTokenSource::New1();
    _manualResetEvent = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _taskDelegate = taskDelegate;
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() [instance] :91
::g::Uno::Threading::CancellationTokenSource* Task::CancellationTokenSource()
{
    return _cancellationTokenSource;
}

// public void Dispose() [instance] :120
void Task::Dispose()
{
    uPtr(_manualResetEvent)->Dispose();
}

// public Uno.AggregateException get_Exception() [instance] :85
::g::Uno::AggregateException* Task::Exception()
{
    return _exception;
}

// protected void set_Exception(Uno.AggregateException value) [instance] :86
void Task::Exception(::g::Uno::AggregateException* value)
{
    _exception = value;
}

// internal void Execute() [instance] :125
void Task::Execute()
{
    {
        const auto __finally_fun = [&]()
        {
            uPtr(_manualResetEvent)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            Status(3);
            InvokeTaskDelegate();
            Status(2);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            Status(1);
            Exception(::g::Uno::AggregateException::New7(uArray::Init< ::g::Uno::Exception*>(::TYPES[8/*Uno.Exception[]*/], 1, e)));
        }
    }
}

// protected void InvokeTaskDelegate() [instance] :144
void Task::InvokeTaskDelegate()
{
    if (::g::Uno::Delegate::op_Inequality(_taskDelegate, NULL))
        uPtr(_taskDelegate)->InvokeVoid(uPtr(CancellationTokenSource())->Token());
}

// public Uno.Threading.TaskStatus get_Status() [instance] :79
int Task::Status()
{
    return _taskStatus;
}

// protected void set_Status(Uno.Threading.TaskStatus value) [instance] :80
void Task::Status(int value)
{
    _taskStatus = value;
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) [static] :105
Task* Task::New1(uDelegate* taskDelegate)
{
    Task* obj1 = (Task*)uNew(Task_typeof());
    obj1->ctor_(taskDelegate);
    return obj1;
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) [static] :164
Task* Task::Run(uDelegate* taskDelegate)
{
    return Task::Run1(taskDelegate, (uObject*)::g::Uno::Threading::ThreadPoolTaskScheduler::Default());
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) [static] :150
Task* Task::Run1(uDelegate* taskDelegate, uObject* scheduler)
{
    Task* task = Task::New1(taskDelegate);
    ::g::Uno::Threading::ITaskScheduler::ScheduleTask(uInterface(uPtr(scheduler), ::TYPES[9/*Uno.Threading.ITaskScheduler*/]), task);
    return task;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Tasks/Tasks.uno
// -----------------------------------------------------------------

// internal delegate void TaskDelegate(Uno.Threading.CancellationToken cancellationToken) :60
uDelegateType* TaskDelegate_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Threading.TaskDelegate", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Threading::CancellationToken_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Promise.uno
// -------------------------------------------------------------

// internal sealed class TaskFuture<T> :53
// {
static void TaskFuture_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Threading::TaskDelegate_typeof();
    ::TYPES[7] = ::g::Uno::Exception_typeof();
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL));
    type->SetDependencies(
        ::g::Uno::Threading::Task_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL), offsetof(TaskFuture, _func), 0,
        ::g::Uno::Threading::Task_typeof(), offsetof(TaskFuture, _task), 0);
}

::g::Uno::Threading::Future_type* TaskFuture_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future1_typeof();
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TaskFuture);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.TaskFuture`1", options);
    type->fp_build_ = TaskFuture_build;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))TaskFuture__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))TaskFuture__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TaskFuture__Dispose_fn;
    return type;
}

// public TaskFuture(Uno.Func<T> func) :65
void TaskFuture__ctor_3_fn(TaskFuture* __this, uDelegate* func)
{
    __this->ctor_3(func);
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :59
void TaskFuture__ctor_4_fn(TaskFuture* __this, uObject* dispatcher, uDelegate* func)
{
    __this->ctor_4(dispatcher, func);
}

// public override sealed void Cancel([bool shutdownGracefully]) :91
void TaskFuture__Cancel_fn(TaskFuture* __this, bool* shutdownGracefully)
{
    uPtr(uPtr(__this->_task)->CancellationTokenSource())->Cancel();
}

// public override sealed void Dispose() :96
void TaskFuture__Dispose_fn(TaskFuture* __this)
{
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    uPtr(__this->_task)->Dispose();
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) :71
void TaskFuture__Invoke1_fn(TaskFuture* __this, ::g::Uno::Threading::CancellationToken* cancellationToken)
{
    __this->Invoke1(cancellationToken);
}

// public TaskFuture New(Uno.Func<T> func) :65
void TaskFuture__New1_fn(uType* __type, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New1(__type, func);
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :59
void TaskFuture__New2_fn(uType* __type, uObject* dispatcher, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New2(__type, dispatcher, func);
}

// public TaskFuture(Uno.Func<T> func) [instance] :65
void TaskFuture::ctor_3(uDelegate* func)
{
    ctor_1();
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[10/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [instance] :59
void TaskFuture::ctor_4(uObject* dispatcher, uDelegate* func)
{
    ctor_2(dispatcher);
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[10/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) [instance] :71
void TaskFuture::Invoke1(::g::Uno::Threading::CancellationToken* cancellationToken)
{
    uT ret3(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT result(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    try
    {
        result = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

        if (::g::Uno::Delegate::op_Inequality(_func, NULL))
            result = (uPtr(_func)->Invoke(&ret3), ret3);

        ::g::Uno::Threading::Future1__InternalResolve_fn(this, result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        InternalReject(e);
    }
}

// public TaskFuture New(Uno.Func<T> func) [static] :65
TaskFuture* TaskFuture::New1(uType* __type, uDelegate* func)
{
    TaskFuture* obj2 = (TaskFuture*)uNew(__type);
    obj2->ctor_3(func);
    return obj2;
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :59
TaskFuture* TaskFuture::New2(uType* __type, uObject* dispatcher, uDelegate* func)
{
    TaskFuture* obj1 = (TaskFuture*)uNew(__type);
    obj1->ctor_4(dispatcher, func);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Tasks/Tasks.uno
// -----------------------------------------------------------------

// internal enum TaskStatus :51
uEnumType* TaskStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.TaskStatus", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Created", 0LL,
        "Faulted", 1LL,
        "RanToCompletion", 2LL,
        "Running", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Thread.uno
// ------------------------------------------------------------

// public sealed class Thread :19
// {
static void Thread_build(uType* type)
{
    ::STRINGS[0] = uString::Const("start");
    ::STRINGS[1] = uString::Const("Thread has not been started.");
    ::STRINGS[2] = uString::Const("Thread is running or terminated; it cannot restart.");
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Thread, _started), 0,
        ::g::Uno::Threading::PthreadHelpers__ThreadHandle_typeof(), offsetof(Thread, _threadHandle), 0,
        ::g::Uno::Threading::ThreadStart_typeof(), offsetof(Thread, _threadStart), 0);
}

uType* Thread_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Thread);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Thread", options);
    type->fp_build_ = Thread_build;
    return type;
}

// private Thread(bool started) :33
void Thread__ctor__fn(Thread* __this, bool* started)
{
    __this->ctor_(*started);
}

// public Thread(Uno.Threading.ThreadStart start) :25
void Thread__ctor_1_fn(Thread* __this, uDelegate* start)
{
    __this->ctor_1(start);
}

// public static Uno.Threading.Thread get_CurrentThread() :81
void Thread__get_CurrentThread_fn(Thread** __retval)
{
    *__retval = Thread::CurrentThread();
}

// public void Join() :64
void Thread__Join_fn(Thread* __this)
{
    __this->Join();
}

// private Thread New(bool started) :33
void Thread__New1_fn(bool* started, Thread** __retval)
{
    *__retval = Thread::New1(*started);
}

// public Thread New(Uno.Threading.ThreadStart start) :25
void Thread__New2_fn(uDelegate* start, Thread** __retval)
{
    *__retval = Thread::New2(start);
}

// public static void Sleep(int millis) :109
void Thread__Sleep_fn(int* millis)
{
    Thread::Sleep(*millis);
}

// public void Start() :49
void Thread__Start_fn(Thread* __this)
{
    __this->Start();
}

// private Thread(bool started) [instance] :33
void Thread::ctor_(bool started)
{
    _started = started;
}

// public Thread(Uno.Threading.ThreadStart start) [instance] :25
void Thread::ctor_1(uDelegate* start)
{
    if (::g::Uno::Delegate::op_Equality(start, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"start"*/]));

    _threadStart = start;
}

// public void Join() [instance] :64
void Thread::Join()
{
    if (!_started)
        U_THROW(::g::Uno::Threading::ThreadStateException::New4(::STRINGS[1/*"Thread has ...*/]));

    ::g::Uno::Threading::PthreadHelpers::JoinThread(_threadHandle);
}

// public void Start() [instance] :49
void Thread::Start()
{
    if (_started)
        U_THROW(::g::Uno::Threading::ThreadStateException::New4(::STRINGS[2/*"Thread is r...*/]));

    _threadHandle = ::g::Uno::Threading::PthreadHelpers::CreateThread(this);
    _started = true;
}

// private Thread New(bool started) [static] :33
Thread* Thread::New1(bool started)
{
    Thread* obj2 = (Thread*)uNew(Thread_typeof());
    obj2->ctor_(started);
    return obj2;
}

// public Thread New(Uno.Threading.ThreadStart start) [static] :25
Thread* Thread::New2(uDelegate* start)
{
    Thread* obj1 = (Thread*)uNew(Thread_typeof());
    obj1->ctor_1(start);
    return obj1;
}

// public static void Sleep(int millis) [static] :109
void Thread::Sleep(int millis)
{
    ::g::Uno::Threading::PthreadHelpers::Sleep(millis);
}

// public static Uno.Threading.Thread get_CurrentThread() [static] :81
Thread* Thread::CurrentThread()
{
    Thread* ret = NULL;
    ret = ::g::Uno::Threading::PthreadHelpers::GetCurrentThread();

    if (ret == NULL)
    {
        ret = Thread::New1(true);
        ::g::Uno::Threading::PthreadHelpers::SetCurrentThread(ret);
    }

    return ret;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Implementation/Posix/PthreadHelpers.uno
// -----------------------------------------------------------------------------------------

// public struct PthreadHelpers.ThreadHandle :10
// {
static void PthreadHelpers__ThreadHandle_build(uType* type)
{
}

uStructType* PthreadHelpers__ThreadHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(pthread_t);
    options.ValueSize = sizeof(pthread_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Threading.PthreadHelpers.ThreadHandle", options);
    type->fp_build_ = PthreadHelpers__ThreadHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ThreadPool.uno
// ----------------------------------------------------------------

// public sealed class ThreadPool :7
// {
static void ThreadPool_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPool_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Threading::Thread_typeof(), NULL), offsetof(ThreadPool, _disposeQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(ThreadPool, _isDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(ThreadPool, _poolSize), 0,
        ::g::Uno::Threading::AutoResetEvent_typeof(), offsetof(ThreadPool, _resetEvent), 0,
        ::g::Uno::Bool_typeof(), offsetof(ThreadPool, _running), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(ThreadPool__WorkItem_typeof(), NULL), offsetof(ThreadPool, _taskQueue), 0);
}

ThreadPool_type* ThreadPool_typeof()
{
    static uSStrong<ThreadPool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ThreadPool);
    options.TypeSize = sizeof(ThreadPool_type);
    type = (ThreadPool_type*)uClassType::New("Uno.Threading.ThreadPool", options);
    type->fp_build_ = ThreadPool_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadPool__Dispose_fn;
    return type;
}

// public ThreadPool([int poolSize]) :58
void ThreadPool__ctor__fn(ThreadPool* __this, int* poolSize)
{
    __this->ctor_(*poolSize);
}

// public void Dispose() :113
void ThreadPool__Dispose_fn(ThreadPool* __this)
{
    __this->Dispose();
}

// private bool DoTask() :86
void ThreadPool__DoTask_fn(ThreadPool* __this, bool* __retval)
{
    *__retval = __this->DoTask();
}

// public ThreadPool New([int poolSize]) :58
void ThreadPool__New1_fn(int* poolSize, ThreadPool** __retval)
{
    *__retval = ThreadPool::New1(*poolSize);
}

// public void QueueAction(Uno.Action action) :97
void ThreadPool__QueueAction_fn(ThreadPool* __this, uDelegate* action)
{
    __this->QueueAction(action);
}

// private void WorkerEntrypoint() :73
void ThreadPool__WorkerEntrypoint_fn(ThreadPool* __this)
{
    __this->WorkerEntrypoint();
}

// public ThreadPool([int poolSize]) [instance] :58
void ThreadPool::ctor_(int poolSize)
{
    _resetEvent = ::g::Uno::Threading::AutoResetEvent::New2(false);
    _taskQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(ThreadPool__WorkItem_typeof(), NULL)));
    _running = true;
    _disposeQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Threading::Thread_typeof(), NULL)));
    _poolSize = poolSize;

    for (int i = 0; i < _poolSize; i++)
    {
        ::g::Uno::Threading::Thread* t = ::g::Uno::Threading::Thread::New2(uDelegate::New(::g::Uno::Threading::ThreadStart_typeof(), (void*)ThreadPool__WorkerEntrypoint_fn, this));
        t->Start();
    }
}

// public void Dispose() [instance] :113
void ThreadPool::Dispose()
{
    bool ret2;

    if (_isDisposed)
        return;

    _isDisposed = true;

    while (!uPtr(_taskQueue)->IsEmpty())
        ::g::Uno::Threading::Thread::Sleep(1);

    _running = false;
    int disposeCount = 0;

    while (disposeCount != _poolSize)
    {
        uPtr(_resetEvent)->Set();
        ::g::Uno::Threading::Thread* thread;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_disposeQueue), (void**)(&thread), &ret2), ret2))
        {
            uPtr(thread)->Join();
            disposeCount++;
        }
    }

    uPtr(_resetEvent)->Dispose();
}

// private bool DoTask() [instance] :86
bool ThreadPool::DoTask()
{
    bool ret3;
    ThreadPool__WorkItem* workItem;

    if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_taskQueue), (void**)(&workItem), &ret3), ret3))
    {
        uPtr(workItem)->Invoke();
        return true;
    }

    return false;
}

// public void QueueAction(Uno.Action action) [instance] :97
void ThreadPool::QueueAction(uDelegate* action)
{
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_taskQueue), ThreadPool__DefaultWorkItem::New1(action));
    uPtr(_resetEvent)->Set();
}

// private void WorkerEntrypoint() [instance] :73
void ThreadPool::WorkerEntrypoint()
{
    while (_running)
    {
        uAutoReleasePool ____pool;

        if (DoTask())
            continue;

        uPtr(_resetEvent)->WaitOne();
    }

    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_disposeQueue), ::g::Uno::Threading::Thread::CurrentThread());
}

// public ThreadPool New([int poolSize]) [static] :58
ThreadPool* ThreadPool::New1(int poolSize)
{
    ThreadPool* obj1 = (ThreadPool*)uNew(ThreadPool_typeof());
    obj1->ctor_(poolSize);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Tasks/Tasks.uno
// -----------------------------------------------------------------

// internal sealed class ThreadPoolTaskScheduler :210
// {
static void ThreadPoolTaskScheduler_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[12] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetInterfaces(
        ::g::Uno::Threading::ITaskScheduler_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::ThreadPool_typeof(), offsetof(ThreadPoolTaskScheduler, _threadPool), 0,
        type, (uintptr_t)&ThreadPoolTaskScheduler::_default_, uFieldFlagsStatic);
}

ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof()
{
    static uSStrong<ThreadPoolTaskScheduler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ThreadPoolTaskScheduler);
    options.TypeSize = sizeof(ThreadPoolTaskScheduler_type);
    type = (ThreadPoolTaskScheduler_type*)uClassType::New("Uno.Threading.ThreadPoolTaskScheduler", options);
    type->fp_build_ = ThreadPoolTaskScheduler_build;
    type->fp_ctor_ = (void*)ThreadPoolTaskScheduler__New1_fn;
    type->interface0.fp_ScheduleTask = (void(*)(uObject*, ::g::Uno::Threading::Task*))ThreadPoolTaskScheduler__ScheduleTask_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ThreadPoolTaskScheduler__Dispose_fn;
    return type;
}

// public ThreadPoolTaskScheduler() :235
void ThreadPoolTaskScheduler__ctor__fn(ThreadPoolTaskScheduler* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() :216
void ThreadPoolTaskScheduler__get_Default_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::Default();
}

// public void Dispose() :245
void ThreadPoolTaskScheduler__Dispose_fn(ThreadPoolTaskScheduler* __this)
{
    __this->Dispose();
}

// public ThreadPoolTaskScheduler New() :235
void ThreadPoolTaskScheduler__New1_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::New1();
}

// private static void OnAppTerminating(Uno.Platform.ApplicationState newState) :227
void ThreadPoolTaskScheduler__OnAppTerminating_fn(int* newState)
{
    ThreadPoolTaskScheduler::OnAppTerminating(*newState);
}

// public void ScheduleTask(Uno.Threading.Task task) :240
void ThreadPoolTaskScheduler__ScheduleTask_fn(ThreadPoolTaskScheduler* __this, ::g::Uno::Threading::Task* task)
{
    __this->ScheduleTask(task);
}

uSStrong<ThreadPoolTaskScheduler*> ThreadPoolTaskScheduler::_default_;

// public ThreadPoolTaskScheduler() [instance] :235
void ThreadPoolTaskScheduler::ctor_()
{
    _threadPool = ::g::Uno::Threading::ThreadPool::New1(4);
}

// public void Dispose() [instance] :245
void ThreadPoolTaskScheduler::Dispose()
{
    uPtr(_threadPool)->Dispose();
}

// public void ScheduleTask(Uno.Threading.Task task) [instance] :240
void ThreadPoolTaskScheduler::ScheduleTask(::g::Uno::Threading::Task* task)
{
    uPtr(_threadPool)->QueueAction(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)::g::Uno::Threading::Task__Execute_fn, uPtr(task)));
}

// public ThreadPoolTaskScheduler New() [static] :235
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::New1()
{
    ThreadPoolTaskScheduler* obj1 = (ThreadPoolTaskScheduler*)uNew(ThreadPoolTaskScheduler_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void OnAppTerminating(Uno.Platform.ApplicationState newState) [static] :227
void ThreadPoolTaskScheduler::OnAppTerminating(int newState)
{
    uPtr(ThreadPoolTaskScheduler::_default_)->Dispose();
    ThreadPoolTaskScheduler::_default_ = NULL;
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() [static] :216
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::Default()
{
    if (ThreadPoolTaskScheduler::_default_ == NULL)
    {
        ThreadPoolTaskScheduler::_default_ = ThreadPoolTaskScheduler::New1();
        ::g::Uno::Platform::CoreApp::add_Terminating(uDelegate::New(::TYPES[12/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)ThreadPoolTaskScheduler__OnAppTerminating_fn));
    }

    return ThreadPoolTaskScheduler::_default_;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Thread.uno
// ------------------------------------------------------------

// public delegate void ThreadStart() :8
uDelegateType* ThreadStart_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Threading.ThreadStart", 0, 0);
    type->SetSignature(uVoid_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Thread.uno
// ------------------------------------------------------------

// public sealed class ThreadStateException :11
// {
static void ThreadStateException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* ThreadStateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ThreadStateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Threading.ThreadStateException", options);
    type->fp_build_ = ThreadStateException_build;
    return type;
}

// public ThreadStateException(string message) :13
void ThreadStateException__ctor_3_fn(ThreadStateException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public ThreadStateException New(string message) :13
void ThreadStateException__New4_fn(uString* message, ThreadStateException** __retval)
{
    *__retval = ThreadStateException::New4(message);
}

// public ThreadStateException(string message) [instance] :13
void ThreadStateException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public ThreadStateException New(string message) [static] :13
ThreadStateException* ThreadStateException::New4(uString* message)
{
    ThreadStateException* obj1 = (ThreadStateException*)uNew(ThreadStateException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ThreadPool.uno
// ----------------------------------------------------------------

// private abstract class ThreadPool.WorkItem :10
// {
static void ThreadPool__WorkItem_build(uType* type)
{
}

ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof()
{
    static uSStrong<ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ThreadPool__WorkItem);
    options.TypeSize = sizeof(ThreadPool__WorkItem_type);
    type = (ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.WorkItem", options);
    type->fp_build_ = ThreadPool__WorkItem_build;
    return type;
}

// protected generated WorkItem() :10
void ThreadPool__WorkItem__ctor__fn(ThreadPool__WorkItem* __this)
{
    __this->ctor_();
}

// protected generated WorkItem() [instance] :10
void ThreadPool__WorkItem::ctor_()
{
}
// }

}}} // ::g::Uno::Threading
