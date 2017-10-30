// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.Marshal.h>
#include <Fuse.Scripting.AppInitialized.Closure.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.BoolChangedArgs.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.EventEmitterModule.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.FactoryClosure-1.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.JSCallback.ActionClosure.h>
#include <Fuse.Scripting.JSCallback.ActionClosure-1.h>
#include <Fuse.Scripting.JSCallback.ActionClosure-2.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-1.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-2.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.JSCallback.NumberConverter.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeEventEmitterModule.EmitClosure.h>
#include <Fuse.Scripting.NativeEventEmitterModule.h>
#include <Fuse.Scripting.NativeEventEmitterModule.OnClosure.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeFunction.NativeFunctionClosure.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.ContextClosure.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativePromise-2.PromiseClosure.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethod-1.CallClosure.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Scripting.ScriptMethodInline.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ScriptModule.RequireContext.h>
#include <Fuse.Scripting.ScriptPromise-3.FutureClosure.h>
#include <Fuse.Scripting.ScriptPromise-3.FutureFactory-2.h>
#include <Fuse.Scripting.ScriptPromise-3.h>
#include <Fuse.Scripting.ScriptPromise-3.PromiseClosure.h>
#include <Fuse.Scripting.ScriptPromise-3.ResultConverter-2.h>
#include <Fuse.Scripting.ScriptProperty.h>
#include <Fuse.Scripting.ScriptProperty-2.h>
#include <Fuse.Scripting.ScriptReadonlyProperty.h>
#include <Fuse.Scripting.StringChangedArgs.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-4.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentDictionary-2.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.Tuple.h>
#include <Uno.Tuple-2.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[47];
static uType* TYPES[38];

namespace g{
namespace Fuse{
namespace Scripting{

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.ActionClosure :37
// {
static void JSCallback__ActionClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(JSCallback__ActionClosure, _action), 0);
}

uType* JSCallback__ActionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JSCallback__ActionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure", options);
    type->fp_build_ = JSCallback__ActionClosure_build;
    return type;
}

// public ActionClosure(Uno.Action action) :41
void JSCallback__ActionClosure__ctor__fn(JSCallback__ActionClosure* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action action) :41
void JSCallback__ActionClosure__New1_fn(uDelegate* action, JSCallback__ActionClosure** __retval)
{
    *__retval = JSCallback__ActionClosure::New1(action);
}

// public object Run(object[] args) :46
void JSCallback__ActionClosure__Run_fn(JSCallback__ActionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action action) [instance] :41
void JSCallback__ActionClosure::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :46
uObject* JSCallback__ActionClosure::Run(uArray* args)
{
    uPtr(_action)->InvokeVoid();
    return NULL;
}

// public ActionClosure New(Uno.Action action) [static] :41
JSCallback__ActionClosure* JSCallback__ActionClosure::New1(uDelegate* action)
{
    JSCallback__ActionClosure* obj1 = (JSCallback__ActionClosure*)uNew(JSCallback__ActionClosure_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T> :53
// {
static void JSCallback__ActionClosure1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::STRINGS[1] = uString::Const(" value was ");
    ::TYPES[0] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<T>*/, type->T(0), NULL));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(JSCallback__ActionClosure1, _action), 0);
}

uType* JSCallback__ActionClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(JSCallback__ActionClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`1", options);
    type->fp_build_ = JSCallback__ActionClosure1_build;
    return type;
}

// public ActionClosure(Uno.Action<T> action) :57
void JSCallback__ActionClosure1__ctor__fn(JSCallback__ActionClosure1* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T> action) :57
void JSCallback__ActionClosure1__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure1** __retval)
{
    *__retval = JSCallback__ActionClosure1::New1(__type, action);
}

// public object Run(object[] args) :62
void JSCallback__ActionClosure1__Run_fn(JSCallback__ActionClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T> action) [instance] :57
void JSCallback__ActionClosure1::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :62
uObject* JSCallback__ActionClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<T>*/),
    };
    uT arg(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    bool ret2;
    arg = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[0], args, &arg, uCRef<int>(0), &ret2), ret2))
        uPtr(_action)->InvokeVoid(arg);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __type->T(0)), ::STRINGS[1/*" value was "*/]), uPtr(args)->Strong<uObject*>(0))));

    return NULL;
}

// public ActionClosure New(Uno.Action<T> action) [static] :57
JSCallback__ActionClosure1* JSCallback__ActionClosure1::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure1* obj1 = (JSCallback__ActionClosure1*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T1, T2> :74
// {
static void JSCallback__ActionClosure2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[0] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<T1>*/, type->T(0), NULL),
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<T2>*/, type->T(1), NULL));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(JSCallback__ActionClosure2, _action), 0);
}

uType* JSCallback__ActionClosure2_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(JSCallback__ActionClosure2);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`2", options);
    type->fp_build_ = JSCallback__ActionClosure2_build;
    return type;
}

// public ActionClosure(Uno.Action<T1, T2> action) :78
void JSCallback__ActionClosure2__ctor__fn(JSCallback__ActionClosure2* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T1, T2> action) :78
void JSCallback__ActionClosure2__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure2** __retval)
{
    *__retval = JSCallback__ActionClosure2::New1(__type, action);
}

// public object Run(object[] args) :83
void JSCallback__ActionClosure2__Run_fn(JSCallback__ActionClosure2* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T1, T2> action) [instance] :78
void JSCallback__ActionClosure2::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :83
uObject* JSCallback__ActionClosure2::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<T1>*/),
        __type->Precalced(1/*Fuse.Scripting.JSCallback.GetArg<T2>*/),
    };
    uT arg(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT arg1(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));
    bool ret2;
    bool ret3;
    arg = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    arg1 = uT(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[0], args, &arg, uCRef<int>(0), &ret2), ret2) && (::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[1], args, &arg1, uCRef<int>(1), &ret3), ret3))
        uPtr(_action)->Invoke(2, (void*)arg, (void*)arg1);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __type->T(0))));

    return NULL;
}

// public ActionClosure New(Uno.Action<T1, T2> action) [static] :78
JSCallback__ActionClosure2* JSCallback__ActionClosure2::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure2* obj1 = (JSCallback__ActionClosure2*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/AppInitialized.uno
// ---------------------------------------------------------------------

// internal static class AppInitialized :15
// {
static void AppInitialized_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&AppInitialized::_initialized_, uFieldFlagsStatic);
}

uClassType* AppInitialized_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.AppInitialized", options);
    type->fp_build_ = AppInitialized_build;
    return type;
}

// public static void On(Fuse.Scripting.Context context, Uno.Action action) :19
void AppInitialized__On_fn(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    AppInitialized::On(context, action);
}

// internal static void Reset() :31
void AppInitialized__Reset_fn()
{
    AppInitialized::Reset();
}

bool AppInitialized::_initialized_;

// public static void On(Fuse.Scripting.Context context, Uno.Action action) [static] :19
void AppInitialized::On(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    if (AppInitialized::_initialized_)
        uPtr(action)->InvokeVoid();
    else
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::UpdateManager::Dispatcher()), ::TYPES[8/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)AppInitialized__Closure__Run_fn, AppInitialized__Closure::New1(context, action)));
}

// internal static void Reset() [static] :31
void AppInitialized::Reset()
{
    AppInitialized::_initialized_ = false;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno
// ------------------------------------------------------------

// public abstract class Array :9
// {
static void Array_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Array_type, interface0));
}

Array_type* Array_typeof()
{
    static uSStrong<Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(Array_type);
    type = (Array_type*)uClassType::New("Fuse.Scripting.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Array__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    return type;
}

// protected generated Array() :9
void Array__ctor__fn(Array* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :16
void Array__Equals_fn(Array* __this, uObject* o, bool* __retval)
{
    Array* a = uAs<Array*>(o, Array_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :22
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Array() [instance] :9
void Array::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/IScriptEvent.uno
// -------------------------------------------------------------------

// public sealed class BoolChangedArgs :64
// {
static void BoolChangedArgs_build(uType* type)
{
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[2] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(BoolChangedArgs_type, interface0));
    type->SetFields(1);
}

BoolChangedArgs_type* BoolChangedArgs_typeof()
{
    static uSStrong<BoolChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::ValueChangedArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BoolChangedArgs);
    options.TypeSize = sizeof(BoolChangedArgs_type);
    type = (BoolChangedArgs_type*)uClassType::New("Fuse.Scripting.BoolChangedArgs", options);
    type->fp_build_ = BoolChangedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public BoolChangedArgs(bool value) :66
void BoolChangedArgs__ctor_2_fn(BoolChangedArgs* __this, bool* value)
{
    __this->ctor_2(*value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :70
void BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn(BoolChangedArgs* __this, uObject* s)
{
    bool ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddBool(uInterface(uPtr(s), ::TYPES[2/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public BoolChangedArgs New(bool value) :66
void BoolChangedArgs__New3_fn(bool* value, BoolChangedArgs** __retval)
{
    *__retval = BoolChangedArgs::New3(*value);
}

// public BoolChangedArgs(bool value) [instance] :66
void BoolChangedArgs::ctor_2(bool value)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value));
}

// public BoolChangedArgs New(bool value) [static] :66
BoolChangedArgs* BoolChangedArgs::New3(bool value)
{
    BoolChangedArgs* obj1 = (BoolChangedArgs*)uNew(BoolChangedArgs_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno
// ------------------------------------------------------------

// public delegate object Callback(object[] args) :126
uDelegateType* Callback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.Callback", 1, 0);
    type->SetSignature(uObject_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// private sealed class ScriptMethod<T>.CallClosure :126
// {
static void ScriptMethod1__CallClosure_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(ScriptMethod1__CallClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ScriptMethod1__CallClosure, _context), 0,
        ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), NULL), offsetof(ScriptMethod1__CallClosure, _method), 0,
        uObject_typeof(), offsetof(ScriptMethod1__CallClosure, _obj), 0);
}

uType* ScriptMethod1__CallClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ScriptMethod1__CallClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMethod`1.CallClosure", options);
    type->fp_build_ = ScriptMethod1__CallClosure_build;
    return type;
}

// public CallClosure(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) :133
void ScriptMethod1__CallClosure__ctor__fn(ScriptMethod1__CallClosure* __this, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args)
{
    __this->ctor_(method, c, obj, args);
}

// public CallClosure New(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) :133
void ScriptMethod1__CallClosure__New1_fn(uType* __type, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, ScriptMethod1__CallClosure** __retval)
{
    *__retval = ScriptMethod1__CallClosure::New1(__type, method, c, obj, args);
}

// public void Run() :141
void ScriptMethod1__CallClosure__Run_fn(ScriptMethod1__CallClosure* __this)
{
    __this->Run();
}

// public CallClosure(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) [instance] :133
void ScriptMethod1__CallClosure::ctor_(uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args)
{
    _method = method;
    _context = c;
    _obj = obj;
    _args = args;
}

// public void Run() [instance] :141
void ScriptMethod1__CallClosure::Run()
{
    uPtr(_method)->Invoke(3, (::g::Fuse::Scripting::Context*)_context, (void*)uUnboxAny(__type->T(0), _obj), (uArray*)_args);
}

// public CallClosure New(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) [static] :133
ScriptMethod1__CallClosure* ScriptMethod1__CallClosure::New1(uType* __type, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args)
{
    ScriptMethod1__CallClosure* obj1 = (ScriptMethod1__CallClosure*)uNew(__type);
    obj1->ctor_(method, c, obj, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/AppInitialized.uno
// ---------------------------------------------------------------------

// private sealed class AppInitialized.Closure :36
// {
static void AppInitialized__Closure_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(0/*Invoke1<Uno.Action>*/, ::g::Uno::Action_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(AppInitialized__Closure, _action), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(AppInitialized__Closure, _context), 0);
}

uType* AppInitialized__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AppInitialized__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.AppInitialized.Closure", options);
    type->fp_build_ = AppInitialized__Closure_build;
    return type;
}

// public Closure(Fuse.Scripting.Context context, Uno.Action action) :41
void AppInitialized__Closure__ctor__fn(AppInitialized__Closure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    __this->ctor_(context, action);
}

// public Closure New(Fuse.Scripting.Context context, Uno.Action action) :41
void AppInitialized__Closure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* action, AppInitialized__Closure** __retval)
{
    *__retval = AppInitialized__Closure::New1(context, action);
}

// public void Run() :47
void AppInitialized__Closure__Run_fn(AppInitialized__Closure* __this)
{
    __this->Run();
}

// private static void RunJS(Uno.Action action) :52
void AppInitialized__Closure__RunJS_fn(uDelegate* action)
{
    AppInitialized__Closure::RunJS(action);
}

// public Closure(Fuse.Scripting.Context context, Uno.Action action) [instance] :41
void AppInitialized__Closure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    _context = context;
    _action = action;
}

// public void Run() [instance] :47
void AppInitialized__Closure::Run()
{
    ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[3/*Uno.Threading.IDispatcherExtensions.Invoke1<Uno.Action>*/], uPtr(_context)->Dispatcher(), uDelegate::New(::TYPES[4/*Uno.Action<Uno.Action>*/], (void*)AppInitialized__Closure__RunJS_fn), _action);
}

// public Closure New(Fuse.Scripting.Context context, Uno.Action action) [static] :41
AppInitialized__Closure* AppInitialized__Closure::New1(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    AppInitialized__Closure* obj1 = (AppInitialized__Closure*)uNew(AppInitialized__Closure_typeof());
    obj1->ctor_(context, action);
    return obj1;
}

// private static void RunJS(Uno.Action action) [static] :52
void AppInitialized__Closure::RunJS(uDelegate* action)
{
    ::g::Fuse::Scripting::AppInitialized::_initialized_ = true;
    uPtr(action)->InvokeVoid();
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Context.uno
// --------------------------------------------------------------

// public interfacemodifiers class Context :18
// {
static void Context_build(uType* type)
{
    ::STRINGS[3] = uString::Const("(Context)");
    ::STRINGS[4] = uString::Const("(function(x) { return x; })");
    ::STRINGS[5] = uString::Const("(function(count) { return new Array(count); })");
    ::STRINGS[6] = uString::Const("(function() { return new Object; })");
    ::STRINGS[7] = uString::Const("(function(obj, name, getCallback, setCallback, e, c) { Object.defineProperty(obj, name, { get: getCallback, ");
    ::STRINGS[8] = uString::Const(" set: setCallback,");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[10] = uString::Const(" enumerable: e, configurable: c }); })");
    ::STRINGS[11] = uString::Const("(function(obj, name, value, e, c) { Object.defineProperty(obj, name, { value: value, enumerable: e, configurable: c }); })");
    ::STRINGS[12] = uString::Const("JSON.parse");
    ::TYPES[5] = ::g::Uno::Threading::ConcurrentDictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::ModuleResult_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::IThreadWorker_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface0));
    type->SetFields(0,
        ::TYPES[6/*Fuse.Scripting.Function*/], offsetof(Context, _identity), 0,
        ::TYPES[5/*Uno.Threading.ConcurrentDictionary<string, Fuse.Scripting.ModuleResult>*/], offsetof(Context, _moduleResults), 0,
        ::TYPES[6/*Fuse.Scripting.Function*/], offsetof(Context, _newArray), 0,
        ::TYPES[6/*Fuse.Scripting.Function*/], offsetof(Context, _newObject), 0,
        ::TYPES[6/*Fuse.Scripting.Function*/], offsetof(Context, _parseJson), 0,
        ::TYPES[9/*Fuse.Scripting.IThreadWorker*/], offsetof(Context, _worker), 0);
}

Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Fuse.Scripting.Context", options);
    type->fp_build_ = Context_build;
    return type;
}

// protected Context(Fuse.Scripting.IThreadWorker worker) :64
void Context__ctor__fn(Context* __this, uObject* worker)
{
    __this->ctor_(worker);
}

// public Fuse.Scripting.Function CallbackToFunction(Fuse.Scripting.Callback c) :88
void Context__CallbackToFunction_fn(Context* __this, uDelegate* c, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->CallbackToFunction(c);
}

// internal void DeleteGlobalModuleResult(Fuse.Scripting.ModuleResult mr) :37
void Context__DeleteGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* mr)
{
    __this->DeleteGlobalModuleResult(mr);
}

// public Uno.Threading.IDispatcher get_Dispatcher() :74
void Context__get_Dispatcher_fn(Context* __this, uObject** __retval)
{
    *__retval = __this->Dispatcher();
}

// public void Invoke(Uno.Action action) :76
void Context__Invoke_fn(Context* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public Fuse.Scripting.Array NewArray(object[] values) :135
void Context__NewArray_fn(Context* __this, uArray* values, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->NewArray(values);
}

// public Fuse.Scripting.Object NewObject() :128
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->NewObject();
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, [Fuse.Scripting.Callback setProperty], [bool enumerable], [bool configurable]) :96
void Context__ObjectDefineProperty_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty(obj, name, getProperty, setProperty, *enumerable, *configurable);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) :103
void Context__ObjectDefineProperty1_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty1(obj, name, value, *enumerable, *configurable);
}

// public Fuse.Scripting.Function get_Observable() :83
void Context__get_Observable_fn(Context* __this, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->Observable();
}

// public object ParseJson(string json) :119
void Context__ParseJson_fn(Context* __this, uString* json, uObject** __retval)
{
    *__retval = __this->ParseJson(json);
}

// public void RegisterGlobalModuleResult(Fuse.Scripting.ModuleResult result) :22
void Context__RegisterGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->RegisterGlobalModuleResult(result);
}

// public Fuse.Scripting.IThreadWorker get_ThreadWorker() :69
void Context__get_ThreadWorker_fn(Context* __this, uObject** __retval)
{
    *__retval = __this->ThreadWorker();
}

// public Fuse.Scripting.ModuleResult TryGetGlobalModuleResult(string id) :29
void Context__TryGetGlobalModuleResult_fn(Context* __this, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval)
{
    *__retval = __this->TryGetGlobalModuleResult(id);
}

// public object Unwrap(object obj) :72
void Context__Unwrap_fn(Context* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Unwrap(obj);
}

// public object Wrap(object obj) :71
void Context__Wrap_fn(Context* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Wrap(obj);
}

// protected Context(Fuse.Scripting.IThreadWorker worker) [instance] :64
void Context::ctor_(uObject* worker)
{
    _moduleResults = ((::g::Uno::Threading::ConcurrentDictionary*)::g::Uno::Threading::ConcurrentDictionary::New1(::TYPES[5/*Uno.Threading.ConcurrentDictionary<string, Fuse.Scripting.ModuleResult>*/]));
    _worker = worker;
}

// public Fuse.Scripting.Function CallbackToFunction(Fuse.Scripting.Callback c) [instance] :88
::g::Fuse::Scripting::Function* Context::CallbackToFunction(uDelegate* c)
{
    if (_identity == NULL)
        _identity = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[3/*"(Context)"*/], ::STRINGS[4/*"(function(x...*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    return uCast< ::g::Fuse::Scripting::Function*>(uPtr(_identity)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, c)), ::TYPES[6/*Fuse.Scripting.Function*/]);
}

// internal void DeleteGlobalModuleResult(Fuse.Scripting.ModuleResult mr) [instance] :37
void Context::DeleteGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* mr)
{
    bool ret1;
    bool ret2;

    if (::g::Uno::String::op_Equality(uPtr(mr)->Id, NULL))
        return;

    if ((::g::Uno::Threading::ConcurrentDictionary__ContainsKey_fn(uPtr(_moduleResults), uPtr(mr)->Id, &ret1), ret1))
        ::g::Uno::Threading::ConcurrentDictionary__Remove_fn(uPtr(_moduleResults), uPtr(mr)->Id, &ret2);
}

// public Uno.Threading.IDispatcher get_Dispatcher() [instance] :74
uObject* Context::Dispatcher()
{
    return ::g::Fuse::Scripting::IThreadWorker::Dispatcher(uInterface(uPtr(_worker), ::TYPES[9/*Fuse.Scripting.IThreadWorker*/]));
}

// public void Invoke(Uno.Action action) [instance] :76
void Context::Invoke(uDelegate* action)
{
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::Scripting::IThreadWorker::Dispatcher(uInterface(uPtr(_worker), ::TYPES[9/*Fuse.Scripting.IThreadWorker*/]))), ::TYPES[8/*Uno.Threading.IDispatcher*/]), action);
}

// public Fuse.Scripting.Array NewArray(object[] values) [instance] :135
::g::Fuse::Scripting::Array* Context::NewArray(uArray* values)
{
    if (_newArray == NULL)
        _newArray = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[3/*"(Context)"*/], ::STRINGS[5/*"(function(c...*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(uPtr(_newArray)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uBox<int>(::TYPES[30/*int*/], uPtr(values)->Length()))), ::TYPES[10/*Fuse.Scripting.Array*/]);

    for (int i = 0; i < values->Length(); i++)
        uPtr(a)->Item(i, uPtr(values)->Strong<uObject*>(i));

    return a;
}

// public Fuse.Scripting.Object NewObject() [instance] :128
::g::Fuse::Scripting::Object* Context::NewObject()
{
    if (_newObject == NULL)
        _newObject = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[3/*"(Context)"*/], ::STRINGS[6/*"(function()...*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    return uCast< ::g::Fuse::Scripting::Object*>(uPtr(_newObject)->Call(uArray::New(::TYPES[7/*object[]*/], 0)), ::TYPES[11/*Fuse.Scripting.Object*/]);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, [Fuse.Scripting.Callback setProperty], [bool enumerable], [bool configurable]) [instance] :96
void Context::ObjectDefineProperty(::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool enumerable, bool configurable)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate(name, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*"(function(o...*/], ::g::Uno::Delegate::op_Inequality(setProperty, NULL) ? ::STRINGS[8/*" set: setCa...*/] : ::STRINGS[9/*""*/]), ::STRINGS[10/*" enumerable...*/])), ::TYPES[6/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 6, obj, name, getProperty, setProperty, uBox(::g::Uno::Bool_typeof(), enumerable), uBox(::g::Uno::Bool_typeof(), configurable)));
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) [instance] :103
void Context::ObjectDefineProperty1(::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool enumerable, bool configurable)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate(name, ::STRINGS[11/*"(function(o...*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 5, obj, name, value, uBox(::g::Uno::Bool_typeof(), enumerable), uBox(::g::Uno::Bool_typeof(), configurable)));
}

// public Fuse.Scripting.Function get_Observable() [instance] :83
::g::Fuse::Scripting::Function* Context::Observable()
{
    return ::g::Fuse::Scripting::IThreadWorker::Observable(uInterface(uPtr(_worker), ::TYPES[9/*Fuse.Scripting.IThreadWorker*/]));
}

// public object ParseJson(string json) [instance] :119
uObject* Context::ParseJson(uString* json)
{
    if (_parseJson == NULL)
        _parseJson = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[3/*"(Context)"*/], ::STRINGS[12/*"JSON.parse"*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    return uPtr(_parseJson)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, json));
}

// public void RegisterGlobalModuleResult(Fuse.Scripting.ModuleResult result) [instance] :22
void Context::RegisterGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* result)
{
    if (::g::Uno::String::op_Equality(uPtr(result)->Id, NULL))
        return;

    ::g::Uno::Threading::ConcurrentDictionary__Add_fn(uPtr(_moduleResults), uPtr(result)->Id, result);
}

// public Fuse.Scripting.IThreadWorker get_ThreadWorker() [instance] :69
uObject* Context::ThreadWorker()
{
    return _worker;
}

// public Fuse.Scripting.ModuleResult TryGetGlobalModuleResult(string id) [instance] :29
::g::Fuse::Scripting::ModuleResult* Context::TryGetGlobalModuleResult(uString* id)
{
    bool ret3;
    ::g::Fuse::Scripting::ModuleResult* ret4;

    if (::g::Uno::String::op_Equality(id, NULL))
        return NULL;

    if ((::g::Uno::Threading::ConcurrentDictionary__ContainsKey_fn(uPtr(_moduleResults), id, &ret3), ret3))
        return (::g::Uno::Threading::ConcurrentDictionary__get_Item_fn(uPtr(_moduleResults), id, &ret4), ret4);

    return NULL;
}

// public object Unwrap(object obj) [instance] :72
uObject* Context::Unwrap(uObject* obj)
{
    return ::g::Fuse::Scripting::IThreadWorker::Unwrap(uInterface(uPtr(_worker), ::TYPES[9/*Fuse.Scripting.IThreadWorker*/]), obj);
}

// public object Wrap(object obj) [instance] :71
uObject* Context::Wrap(uObject* obj)
{
    return ::g::Fuse::Scripting::IThreadWorker::Wrap(uInterface(uPtr(_worker), ::TYPES[9/*Fuse.Scripting.IThreadWorker*/]), obj);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativePromise.uno
// --------------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.ContextClosure :71
// {
static void NativePromise__ContextClosure_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Promise");
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[12] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativePromise__ContextClosure, _c), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativePromise__ContextClosure, _converter), 0,
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0), NULL), offsetof(NativePromise__ContextClosure, _factory), 0);
}

uType* NativePromise__ContextClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(NativePromise__ContextClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.ContextClosure", options);
    type->fp_build_ = NativePromise__ContextClosure_build;
    return type;
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :76
void NativePromise__ContextClosure__ctor__fn(NativePromise__ContextClosure* __this, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    __this->ctor_(c, factory, converter);
}

// internal object CreatePromise(object[] args) :82
void NativePromise__ContextClosure__CreatePromise_fn(NativePromise__ContextClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreatePromise(args);
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :76
void NativePromise__ContextClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter, NativePromise__ContextClosure** __retval)
{
    *__retval = NativePromise__ContextClosure::New1(__type, c, factory, converter);
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :76
void NativePromise__ContextClosure::ctor_(::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    _c = c;
    _factory = factory;
    _converter = converter;
}

// internal object CreatePromise(object[] args) [instance] :82
uObject* NativePromise__ContextClosure::CreatePromise(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.NativePromise<T, TJSResult>.PromiseClosure*/),
    };
    ::g::Fuse::Scripting::Function* promise = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(_c)->GlobalObject())->Item(::STRINGS[13/*"Promise"*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);
    ::g::Uno::Threading::Future1* future = (::g::Uno::Threading::Future1*)uPtr(_factory)->Invoke(1, args);
    return uPtr(promise)->Construct(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::NativePromise__PromiseClosure__Run_fn, ::g::Fuse::Scripting::NativePromise__PromiseClosure::New1(__types[0], _c, future, _converter))));
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :76
NativePromise__ContextClosure* NativePromise__ContextClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    NativePromise__ContextClosure* obj1 = (NativePromise__ContextClosure*)uNew(__type);
    obj1->ctor_(c, factory, converter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeEventEmitterModule.uno
// -------------------------------------------------------------------------------

// private sealed class NativeEventEmitterModule.EmitClosure :163
// {
static void NativeEventEmitterModule__EmitClosure_build(uType* type)
{
    ::STRINGS[14] = uString::Const("emit");
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(NativeEventEmitterModule__EmitClosure, _args), 0);
}

uType* NativeEventEmitterModule__EmitClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NativeEventEmitterModule__EmitClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEventEmitterModule.EmitClosure", options);
    type->fp_build_ = NativeEventEmitterModule__EmitClosure_build;
    return type;
}

// public EmitClosure(object[] args) :167
void NativeEventEmitterModule__EmitClosure__ctor__fn(NativeEventEmitterModule__EmitClosure* __this, uArray* args)
{
    __this->ctor_(args);
}

// public void Emit(Fuse.Scripting.Context c, Fuse.Scripting.Object o) :172
void NativeEventEmitterModule__EmitClosure__Emit_fn(NativeEventEmitterModule__EmitClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    __this->Emit(c, o);
}

// public EmitClosure New(object[] args) :167
void NativeEventEmitterModule__EmitClosure__New1_fn(uArray* args, NativeEventEmitterModule__EmitClosure** __retval)
{
    *__retval = NativeEventEmitterModule__EmitClosure::New1(args);
}

// public EmitClosure(object[] args) [instance] :167
void NativeEventEmitterModule__EmitClosure::ctor_(uArray* args)
{
    _args = args;
}

// public void Emit(Fuse.Scripting.Context c, Fuse.Scripting.Object o) [instance] :172
void NativeEventEmitterModule__EmitClosure::Emit(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    uPtr(o)->CallMethod(::STRINGS[14/*"emit"*/], _args);
}

// public EmitClosure New(object[] args) [static] :167
NativeEventEmitterModule__EmitClosure* NativeEventEmitterModule__EmitClosure::New1(uArray* args)
{
    NativeEventEmitterModule__EmitClosure* obj1 = (NativeEventEmitterModule__EmitClosure*)uNew(NativeEventEmitterModule__EmitClosure_typeof());
    obj1->ctor_(args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno
// ------------------------------------------------------------

// public sealed class Error :80
// {
static void Error_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* Error_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Error);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.Error", options);
    type->fp_build_ = Error_build;
    return type;
}

// public Error(string message) :82
void Error__ctor_3_fn(Error* __this, uString* message)
{
    __this->ctor_3(message);
}

// public Error New(string message) :82
void Error__New4_fn(uString* message, Error** __retval)
{
    *__retval = Error::New4(message);
}

// public Error(string message) [instance] :82
void Error::ctor_3(uString* message)
{
    ctor_1(message);
}

// public Error New(string message) [static] :82
Error* Error::New4(uString* message)
{
    Error* obj1 = (Error*)uNew(Error_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/EventEmitterModule.uno
// -------------------------------------------------------------------------

// internal static class EventEmitterModule :7
// {
static void EventEmitterModule_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Fuse.Reactive.JavaScript");
    ::STRINGS[16] = uString::Const("FuseJS/EventEmitter.js");
    ::STRINGS[17] = uString::Const("FuseJS/EventEmitter");
    ::STRINGS[18] = uString::Const("Unable to get a FuseJS/EventEmitter instance");
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    type->SetDependencies(
        ::g::Uno::UX::FileSource_typeof());
    type->SetFields(0,
        ::TYPES[6/*Fuse.Scripting.Function*/], (uintptr_t)&EventEmitterModule::_instance_, uFieldFlagsStatic);
}

uClassType* EventEmitterModule_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.EventEmitterModule", options);
    type->fp_build_ = EventEmitterModule_build;
    return type;
}

// public static Fuse.Scripting.Function GetConstructor(Fuse.Scripting.Context c) :10
void EventEmitterModule__GetConstructor_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = EventEmitterModule::GetConstructor(c);
}

uSStrong< ::g::Fuse::Scripting::Function*> EventEmitterModule::_instance_;

// public static Fuse.Scripting.Function GetConstructor(Fuse.Scripting.Context c) [static] :10
::g::Fuse::Scripting::Function* EventEmitterModule::GetConstructor(::g::Fuse::Scripting::Context* c)
{
    if (EventEmitterModule::_instance_ == NULL)
    {
        ::g::Uno::IO::BundleFile* fileSource = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[15/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[16/*"FuseJS/Even...*/]);
        uObject* exports = ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(fileSource))->EvaluateExports(c, ::STRINGS[17/*"FuseJS/Even...*/]);
        EventEmitterModule::_instance_ = uAs< ::g::Fuse::Scripting::Function*>(exports, ::TYPES[6/*Fuse.Scripting.Function*/]);

        if (EventEmitterModule::_instance_ == NULL)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"Unable to g...*/]));
    }

    return EventEmitterModule::_instance_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public enum ExecutionThread :8
uEnumType* ExecutionThread_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.ExecutionThread", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Any", 0LL,
        "JavaScript", 1LL,
        "MainThread", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno
// ------------------------------------------------------------

// public sealed class External :101
// {
static void External_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(External, Object), 0);
}

uType* External_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(External);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.External", options);
    type->fp_build_ = External_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))External__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))External__GetHashCode_fn;
    return type;
}

// public External(object o) :105
void External__ctor__fn(External* __this, uObject* o)
{
    __this->ctor_(o);
}

// public override sealed bool Equals(object o) :110
void External__Equals_fn(External* __this, uObject* o, bool* __retval)
{
    External* that = uAs<External*>(o, __this->__type);
    return *__retval = (that != NULL) && ::g::Uno::Object::Equals(uPtr(__this->Object), uPtr(that)->Object), void();
}

// public override sealed int GetHashCode() :116
void External__GetHashCode_fn(External* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->Object)), void();
}

// public External New(object o) :105
void External__New1_fn(uObject* o, External** __retval)
{
    *__retval = External::New1(o);
}

// public External(object o) [instance] :105
void External::ctor_(uObject* o)
{
    Object = o;
}

// public External New(object o) [static] :105
External* External::New1(uObject* o)
{
    External* obj1 = (External*)uNew(External_typeof());
    obj1->ctor_(o);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativePromise.uno
// --------------------------------------------------------------------

// internal sealed class FactoryClosure<T> :10
// {
static void FactoryClosure_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(FactoryClosure, _args), 0,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0), NULL), offsetof(FactoryClosure, _factory), 0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), offsetof(FactoryClosure, _promise), 0);
}

uType* FactoryClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(FactoryClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.FactoryClosure`1", options);
    type->fp_build_ = FactoryClosure_build;
    return type;
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :16
void FactoryClosure__ctor__fn(FactoryClosure* __this, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(factory, args, promise);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :16
void FactoryClosure__New1_fn(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise, FactoryClosure** __retval)
{
    *__retval = FactoryClosure::New1(__type, factory, args, promise);
}

// public void Run() :23
void FactoryClosure__Run_fn(FactoryClosure* __this)
{
    __this->Run();
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [instance] :16
void FactoryClosure::ctor_(uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    _factory = factory;
    _args = args;
    _promise = promise;
}

// public void Run() [instance] :23
void FactoryClosure::Run()
{
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT res(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    res = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    try
    {
        res = (uPtr(_factory)->Invoke(&ret2, 1, (uArray*)_args), ret2);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_promise)->Reject(e);
        return;
    }

    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), res);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [static] :16
FactoryClosure* FactoryClosure::New1(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    FactoryClosure* obj1 = (FactoryClosure*)uNew(__type);
    obj1->ctor_(factory, args, promise);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/FileModule.uno
// -----------------------------------------------------------------

// public class FileModule :19
// {
static void FileModule_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(9);
}

::g::Fuse::Scripting::ScriptModule_type* FileModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Scripting.FileModule", options);
    type->fp_build_ = FileModule_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileModule(Uno.UX.FileSource fs) :21
void FileModule__ctor_2_fn(FileModule* __this, ::g::Uno::UX::FileSource* fs)
{
    __this->ctor_2(fs);
}

// public FileModule New(Uno.UX.FileSource fs) :21
void FileModule__New2_fn(::g::Uno::UX::FileSource* fs, FileModule** __retval)
{
    *__retval = FileModule::New2(fs);
}

// public FileModule(Uno.UX.FileSource fs) [instance] :21
void FileModule::ctor_2(::g::Uno::UX::FileSource* fs)
{
    ctor_1();
    File(fs);
}

// public FileModule New(Uno.UX.FileSource fs) [static] :21
FileModule* FileModule::New2(::g::Uno::UX::FileSource* fs)
{
    FileModule* obj1 = (FileModule*)uNew(FileModule_typeof());
    obj1->ctor_2(fs);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TResult> :96
// {
static void JSCallback__FuncClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL), offsetof(JSCallback__FuncClosure, _method), 0);
}

uType* JSCallback__FuncClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(JSCallback__FuncClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`1", options);
    type->fp_build_ = JSCallback__FuncClosure_build;
    return type;
}

// public FuncClosure(Uno.Func<TResult> method) :100
void JSCallback__FuncClosure__ctor__fn(JSCallback__FuncClosure* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TResult> method) :100
void JSCallback__FuncClosure__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure** __retval)
{
    *__retval = JSCallback__FuncClosure::New1(__type, method);
}

// public object Run(object[] args) :105
void JSCallback__FuncClosure__Run_fn(JSCallback__FuncClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TResult> method) [instance] :100
void JSCallback__FuncClosure::ctor_(uDelegate* method)
{
    _method = method;
}

// public object Run(object[] args) [instance] :105
uObject* JSCallback__FuncClosure::Run(uArray* args)
{
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    return uBoxPtr(__type->T(0), (uPtr(_method)->Invoke(&ret2), ret2));
}

// public FuncClosure New(Uno.Func<TResult> method) [static] :100
JSCallback__FuncClosure* JSCallback__FuncClosure::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure* obj1 = (JSCallback__FuncClosure*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TArg, TResult> :111
// {
static void JSCallback__FuncClosure1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::JSCallback_typeof();
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetPrecalc(
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<TArg>*/, type->T(0), NULL));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(JSCallback__FuncClosure1, _method), 0);
}

uType* JSCallback__FuncClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(JSCallback__FuncClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`2", options);
    type->fp_build_ = JSCallback__FuncClosure1_build;
    return type;
}

// public FuncClosure(Uno.Func<TArg, TResult> method) :115
void JSCallback__FuncClosure1__ctor__fn(JSCallback__FuncClosure1* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) :115
void JSCallback__FuncClosure1__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure1** __retval)
{
    *__retval = JSCallback__FuncClosure1::New1(__type, method);
}

// public object Run(object[] args) :120
void JSCallback__FuncClosure1__Run_fn(JSCallback__FuncClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TArg, TResult> method) [instance] :115
void JSCallback__FuncClosure1::ctor_(uDelegate* method)
{
    _method = method;
}

// public object Run(object[] args) [instance] :120
uObject* JSCallback__FuncClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<TArg>*/),
    };
    uT ret2(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));
    uT ret4(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));
    uT arg(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    bool ret3;

    if (::g::Uno::Type::op_Equality(__type->T(0), ::TYPES[7/*object[]*/]))
        return uBoxPtr(__type->T(1), (uPtr(_method)->Invoke(&ret2, 1, (void*)uUnboxAny(__type->T(0), args)), ret2));

    arg = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[0], args, &arg, uCRef<int>(0), &ret3), ret3))
        return uBoxPtr(__type->T(1), (uPtr(_method)->Invoke(&ret4, 1, (void*)arg), ret4));

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __type->T(0))));
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) [static] :115
JSCallback__FuncClosure1* JSCallback__FuncClosure1::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure1* obj1 = (JSCallback__FuncClosure1*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno
// ------------------------------------------------------------

// public abstract class Function :58
// {
static void Function_build(uType* type)
{
}

Function_type* Function_typeof()
{
    static uSStrong<Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(Function_type);
    type = (Function_type*)uClassType::New("Fuse.Scripting.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Function__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    return type;
}

// protected generated Function() :58
void Function__ctor__fn(Function* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :64
void Function__Equals_fn(Function* __this, uObject* o, bool* __retval)
{
    Function* a = uAs<Function*>(o, Function_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :70
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Function() [instance] :58
void Function::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// private sealed class ScriptPromise<TSelf, TResult, TJSResult>.FutureClosure :200
// {
static void ScriptPromise__FutureClosure_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(ScriptPromise__FutureClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ScriptPromise__FutureClosure, _context), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(1), NULL), offsetof(ScriptPromise__FutureClosure, _future), 0,
        ::g::Fuse::Scripting::ScriptPromise__FutureFactory_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(0), type->T(1), NULL), offsetof(ScriptPromise__FutureClosure, _futureFactory), 0,
        ::g::Fuse::Scripting::ScriptPromise__PromiseClosure_typeof()->MakeType(type->T(0), type->T(1), type->T(2), NULL), offsetof(ScriptPromise__FutureClosure, _promiseClosure), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* ScriptPromise__FutureClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(ScriptPromise__FutureClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptPromise`3.FutureClosure", options);
    type->fp_build_ = ScriptPromise__FutureClosure_build;
    return type;
}

// public FutureClosure(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.FutureFactory<TSelf, TResult> futureFactory, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.PromiseClosure promiseClosure, TSelf self, object[] args) :208
void ScriptPromise__FutureClosure__ctor__fn(ScriptPromise__FutureClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* futureFactory, ::g::Fuse::Scripting::ScriptPromise__PromiseClosure* promiseClosure, void* self, uArray* args)
{
    __this->_context = context;
    __this->_futureFactory = futureFactory;
    __this->_promiseClosure = promiseClosure;
    __this->_self() = self;
    __this->_args = args;
}

// private void DispatchFuture() :229
void ScriptPromise__FutureClosure__DispatchFuture_fn(ScriptPromise__FutureClosure* __this)
{
    __this->DispatchFuture();
}

// public FutureClosure New(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.FutureFactory<TSelf, TResult> futureFactory, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.PromiseClosure promiseClosure, TSelf self, object[] args) :208
void ScriptPromise__FutureClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* futureFactory, ::g::Fuse::Scripting::ScriptPromise__PromiseClosure* promiseClosure, void* self, uArray* args, ScriptPromise__FutureClosure** __retval)
{
    ScriptPromise__FutureClosure* obj1 = (ScriptPromise__FutureClosure*)uNew(__type);
    ScriptPromise__FutureClosure__ctor__fn(obj1, context, futureFactory, promiseClosure, self, args);
    return *__retval = obj1, void();
}

// public void Run() :223
void ScriptPromise__FutureClosure__Run_fn(ScriptPromise__FutureClosure* __this)
{
    __this->Run();
}

// private void DispatchFuture() [instance] :229
void ScriptPromise__FutureClosure::DispatchFuture()
{
    uPtr(_promiseClosure)->OnFutureReady(_future);
}

// public void Run() [instance] :223
void ScriptPromise__FutureClosure::Run()
{
    _future = (::g::Uno::Threading::Future1*)uPtr(_futureFactory)->Invoke(3, (::g::Fuse::Scripting::Context*)_context, (void*)_self(), (uArray*)_args);
    uPtr(_context)->Invoke(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)ScriptPromise__FutureClosure__DispatchFuture_fn, this));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativePromise.uno
// --------------------------------------------------------------------

// public delegate Uno.Threading.Future<T> FutureFactory<T>(object[] args) :7
uDelegateType* FutureFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.FutureFactory`1", 1, 1);
    type->SetSignature(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public delegate Uno.Threading.Future<TResult> ScriptPromise<TSelf, TResult, TJSResult>.FutureFactory<TSelf, TResult>(Fuse.Scripting.Context context, TSelf self, object[] args) :151
uDelegateType* ScriptPromise__FutureFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ScriptPromise`3.FutureFactory`2", 3, 5);
    type->SetSignature(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(4), NULL),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(3),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/IScriptEvent.uno
// -------------------------------------------------------------------

// public abstract interface IEventSerializer :5
// {
uInterfaceType* IEventSerializer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IEventSerializer", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptModule.uno
// -------------------------------------------------------------------

// public abstract interface IModuleProvider :10
// {
uInterfaceType* IModuleProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IModuleProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/IScriptEvent.uno
// -------------------------------------------------------------------

// public abstract interface IScriptEvent :27
// {
uInterfaceType* IScriptEvent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IScriptEvent", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/IScriptEvent.uno
// -------------------------------------------------------------------

// public abstract interface IScriptObject :15
// {
uInterfaceType* IScriptObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IScriptObject", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Context.uno
// --------------------------------------------------------------

// public abstract interface IThreadWorker :10
// {
uInterfaceType* IThreadWorker_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IThreadWorker", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSCallback.uno
// -----------------------------------------------------------------

// public static class JSCallback :5
// {
static void JSCallback_build(uType* type)
{
    type->MethodTypes[0]->SetPrecalc(
        JSCallback__ActionClosure1_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        JSCallback__ActionClosure2_typeof()->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        JSCallback__FuncClosure_typeof()->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        JSCallback__FuncClosure1_typeof()->MakeType(type->MethodTypes[3]->U(0), type->MethodTypes[3]->U(1), NULL));
    type->MethodTypes[4]->SetPrecalc(
        JSCallback__NumberConverter_typeof()->MakeMethod(1/*TryConvert<T>*/, type->MethodTypes[4]->U(0), NULL));
}

uClassType* JSCallback_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(2, 1,0);
    type->MethodTypes[2] = type->NewMethodType(1, 1,0);
    type->MethodTypes[3] = type->NewMethodType(2, 1,0);
    type->MethodTypes[4] = type->NewMethodType(1, 1,0);
    type->fp_build_ = JSCallback_build;
    return type;
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) :7
void JSCallback__FromAction_fn(uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction(action);
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) :12
void JSCallback__FromAction1_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction1(__type, action);
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) :17
void JSCallback__FromAction2_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction2(__type, action);
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) :22
void JSCallback__FromFunc_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc(__type, func);
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) :27
void JSCallback__FromFunc1_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc1(__type, func);
}

// private static bool GetArg<T>(object[] args, T& arg, int index) :152
void JSCallback__GetArg_fn(uType* __type, uArray* args, uTRef arg, int* index, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.NumberConverter.TryConvert<T>*/),
    };
    int index_ = *index;
    bool ret1;
    arg.Default(__type->U(0));

    if (uPtr(args)->Length() > index_)
    {
        if ((JSCallback__NumberConverter__TryConvert_fn(__types[0], uPtr(args)->Strong<uObject*>(index_), arg, &ret1), ret1))
            return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) [static] :7
uDelegate* JSCallback::FromAction(uDelegate* action)
{
    return uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure__Run_fn, JSCallback__ActionClosure::New1(action));
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) [static] :12
uDelegate* JSCallback::FromAction1(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.ActionClosure<T>*/),
    };
    return uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure1__Run_fn, (JSCallback__ActionClosure1*)JSCallback__ActionClosure1::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) [static] :17
uDelegate* JSCallback::FromAction2(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.ActionClosure<T1, T2>*/),
    };
    return uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure2__Run_fn, (JSCallback__ActionClosure2*)JSCallback__ActionClosure2::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) [static] :22
uDelegate* JSCallback::FromFunc(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.FuncClosure<TResult>*/),
    };
    return uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure__Run_fn, (JSCallback__FuncClosure*)JSCallback__FuncClosure::New1(__types[0], func));
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) [static] :27
uDelegate* JSCallback::FromFunc1(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.FuncClosure<T, TResult>*/),
    };
    return uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure1__Run_fn, (JSCallback__FuncClosure1*)JSCallback__FuncClosure1::New1(__types[0], func));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSObjectUtils.uno
// --------------------------------------------------------------------

// public static class JSObjectUtils :3
// {
static void JSObjectUtils_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::Marshal_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[16/*Fuse.Marshal*/]->MakeMethod(0/*ToType<T>*/, type->MethodTypes[0]->U(0), NULL));
}

uClassType* JSObjectUtils_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSObjectUtils", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->fp_build_ = JSObjectUtils_build;
    return type;
}

// public static T ValueOrDefault<T>(object[] args, int index, [T defaultValue]) :12
void JSObjectUtils__ValueOrDefault1_fn(uType* __type, uArray* args, int* index, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Marshal.ToType<T>*/),
    };
    uT ret4(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    int index_ = *index;

    if ((index_ < 0) || (index_ > (uPtr(args)->Length() - 1)))
        return __retval.Store(__type->U(0), defaultValue), void();

    return __retval.Store((::g::Fuse::Marshal__ToType_fn(__types[0], uPtr(args)->Strong<uObject*>(index_), &ret4), ret4)), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Module.uno
// -------------------------------------------------------------

// public abstract class Module :7
// {
static void Module_build(uType* type)
{
    ::STRINGS[19] = uString::Const("exports");
    ::STRINGS[20] = uString::Const("disposed");
    ::STRINGS[21] = uString::Const("id");
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[17] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Module_type, interface0));
    type->SetFields(0,
        ::g::Uno::EventHandler_typeof(), offsetof(Module, _evaluated), 0,
        ::g::Uno::Bool_typeof(), offsetof(Module, _isEvaluated), 0);
}

Module_type* Module_typeof()
{
    static uSStrong<Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Module);
    options.TypeSize = sizeof(Module_type);
    type = (Module_type*)uClassType::New("Fuse.Scripting.Module", options);
    type->fp_build_ = Module_build;
    type->fp_CreateExportsObject = Module__CreateExportsObject_fn;
    type->fp_GetFile = Module__GetFile_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Module__Dispose_fn;
    return type;
}

// protected generated Module() :7
void Module__ctor__fn(Module* __this)
{
    __this->ctor_();
}

// private virtual object CreateExportsObject(Fuse.Scripting.Context c) :76
void Module__CreateExportsObject_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    return *__retval = uPtr(c)->NewObject(), void();
}

// public void Dispose() :81
void Module__Dispose_fn(Module* __this)
{
    __this->Dispose();
}

// public Fuse.Scripting.ModuleResult Evaluate(Fuse.Scripting.Context c, string id) :15
void Module__Evaluate1_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval)
{
    *__retval = __this->Evaluate1(c, id);
}

// public object EvaluateExports(Fuse.Scripting.Context c, string id) :9
void Module__EvaluateExports_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, uObject** __retval)
{
    *__retval = __this->EvaluateExports(c, id);
}

// public virtual Uno.UX.FileSource GetFile() :71
void Module__GetFile_fn(Module* __this, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = NULL, void();
}

// protected bool get_IsEvaluated() :41
void Module__get_IsEvaluated_fn(Module* __this, bool* __retval)
{
    *__retval = __this->IsEvaluated();
}

// private void MarkEvaluated() :57
void Module__MarkEvaluated_fn(Module* __this)
{
    __this->MarkEvaluated();
}

// protected generated Module() [instance] :7
void Module::ctor_()
{
}

// public void Dispose() [instance] :81
void Module::Dispose()
{
}

// public Fuse.Scripting.ModuleResult Evaluate(Fuse.Scripting.Context c, string id) [instance] :15
::g::Fuse::Scripting::ModuleResult* Module::Evaluate1(::g::Fuse::Scripting::Context* c, uString* id)
{
    ::g::Fuse::Scripting::ModuleResult* mr = uPtr(c)->TryGetGlobalModuleResult(id);

    if (mr != NULL)
        return mr;

    ::g::Fuse::Scripting::Object* module = c->NewObject();
    uPtr(module)->Item(::STRINGS[19/*"exports"*/], CreateExportsObject(c));
    module->Item(::STRINGS[20/*"disposed"*/], c->NewArray(uArray::New(::TYPES[7/*object[]*/], 0)));
    ::g::Fuse::Scripting::ModuleResult* result = ::g::Fuse::Scripting::ModuleResult::New1(c, id, this, module);

    if (::g::Uno::String::op_Inequality(id, NULL))
        uPtr(c)->RegisterGlobalModuleResult(result);

    try
    {
        Evaluate(c, result);
        MarkEvaluated();
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[17/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* e = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            uPtr(result)->Error(e);
        }
        else throw __t;
    }

    if (::g::Uno::String::op_Inequality(id, NULL))
        uPtr(module)->Item(::STRINGS[21/*"id"*/], id);

    return result;
}

// public object EvaluateExports(Fuse.Scripting.Context c, string id) [instance] :9
uObject* Module::EvaluateExports(::g::Fuse::Scripting::Context* c, uString* id)
{
    uObject* r = uPtr(uPtr(Evaluate1(c, id))->Object)->Item(::STRINGS[19/*"exports"*/]);
    return r;
}

// protected bool get_IsEvaluated() [instance] :41
bool Module::IsEvaluated()
{
    return _isEvaluated;
}

// private void MarkEvaluated() [instance] :57
void Module::MarkEvaluated()
{
    _isEvaluated = true;
    uDelegate* handler = _evaluated;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
        _evaluated = NULL;
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ModuleResult.uno
// -------------------------------------------------------------------

// public sealed class ModuleResult :10
// {
static void ModuleResult_build(uType* type)
{
    ::STRINGS[20] = uString::Const("disposed");
    ::STRINGS[22] = uString::Const("(unknown module)");
    ::TYPES[18] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(ModuleResult, _fileListening), 0,
        ::g::Uno::Bool_typeof(), offsetof(ModuleResult, _globalKeyListening), 0,
        ::TYPES[18/*Uno.Collections.List<Uno.Action>*/], offsetof(ModuleResult, _invalidateCallbacks), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ModuleResult, Context), 0,
        ::g::Uno::String_typeof(), offsetof(ModuleResult, Id), 0,
        ::g::Fuse::Scripting::Module_typeof(), offsetof(ModuleResult, Module), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(ModuleResult, Object), 0,
        ::g::Fuse::Scripting::ScriptException_typeof(), offsetof(ModuleResult, _Error), 0);
}

uType* ModuleResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ModuleResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ModuleResult", options);
    type->fp_build_ = ModuleResult_build;
    type->fp_ToString = (void(*)(uObject*, uString**))ModuleResult__ToString_fn;
    return type;
}

// public ModuleResult(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) :23
void ModuleResult__ctor__fn(ModuleResult* __this, ::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_(context, id, mod, obj);
}

// public void AddDependency(Uno.Action invalidateCallback) :55
void ModuleResult__AddDependency_fn(ModuleResult* __this, uDelegate* invalidateCallback)
{
    __this->AddDependency(invalidateCallback);
}

// public void Dispose() :88
void ModuleResult__Dispose_fn(ModuleResult* __this)
{
    __this->Dispose();
}

// public generated Fuse.Scripting.ScriptException get_Error() :18
void ModuleResult__get_Error_fn(ModuleResult* __this, ::g::Fuse::Scripting::ScriptException** __retval)
{
    *__retval = __this->Error();
}

// internal generated void set_Error(Fuse.Scripting.ScriptException value) :18
void ModuleResult__set_Error_fn(ModuleResult* __this, ::g::Fuse::Scripting::ScriptException* value)
{
    __this->Error(value);
}

// public void Invalidate() :75
void ModuleResult__Invalidate_fn(ModuleResult* __this)
{
    __this->Invalidate();
}

// public ModuleResult New(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) :23
void ModuleResult__New1_fn(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj, ModuleResult** __retval)
{
    *__retval = ModuleResult::New1(context, id, mod, obj);
}

// private void OnDataChanged(object sender, Uno.EventArgs args) :60
void ModuleResult__OnDataChanged_fn(ModuleResult* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataChanged(sender, args);
}

// private void OnDisposed() :107
void ModuleResult__OnDisposed_fn(ModuleResult* __this)
{
    __this->OnDisposed();
}

// private void OnGlobalKeyChanged(string key) :48
void ModuleResult__OnGlobalKeyChanged_fn(ModuleResult* __this, uString* key)
{
    __this->OnGlobalKeyChanged(key);
}

// public override sealed string ToString() :65
void ModuleResult__ToString_fn(ModuleResult* __this, uString** __retval)
{
    if (::g::Uno::String::op_Inequality(__this->Id, NULL))
        return *__retval = __this->Id, void();

    if (uPtr(__this->Module)->GetFile() != NULL)
        return *__retval = uPtr(uPtr(__this->Module)->GetFile())->Name, void();

    return *__retval = ::STRINGS[22/*"(unknown mo...*/], void();
}

// public ModuleResult(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) [instance] :23
void ModuleResult::ctor_(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    _invalidateCallbacks = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[18/*Uno.Collections.List<Uno.Action>*/]));
    Context = context;
    Module = mod;
    Object = obj;
    Id = id;

    if (::g::Uno::String::op_Inequality(Id, NULL))
    {
        _globalKeyListening = true;
        ::g::Uno::UX::Resource::AddGlobalKeyListener(uDelegate::New(::TYPES[19/*Uno.Action<string>*/], (void*)ModuleResult__OnGlobalKeyChanged_fn, this));
    }

    if (uPtr(Module)->GetFile() != NULL)
    {
        uPtr(uPtr(Module)->GetFile())->add_DataChanged(uDelegate::New(::TYPES[20/*Uno.EventHandler<Uno.EventArgs>*/], (void*)ModuleResult__OnDataChanged_fn, this));
        _fileListening = true;
    }
}

// public void AddDependency(Uno.Action invalidateCallback) [instance] :55
void ModuleResult::AddDependency(uDelegate* invalidateCallback)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_invalidateCallbacks), invalidateCallback);
}

// public void Dispose() [instance] :88
void ModuleResult::Dispose()
{
    if (_fileListening)
    {
        uPtr(uPtr(Module)->GetFile())->remove_DataChanged(uDelegate::New(::TYPES[20/*Uno.EventHandler<Uno.EventArgs>*/], (void*)ModuleResult__OnDataChanged_fn, this));
        _fileListening = false;
    }

    if (_globalKeyListening)
    {
        ::g::Uno::UX::Resource::RemoveGlobalKeyListener(uDelegate::New(::TYPES[19/*Uno.Action<string>*/], (void*)ModuleResult__OnGlobalKeyChanged_fn, this));
        _globalKeyListening = false;
    }

    if (::g::Uno::String::op_Inequality(Id, NULL))
        uPtr(Context)->DeleteGlobalModuleResult(this);

    uPtr(Context)->Invoke(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)ModuleResult__OnDisposed_fn, this));
}

// public generated Fuse.Scripting.ScriptException get_Error() [instance] :18
::g::Fuse::Scripting::ScriptException* ModuleResult::Error()
{
    return _Error;
}

// internal generated void set_Error(Fuse.Scripting.ScriptException value) [instance] :18
void ModuleResult::Error(::g::Fuse::Scripting::ScriptException* value)
{
    _Error = value;
}

// public void Invalidate() [instance] :75
void ModuleResult::Invalidate()
{
    Dispose();
    uArray* callbacks = (uArray*)uPtr(_invalidateCallbacks)->ToArray();
    uPtr(_invalidateCallbacks)->Clear();

    for (int index2 = 0, length3 = uPtr(callbacks)->Length(); index2 < length3; ++index2)
    {
        uDelegate* c = uPtr(callbacks)->Strong<uDelegate*>(index2);
        uPtr(c)->InvokeVoid();
    }
}

// private void OnDataChanged(object sender, Uno.EventArgs args) [instance] :60
void ModuleResult::OnDataChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    Invalidate();
}

// private void OnDisposed() [instance] :107
void ModuleResult::OnDisposed()
{
    if (uPtr(Object)->ContainsKey(::STRINGS[20/*"disposed"*/]))
    {
        ::g::Fuse::Scripting::Array* disposed = uAs< ::g::Fuse::Scripting::Array*>(uPtr(Object)->Item(::STRINGS[20/*"disposed"*/]), ::TYPES[10/*Fuse.Scripting.Array*/]);

        if (disposed != NULL)

            for (int i = 0; i < uPtr(disposed)->Length(); i++)
            {
                ::g::Fuse::Scripting::Function* func = uCast< ::g::Fuse::Scripting::Function*>(uPtr(disposed)->Item(i), ::TYPES[6/*Fuse.Scripting.Function*/]);

                if (func != NULL)
                    uPtr(func)->Call(uArray::New(::TYPES[7/*object[]*/], 0));
            }
    }
}

// private void OnGlobalKeyChanged(string key) [instance] :48
void ModuleResult::OnGlobalKeyChanged(uString* key)
{
    if (::g::Uno::String::op_Equality(key, Id))
        Invalidate();
}

// public ModuleResult New(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) [static] :23
ModuleResult* ModuleResult::New1(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    ModuleResult* obj4 = (ModuleResult*)uNew(ModuleResult_typeof());
    obj4->ctor_(context, id, mod, obj);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeFunction.uno
// ---------------------------------------------------------------------

// public delegate object NativeCallback(Fuse.Scripting.Context c, object[] args) :6
uDelegateType* NativeCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.NativeCallback", 2, 0);
    type->SetSignature(uObject_typeof(),
        ::g::Fuse::Scripting::Context_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeEvent.uno
// ------------------------------------------------------------------

// public sealed class NativeEvent :7
// {
static void NativeEvent_build(uType* type)
{
    ::STRINGS[23] = uString::Const("this.Context != null");
    ::STRINGS[24] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeEvent.uno");
    ::TYPES[21] = ::g::Uno::Collections::Queue_typeof()->MakeType(uObject_typeof()->Array(), NULL);
    ::TYPES[22] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1/*Invoke1<object[], object>*/, uObject_typeof()->Array(), uObject_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Func1_typeof()->MakeType(uObject_typeof()->Array(), uObject_typeof(), NULL);
    ::TYPES[7] = uObject_typeof()->Array();
    type->SetBase(::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL));
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(8,
        ::TYPES[21/*Uno.Collections.Queue<object[]>*/], offsetof(NativeEvent, _eventArgsQueue), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(NativeEvent, _jsFunction), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeEvent, _queueEventsBeforeEvaluation), 0);
}

::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeProperty_typeof();
    options.FieldCount = 11;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeEvent);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeProperty_type);
    type = (::g::Fuse::Scripting::NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeEvent", options);
    type->fp_build_ = NativeEvent_build;
    type->fp_GetProperty = (void(*)(::g::Fuse::Scripting::NativeProperty*, uTRef))NativeEvent__GetProperty_fn;
    type->fp_SetProperty1 = (void(*)(::g::Fuse::Scripting::NativeProperty*, void*))NativeEvent__SetProperty1_fn;
    return type;
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) :13
void NativeEvent__ctor_4_fn(NativeEvent* __this, uString* name, bool* queueEventsBeforeHandlerIsSet)
{
    __this->ctor_4(name, *queueEventsBeforeHandlerIsSet);
}

// private void DispatchQueue() :30
void NativeEvent__DispatchQueue_fn(NativeEvent* __this)
{
    __this->DispatchQueue();
}

// protected override sealed Fuse.Scripting.Function GetProperty() :25
void NativeEvent__GetProperty_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function** __retval)
{
    return *__retval = __this->_jsFunction, void();
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) :13
void NativeEvent__New4_fn(uString* name, bool* queueEventsBeforeHandlerIsSet, NativeEvent** __retval)
{
    *__retval = NativeEvent::New4(name, *queueEventsBeforeHandlerIsSet);
}

// internal object RaiseSync(object[] args) :44
void NativeEvent__RaiseSync_fn(NativeEvent* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->RaiseSync(args);
}

// protected override sealed void SetProperty(Fuse.Scripting.Function function) :19
void NativeEvent__SetProperty1_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function* function)
{
    __this->_jsFunction = function;
    __this->DispatchQueue();
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) [instance] :13
void NativeEvent::ctor_4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    ctor_1(name);
    _eventArgsQueue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[21/*Uno.Collections.Queue<object[]>*/]));
    _queueEventsBeforeEvaluation = queueEventsBeforeHandlerIsSet;
}

// private void DispatchQueue() [instance] :30
void NativeEvent::DispatchQueue()
{
    uArray* ret2;

    while ((uPtr(_eventArgsQueue)->Count() > 0) && (_jsFunction != NULL))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke11_fn(::TYPES[22/*Uno.Threading.IDispatcherExtensions.Invoke1<object[], object>*/], uPtr(Context())->Dispatcher(), uDelegate::New(::TYPES[23/*Uno.Func<object[], object>*/], uPtr(_jsFunction), offsetof(::g::Fuse::Scripting::Function_type, fp_Call)), (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_eventArgsQueue), &ret2), ret2));
}

// internal object RaiseSync(object[] args) [instance] :44
uObject* NativeEvent::RaiseSync(uArray* args)
{
    ::g::Uno::Diagnostics::Debug::Assert(Context() != NULL, ::STRINGS[23/*"this.Contex...*/], ::STRINGS[24/*"/usr/local/...*/], 46, uArray::New(::TYPES[7/*object[]*/], 0));

    if (_jsFunction != NULL)
        ::g::Uno::Threading::IDispatcherExtensions__Invoke11_fn(::TYPES[22/*Uno.Threading.IDispatcherExtensions.Invoke1<object[], object>*/], uPtr(Context())->Dispatcher(), uDelegate::New(::TYPES[23/*Uno.Func<object[], object>*/], uPtr(_jsFunction), offsetof(::g::Fuse::Scripting::Function_type, fp_Call)), args);

    return NULL;
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) [static] :13
NativeEvent* NativeEvent::New4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    NativeEvent* obj1 = (NativeEvent*)uNew(NativeEvent_typeof());
    obj1->ctor_4(name, queueEventsBeforeHandlerIsSet);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeEventEmitterModule.uno
// -------------------------------------------------------------------------------

// public class NativeEventEmitterModule :9
// {
static void NativeEventEmitterModule_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Scripting::EventEmitterModule_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativeEventEmitterModule, _context), 0,
        uObject_typeof()->Array(), offsetof(NativeEventEmitterModule, _eventNames), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeEventEmitterModule, _initialized), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), NULL), offsetof(NativeEventEmitterModule, _listeningCallbacks), 0,
        uObject_typeof(), offsetof(NativeEventEmitterModule, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL), NULL), offsetof(NativeEventEmitterModule, _queuedEvents), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeEventEmitterModule, _queueEventsBeforeInit), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(NativeEventEmitterModule, _this), 0);
}

::g::Fuse::Scripting::NativeModule_type* NativeEventEmitterModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeEventEmitterModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Scripting.NativeEventEmitterModule", options);
    type->fp_build_ = NativeEventEmitterModule_build;
    type->fp_CreateExportsObject = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, uObject**))NativeEventEmitterModule__CreateExportsObject_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public NativeEventEmitterModule(bool queueEventsBeforeInit, object[] eventNames) :25
void NativeEventEmitterModule__ctor_2_fn(NativeEventEmitterModule* __this, bool* queueEventsBeforeInit, uArray* eventNames)
{
    __this->ctor_2(*queueEventsBeforeInit, eventNames);
}

// private override sealed object CreateExportsObject(Fuse.Scripting.Context c) :55
void NativeEventEmitterModule__CreateExportsObject_fn(NativeEventEmitterModule* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    __this->_context = c;
    __this->_this = uPtr(::g::Fuse::Scripting::EventEmitterModule::GetConstructor(__this->_context))->Construct(__this->_eventNames);
    ::g::Fuse::Scripting::AppInitialized::On(c, uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NativeEventEmitterModule__OnAppInitialized_fn, __this));
    return *__retval = __this->_this, void();
}

// private void Dispatch(Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object> action, [bool alwaysQueueEventBeforeInit]) :127
void NativeEventEmitterModule__Dispatch_fn(NativeEventEmitterModule* __this, uDelegate* action, bool* alwaysQueueEventBeforeInit)
{
    __this->Dispatch(action, *alwaysQueueEventBeforeInit);
}

// protected void Emit(object[] args) :81
void NativeEventEmitterModule__Emit_fn(NativeEventEmitterModule* __this, uArray* args)
{
    __this->Emit(args);
}

// protected void On(object eventName, Fuse.Scripting.Callback listener) :156
void NativeEventEmitterModule__On_fn(NativeEventEmitterModule* __this, uObject* eventName, uDelegate* listener)
{
    __this->On(eventName, listener);
}

// protected void On(object eventName, Fuse.Scripting.NativeEvent nativeEvent) :147
void NativeEventEmitterModule__On1_fn(NativeEventEmitterModule* __this, uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent)
{
    __this->On1(eventName, nativeEvent);
}

// private void OnAppInitialized() :65
void NativeEventEmitterModule__OnAppInitialized_fn(NativeEventEmitterModule* __this)
{
    __this->OnAppInitialized();
}

// private void ResetListeners(object sender, Uno.EventArgs eventArgs) :33
void NativeEventEmitterModule__ResetListeners_fn(NativeEventEmitterModule* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->ResetListeners(sender, eventArgs);
}

// private void ResetListenersJS() :45
void NativeEventEmitterModule__ResetListenersJS_fn(NativeEventEmitterModule* __this)
{
    __this->ResetListenersJS();
}

// public NativeEventEmitterModule(bool queueEventsBeforeInit, object[] eventNames) [instance] :25
void NativeEventEmitterModule::ctor_2(bool queueEventsBeforeInit, uArray* eventNames)
{
    _listeningCallbacks = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[12/*Fuse.Scripting.Callback*/], NULL), NULL)));
    _mutex = ::g::Uno::Object::New();
    _queuedEvents = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[11/*Fuse.Scripting.Object*/], NULL), NULL)));
    ctor_1();
    _queueEventsBeforeInit = queueEventsBeforeInit;
    _eventNames = eventNames;
    add_Reset(uDelegate::New(::TYPES[26/*Uno.EventHandler*/], (void*)NativeEventEmitterModule__ResetListeners_fn, this));
}

// private void Dispatch(Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object> action, [bool alwaysQueueEventBeforeInit]) [instance] :127
void NativeEventEmitterModule::Dispatch(uDelegate* action, bool alwaysQueueEventBeforeInit)
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (!_initialized)
        {
            if (alwaysQueueEventBeforeInit || _queueEventsBeforeInit)
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_queuedEvents), action);

            return;
        }
    }

    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2/*Invoke2<Fuse.Scripting.Context, Fuse.Scripting.Object>*/, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[11/*Fuse.Scripting.Object*/], NULL), uPtr(_context)->Dispatcher(), action, _context, _this);
}

// protected void Emit(object[] args) [instance] :81
void NativeEventEmitterModule::Emit(uArray* args)
{
    Dispatch(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[11/*Fuse.Scripting.Object*/], NULL), (void*)NativeEventEmitterModule__EmitClosure__Emit_fn, NativeEventEmitterModule__EmitClosure::New1(args)), false);
}

// protected void On(object eventName, Fuse.Scripting.Callback listener) [instance] :156
void NativeEventEmitterModule::On(uObject* eventName, uDelegate* listener)
{
    ::g::Uno::Tuple2* ret4;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(_listeningCallbacks), (::g::Uno::Tuple__Create1_fn(::g::Uno::Tuple_typeof()->MakeMethod(0/*Create<object, Fuse.Scripting.Callback>*/, uObject_typeof(), ::TYPES[12/*Fuse.Scripting.Callback*/], NULL), eventName, listener, &ret4), ret4));
    }

    Dispatch(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[11/*Fuse.Scripting.Object*/], NULL), (void*)NativeEventEmitterModule__OnClosure__On_fn, NativeEventEmitterModule__OnClosure::New1(eventName, listener)), true);
}

// protected void On(object eventName, Fuse.Scripting.NativeEvent nativeEvent) [instance] :147
void NativeEventEmitterModule::On1(uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent)
{
    On(eventName, uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::NativeEvent__RaiseSync_fn, uPtr(nativeEvent)));
}

// private void OnAppInitialized() [instance] :65
void NativeEventEmitterModule::OnAppInitialized()
{
    uDelegate* ret5;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        _initialized = true;

        while (uPtr(_queuedEvents)->Count() > 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_queuedEvents), &ret5), ret5))->Invoke(2, (::g::Fuse::Scripting::Context*)_context, (::g::Fuse::Scripting::Object*)_this);
    }
}

// private void ResetListeners(object sender, Uno.EventArgs eventArgs) [instance] :33
void NativeEventEmitterModule::ResetListeners(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        _initialized = false;
        uPtr(_queuedEvents)->Clear();
    }

    if (_context != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_context)->Dispatcher()), ::TYPES[8/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NativeEventEmitterModule__ResetListenersJS_fn, this));
}

// private void ResetListenersJS() [instance] :45
void NativeEventEmitterModule::ResetListenersJS()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Tuple2*> > ret6;
    uObject* ret7;
    uDelegate* ret8;
    uPtr(_this)->CallMethod(uString::Const("removeAllListeners"), uArray::New(::TYPES[7/*object[]*/], 0));
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Tuple2*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_listeningCallbacks), &ret6), ret6);

        {
            const auto __finally_fun = [&]()
            {
                enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[12/*Fuse.Scripting.Callback*/], NULL), NULL));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (enum1.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[12/*Fuse.Scripting.Callback*/], NULL), NULL)))
            {
                ::g::Uno::Tuple2* l = enum1.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[12/*Fuse.Scripting.Callback*/], NULL), NULL));
                Dispatch(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[11/*Fuse.Scripting.Object*/], NULL), (void*)NativeEventEmitterModule__OnClosure__On_fn, NativeEventEmitterModule__OnClosure::New1((::g::Uno::Tuple2__get_Item1_fn(uPtr(l), &ret7), ret7), (::g::Uno::Tuple2__get_Item2_fn(uPtr(l), &ret8), ret8))), true);
            }
        }
    }

    ::g::Fuse::Scripting::AppInitialized::On(_context, uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NativeEventEmitterModule__OnAppInitialized_fn, this));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeFunction.uno
// ---------------------------------------------------------------------

// public sealed class NativeFunction :8
// {
static void NativeFunction_build(uType* type)
{
    type->SetFields(3,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(NativeFunction, _nativeCallback), 0);
}

::g::Fuse::Scripting::NativeMember_type* NativeFunction_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NativeFunction);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativeFunction", options);
    type->fp_build_ = NativeFunction_build;
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeFunction__CreateObject_fn;
    return type;
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) :22
void NativeFunction__ctor_1_fn(NativeFunction* __this, uString* name, uDelegate* callback)
{
    __this->ctor_1(name, callback);
}

// internal Fuse.Scripting.Callback CreateCallback() :17
void NativeFunction__CreateCallback_fn(NativeFunction* __this, uDelegate** __retval)
{
    *__retval = __this->CreateCallback();
}

// protected override sealed object CreateObject() :12
void NativeFunction__CreateObject_fn(NativeFunction* __this, uObject** __retval)
{
    return *__retval = __this->CreateCallback(), void();
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) :22
void NativeFunction__New1_fn(uString* name, uDelegate* callback, NativeFunction** __retval)
{
    *__retval = NativeFunction::New1(name, callback);
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) [instance] :22
void NativeFunction::ctor_1(uString* name, uDelegate* callback)
{
    ctor_(name);
    _nativeCallback = callback;
}

// internal Fuse.Scripting.Callback CreateCallback() [instance] :17
uDelegate* NativeFunction::CreateCallback()
{
    return uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)NativeFunction__NativeFunctionClosure__Callback_fn, NativeFunction__NativeFunctionClosure::New1(_nativeCallback, Context()));
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) [static] :22
NativeFunction* NativeFunction::New1(uString* name, uDelegate* callback)
{
    NativeFunction* obj1 = (NativeFunction*)uNew(NativeFunction_typeof());
    obj1->ctor_1(name, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeFunction.uno
// ---------------------------------------------------------------------

// private sealed class NativeFunction.NativeFunctionClosure :27
// {
static void NativeFunction__NativeFunctionClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(NativeFunction__NativeFunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativeFunction__NativeFunctionClosure, _context), 0);
}

uType* NativeFunction__NativeFunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeFunction__NativeFunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeFunction.NativeFunctionClosure", options);
    type->fp_build_ = NativeFunction__NativeFunctionClosure_build;
    return type;
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :32
void NativeFunction__NativeFunctionClosure__ctor__fn(NativeFunction__NativeFunctionClosure* __this, uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(callback, context);
}

// public object Callback(object[] args) :38
void NativeFunction__NativeFunctionClosure__Callback_fn(NativeFunction__NativeFunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :32
void NativeFunction__NativeFunctionClosure__New1_fn(uDelegate* callback, ::g::Fuse::Scripting::Context* context, NativeFunction__NativeFunctionClosure** __retval)
{
    *__retval = NativeFunction__NativeFunctionClosure::New1(callback, context);
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [instance] :32
void NativeFunction__NativeFunctionClosure::ctor_(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    _context = context;
    _callback = callback;
}

// public object Callback(object[] args) [instance] :38
uObject* NativeFunction__NativeFunctionClosure::Callback(uArray* args)
{
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [static] :32
NativeFunction__NativeFunctionClosure* NativeFunction__NativeFunctionClosure::New1(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    NativeFunction__NativeFunctionClosure* obj1 = (NativeFunction__NativeFunctionClosure*)uNew(NativeFunction__NativeFunctionClosure_typeof());
    obj1->ctor_(callback, context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeMember.uno
// -------------------------------------------------------------------

// public abstract class NativeMember :6
// {
static void NativeMember_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativeMember, _Context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(NativeMember, _ModuleObject), 0,
        ::g::Uno::String_typeof(), offsetof(NativeMember, _Name), 0);
}

NativeMember_type* NativeMember_typeof()
{
    static uSStrong<NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeMember);
    options.TypeSize = sizeof(NativeMember_type);
    type = (NativeMember_type*)uClassType::New("Fuse.Scripting.NativeMember", options);
    type->fp_build_ = NativeMember_build;
    return type;
}

// protected internal NativeMember(string name) :11
void NativeMember__ctor__fn(NativeMember* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated Fuse.Scripting.Context get_Context() :9
void NativeMember__get_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(Fuse.Scripting.Context value) :9
void NativeMember__set_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context* value)
{
    __this->Context(value);
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) :13
void NativeMember__Create_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    __this->Create(obj, context);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() :10
void NativeMember__get_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->ModuleObject();
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) :10
void NativeMember__set_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->ModuleObject(value);
}

// protected generated string get_Name() :8
void NativeMember__get_Name_fn(NativeMember* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :8
void NativeMember__set_Name_fn(NativeMember* __this, uString* value)
{
    __this->Name(value);
}

// protected internal NativeMember(string name) [instance] :11
void NativeMember::ctor_(uString* name)
{
    Name(name);
}

// public generated Fuse.Scripting.Context get_Context() [instance] :9
::g::Fuse::Scripting::Context* NativeMember::Context()
{
    return _Context;
}

// private generated void set_Context(Fuse.Scripting.Context value) [instance] :9
void NativeMember::Context(::g::Fuse::Scripting::Context* value)
{
    _Context = value;
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) [instance] :13
void NativeMember::Create(::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    ModuleObject(obj);
    Context(context);
    uObject* member = CreateObject();

    if (member != NULL)
        uPtr(ModuleObject())->Item(Name(), member);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() [instance] :10
::g::Fuse::Scripting::Object* NativeMember::ModuleObject()
{
    return _ModuleObject;
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) [instance] :10
void NativeMember::ModuleObject(::g::Fuse::Scripting::Object* value)
{
    _ModuleObject = value;
}

// protected generated string get_Name() [instance] :8
uString* NativeMember::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :8
void NativeMember::Name(uString* value)
{
    _Name = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeModule.uno
// -------------------------------------------------------------------

// public class NativeModule :6
// {
static void NativeModule_build(uType* type)
{
    ::STRINGS[25] = uString::Const("NativeModule(): Cannot add more members after first use");
    ::STRINGS[19] = uString::Const("exports");
    ::TYPES[24] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[25] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof(), NULL);
    ::TYPES[26] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(NativeModule_type, interface1));
    type->SetFields(2,
        ::TYPES[24/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/], offsetof(NativeModule, _members), 0,
        ::TYPES[26/*Uno.EventHandler*/], offsetof(NativeModule, Reset1), 0);
}

NativeModule_type* NativeModule_typeof()
{
    static uSStrong<NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Module_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeModule);
    options.TypeSize = sizeof(NativeModule_type);
    type = (NativeModule_type*)uClassType::New("Fuse.Scripting.NativeModule", options);
    type->fp_build_ = NativeModule_build;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))NativeModule__Evaluate_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public generated NativeModule() :6
void NativeModule__ctor_1_fn(NativeModule* __this)
{
    __this->ctor_1();
}

// protected void AddMember(Fuse.Scripting.NativeMember member) :23
void NativeModule__AddMember_fn(NativeModule* __this, ::g::Fuse::Scripting::NativeMember* member)
{
    __this->AddMember(member);
}

// public override void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :30
void NativeModule__Evaluate_fn(NativeModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > ret3;
    ::g::Fuse::Scripting::Object* module = uPtr(result)->Object;

    if (module != NULL)
    {
        ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(module)->Item(::STRINGS[19/*"exports"*/]), ::TYPES[11/*Fuse.Scripting.Object*/]);

        if (obj != NULL)
        {
            ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_members), &ret3), ret3);

            {
                const auto __finally_fun = [&]()
                {
                    enum1.Dispose(::TYPES[25/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]);
                };

                const uFinally<decltype(__finally_fun)> __f(__finally_fun);

                while (enum1.MoveNext(::TYPES[25/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]))
                {
                    ::g::Fuse::Scripting::NativeMember* m = enum1.Current(::TYPES[25/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]);
                    uPtr(m)->Create(obj, c);
                }
            }
        }
    }
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :10
void NativeModule__FuseScriptingIModuleProviderGetModule_fn(NativeModule* __this, ::g::Fuse::Scripting::Module** __retval)
{
    return *__retval = __this, void();
}

// internal void InternalReset() :17
void NativeModule__InternalReset_fn(NativeModule* __this)
{
    __this->InternalReset();
}

// public generated void add_Reset(Uno.EventHandler value) :15
void NativeModule__add_Reset_fn(NativeModule* __this, uDelegate* value)
{
    __this->add_Reset(value);
}

// public generated void remove_Reset(Uno.EventHandler value) :15
void NativeModule__remove_Reset_fn(NativeModule* __this, uDelegate* value)
{
    __this->remove_Reset(value);
}

// public generated NativeModule() [instance] :6
void NativeModule::ctor_1()
{
    _members = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[24/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/]));
    ctor_();
}

// protected void AddMember(Fuse.Scripting.NativeMember member) [instance] :23
void NativeModule::AddMember(::g::Fuse::Scripting::NativeMember* member)
{
    if (IsEvaluated())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[25/*"NativeModul...*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_members), member);
}

// internal void InternalReset() [instance] :17
void NativeModule::InternalReset()
{
    if (::g::Uno::Delegate::op_Inequality(Reset1, NULL))
        uPtr(Reset1)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// public generated void add_Reset(Uno.EventHandler value) [instance] :15
void NativeModule::add_Reset(uDelegate* value)
{
    Reset1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Reset1, value), ::TYPES[26/*Uno.EventHandler*/]);
}

// public generated void remove_Reset(Uno.EventHandler value) [instance] :15
void NativeModule::remove_Reset(uDelegate* value)
{
    Reset1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Reset1, value), ::TYPES[26/*Uno.EventHandler*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativePromise.uno
// --------------------------------------------------------------------

// public sealed class NativePromise<T, TJSResult> :40
// {
static void NativePromise_build(uType* type)
{
    type->SetPrecalc(
        NativePromise__ContextClosure_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Fuse::Scripting::FactoryClosure_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(3,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0), NULL), offsetof(NativePromise, _func), 0,
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0), NULL), offsetof(NativePromise, _futureFactory), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativePromise, _resultConverter), 0);
}

::g::Fuse::Scripting::NativeMember_type* NativePromise_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 6;
    options.GenericCount = 2;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(NativePromise);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativePromise`2", options);
    type->fp_build_ = NativePromise_build;
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativePromise__CreateObject_fn;
    return type;
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :60
void NativePromise__ctor_1_fn(NativePromise* __this, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    __this->ctor_1(name, futureFactory, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :46
void NativePromise__ctor_2_fn(NativePromise* __this, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    __this->ctor_2(name, func, resultConverter);
}

// protected override sealed object CreateObject() :66
void NativePromise__CreateObject_fn(NativePromise* __this, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Scripting.NativePromise<T, TJSResult>.ContextClosure*/),
    };
    return *__retval = uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)NativePromise__ContextClosure__CreatePromise_fn, NativePromise__ContextClosure::New1(__types[0], __this->Context(), __this->_futureFactory, __this->_resultConverter)), void();
}

// private Uno.Threading.Future<T> Factory(object[] args) :53
void NativePromise__Factory_fn(NativePromise* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Factory(args);
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :60
void NativePromise__New1_fn(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New1(__type, name, futureFactory, resultConverter);
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :46
void NativePromise__New2_fn(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New2(__type, name, func, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :60
void NativePromise::ctor_1(uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    ctor_(name);
    _futureFactory = futureFactory;
    _resultConverter = resultConverter;
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :46
void NativePromise::ctor_2(uString* name, uDelegate* func, uDelegate* resultConverter)
{
    uType* __types[] = {
        __type->Precalced(2/*Fuse.Scripting.FutureFactory<T>*/),
    };
    ctor_(name);
    _func = func;
    _futureFactory = uDelegate::New(__types[0], (void*)NativePromise__Factory_fn, this);
    _resultConverter = resultConverter;
}

// private Uno.Threading.Future<T> Factory(object[] args) [instance] :53
::g::Uno::Threading::Future1* NativePromise::Factory(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Threading.Promise<T>*/),
        __type->Precalced(1/*Fuse.Scripting.FactoryClosure<T>*/),
    };
    ::g::Uno::Threading::Promise* future = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    ::g::Uno::Threading::Thread::New2(uDelegate::New(::g::Uno::Threading::ThreadStart_typeof(), (void*)::g::Fuse::Scripting::FactoryClosure__Run_fn, (::g::Fuse::Scripting::FactoryClosure*)::g::Fuse::Scripting::FactoryClosure::New1(__types[1], _func, args, future)))->Start();
    return future;
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :60
NativePromise* NativePromise::New1(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    NativePromise* obj2 = (NativePromise*)uNew(__type);
    obj2->ctor_1(name, futureFactory, resultConverter);
    return obj2;
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :46
NativePromise* NativePromise::New2(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    NativePromise* obj1 = (NativePromise*)uNew(__type);
    obj1->ctor_2(name, func, resultConverter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeProperty.uno
// ---------------------------------------------------------------------

// public class NativeProperty<T, TJSValue> :8
// {
static void NativeProperty_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[27] = ::g::Uno::Func_typeof();
    ::TYPES[28] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL),
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(3,
        ::TYPES[27/*Uno.Func`1*/]->MakeType(type->T(0), NULL), offsetof(NativeProperty, _getHandler), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeProperty, _isReadonly), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[28/*Uno.Action`1*/]->MakeType(type->T(1), NULL), offsetof(NativeProperty, _setHandler), 0,
        ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativeProperty, _valueConverter), 0);
}

NativeProperty_type* NativeProperty_typeof()
{
    static uSStrong<NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 8;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(NativeProperty);
    options.TypeSize = sizeof(NativeProperty_type);
    type = (NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeProperty`2", options);
    type->fp_build_ = NativeProperty_build;
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeProperty__CreateObject_fn;
    type->fp_GetProperty = NativeProperty__GetProperty_fn;
    type->fp_SetProperty1 = NativeProperty__SetProperty1_fn;
    return type;
}

// public NativeProperty(string name) :16
void NativeProperty__ctor_1_fn(NativeProperty* __this, uString* name)
{
    __this->ctor_1(name);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :25
void NativeProperty__ctor_2_fn(NativeProperty* __this, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    __this->ctor_2(name, getHandler, setHandler, valueConverter);
}

// public NativeProperty(string name, TJSValue value) :19
void NativeProperty__ctor_3_fn(NativeProperty* __this, uString* name, void* value)
{
    __this->ctor_2(name, NULL, NULL, NULL);
    __this->_isReadonly = true;
    __this->_readonlyValue() = value;
}

// protected override sealed object CreateObject() :33
void NativeProperty__CreateObject_fn(NativeProperty* __this, uObject** __retval)
{
    if (__this->_isReadonly)
        uPtr(__this->Context())->ObjectDefineProperty1(__this->ModuleObject(), __this->Name(), uBoxPtr(__this->__type->GetBase(NativeProperty_typeof())->T(1), __this->_readonlyValue()), false, false);
    else
        uPtr(__this->Context())->ObjectDefineProperty(__this->ModuleObject(), __this->Name(), uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)NativeProperty__GetProperty1_fn, __this), uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)NativeProperty__SetProperty_fn, __this), false, false);

    return *__retval = NULL, void();
}

// protected virtual T GetProperty() :63
void NativeProperty__GetProperty_fn(NativeProperty* __this, uTRef __retval)
{
    return __retval.Store(__this->__type->GetBase(NativeProperty_typeof())->T(0), uT(__this->__type->GetBase(NativeProperty_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(NativeProperty_typeof())->T(0)->ValueSize))), void();
}

// private object GetProperty(object[] args) :53
void NativeProperty__GetProperty1_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetProperty1(args);
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :25
void NativeProperty__New2_fn(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter, NativeProperty** __retval)
{
    *__retval = NativeProperty::New2(__type, name, getHandler, setHandler, valueConverter);
}

// public NativeProperty New(string name, TJSValue value) :19
void NativeProperty__New3_fn(uType* __type, uString* name, void* value, NativeProperty** __retval)
{
    NativeProperty* obj2 = (NativeProperty*)uNew(__type);
    NativeProperty__ctor_3_fn(obj2, name, value);
    return *__retval = obj2, void();
}

// private object SetProperty(object[] args) :43
void NativeProperty__SetProperty_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SetProperty(args);
}

// protected virtual void SetProperty(TJSValue value) :51
void NativeProperty__SetProperty1_fn(NativeProperty* __this, void* value)
{
}

// public NativeProperty(string name) [instance] :16
void NativeProperty::ctor_1(uString* name)
{
    ctor_2(name, NULL, NULL, NULL);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [instance] :25
void NativeProperty::ctor_2(uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    ctor_(name);
    _setHandler = setHandler;
    _getHandler = getHandler;
    _valueConverter = valueConverter;
}

// private object GetProperty(object[] args) [instance] :53
uObject* NativeProperty::GetProperty1(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->Precalced(1/*Uno.Func<T>*/),
    };
    uT ret4(__type->GetBase(NativeProperty_typeof())->T(1), U_ALLOCA(__type->GetBase(NativeProperty_typeof())->T(1)->ValueSize));
    uT ret5(__type->GetBase(NativeProperty_typeof())->T(0), U_ALLOCA(__type->GetBase(NativeProperty_typeof())->T(0)->ValueSize));
    uT ret6(__type->GetBase(NativeProperty_typeof())->T(0), U_ALLOCA(__type->GetBase(NativeProperty_typeof())->T(0)->ValueSize));

    if (::g::Uno::Delegate::op_Equality(_getHandler, NULL))
        _getHandler = uDelegate::New(__types[0], this, offsetof(NativeProperty_type, fp_GetProperty));

    if (::g::Uno::Delegate::op_Inequality(_valueConverter, NULL))
        return uBoxPtr(__type->GetBase(NativeProperty_typeof())->T(1), (uPtr(_valueConverter)->Invoke(&ret4, 2, (::g::Fuse::Scripting::Context*)Context(), (uPtr(_getHandler)->Invoke(&ret5), (void*)ret5)), ret4));

    return uBoxPtr(__type->GetBase(NativeProperty_typeof())->T(0), (uPtr(_getHandler)->Invoke(&ret6), ret6));
}

// private object SetProperty(object[] args) [instance] :43
uObject* NativeProperty::SetProperty(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->Precalced(0/*Uno.Action<TJSValue>*/),
    };

    if (::g::Uno::Delegate::op_Equality(_setHandler, NULL))
        _setHandler = uDelegate::New(__types[0], this, offsetof(NativeProperty_type, fp_SetProperty1));

    uPtr(_setHandler)->InvokeVoid(((uPtr(args)->Length() > 0) && uIs((uObject*)uPtr(args)->Strong<uObject*>(0), __type->GetBase(NativeProperty_typeof())->T(1))) ? (void*)uUnboxAny(__type->GetBase(NativeProperty_typeof())->T(1), uPtr(args)->Strong<uObject*>(0)) : (void*)uT(__type->GetBase(NativeProperty_typeof())->T(1), U_ALLOCA(__type->GetBase(NativeProperty_typeof())->T(1)->ValueSize)));
    return NULL;
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [static] :25
NativeProperty* NativeProperty::New2(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    NativeProperty* obj3 = (NativeProperty*)uNew(__type);
    obj3->ctor_2(name, getHandler, setHandler, valueConverter);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSCallback.uno
// -----------------------------------------------------------------

// public static class JSCallback.NumberConverter :163
// {
static void JSCallback__NumberConverter_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[29] = ::g::Uno::Short_typeof();
    ::TYPES[30] = ::g::Uno::Int_typeof();
    ::TYPES[31] = ::g::Uno::Long_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[33] = ::g::Uno::Double_typeof();
    ::TYPES[14] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*Convert<TValue>*/, type->MethodTypes[1]->U(0), NULL));
}

uClassType* JSCallback__NumberConverter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback.NumberConverter", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->fp_build_ = JSCallback__NumberConverter_build;
    return type;
}

// private static object Convert(double value, Uno.Type targetType) :228
void JSCallback__NumberConverter__Convert_fn(double* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert(*value, targetType);
}

// private static object Convert(float value, Uno.Type targetType) :219
void JSCallback__NumberConverter__Convert1_fn(float* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert1(*value, targetType);
}

// private static object Convert(int value, Uno.Type targetType) :201
void JSCallback__NumberConverter__Convert2_fn(int* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert2(*value, targetType);
}

// private static object Convert(long value, Uno.Type targetType) :210
void JSCallback__NumberConverter__Convert3_fn(int64_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert3(*value, targetType);
}

// private static object Convert(short value, Uno.Type targetType) :192
void JSCallback__NumberConverter__Convert4_fn(int16_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert4(*value, targetType);
}

// public static object Convert(Uno.Type targetType, object value) :182
void JSCallback__NumberConverter__Convert5_fn(uType* targetType, uObject* value, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert5(targetType, value);
}

// public static TValue Convert<TValue>(object value) :177
void JSCallback__NumberConverter__Convert6_fn(uType* __type, uObject* value, uTRef __retval)
{
    return __retval.Store(__type->U(0), uUnboxAny(__type->U(0), JSCallback__NumberConverter::Convert5(__type->U(0), value))), void();
}

// public static bool TryConvert<TValue>(object value, TValue& convertedValue) :165
void JSCallback__NumberConverter__TryConvert_fn(uType* __type, uObject* value, uTRef convertedValue, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.NumberConverter.Convert<TValue>*/),
    };
    uT ret1(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    convertedValue.Default(__type->U(0));

    try
    {
        convertedValue.Store((JSCallback__NumberConverter__Convert6_fn(__types[0], value, &ret1), ret1));
        return *__retval = true, void();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception_ = __t.Exception;
    }

    return *__retval = false, void();
}

// private static object Convert(double value, Uno.Type targetType) [static] :228
uObject* JSCallback__NumberConverter::Convert(double value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[29/*short*/]))
        return uBox<int16_t>(::TYPES[29/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[30/*int*/]))
        return uBox<int>(::TYPES[30/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[31/*long*/]))
        return uBox<int64_t>(::TYPES[31/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[32/*float*/]))
        return uBox(::TYPES[32/*float*/], (float)value);

    return uBox(::TYPES[33/*double*/], value);
}

// private static object Convert(float value, Uno.Type targetType) [static] :219
uObject* JSCallback__NumberConverter::Convert1(float value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[29/*short*/]))
        return uBox<int16_t>(::TYPES[29/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[30/*int*/]))
        return uBox<int>(::TYPES[30/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[31/*long*/]))
        return uBox<int64_t>(::TYPES[31/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[33/*double*/]))
        return uBox(::TYPES[33/*double*/], (double)value);

    return uBox(::TYPES[32/*float*/], value);
}

// private static object Convert(int value, Uno.Type targetType) [static] :201
uObject* JSCallback__NumberConverter::Convert2(int value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[29/*short*/]))
        return uBox<int16_t>(::TYPES[29/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[31/*long*/]))
        return uBox<int64_t>(::TYPES[31/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[32/*float*/]))
        return uBox(::TYPES[32/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[33/*double*/]))
        return uBox(::TYPES[33/*double*/], (double)value);

    return uBox<int>(::TYPES[30/*int*/], value);
}

// private static object Convert(long value, Uno.Type targetType) [static] :210
uObject* JSCallback__NumberConverter::Convert3(int64_t value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[29/*short*/]))
        return uBox<int16_t>(::TYPES[29/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[30/*int*/]))
        return uBox<int>(::TYPES[30/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[32/*float*/]))
        return uBox(::TYPES[32/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[33/*double*/]))
        return uBox(::TYPES[33/*double*/], (double)value);

    return uBox<int64_t>(::TYPES[31/*long*/], value);
}

// private static object Convert(short value, Uno.Type targetType) [static] :192
uObject* JSCallback__NumberConverter::Convert4(int16_t value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[30/*int*/]))
        return uBox<int>(::TYPES[30/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[31/*long*/]))
        return uBox<int64_t>(::TYPES[31/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[32/*float*/]))
        return uBox(::TYPES[32/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[33/*double*/]))
        return uBox(::TYPES[33/*double*/], (double)value);

    return uBox<int16_t>(::TYPES[29/*short*/], value);
}

// public static object Convert(Uno.Type targetType, object value) [static] :182
uObject* JSCallback__NumberConverter::Convert5(uType* targetType, uObject* value)
{
    if (uIs(value, ::TYPES[29/*short*/]))
        return JSCallback__NumberConverter::Convert4(uUnbox<int16_t>(::TYPES[29/*short*/], value), targetType);

    if (uIs(value, ::TYPES[30/*int*/]))
        return JSCallback__NumberConverter::Convert2(uUnbox<int>(::TYPES[30/*int*/], value), targetType);

    if (uIs(value, ::TYPES[31/*long*/]))
        return JSCallback__NumberConverter::Convert3(uUnbox<int64_t>(::TYPES[31/*long*/], value), targetType);

    if (uIs(value, ::TYPES[32/*float*/]))
        return JSCallback__NumberConverter::Convert1(uUnbox<float>(::TYPES[32/*float*/], value), targetType);

    if (uIs(value, ::TYPES[33/*double*/]))
        return JSCallback__NumberConverter::Convert(uUnbox<double>(::TYPES[33/*double*/], value), targetType);

    return value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno
// ------------------------------------------------------------

// public abstract class Object :32
// {
static void Object_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(Object_type, interface0));
}

Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Fuse.Scripting.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    return type;
}

// protected generated Object() :32
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :42
void Object__Equals_fn(Object* __this, uObject* o, bool* __retval)
{
    Object* a = uAs<Object*>(o, Object_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :48
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Object() [instance] :32
void Object::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeEventEmitterModule.uno
// -------------------------------------------------------------------------------

// private sealed class NativeEventEmitterModule.OnClosure :210
// {
static void NativeEventEmitterModule__OnClosure_build(uType* type)
{
    ::STRINGS[26] = uString::Const("on");
    ::TYPES[7] = uObject_typeof()->Array();
    type->SetFields(0,
        uObject_typeof(), offsetof(NativeEventEmitterModule__OnClosure, _eventName), 0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(NativeEventEmitterModule__OnClosure, _listener), 0);
}

uType* NativeEventEmitterModule__OnClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeEventEmitterModule__OnClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEventEmitterModule.OnClosure", options);
    type->fp_build_ = NativeEventEmitterModule__OnClosure_build;
    return type;
}

// public OnClosure(object eventName, Fuse.Scripting.Callback listener) :215
void NativeEventEmitterModule__OnClosure__ctor__fn(NativeEventEmitterModule__OnClosure* __this, uObject* eventName, uDelegate* listener)
{
    __this->ctor_(eventName, listener);
}

// public OnClosure New(object eventName, Fuse.Scripting.Callback listener) :215
void NativeEventEmitterModule__OnClosure__New1_fn(uObject* eventName, uDelegate* listener, NativeEventEmitterModule__OnClosure** __retval)
{
    *__retval = NativeEventEmitterModule__OnClosure::New1(eventName, listener);
}

// public void On(Fuse.Scripting.Context c, Fuse.Scripting.Object o) :221
void NativeEventEmitterModule__OnClosure__On_fn(NativeEventEmitterModule__OnClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    __this->On(c, o);
}

// public OnClosure(object eventName, Fuse.Scripting.Callback listener) [instance] :215
void NativeEventEmitterModule__OnClosure::ctor_(uObject* eventName, uDelegate* listener)
{
    _eventName = eventName;
    _listener = listener;
}

// public void On(Fuse.Scripting.Context c, Fuse.Scripting.Object o) [instance] :221
void NativeEventEmitterModule__OnClosure::On(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    uPtr(o)->CallMethod(::STRINGS[26/*"on"*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, (uObject*)_eventName, (uDelegate*)_listener));
}

// public OnClosure New(object eventName, Fuse.Scripting.Callback listener) [static] :215
NativeEventEmitterModule__OnClosure* NativeEventEmitterModule__OnClosure::New1(uObject* eventName, uDelegate* listener)
{
    NativeEventEmitterModule__OnClosure* obj1 = (NativeEventEmitterModule__OnClosure*)uNew(NativeEventEmitterModule__OnClosure_typeof());
    obj1->ctor_(eventName, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativePromise.uno
// --------------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.PromiseClosure :90
// {
static void NativePromise__PromiseClosure_build(uType* type)
{
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[28] = ::g::Uno::Action1_typeof();
    ::TYPES[34] = ::TYPES[28/*Uno.Action`1*/]->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetPrecalc(
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativePromise__PromiseClosure, _c), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativePromise__PromiseClosure, _converter), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL), offsetof(NativePromise__PromiseClosure, _promise), 0,
        ::g::Uno::Exception_typeof(), offsetof(NativePromise__PromiseClosure, _reason), 0,
        ::TYPES[6/*Fuse.Scripting.Function*/], offsetof(NativePromise__PromiseClosure, _reject), 0,
        ::TYPES[6/*Fuse.Scripting.Function*/], offsetof(NativePromise__PromiseClosure, _resolve), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* NativePromise__PromiseClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(NativePromise__PromiseClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.PromiseClosure", options);
    type->fp_build_ = NativePromise__PromiseClosure_build;
    return type;
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :100
void NativePromise__PromiseClosure__ctor__fn(NativePromise__PromiseClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    __this->ctor_(context, promise, converter);
}

// private void InternalReject() :142
void NativePromise__PromiseClosure__InternalReject_fn(NativePromise__PromiseClosure* __this)
{
    __this->InternalReject();
}

// private void InternalResolve() :127
void NativePromise__PromiseClosure__InternalResolve_fn(NativePromise__PromiseClosure* __this)
{
    __this->InternalResolve();
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :100
void NativePromise__PromiseClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter, NativePromise__PromiseClosure** __retval)
{
    *__retval = NativePromise__PromiseClosure::New1(__type, context, promise, converter);
}

// private void Reject(Uno.Exception reason) :135
void NativePromise__PromiseClosure__Reject_fn(NativePromise__PromiseClosure* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// private void Resolve(T result) :120
void NativePromise__PromiseClosure__Resolve_fn(NativePromise__PromiseClosure* __this, void* result)
{
    __this->_result() = result;

    if (__this->_resolve != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(__this->_c)->Dispatcher()), ::TYPES[8/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NativePromise__PromiseClosure__InternalResolve_fn, __this));
}

// public object Run(object[] args) :107
void NativePromise__PromiseClosure__Run_fn(NativePromise__PromiseClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :100
void NativePromise__PromiseClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    _c = context;
    _promise = promise;
    _converter = converter;
}

// private void InternalReject() [instance] :142
void NativePromise__PromiseClosure::InternalReject()
{
    uPtr(_reject)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, (uString*)uPtr(_reason)->Message()));
}

// private void InternalResolve() [instance] :127
void NativePromise__PromiseClosure::InternalResolve()
{
    uT ret2(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));

    if (::g::Uno::Delegate::op_Inequality(_converter, NULL))
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uBoxPtr(__type->T(1), (uPtr(_converter)->Invoke(&ret2, 2, (::g::Fuse::Scripting::Context*)_c, (void*)_result()), ret2))));
    else
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uBoxPtr(__type->T(0), _result())));
}

// private void Reject(Uno.Exception reason) [instance] :135
void NativePromise__PromiseClosure::Reject(::g::Uno::Exception* reason)
{
    _reason = reason;

    if (_reject != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_c)->Dispatcher()), ::TYPES[8/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NativePromise__PromiseClosure__InternalReject_fn, this));
}

// public object Run(object[] args) [instance] :107
uObject* NativePromise__PromiseClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<T>*/),
    };

    if (uPtr(args)->Length() > 0)
        _resolve = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (uPtr(args)->Length() > 1)
        _reject = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[6/*Fuse.Scripting.Function*/]);

    uPtr(_promise)->Then1(uDelegate::New(__types[0], (void*)NativePromise__PromiseClosure__Resolve_fn, this), uDelegate::New(::TYPES[34/*Uno.Action<Uno.Exception>*/], (void*)NativePromise__PromiseClosure__Reject_fn, this));
    return NULL;
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :100
NativePromise__PromiseClosure* NativePromise__PromiseClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    NativePromise__PromiseClosure* obj1 = (NativePromise__PromiseClosure*)uNew(__type);
    obj1->ctor_(context, promise, converter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// private sealed class ScriptPromise<TSelf, TResult, TJSResult>.PromiseClosure :235
// {
static void ScriptPromise__PromiseClosure_build(uType* type)
{
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[28] = ::g::Uno::Action1_typeof();
    ::TYPES[34] = ::TYPES[28/*Uno.Action`1*/]->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    type->SetPrecalc(
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ScriptPromise__PromiseClosure, _context), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(1), NULL), offsetof(ScriptPromise__PromiseClosure, _future), 0,
        ::g::Uno::Exception_typeof(), offsetof(ScriptPromise__PromiseClosure, _reason), 0,
        ::TYPES[6/*Fuse.Scripting.Function*/], offsetof(ScriptPromise__PromiseClosure, _reject), 0,
        ::TYPES[6/*Fuse.Scripting.Function*/], offsetof(ScriptPromise__PromiseClosure, _resolve), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Scripting::ScriptPromise__ResultConverter_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(1), type->T(2), NULL), offsetof(ScriptPromise__PromiseClosure, _resultConverter), 0);
}

uType* ScriptPromise__PromiseClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ScriptPromise__PromiseClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptPromise`3.PromiseClosure", options);
    type->fp_build_ = ScriptPromise__PromiseClosure_build;
    return type;
}

// public PromiseClosure(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult> resultConverter) :240
void ScriptPromise__PromiseClosure__ctor__fn(ScriptPromise__PromiseClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* resultConverter)
{
    __this->ctor_(context, resultConverter);
}

// private void DispatchReject() :294
void ScriptPromise__PromiseClosure__DispatchReject_fn(ScriptPromise__PromiseClosure* __this)
{
    __this->DispatchReject();
}

// private void DispatchResolve() :286
void ScriptPromise__PromiseClosure__DispatchResolve_fn(ScriptPromise__PromiseClosure* __this)
{
    __this->DispatchResolve();
}

// public PromiseClosure New(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult> resultConverter) :240
void ScriptPromise__PromiseClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* resultConverter, ScriptPromise__PromiseClosure** __retval)
{
    *__retval = ScriptPromise__PromiseClosure::New1(__type, context, resultConverter);
}

// public void OnFutureReady(Uno.Threading.Future<TResult> future) :263
void ScriptPromise__PromiseClosure__OnFutureReady_fn(ScriptPromise__PromiseClosure* __this, ::g::Uno::Threading::Future1* future)
{
    __this->OnFutureReady(future);
}

// private void Reject(Uno.Exception reason) :279
void ScriptPromise__PromiseClosure__Reject_fn(ScriptPromise__PromiseClosure* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// private void Resolve(TResult result) :271
void ScriptPromise__PromiseClosure__Resolve_fn(ScriptPromise__PromiseClosure* __this, void* result)
{
    __this->_result() = result;

    if (__this->_resolve != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(__this->_context)->Dispatcher()), ::TYPES[8/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)ScriptPromise__PromiseClosure__DispatchResolve_fn, __this));
}

// public object Run(object[] args) :248
void ScriptPromise__PromiseClosure__Run_fn(ScriptPromise__PromiseClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public PromiseClosure(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult> resultConverter) [instance] :240
void ScriptPromise__PromiseClosure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* resultConverter)
{
    _context = context;
    _resultConverter = resultConverter;
}

// private void DispatchReject() [instance] :294
void ScriptPromise__PromiseClosure::DispatchReject()
{
    uPtr(_reject)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, (uString*)uPtr(_reason)->Message()));
}

// private void DispatchResolve() [instance] :286
void ScriptPromise__PromiseClosure::DispatchResolve()
{
    uT ret2(__type->T(2), U_ALLOCA(__type->T(2)->ValueSize));

    if (::g::Uno::Delegate::op_Inequality(_resultConverter, NULL))
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uBoxPtr(__type->T(2), (uPtr(_resultConverter)->Invoke(&ret2, 2, (::g::Fuse::Scripting::Context*)_context, (void*)_result()), ret2))));
    else
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uBoxPtr(__type->T(1), _result())));
}

// public void OnFutureReady(Uno.Threading.Future<TResult> future) [instance] :263
void ScriptPromise__PromiseClosure::OnFutureReady(::g::Uno::Threading::Future1* future)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<TResult>*/),
    };
    _future = future;

    if ((_resolve != NULL) || (_reject != NULL))
        uPtr(_future)->Then1(uDelegate::New(__types[0], (void*)ScriptPromise__PromiseClosure__Resolve_fn, this), uDelegate::New(::TYPES[34/*Uno.Action<Uno.Exception>*/], (void*)ScriptPromise__PromiseClosure__Reject_fn, this));
}

// private void Reject(Uno.Exception reason) [instance] :279
void ScriptPromise__PromiseClosure::Reject(::g::Uno::Exception* reason)
{
    _reason = reason;

    if (_reject != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_context)->Dispatcher()), ::TYPES[8/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)ScriptPromise__PromiseClosure__DispatchReject_fn, this));
}

// public object Run(object[] args) [instance] :248
uObject* ScriptPromise__PromiseClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<TResult>*/),
    };

    if (uPtr(args)->Length() > 0)
        _resolve = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (uPtr(args)->Length() > 1)
        _reject = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (_future != NULL)
        uPtr(_future)->Then1(uDelegate::New(__types[0], (void*)ScriptPromise__PromiseClosure__Resolve_fn, this), uDelegate::New(::TYPES[34/*Uno.Action<Uno.Exception>*/], (void*)ScriptPromise__PromiseClosure__Reject_fn, this));

    return NULL;
}

// public PromiseClosure New(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult> resultConverter) [static] :240
ScriptPromise__PromiseClosure* ScriptPromise__PromiseClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* resultConverter)
{
    ScriptPromise__PromiseClosure* obj1 = (ScriptPromise__PromiseClosure*)uNew(__type);
    obj1->ctor_(context, resultConverter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptModule.Require.uno
// ---------------------------------------------------------------------------

// private sealed class ScriptModule.RequireContext :14
// {
static void ScriptModule__RequireContext_build(uType* type)
{
    ::STRINGS[27] = uString::Const("require(): accepts exactly one argument, ");
    ::STRINGS[28] = uString::Const(" provided");
    ::STRINGS[29] = uString::Const("require(): argument must be a string");
    ::STRINGS[30] = uString::Const("ux:");
    ::STRINGS[31] = uString::Const("require(): unable to resolve ux: prefixes: ");
    ::STRINGS[32] = uString::Const("require(): ux name not found: ");
    ::STRINGS[33] = uString::Const("require(): module not found: ");
    ::STRINGS[34] = uString::Const("JavaScript error in ");
    ::STRINGS[35] = uString::Const(" was fixed!");
    ::STRINGS[36] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptModule.Require.uno");
    ::STRINGS[37] = uString::Const("Require");
    ::STRINGS[38] = uString::Const(" line ");
    ::STRINGS[39] = uString::Const(". ");
    ::STRINGS[19] = uString::Const("exports");
    ::TYPES[35] = ::g::Uno::String_typeof();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Scripting::ScriptModule_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ScriptModule__RequireContext, _c), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(ScriptModule__RequireContext, _dependant), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(ScriptModule__RequireContext, _m), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[35/*string*/], uObject_typeof(), NULL), offsetof(ScriptModule__RequireContext, _rt), 0,
        ::TYPES[35/*string*/], (uintptr_t)&ScriptModule__RequireContext::_lastErrorPath_, uFieldFlagsStatic);
}

uType* ScriptModule__RequireContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ScriptModule__RequireContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptModule.RequireContext", options);
    type->fp_build_ = ScriptModule__RequireContext_build;
    return type;
}

// public RequireContext(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant, Uno.Collections.Dictionary<string, object> rt) :21
void ScriptModule__RequireContext__ctor__fn(ScriptModule__RequireContext* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt)
{
    __this->ctor_(c, m, dependant, rt);
}

// public RequireContext New(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant, Uno.Collections.Dictionary<string, object> rt) :21
void ScriptModule__RequireContext__New1_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt, ScriptModule__RequireContext** __retval)
{
    *__retval = ScriptModule__RequireContext::New1(c, m, dependant, rt);
}

// public object Require(object[] args) :29
void ScriptModule__RequireContext__Require_fn(ScriptModule__RequireContext* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Require(args);
}

// public object Require(string id) :41
void ScriptModule__RequireContext__Require1_fn(ScriptModule__RequireContext* __this, uString* id, uObject** __retval)
{
    *__retval = __this->Require1(id);
}

uSStrong<uString*> ScriptModule__RequireContext::_lastErrorPath_;

// public RequireContext(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant, Uno.Collections.Dictionary<string, object> rt) [instance] :21
void ScriptModule__RequireContext::ctor_(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt)
{
    _c = c;
    _m = m;
    _dependant = dependant;
    _rt = rt;
}

// public object Require(object[] args) [instance] :29
uObject* ScriptModule__RequireContext::Require(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[27/*"require(): ...*/], uBox<int>(::TYPES[30/*int*/], uPtr(args)->Length())), ::STRINGS[28/*" provided"*/])));

    uString* id = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[35/*string*/]);

    if (::g::Uno::String::op_Equality(id, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[29/*"require(): ...*/]));

    return Require1(id);
}

// public object Require(string id) [instance] :41
uObject* ScriptModule__RequireContext::Require1(uString* id)
{
    bool ret2;
    bool isFile;
    uString* path = uPtr(_m)->ComputePath(id, &isFile);
    ::g::Fuse::Scripting::ModuleResult* module = uPtr(_c)->TryGetGlobalModuleResult(path);

    if (module == NULL)
    {
        uString* uxPrefix = ::STRINGS[30/*"ux:"*/];

        if (::g::Uno::String::StartsWith(uPtr(id), ::STRINGS[30/*"ux:"*/]))
        {
            if (_rt == NULL)
                U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::STRINGS[31/*"require(): ...*/], id)));

            uObject* res;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_rt), ::g::Uno::String::Substring(uPtr(id), uPtr<uString*>(::STRINGS[30/*"ux:"*/])->Length()), (void**)(&res), &ret2), ret2))
                return res;

            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::STRINGS[32/*"require(): ...*/], id)));
        }

        ::g::Fuse::Scripting::Module* mod = uPtr(_m)->TryResolve(path, isFile);

        if (mod == NULL)
            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::STRINGS[33/*"require(): ...*/], id)));

        module = uPtr(mod)->Evaluate1(_c, path);
        uPtr(module)->AddDependency(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)::g::Fuse::Scripting::ModuleResult__Invalidate_fn, uPtr(_dependant)));

        if (module->Error() == NULL)
        {
            if (::g::Uno::String::op_Equality(ScriptModule__RequireContext::_lastErrorPath_, path))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"JavaScript ...*/], path), ::STRINGS[35/*" was fixed!"*/]), this, ::STRINGS[36/*"/usr/local/...*/], 73, ::STRINGS[37/*"Require"*/]);
                ScriptModule__RequireContext::_lastErrorPath_ = NULL;
            }
        }
        else
        {
            ::g::Fuse::Scripting::ScriptException* e = uPtr(module)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(e)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage_))
            {
                ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"JavaScript ...*/], path), ::STRINGS[38/*" line "*/]), uBox<int>(::TYPES[30/*int*/], uPtr(e)->LineNumber())), ::STRINGS[39/*". "*/]), uPtr(e)->ErrorMessage()), this, ::STRINGS[36/*"/usr/local/...*/], 83, ::STRINGS[37/*"Require"*/], NULL);
                ScriptModule__RequireContext::_lastErrorPath_ = path;
            }

            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage_, id)));
        }
    }
    else
        uPtr(module)->AddDependency(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)::g::Fuse::Scripting::ModuleResult__Invalidate_fn, uPtr(_dependant)));

    return uPtr(uPtr(module)->Object)->Item(::STRINGS[19/*"exports"*/]);
}

// public RequireContext New(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant, Uno.Collections.Dictionary<string, object> rt) [static] :21
ScriptModule__RequireContext* ScriptModule__RequireContext::New1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt)
{
    ScriptModule__RequireContext* obj1 = (ScriptModule__RequireContext*)uNew(ScriptModule__RequireContext_typeof());
    obj1->ctor_(c, m, dependant, rt);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativePromise.uno
// --------------------------------------------------------------------

// public delegate TJSResult ResultConverter<T, TJSResult>(Fuse.Scripting.Context context, T result) :8
uDelegateType* ResultConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public delegate TJSResult ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult>(Fuse.Scripting.Context context, TResult result) :152
uDelegateType* ScriptPromise__ResultConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ScriptPromise`3.ResultConverter`2", 2, 5);
    type->SetSignature(type->T(4),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(3));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativePromise.uno
// --------------------------------------------------------------------

// public delegate T ResultFactory<T>(object[] args) :6
uDelegateType* ResultFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultFactory`1", 1, 1);
    type->SetSignature(type->T(0),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptClass :301
// {
// static generated ScriptClass() :301
static void ScriptClass__cctor__fn(uType* __type)
{
    ScriptClass::_unoTypeToScriptClass_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[36/*Uno.Collections.Dictionary<Uno.Type, Fuse.Scripting.ScriptClass>*/]));
}

static void ScriptClass_build(uType* type)
{
    ::TYPES[36] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), type, NULL);
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMember_typeof()->Array(), offsetof(ScriptClass, _members), 0,
        ::g::Uno::Type_typeof(), offsetof(ScriptClass, _unoType), 0,
        ::TYPES[36/*Uno.Collections.Dictionary<Uno.Type, Fuse.Scripting.ScriptClass>*/], (uintptr_t)&ScriptClass::_unoTypeToScriptClass_, uFieldFlagsStatic);
}

uType* ScriptClass_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ScriptClass);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptClass", options);
    type->fp_build_ = ScriptClass_build;
    type->fp_cctor_ = ScriptClass__cctor__fn;
    return type;
}

// private ScriptClass(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :330
void ScriptClass__ctor__fn(ScriptClass* __this, uType* unoType, uArray* members)
{
    __this->ctor_(unoType, members);
}

// public static Fuse.Scripting.ScriptClass Get(Uno.Type t) :313
void ScriptClass__Get_fn(uType* t, ScriptClass** __retval)
{
    *__retval = ScriptClass::Get(t);
}

// public Fuse.Scripting.ScriptMember[] get_Members() :328
void ScriptClass__get_Members_fn(ScriptClass* __this, uArray** __retval)
{
    *__retval = __this->Members();
}

// private ScriptClass New(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :330
void ScriptClass__New1_fn(uType* unoType, uArray* members, ScriptClass** __retval)
{
    *__retval = ScriptClass::New1(unoType, members);
}

// public static void Register(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :336
void ScriptClass__Register_fn(uType* unoType, uArray* members)
{
    ScriptClass::Register(unoType, members);
}

// public Fuse.Scripting.ScriptClass get_SuperType() :307
void ScriptClass__get_SuperType_fn(ScriptClass* __this, ScriptClass** __retval)
{
    *__retval = __this->SuperType();
}

// public Uno.Type get_Type() :304
void ScriptClass__get_Type_fn(ScriptClass* __this, uType** __retval)
{
    *__retval = __this->Type();
}

uSStrong< ::g::Uno::Collections::Dictionary*> ScriptClass::_unoTypeToScriptClass_;

// private ScriptClass(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [instance] :330
void ScriptClass::ctor_(uType* unoType, uArray* members)
{
    _unoType = unoType;
    _members = members;
}

// public Fuse.Scripting.ScriptMember[] get_Members() [instance] :328
uArray* ScriptClass::Members()
{
    return _members;
}

// public Fuse.Scripting.ScriptClass get_SuperType() [instance] :307
ScriptClass* ScriptClass::SuperType()
{
    return ScriptClass::Get(::g::Uno::Type::BaseType(uPtr(_unoType)));
}

// public Uno.Type get_Type() [instance] :304
uType* ScriptClass::Type()
{
    return _unoType;
}

// public static Fuse.Scripting.ScriptClass Get(Uno.Type t) [static] :313
ScriptClass* ScriptClass::Get(uType* t)
{
    bool ret2;

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        ScriptClass* sc;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ScriptClass::_unoTypeToScriptClass_), t, (void**)(&sc), &ret2), ret2))
            return sc;

        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    return NULL;
}

// private ScriptClass New(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [static] :330
ScriptClass* ScriptClass::New1(uType* unoType, uArray* members)
{
    ScriptClass* obj1 = (ScriptClass*)uNew(ScriptClass_typeof());
    obj1->ctor_(unoType, members);
    return obj1;
}

// public static void Register(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [static] :336
void ScriptClass::Register(uType* unoType, uArray* members)
{
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ScriptClass::_unoTypeToScriptClass_), unoType, ScriptClass::New1(unoType, members));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptException.uno
// ----------------------------------------------------------------------

// public sealed class ScriptException :4
// {
static void ScriptException_build(uType* type)
{
    ::STRINGS[40] = uString::Const("Name: ");
    ::STRINGS[41] = uString::Const("Error message: ");
    ::STRINGS[42] = uString::Const("File name: ");
    ::STRINGS[43] = uString::Const("Line number: ");
    ::STRINGS[44] = uString::Const("Source line: ");
    ::STRINGS[45] = uString::Const("JS stack trace: ");
    ::TYPES[30] = ::g::Uno::Int_typeof();
    type->SetFields(4,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _ErrorMessage), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _FileName), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _JSStackTrace), 0,
        ::TYPES[30/*int*/], offsetof(ScriptException, _LineNumber), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _Name), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _SourceLine), 0);
}

::g::Uno::Exception_type* ScriptException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(ScriptException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.ScriptException", options);
    type->fp_build_ = ScriptException_build;
    type->fp_get_Message = (void(*)(::g::Uno::Exception*, uString**))ScriptException__get_Message_fn;
    return type;
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) :13
void ScriptException__ctor_3_fn(ScriptException* __this, uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace)
{
    __this->ctor_3(name, errorMessage, fileName, *lineNumber, sourceLine, stackTrace);
}

// public generated string get_ErrorMessage() :7
void ScriptException__get_ErrorMessage_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->ErrorMessage();
}

// private generated void set_ErrorMessage(string value) :7
void ScriptException__set_ErrorMessage_fn(ScriptException* __this, uString* value)
{
    __this->ErrorMessage(value);
}

// public generated string get_FileName() :8
void ScriptException__get_FileName_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// private generated void set_FileName(string value) :8
void ScriptException__set_FileName_fn(ScriptException* __this, uString* value)
{
    __this->FileName(value);
}

// public generated string get_JSStackTrace() :11
void ScriptException__get_JSStackTrace_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->JSStackTrace();
}

// private generated void set_JSStackTrace(string value) :11
void ScriptException__set_JSStackTrace_fn(ScriptException* __this, uString* value)
{
    __this->JSStackTrace(value);
}

// public generated int get_LineNumber() :9
void ScriptException__get_LineNumber_fn(ScriptException* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// private generated void set_LineNumber(int value) :9
void ScriptException__set_LineNumber_fn(ScriptException* __this, int* value)
{
    __this->LineNumber(*value);
}

// public override sealed string get_Message() :31
void ScriptException__get_Message_fn(ScriptException* __this, uString** __retval)
{
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (!::g::Uno::String::IsNullOrEmpty(__this->Name()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[40/*"Name: "*/]);
        stringBuilder->AppendLine(__this->Name());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->ErrorMessage()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[41/*"Error messa...*/]);
        stringBuilder->AppendLine(__this->ErrorMessage());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->FileName()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[42/*"File name: "*/]);
        stringBuilder->AppendLine(__this->FileName());
    }

    if (__this->LineNumber() >= 0)
    {
        uPtr(stringBuilder)->Append2(::STRINGS[43/*"Line number: "*/]);
        stringBuilder->AppendLine(::g::Uno::Int::ToString(__this->LineNumber(), ::TYPES[30/*int*/]));
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->SourceLine()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[44/*"Source line: "*/]);
        stringBuilder->AppendLine(__this->SourceLine());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->JSStackTrace()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[45/*"JS stack tr...*/]);
        stringBuilder->AppendLine(__this->JSStackTrace());
    }

    return *__retval = stringBuilder->ToString(), void();
}

// public generated string get_Name() :6
void ScriptException__get_Name_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :6
void ScriptException__set_Name_fn(ScriptException* __this, uString* value)
{
    __this->Name(value);
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) :13
void ScriptException__New4_fn(uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace, ScriptException** __retval)
{
    *__retval = ScriptException::New4(name, errorMessage, fileName, *lineNumber, sourceLine, stackTrace);
}

// public generated string get_SourceLine() :10
void ScriptException__get_SourceLine_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->SourceLine();
}

// private generated void set_SourceLine(string value) :10
void ScriptException__set_SourceLine_fn(ScriptException* __this, uString* value)
{
    __this->SourceLine(value);
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) [instance] :13
void ScriptException::ctor_3(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace)
{
    ctor_();
    Name(name);
    ErrorMessage(errorMessage);
    FileName(fileName);
    LineNumber(lineNumber);
    SourceLine(sourceLine);
    JSStackTrace(stackTrace);
}

// public generated string get_ErrorMessage() [instance] :7
uString* ScriptException::ErrorMessage()
{
    return _ErrorMessage;
}

// private generated void set_ErrorMessage(string value) [instance] :7
void ScriptException::ErrorMessage(uString* value)
{
    _ErrorMessage = value;
}

// public generated string get_FileName() [instance] :8
uString* ScriptException::FileName()
{
    return _FileName;
}

// private generated void set_FileName(string value) [instance] :8
void ScriptException::FileName(uString* value)
{
    _FileName = value;
}

// public generated string get_JSStackTrace() [instance] :11
uString* ScriptException::JSStackTrace()
{
    return _JSStackTrace;
}

// private generated void set_JSStackTrace(string value) [instance] :11
void ScriptException::JSStackTrace(uString* value)
{
    _JSStackTrace = value;
}

// public generated int get_LineNumber() [instance] :9
int ScriptException::LineNumber()
{
    return _LineNumber;
}

// private generated void set_LineNumber(int value) [instance] :9
void ScriptException::LineNumber(int value)
{
    _LineNumber = value;
}

// public generated string get_Name() [instance] :6
uString* ScriptException::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :6
void ScriptException::Name(uString* value)
{
    _Name = value;
}

// public generated string get_SourceLine() [instance] :10
uString* ScriptException::SourceLine()
{
    return _SourceLine;
}

// private generated void set_SourceLine(string value) [instance] :10
void ScriptException::SourceLine(uString* value)
{
    _SourceLine = value;
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) [static] :13
ScriptException* ScriptException::New4(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace)
{
    ScriptException* obj1 = (ScriptException*)uNew(ScriptException_typeof());
    obj1->ctor_3(name, errorMessage, fileName, lineNumber, sourceLine, stackTrace);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public abstract class ScriptMember :15
// {
static void ScriptMember_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ScriptMember, Name), 0);
}

uType* ScriptMember_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScriptMember);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMember", options);
    type->fp_build_ = ScriptMember_build;
    return type;
}

// protected ScriptMember(string name) :19
void ScriptMember__ctor__fn(ScriptMember* __this, uString* name)
{
    __this->ctor_(name);
}

// protected ScriptMember(string name) [instance] :19
void ScriptMember::ctor_(uString* name)
{
    Name = name;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public abstract class ScriptMethod :59
// {
static void ScriptMethod_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Scripting::ExecutionThread_typeof(), offsetof(ScriptMethod, Thread), 0);
}

ScriptMethod_type* ScriptMethod_typeof()
{
    static uSStrong<ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptMethod);
    options.TypeSize = sizeof(ScriptMethod_type);
    type = (ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethod", options);
    type->fp_build_ = ScriptMethod_build;
    return type;
}

// protected ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) :63
void ScriptMethod__ctor_1_fn(ScriptMethod* __this, uString* name, int* thread)
{
    __this->ctor_1(name, *thread);
}

// protected ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) [instance] :63
void ScriptMethod::ctor_1(uString* name, int thread)
{
    ctor_(name);
    Thread = thread;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptMethod<T> :86
// {
static void ScriptMethod1_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetPrecalc(
        ScriptMethod1__CallClosure_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(2,
        ::g::Uno::Func3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), uObject_typeof(), NULL), offsetof(ScriptMethod1, _method), 0,
        ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), NULL), offsetof(ScriptMethod1, _voidMethod), 0);
}

::g::Fuse::Scripting::ScriptMethod_type* ScriptMethod1_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ScriptMethod1);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptMethod_type);
    type = (::g::Fuse::Scripting::ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethod`1", options);
    type->fp_build_ = ScriptMethod1_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**))ScriptMethod1__Call_fn;
    return type;
}

// public ScriptMethod(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) :96
void ScriptMethod1__ctor_2_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread)
{
    __this->ctor_2(name, method, *thread);
}

// public ScriptMethod(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) :91
void ScriptMethod1__ctor_3_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread)
{
    __this->ctor_3(name, method, *thread);
}

// public override sealed object Call(Fuse.Scripting.Context c, object obj, object[] args) :101
void ScriptMethod1__Call_fn(ScriptMethod1* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Scripting.ScriptMethod<T>.CallClosure*/),
    };

    if (__this->Thread == 2)
    {
        if (::g::Uno::Delegate::op_Equality(__this->_voidMethod, NULL))
        {
            ::g::Fuse::Diagnostics::InternalError(uString::Const("Cannot call a non-void method asynchronously"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno"), 107, uString::Const("Call"));
            return *__retval = NULL, void();
        }

        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)ScriptMethod1__CallClosure__Run_fn, ScriptMethod1__CallClosure::New1(__types[0], __this->_voidMethod, c, obj, args)));
        return *__retval = NULL, void();
    }

    if (::g::Uno::Delegate::op_Inequality(__this->_voidMethod, NULL))
    {
        uPtr(__this->_voidMethod)->Invoke(3, c, (void*)uUnboxAny(__this->__type->T(0), obj), args);
        return *__retval = NULL, void();
    }
    else
        return *__retval = uPtr(__this->_method)->Invoke(3, c, (void*)uUnboxAny(__this->__type->T(0), obj), args), void();
}

// public ScriptMethod New(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) :96
void ScriptMethod1__New1_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval)
{
    *__retval = ScriptMethod1::New1(__type, name, method, *thread);
}

// public ScriptMethod New(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) :91
void ScriptMethod1__New2_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval)
{
    *__retval = ScriptMethod1::New2(__type, name, method, *thread);
}

// public ScriptMethod(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) [instance] :96
void ScriptMethod1::ctor_2(uString* name, uDelegate* method, int thread)
{
    ctor_1(name, thread);
    _voidMethod = method;
}

// public ScriptMethod(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) [instance] :91
void ScriptMethod1::ctor_3(uString* name, uDelegate* method, int thread)
{
    ctor_1(name, thread);
    _method = method;
}

// public ScriptMethod New(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) [static] :96
ScriptMethod1* ScriptMethod1::New1(uType* __type, uString* name, uDelegate* method, int thread)
{
    ScriptMethod1* obj2 = (ScriptMethod1*)uNew(__type);
    obj2->ctor_2(name, method, thread);
    return obj2;
}

// public ScriptMethod New(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) [static] :91
ScriptMethod1* ScriptMethod1::New2(uType* __type, uString* name, uDelegate* method, int thread)
{
    ScriptMethod1* obj1 = (ScriptMethod1*)uNew(__type);
    obj1->ctor_3(name, method, thread);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptMethodInline :71
// {
static void ScriptMethodInline_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(ScriptMethodInline, Code), 0);
}

::g::Fuse::Scripting::ScriptMethod_type* ScriptMethodInline_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptMethodInline);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptMethod_type);
    type = (::g::Fuse::Scripting::ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethodInline", options);
    type->fp_build_ = ScriptMethodInline_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**))ScriptMethodInline__Call_fn;
    return type;
}

// public ScriptMethodInline(string name, Fuse.Scripting.ExecutionThread thread, string code) :75
void ScriptMethodInline__ctor_2_fn(ScriptMethodInline* __this, uString* name, int* thread, uString* code)
{
    __this->ctor_2(name, *thread, code);
}

// public override sealed object Call(Fuse.Scripting.Context c, object obj, object[] args) :80
void ScriptMethodInline__Call_fn(ScriptMethodInline* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval)
{
    U_THROW(::g::Uno::Exception::New1());
}

// public ScriptMethodInline New(string name, Fuse.Scripting.ExecutionThread thread, string code) :75
void ScriptMethodInline__New1_fn(uString* name, int* thread, uString* code, ScriptMethodInline** __retval)
{
    *__retval = ScriptMethodInline::New1(name, *thread, code);
}

// public ScriptMethodInline(string name, Fuse.Scripting.ExecutionThread thread, string code) [instance] :75
void ScriptMethodInline::ctor_2(uString* name, int thread, uString* code)
{
    ctor_1(name, thread);
    Code = code;
}

// public ScriptMethodInline New(string name, Fuse.Scripting.ExecutionThread thread, string code) [static] :75
ScriptMethodInline* ScriptMethodInline::New1(uString* name, int thread, uString* code)
{
    ScriptMethodInline* obj1 = (ScriptMethodInline*)uNew(ScriptMethodInline_typeof());
    obj1->ctor_2(name, thread, code);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptModule.Evaluate.uno
// ----------------------------------------------------------------------------

// public partial class ScriptModule :10
// {
// static generated ScriptModule() :10
static void ScriptModule__cctor__fn(uType* __type)
{
    ScriptModule::ModuleContainsAnErrorMessage_ = uString::Const("require(): module contains an error: ");
}

static void ScriptModule_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ScriptModule_type, interface0));
    type->SetFields(2,
        ::g::Uno::IO::Bundle_typeof(), offsetof(ScriptModule, _bundle), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptModule, _code), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(ScriptModule, _file), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptModule, _fileName), 0,
        ::g::Uno::Int_typeof(), offsetof(ScriptModule, _lineNumberOffset), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptModule, _Postamble), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptModule, _Preamble), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&ScriptModule::ModuleContainsAnErrorMessage_, uFieldFlagsStatic);
}

ScriptModule_type* ScriptModule_typeof()
{
    static uSStrong<ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Module_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ScriptModule);
    options.TypeSize = sizeof(ScriptModule_type);
    type = (ScriptModule_type*)uClassType::New("Fuse.Scripting.ScriptModule", options);
    type->fp_build_ = ScriptModule_build;
    type->fp_cctor_ = ScriptModule__cctor__fn;
    type->fp_CallModuleFunc = ScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))ScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = ScriptModule__GenerateArgs_fn;
    type->fp_GenerateRequireTable = ScriptModule__GenerateRequireTable_fn;
    type->fp_GetFile = (void(*)(::g::Fuse::Scripting::Module*, ::g::Uno::UX::FileSource**))ScriptModule__GetFile_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public generated ScriptModule() :10
void ScriptModule__ctor_1_fn(ScriptModule* __this)
{
    __this->ctor_1();
}

// private bool Acceptor(object obj) :190
void ScriptModule__Acceptor_fn(ScriptModule* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public Uno.IO.Bundle get_Bundle() :32
void ScriptModule__get_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle** __retval)
{
    *__retval = __this->Bundle();
}

// public void set_Bundle(Uno.IO.Bundle value) :37
void ScriptModule__set_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle* value)
{
    __this->Bundle(value);
}

// protected virtual void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :78
void ScriptModule__CallModuleFunc_fn(ScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uPtr(moduleFunc)->Call(args);
}

// public string get_Code() :49
void ScriptModule__get_Code_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :54
void ScriptModule__set_Code_fn(ScriptModule* __this, uString* value)
{
    __this->Code(value);
}

// private string ComputePath(string moduleId, bool& isFile) :121
void ScriptModule__ComputePath_fn(ScriptModule* __this, uString* moduleId, bool* isFile, uString** __retval)
{
    *__retval = __this->ComputePath(moduleId, isFile);
}

// private static string ComputePath(string sourcePath, string moduleId) :148
void ScriptModule__ComputePath1_fn(uString* sourcePath, uString* moduleId, uString** __retval)
{
    *__retval = ScriptModule::ComputePath1(sourcePath, moduleId);
}

// public override void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :36
void ScriptModule__Evaluate_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    int offset = ::g::Uno::Math::Max8(0, __this->LineNumberOffset() - (1 + __this->GetPreambleNewlines()));
    uArray* newlines = uArray::New(::g::Uno::Char_typeof()->Array(), offset);

    for (int i = 0; i < offset; ++i)
        uPtr(newlines)->Item<uChar>(i) = 10;

    ::g::Uno::Collections::List* args = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL));
    uString* wrappedCode = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("(function("), __this->GenerateArgs(c, result, args)), uString::Const(") { ")), uString::CharArray(newlines)), __this->GetEffectiveCode()), uString::Const("\n"
        " })"));
    ::g::Fuse::Scripting::Function* moduleFunc = uCast< ::g::Fuse::Scripting::Function*>(uPtr(c)->Evaluate(__this->FileName(), wrappedCode), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (moduleFunc == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Could not evaluate module '"), __this->FileName()), uString::Const("': JavaScript code contains errors"))));

    __this->CallModuleFunc(moduleFunc, (uArray*)args->ToArray());
}

// public Uno.UX.FileSource get_File() :20
void ScriptModule__get_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :21
void ScriptModule__set_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :63
void ScriptModule__get_FileName_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :68
void ScriptModule__set_FileName_fn(ScriptModule* __this, uString* value)
{
    __this->FileName(value);
}

// protected virtual string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :65
void ScriptModule__GenerateArgs_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    ::g::Fuse::Scripting::Object* module = uPtr(result)->Object;
    ::g::Uno::Collections::Dictionary* rt = __this->GenerateRequireTable(c);
    ::g::Uno::Collections::List__Add_fn(uPtr(args), module);
    ::g::Uno::Collections::List__Add_fn(args, uPtr(module)->Item(::STRINGS[19/*"exports"*/]));
    ::g::Uno::Collections::List__Add_fn(args, uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)ScriptModule__RequireContext__Require_fn, ScriptModule__RequireContext::New1(c, __this, result, rt)));
    return *__retval = uString::Const("module, exports, require"), void();
}

// protected virtual Uno.Collections.Dictionary<string, object> GenerateRequireTable(Fuse.Scripting.Context c) :60
void ScriptModule__GenerateRequireTable_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Uno::Collections::Dictionary** __retval)
{
    return *__retval = NULL, void();
}

// private string GetEffectiveCode() :12
void ScriptModule__GetEffectiveCode_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->GetEffectiveCode();
}

// public override sealed Uno.UX.FileSource GetFile() :27
void ScriptModule__GetFile_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = __this->_file, void();
}

// private int GetPreambleNewlines() :25
void ScriptModule__GetPreambleNewlines_fn(ScriptModule* __this, int* __retval)
{
    *__retval = __this->GetPreambleNewlines();
}

// private string GetSourcePath() :142
void ScriptModule__GetSourcePath_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->GetSourcePath();
}

// private static bool IsPathEqual(string src, string path) :182
void ScriptModule__IsPathEqual_fn(uString* src, uString* path, bool* __retval)
{
    *__retval = ScriptModule::IsPathEqual(src, path);
}

// public int get_LineNumberOffset() :77
void ScriptModule__get_LineNumberOffset_fn(ScriptModule* __this, int* __retval)
{
    *__retval = __this->LineNumberOffset();
}

// public void set_LineNumberOffset(int value) :82
void ScriptModule__set_LineNumberOffset_fn(ScriptModule* __this, int* value)
{
    __this->LineNumberOffset(*value);
}

// private Uno.IO.BundleFile LookForFile(string path) :164
void ScriptModule__LookForFile_fn(ScriptModule* __this, uString* path, ::g::Uno::IO::BundleFile** __retval)
{
    *__retval = __this->LookForFile(path);
}

// public generated string get_Postamble() :44
void ScriptModule__get_Postamble_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->Postamble();
}

// public generated void set_Postamble(string value) :44
void ScriptModule__set_Postamble_fn(ScriptModule* __this, uString* value)
{
    __this->Postamble(value);
}

// public generated string get_Preamble() :43
void ScriptModule__get_Preamble_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->Preamble();
}

// public generated void set_Preamble(string value) :43
void ScriptModule__set_Preamble_fn(ScriptModule* __this, uString* value)
{
    __this->Preamble(value);
}

// private Fuse.Scripting.Module TryResolve(string path, bool isFile) :100
void ScriptModule__TryResolve_fn(ScriptModule* __this, uString* path, bool* isFile, ::g::Fuse::Scripting::Module** __retval)
{
    *__retval = __this->TryResolve(path, *isFile);
}

uSStrong<uString*> ScriptModule::ModuleContainsAnErrorMessage_;

// public generated ScriptModule() [instance] :10
void ScriptModule::ctor_1()
{
    ctor_();
}

// private bool Acceptor(object obj) [instance] :190
bool ScriptModule::Acceptor(uObject* obj)
{
    return uIs(obj, ::g::Fuse::Scripting::IModuleProvider_typeof());
}

// public Uno.IO.Bundle get_Bundle() [instance] :32
::g::Uno::IO::Bundle* ScriptModule::Bundle()
{
    ::g::Uno::UX::BundleFileSource* bfs = uAs< ::g::Uno::UX::BundleFileSource*>(File(), ::g::Uno::UX::BundleFileSource_typeof());
    return (bfs != NULL) ? (::g::Uno::IO::Bundle*)uPtr(uPtr(bfs)->BundleFile)->Bundle() : (::g::Uno::IO::Bundle*)_bundle;
}

// public void set_Bundle(Uno.IO.Bundle value) [instance] :37
void ScriptModule::Bundle(::g::Uno::IO::Bundle* value)
{
    _bundle = value;
}

// public string get_Code() [instance] :49
uString* ScriptModule::Code()
{
    if (File() != NULL)
        return uPtr(File())->ReadAllText();

    return _code;
}

// public void set_Code(string value) [instance] :54
void ScriptModule::Code(uString* value)
{
    _code = value;
}

// private string ComputePath(string moduleId, bool& isFile) [instance] :121
uString* ScriptModule::ComputePath(uString* moduleId, bool* isFile)
{
    if (::g::Uno::String::EndsWith(uPtr(moduleId), uString::Const(".js")))
        moduleId = ::g::Uno::String::Replace1(uPtr(moduleId), uString::Const(".js"), ::STRINGS[9/*""*/]);

    if (::g::Uno::String::StartsWith(uPtr(moduleId), uString::Const(".")))
    {
        *isFile = true;
        return ScriptModule::ComputePath1(GetSourcePath(), moduleId);
    }
    else if (::g::Uno::String::StartsWith(uPtr(moduleId), uString::Const("/")))
    {
        *isFile = true;
        return ScriptModule::ComputePath1(::STRINGS[9/*""*/], moduleId);
    }

    *isFile = false;
    return moduleId;
}

// public Uno.UX.FileSource get_File() [instance] :20
::g::Uno::UX::FileSource* ScriptModule::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :21
void ScriptModule::File(::g::Uno::UX::FileSource* value)
{
    _file = value;
}

// public string get_FileName() [instance] :63
uString* ScriptModule::FileName()
{
    if (File() != NULL)
        return uPtr(_file)->Name;
    else
        return _fileName;
}

// public void set_FileName(string value) [instance] :68
void ScriptModule::FileName(uString* value)
{
    _fileName = value;
}

// private string GetEffectiveCode() [instance] :12
uString* ScriptModule::GetEffectiveCode()
{
    uString* code = Code();

    if (!::g::Uno::String::IsNullOrEmpty(Preamble()))
        code = ::g::Uno::String::op_Addition2(Preamble(), code);

    if (!::g::Uno::String::IsNullOrEmpty(Postamble()))
        code = ::g::Uno::String::op_Addition2(code, Postamble());

    return code;
}

// private int GetPreambleNewlines() [instance] :25
int ScriptModule::GetPreambleNewlines()
{
    if (::g::Uno::String::IsNullOrEmpty(Preamble()))
        return 0;

    int index = -1, count = 0;

    while ((index = ::g::Uno::String::IndexOf(uPtr(Preamble()), 10, index + 1)) >= 0)
        count++;

    return count;
}

// private string GetSourcePath() [instance] :142
uString* ScriptModule::GetSourcePath()
{
    if (::g::Uno::String::op_Inequality(FileName(), NULL))
        return ::g::Uno::String::Trim1(uPtr(::g::Uno::String::Replace(uPtr(::g::Uno::IO::Path::GetDirectoryName(FileName())), '\\', '/')), uArray::Init<int>(::g::Uno::Char_typeof()->Array(), 1, '/'));
    else
        return ::STRINGS[9/*""*/];
}

// public int get_LineNumberOffset() [instance] :77
int ScriptModule::LineNumberOffset()
{
    if (File() != NULL)
        return 0;

    return _lineNumberOffset;
}

// public void set_LineNumberOffset(int value) [instance] :82
void ScriptModule::LineNumberOffset(int value)
{
    _lineNumberOffset = value;
}

// private Uno.IO.BundleFile LookForFile(string path) [instance] :164
::g::Uno::IO::BundleFile* ScriptModule::LookForFile(uString* path)
{
    ::g::Uno::IO::BundleFile* ret4;
    ::g::Uno::IO::BundleFile* ret5;

    if (Bundle() != NULL)
    {
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Bundle())->Files()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)));

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())))
            {
                ::g::Uno::IO::BundleFile* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)), &ret4), ret4);

                if (ScriptModule::IsPathEqual(uPtr(f)->SourcePath(), path))
                    return f;
            }
        }
    }

    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())))
        {
            ::g::Uno::IO::BundleFile* f1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)), &ret5), ret5);

            if (ScriptModule::IsPathEqual(uPtr(f1)->SourcePath(), path))
                return f1;
        }
    }

    return NULL;
}

// public generated string get_Postamble() [instance] :44
uString* ScriptModule::Postamble()
{
    return _Postamble;
}

// public generated void set_Postamble(string value) [instance] :44
void ScriptModule::Postamble(uString* value)
{
    _Postamble = value;
}

// public generated string get_Preamble() [instance] :43
uString* ScriptModule::Preamble()
{
    return _Preamble;
}

// public generated void set_Preamble(string value) [instance] :43
void ScriptModule::Preamble(uString* value)
{
    _Preamble = value;
}

// private Fuse.Scripting.Module TryResolve(string path, bool isFile) [instance] :100
::g::Fuse::Scripting::Module* ScriptModule::TryResolve(uString* path, bool isFile)
{
    ::g::Uno::IO::BundleFile* file = LookForFile(path);

    if (file != NULL)
        return ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::BundleFileSource::New1(file));

    if (!isFile)
    {
        uObject* res;

        if (::g::Uno::UX::Resource::TryFindGlobal(path, uDelegate::New(::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL), (void*)ScriptModule__Acceptor_fn, this), &res))
        {
            uObject* mp = (uObject*)res;
            return ::g::Fuse::Scripting::IModuleProvider::GetModule(uInterface(uPtr(mp), ::g::Fuse::Scripting::IModuleProvider_typeof()));
        }
    }

    return NULL;
}

// private static string ComputePath(string sourcePath, string moduleId) [static] :148
uString* ScriptModule::ComputePath1(uString* sourcePath, uString* moduleId)
{
    uArray* parts = ::g::Uno::String::Split(uPtr(moduleId), uArray::Init<int>(::g::Uno::Char_typeof()->Array(), 1, '/'));

    for (int i = 0; i < uPtr(parts)->Length(); i++)
        if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), ::STRINGS[9/*""*/]))
            continue;
        else if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), uString::Const(".")))
            continue;
        else if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), uString::Const("..")))
            sourcePath = ::g::Uno::String::Replace(uPtr(::g::Uno::IO::Path::GetDirectoryName(sourcePath)), '\\', '/');
        else if (uPtr(sourcePath)->Length() > 0)
            sourcePath = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(sourcePath, uString::Const("/")), uPtr(parts)->Strong<uString*>(i));
        else
            sourcePath = uPtr(parts)->Strong<uString*>(i);

    return sourcePath;
}

// private static bool IsPathEqual(string src, string path) [static] :182
bool ScriptModule::IsPathEqual(uString* src, uString* path)
{
    if (::g::Uno::String::op_Equality(src, path))
        return true;

    if (::g::Uno::String::op_Equality(src, ::g::Uno::String::op_Addition2(path, uString::Const(".js"))))
        return true;

    if (::g::Uno::String::op_Equality(src, ::g::Uno::String::op_Addition2(path, uString::Const("/index.js"))))
        return true;

    return false;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptPromise<TSelf, TResult, TJSResult> :149
// {
static void ScriptPromise_build(uType* type)
{
    type->SetPrecalc(
        ScriptPromise__FutureClosure_typeof()->MakeType(type->T(0), type->T(1), type->T(2), NULL),
        ScriptPromise__FutureFactory_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(0), type->T(1), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(1), NULL),
        ScriptPromise__PromiseClosure_typeof()->MakeType(type->T(0), type->T(1), type->T(2), NULL));
    type->SetFields(2,
        ScriptPromise__FutureFactory_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(0), type->T(1), NULL), offsetof(ScriptPromise, _futureFactory), 0,
        ScriptPromise__ResultConverter_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(1), type->T(2), NULL), offsetof(ScriptPromise, _resultConverter), 0);
}

::g::Fuse::Scripting::ScriptMethod_type* ScriptPromise_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 4;
    options.GenericCount = 3;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(ScriptPromise);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptMethod_type);
    type = (::g::Fuse::Scripting::ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptPromise`3", options);
    type->fp_build_ = ScriptPromise_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**))ScriptPromise__Call_fn;
    return type;
}

// public override sealed object Call(Fuse.Scripting.Context c, object obj, object[] args) :186
void ScriptPromise__Call_fn(ScriptPromise* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.PromiseClosure*/),
        __this->__type->Precalced(0/*Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.FutureClosure*/),
        __this->__type->Precalced(1/*Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.FutureFactory<TSelf, TResult>*/),
    };
    uT self(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    ScriptPromise__FutureClosure* ret2;
    ::g::Uno::Threading::Future1* ret3;
    ::g::Fuse::Scripting::Function* promise = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[13/*"Promise"*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);
    ScriptPromise__PromiseClosure* promiseClosure = ScriptPromise__PromiseClosure::New1(__types[0], c, __this->_resultConverter);
    self = uUnboxAny(__this->__type->T(0), obj);

    if (__this->Thread == 2)
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)ScriptPromise__FutureClosure__Run_fn, (ScriptPromise__FutureClosure__New1_fn(__types[1], c, uDelegate::New(__types[2], (void*)ScriptPromise__InvokeFutureFactory_fn, __this), promiseClosure, self, args, &ret2), ret2)));
    else
        uPtr(promiseClosure)->OnFutureReady((ScriptPromise__InvokeFutureFactory_fn(__this, c, self, args, &ret3), ret3));

    return *__retval = uPtr(promise)->Construct(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uDelegate::New(::TYPES[12/*Fuse.Scripting.Callback*/], (void*)ScriptPromise__PromiseClosure__Run_fn, promiseClosure))), void();
}

// private Uno.Threading.Future<TResult> InvokeFutureFactory(Fuse.Scripting.Context context, TSelf self, object[] args) :167
void ScriptPromise__InvokeFutureFactory_fn(ScriptPromise* __this, ::g::Fuse::Scripting::Context* context, void* self, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Threading.Promise<TResult>*/),
    };

    if (::g::Uno::Delegate::op_Equality(__this->_futureFactory, NULL))
    {
        ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
        p->Reject(::g::Uno::Exception::New2(uString::Const("FutureFactory is null")));
        return *__retval = p, void();
    }

    ::g::Uno::Threading::Future1* future = (::g::Uno::Threading::Future1*)uPtr(__this->_futureFactory)->Invoke(3, context, self, args);

    if (future == NULL)
    {
        ::g::Uno::Threading::Promise* p1 = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
        p1->Reject(::g::Uno::Exception::New2(uString::Const("FutureFactory returned null")));
        return *__retval = p1, void();
    }

    return *__retval = future, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public abstract class ScriptProperty :35
// {
static void ScriptProperty_build(uType* type)
{
    ::STRINGS[9] = uString::Const("");
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(ScriptProperty, Modifier), 0);
}

ScriptProperty_type* ScriptProperty_typeof()
{
    static uSStrong<ScriptProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptProperty);
    options.TypeSize = sizeof(ScriptProperty_type);
    type = (ScriptProperty_type*)uClassType::New("Fuse.Scripting.ScriptProperty", options);
    type->fp_build_ = ScriptProperty_build;
    return type;
}

// protected ScriptProperty(string name, [string modifier]) :38
void ScriptProperty__ctor_1_fn(ScriptProperty* __this, uString* name, uString* modifier)
{
    __this->ctor_1(name, modifier);
}

// protected ScriptProperty(string name, [string modifier]) [instance] :38
void ScriptProperty::ctor_1(uString* name, uString* modifier)
{
    ctor_(name);
    Modifier = ((modifier != NULL) ? modifier : ::STRINGS[9/*""*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptProperty<TOwner, TValue> :45
// {
static void ScriptProperty1_build(uType* type)
{
    ::STRINGS[46] = uString::Const("ScriptProperty: incorrect owner type");
    type->SetFields(2,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), ::g::Uno::UX::Property1_typeof()->MakeType(type->T(1), NULL), NULL), offsetof(ScriptProperty1, _getter), 0);
}

::g::Fuse::Scripting::ScriptProperty_type* ScriptProperty1_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptProperty_typeof();
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ScriptProperty1);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptProperty_type);
    type = (::g::Fuse::Scripting::ScriptProperty_type*)uClassType::New("Fuse.Scripting.ScriptProperty`2", options);
    type->fp_build_ = ScriptProperty1_build;
    type->fp_GetProperty = (void(*)(::g::Fuse::Scripting::ScriptProperty*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Property**))ScriptProperty1__GetProperty_fn;
    return type;
}

// public ScriptProperty(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) :53
void ScriptProperty1__ctor_2_fn(ScriptProperty1* __this, uString* name, uDelegate* getter, uString* modifier)
{
    __this->ctor_2(name, getter, modifier);
}

// public override sealed Uno.UX.Property GetProperty(Uno.UX.PropertyObject owner) :48
void ScriptProperty1__GetProperty_fn(ScriptProperty1* __this, ::g::Uno::UX::PropertyObject* owner, ::g::Uno::UX::Property** __retval)
{
    if (!uIs(owner, __this->__type->T(0)))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[46/*"ScriptPrope...*/]));

    return *__retval = (::g::Uno::UX::Property1*)uPtr(__this->_getter)->Invoke(1, (void*)uUnboxAny(__this->__type->T(0), owner)), void();
}

// public ScriptProperty New(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) :53
void ScriptProperty1__New1_fn(uType* __type, uString* name, uDelegate* getter, uString* modifier, ScriptProperty1** __retval)
{
    *__retval = ScriptProperty1::New1(__type, name, getter, modifier);
}

// public ScriptProperty(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) [instance] :53
void ScriptProperty1::ctor_2(uString* name, uDelegate* getter, uString* modifier)
{
    ctor_1(name, modifier);
    _getter = getter;
}

// public ScriptProperty New(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) [static] :53
ScriptProperty1* ScriptProperty1::New1(uType* __type, uString* name, uDelegate* getter, uString* modifier)
{
    ScriptProperty1* obj1 = (ScriptProperty1*)uNew(__type);
    obj1->ctor_2(name, getter, modifier);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptReadonlyProperty :25
// {
static void ScriptReadonlyProperty_build(uType* type)
{
    type->SetFields(1,
        uObject_typeof(), offsetof(ScriptReadonlyProperty, Value), 0);
}

uType* ScriptReadonlyProperty_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptReadonlyProperty);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptReadonlyProperty", options);
    type->fp_build_ = ScriptReadonlyProperty_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/IScriptEvent.uno
// -------------------------------------------------------------------

// public sealed class StringChangedArgs :42
// {
static void StringChangedArgs_build(uType* type)
{
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[2] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(StringChangedArgs_type, interface0));
    type->SetFields(1);
}

StringChangedArgs_type* StringChangedArgs_typeof()
{
    static uSStrong<StringChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::ValueChangedArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringChangedArgs);
    options.TypeSize = sizeof(StringChangedArgs_type);
    type = (StringChangedArgs_type*)uClassType::New("Fuse.Scripting.StringChangedArgs", options);
    type->fp_build_ = StringChangedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))StringChangedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public StringChangedArgs(string newValue) :44
void StringChangedArgs__ctor_2_fn(StringChangedArgs* __this, uString* newValue)
{
    __this->ctor_2(newValue);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :46
void StringChangedArgs__FuseScriptingIScriptEventSerialize_fn(StringChangedArgs* __this, uObject* s)
{
    uString* ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[2/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public StringChangedArgs New(string newValue) :44
void StringChangedArgs__New3_fn(uString* newValue, StringChangedArgs** __retval)
{
    *__retval = StringChangedArgs::New3(newValue);
}

// public StringChangedArgs(string newValue) [instance] :44
void StringChangedArgs::ctor_2(uString* newValue)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, newValue);
}

// public StringChangedArgs New(string newValue) [static] :44
StringChangedArgs* StringChangedArgs::New3(uString* newValue)
{
    StringChangedArgs* obj1 = (StringChangedArgs*)uNew(StringChangedArgs_typeof());
    obj1->ctor_2(newValue);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/Types.uno
// ------------------------------------------------------------

// public static class Value :85
// {
static void Value_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::Double_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[30] = ::g::Uno::Int_typeof();
    ::TYPES[37] = ::g::Uno::UInt_typeof();
}

uClassType* Value_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Value", options);
    type->fp_build_ = Value_build;
    return type;
}

// public static double ToNumber(object obj) :87
void Value__ToNumber_fn(uObject* obj, double* __retval)
{
    *__retval = Value::ToNumber(obj);
}

// public static double ToNumber(object obj) [static] :87
double Value::ToNumber(uObject* obj)
{
    if (uIs(obj, ::TYPES[33/*double*/]))
        return uUnbox<double>(::TYPES[33/*double*/], obj);

    if (uIs(obj, ::TYPES[32/*float*/]))
        return (double)uUnbox<float>(::TYPES[32/*float*/], obj);

    if (uIs(obj, ::TYPES[30/*int*/]))
        return (double)uUnbox<int>(::TYPES[30/*int*/], obj);

    if (uIs(obj, ::TYPES[37/*uint*/]))
        return (double)uUnbox<uint32_t>(::TYPES[37/*uint*/], obj);

    return 0.0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeProperty.uno
// ---------------------------------------------------------------------

// public delegate TJSValue ValueConverter<T, TJSValue>(Fuse.Scripting.Context context, T originalValue) :6
uDelegateType* ValueConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ValueConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

}}} // ::g::Fuse::Scripting
