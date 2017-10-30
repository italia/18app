// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.JavaScriptCore.Array.h>
#include <Fuse.Scripting.JavaScriptCore.Context.CallbackWrapper.h>
#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.JavaScriptCore.Function.h>
#include <Fuse.Scripting.JavaScriptCore.JSClassRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSClassRef.RawCallback.h>
#include <Fuse.Scripting.JavaScriptCore.JSContextRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSObjectRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSPropertyNameArray.h>
#include <Fuse.Scripting.JavaScriptCore.JSStringRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSType.h>
#include <Fuse.Scripting.JavaScriptCore.JSTypedArray.h>
#include <Fuse.Scripting.JavaScriptCore.JSValueRef.h>
#include <Fuse.Scripting.JavaScriptCore.Object.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <JavaScriptCore/JSBase.h>
#include <JavaScriptCore/JSValueRef.h>
#include <JSTypedArrayInclude.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[8];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/Array.uno
// ---------------------------------------------------------------------------

// internal sealed extern class Array :7
// {
// ~Array() :19
static void Array__Finalize_fn(Array* __this)
{
    ::JSObjectRef ind2;

    if (!uPtr(__this->_context)->_disposed)
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = __this->_value, ind2)), uPtr(__this->_context)->_context);
}

static void Array_build(uType* type)
{
    ::STRINGS[0] = uString::Const("length");
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Scripting::Array_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(Array, _context), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Array, _value), 0);
}

::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Array_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Finalize = (void(*)(uObject*))Array__Finalize_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))Array__get_Length_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Array__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Array__get_Item_fn;
    return type;
}

// internal Array(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) :12
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array)
{
    __this->ctor_1(context, *array);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :56
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    ::JSObjectRef ind6;
    Array* jsa = uCast<Array*>(a, __this->__type);
    return *__retval = ::g::Uno::Object::Equals(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind6 = __this->_value, ind6), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize)), uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), uPtr(jsa)->_value)), void();
}

// public override sealed int GetHashCode() :62
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    ::JSObjectRef ind7;
    return *__retval = ::g::Uno::Object::GetHashCode(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind7 = __this->_value, ind7), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))), void();
}

// public override sealed object get_Item(int index) :27
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    ::JSObjectRef ind3;
    int index_ = *index;
    return *__retval = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetPropertyAtIndex1((ind3 = __this->_value, ind3), uPtr(__this->_context)->_context, index_, uPtr(__this->_context)->_onError)), void();
}

// public override sealed void set_Item(int index, object value) :34
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    ::JSObjectRef ind4;
    int index_ = *index;
    ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetPropertyAtIndex1((ind4 = __this->_value, ind4), uPtr(__this->_context)->_context, index_, uPtr(__this->_context)->Unwrap1(value), uPtr(__this->_context)->_onError);
}

// public override sealed int get_Length() :45
void Array__get_Length_fn(Array* __this, int* __retval)
{
    ::JSObjectRef ind5;
    return *__retval = (int)::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1((ind5 = __this->_value, ind5), uPtr(__this->_context)->_context, ::STRINGS[0/*"length"*/], uPtr(__this->_context)->_onError), uPtr(__this->_context)->_context, uPtr(__this->_context)->_onError), void();
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) :12
void Array__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array, Array** __retval)
{
    *__retval = Array::New1(context, *array);
}

// internal Array(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) [instance] :12
void Array::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array)
{
    ::JSObjectRef ind1;
    ctor_();
    _context = context;
    _value = array;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind1 = _value, ind1)), uPtr(_context)->_context);
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) [static] :12
Array* Array::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array)
{
    Array* obj8 = (Array*)uNew(Array_typeof());
    obj8->ctor_1(context, array);
    return obj8;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/Context.uno
// -----------------------------------------------------------------------------

// private sealed extern class Context.CallbackWrapper :285
// {
static void Context__CallbackWrapper_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Scripting::Error_typeof();
    type->SetDependencies(
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(Context__CallbackWrapper, _callback), 0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(Context__CallbackWrapper, _context), 0);
}

uType* Context__CallbackWrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Context__CallbackWrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.Context.CallbackWrapper", options);
    type->fp_build_ = Context__CallbackWrapper_build;
    return type;
}

// public CallbackWrapper(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) :290
void Context__CallbackWrapper__ctor__fn(Context__CallbackWrapper* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef Call(Fuse.Scripting.JavaScriptCore.JSValueRef[] args, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :296
void Context__CallbackWrapper__Call_fn(Context__CallbackWrapper* __this, uArray* args, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = __this->Call(args, exception);
}

// public CallbackWrapper New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) :290
void Context__CallbackWrapper__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback, Context__CallbackWrapper** __retval)
{
    *__retval = Context__CallbackWrapper::New1(context, callback);
}

// public CallbackWrapper(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) [instance] :290
void Context__CallbackWrapper::ctor_(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef Call(Fuse.Scripting.JavaScriptCore.JSValueRef[] args, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :296
::JSValueRef Context__CallbackWrapper::Call(uArray* args, ::JSValueRef* exception)
{
    *exception = NULL;

    try
    {
        return uPtr(_context)->Unwrap1(uPtr(_callback)->Invoke(1, (uArray*)uPtr(_context)->Wrap2(args)));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[0/*Fuse.Scripting.Error*/]))
        {
            ::g::Fuse::Scripting::Error* e = (::g::Fuse::Scripting::Error*)__t.Exception;
            *exception = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(uPtr(_context)->_context, uPtr(e)->Message());
        }
        else throw __t;
    }

    return NULL;
}

// public CallbackWrapper New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) [static] :290
Context__CallbackWrapper* Context__CallbackWrapper::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback)
{
    Context__CallbackWrapper* obj1 = (Context__CallbackWrapper*)uNew(Context__CallbackWrapper_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/Context.uno
// -----------------------------------------------------------------------------

// public sealed extern class Context :9
// {
// ~Context() :68
static void Context__Finalize_fn(Context* __this)
{
    __this->Dispose();
}

static void Context_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Scripting::JavaScriptCore::JSContextRef_typeof(),
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(),
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(6,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Context, _arrayBufferType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Context, _arrayType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Context, _byteArrayType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSContextRef_typeof(), offsetof(Context, _context), 0,
        ::g::Uno::Bool_typeof(), offsetof(Context, _disposed), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Context, _functionType), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Context, _global), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(), NULL), offsetof(Context, _onError), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef_typeof(), offsetof(Context, _unoCallbackClass), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef_typeof(), offsetof(Context, _unoFinalizerClass), 0);
}

::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Context_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 1;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Context", options);
    type->fp_build_ = Context_build;
    type->fp_Finalize = (void(*)(uObject*))Context__Finalize_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    return type;
}

// public Context(Fuse.Scripting.IThreadWorker worker) :22
void Context__ctor_1_fn(Context* __this, uObject* worker)
{
    __this->ctor_1(worker);
}

// public override sealed void Dispose() :49
void Context__Dispose_fn(Context* __this)
{
    ::JSObjectRef ind6;
    ::JSObjectRef ind7;
    ::JSObjectRef ind8;
    ::JSObjectRef ind9;
    ::JSClassRef ind10;
    ::JSClassRef ind11;
    ::JSContextRef ind12;

    if (!__this->_disposed)
    {
        __this->_disposed = true;
        __this->_onError = NULL;
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind6 = __this->_functionType, ind6)), __this->_context);
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind7 = __this->_arrayType, ind7)), __this->_context);
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind8 = __this->_arrayBufferType, ind8)), __this->_context);
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind9 = __this->_byteArrayType, ind9)), __this->_context);
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::Dispose((ind10 = __this->_unoFinalizerClass, ind10));
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::Dispose((ind11 = __this->_unoCallbackClass, ind11));
        ::g::Fuse::Scripting::JavaScriptCore::JSContextRef::Dispose((ind12 = __this->_context, ind12));
    }
}

// public override sealed object Evaluate(string fileName, string code) :73
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    ::JSContextRef ind13;

    if (::g::Uno::String::op_Equality(fileName, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(uString::Const("Context.Evaluate.fileName")));

    if (::g::Uno::String::op_Equality(code, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(uString::Const("Context.Evaluate.code")));

    return *__retval = __this->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSContextRef::EvaluateScript1((ind13 = __this->_context, ind13), code, NULL, fileName, 0, __this->_onError)), void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :87
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    return *__retval = __this->_global, void();
}

// public Context New(Fuse.Scripting.IThreadWorker worker) :22
void Context__New1_fn(uObject* worker, Context** __retval)
{
    *__retval = Context::New1(worker);
}

// private void OnError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) :105
void Context__OnError_fn(Context* __this, ::JSValueRef* exception)
{
    __this->OnError(*exception);
}

// private void OnSetupError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) :98
void Context__OnSetupError_fn(Context* __this, ::JSValueRef* exception)
{
    __this->OnSetupError(*exception);
}

// private static void OnSetupErrorError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) :93
void Context__OnSetupErrorError_fn(::JSValueRef* exception)
{
    Context::OnSetupErrorError(*exception);
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef Unwrap(object obj) :173
void Context__Unwrap1_fn(Context* __this, uObject* obj, ::JSValueRef* __retval)
{
    *__retval = __this->Unwrap1(obj);
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef[] Unwrap(object[] obj) :199
void Context__Unwrap2_fn(Context* __this, uArray* obj, uArray** __retval)
{
    *__retval = __this->Unwrap2(obj);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef UnwrapArrayBuffer(byte[] data) :211
void Context__UnwrapArrayBuffer_fn(Context* __this, uArray* data, ::JSValueRef* __retval)
{
    *__retval = __this->UnwrapArrayBuffer(data);
}

// internal object Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef value) :138
void Context__Wrap1_fn(Context* __this, ::JSValueRef* value, uObject** __retval)
{
    *__retval = __this->Wrap1(*value);
}

// internal object[] Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef[] values) :163
void Context__Wrap2_fn(Context* __this, uArray* values, uArray** __retval)
{
    *__retval = __this->Wrap2(values);
}

// private byte[] WrapArrayBuffer(Fuse.Scripting.JavaScriptCore.JSObjectRef value) :242
void Context__WrapArrayBuffer_fn(Context* __this, ::JSObjectRef* value, uArray** __retval)
{
    *__retval = __this->WrapArrayBuffer(*value);
}

// public Context(Fuse.Scripting.IThreadWorker worker) [instance] :22
void Context::ctor_1(uObject* worker)
{
    ::JSContextRef ind1;
    ::JSObjectRef ind2;
    ::JSObjectRef ind3;
    ::JSObjectRef ind4;
    ::JSObjectRef ind5;
    ctor_(worker);
    _context = ::g::Fuse::Scripting::JavaScriptCore::JSContextRef::Create();
    _onError = uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(), NULL), (void*)Context__OnError_fn, this);
    ::JSObjectRef global = ::g::Fuse::Scripting::JavaScriptCore::JSContextRef::GlobalObject((ind1 = _context, ind1));
    _global = ::g::Fuse::Scripting::JavaScriptCore::Object::New1(this, global);
    uDelegate* onSetupError = uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(), NULL), (void*)Context__OnSetupError_fn, this);
    _functionType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, uString::Const("Function"), onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = _functionType, ind2)), _context);
    _arrayType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, uString::Const("Array"), onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind3 = _arrayType, ind3)), _context);
    _arrayBufferType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, uString::Const("ArrayBuffer"), onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind4 = _arrayBufferType, ind4)), _context);
    _byteArrayType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, uString::Const("Uint8Array"), onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind5 = _byteArrayType, ind5)), _context);
    _unoFinalizerClass = ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::CreateUnoFinalizer();
    _unoCallbackClass = ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::CreateUnoCallback();
}

// private void OnError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) [instance] :105
void Context::OnError(::JSValueRef exception)
{
    uString* ind21;
    uString* ind22;
    uString* ind23;
    uString* ind24;
    uString* ind25;
    uString* name = NULL;
    uString* message = NULL;
    uString* file = NULL;
    int lineNumber = -1;
    uString* stack = NULL;
    uObject* wrapped = Wrap1(exception);

    if (uIs(wrapped, ::g::Fuse::Scripting::JavaScriptCore::Object_typeof()))
    {
        ::g::Fuse::Scripting::JavaScriptCore::Object* o = uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(wrapped, ::g::Fuse::Scripting::JavaScriptCore::Object_typeof());
        name = (ind21 = uAs<uString*>(uPtr(o)->Item(uString::Const("name")), ::g::Uno::String_typeof()), (ind21 != NULL) ? ind21 : name);
        message = (ind22 = uAs<uString*>(o->Item(uString::Const("message")), ::g::Uno::String_typeof()), (ind22 != NULL) ? ind22 : message);
        file = (ind23 = (ind24 = uAs<uString*>(o->Item(uString::Const("fileName")), ::g::Uno::String_typeof()), (ind24 != NULL) ? ind24 : uAs<uString*>(o->Item(::STRINGS[2/*"sourceURL"*/]), ::g::Uno::String_typeof())), (ind23 != NULL) ? ind23 : file);
        uObject* l1 = o->Item(uString::Const("line"));
        uObject* l2 = o->Item(uString::Const("lineNumber"));
        lineNumber = uIs(l1, ::g::Uno::Double_typeof()) ? (int)uUnbox<double>(::g::Uno::Double_typeof(), l1) : uIs(l2, ::g::Uno::Double_typeof()) ? (int)uUnbox<double>(::g::Uno::Double_typeof(), l2) : uIs(l1, ::g::Uno::Int_typeof()) ? uUnbox<int>(::g::Uno::Int_typeof(), l1) : uIs(l2, ::g::Uno::Int_typeof()) ? uUnbox<int>(::g::Uno::Int_typeof(), l2) : lineNumber;
        stack = (ind25 = uAs<uString*>(o->Item(uString::Const("stack")), ::g::Uno::String_typeof()), (ind25 != NULL) ? ind25 : stack);
    }
    else
        message = (wrapped != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(wrapped)) : message;

    U_THROW(::g::Fuse::Scripting::ScriptException::New4(name, message, file, lineNumber, NULL, stack));
}

// private void OnSetupError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) [instance] :98
void Context::OnSetupError(::JSValueRef exception)
{
    uString* str = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToString1(exception, _context, uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(), NULL), (void*)Context__OnSetupErrorError_fn));
    str = ::g::Uno::String::op_Equality(str, NULL) ? uString::Const("Unknown") : str;
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(uString::Const("Fatal exception during Fuse.Scripting.JavaScriptCore startup: "), str)));
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef Unwrap(object obj) [instance] :173
::JSValueRef Context::Unwrap1(uObject* obj)
{
    ::JSObjectRef ind14;
    ::JSObjectRef ind15;
    ::JSObjectRef ind16;
    ::JSObjectRef ind17;

    if (obj == NULL)
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNull(_context);

    if (uIs(obj, ::g::Uno::Int_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)uUnbox<int>(::g::Uno::Int_typeof(), obj));

    if (uIs(obj, ::g::Uno::Double_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, uUnbox<double>(::g::Uno::Double_typeof(), obj));

    if (uIs(obj, ::g::Uno::Float_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)uUnbox<float>(::g::Uno::Float_typeof(), obj));

    if (uIs(obj, ::g::Uno::String_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(_context, uCast<uString*>(obj, ::g::Uno::String_typeof()));

    if (uIs(obj, ::g::Uno::UX::Selector_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(_context, ::g::Uno::UX::Selector__op_Implicit1(uUnbox< ::g::Uno::UX::Selector>(::g::Uno::UX::Selector_typeof(), obj)));

    if (uIs(obj, ::g::Uno::Bool_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeBoolean(_context, uUnbox<bool>(::g::Uno::Bool_typeof(), obj));

    if (uIs(obj, ::g::Uno::Byte_typeof()->Array()))
        return UnwrapArrayBuffer(uCast<uArray*>(obj, ::g::Uno::Byte_typeof()->Array()));

    if (uIs(obj, ::g::Fuse::Scripting::JavaScriptCore::Object_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind14 = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(obj, ::g::Fuse::Scripting::JavaScriptCore::Object_typeof()))->_value, ind14));

    if (uIs(obj, ::g::Fuse::Scripting::JavaScriptCore::Array_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind15 = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Array*>(obj, ::g::Fuse::Scripting::JavaScriptCore::Array_typeof()))->_value, ind15));

    if (uIs(obj, ::TYPES[5/*Fuse.Scripting.JavaScriptCore.Function*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind16 = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(obj, ::TYPES[5/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value, ind16));

    if (uIs(obj, ::g::Fuse::Scripting::External_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::Make(_context, _unoFinalizerClass, obj));

    if (uIs(obj, ::g::Fuse::Scripting::Callback_typeof()))
    {
        ::JSObjectRef result = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::Make(_context, _unoCallbackClass, uDelegate::New(::g::Fuse::Scripting::JavaScriptCore::JSClassRef__RawCallback_typeof(), (void*)Context__CallbackWrapper__Call_fn, Context__CallbackWrapper::New1(this, uCast<uDelegate*>(obj, ::g::Fuse::Scripting::Callback_typeof()))));
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetPrototype(result, _context, ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind17 = _functionType, ind17)));
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(result);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(uString::Const("Unhandled type in JavaScriptCore wrapper: "), obj)));
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef[] Unwrap(object[] obj) [instance] :199
uArray* Context::Unwrap2(uArray* obj)
{
    uArray* result = uArray::New(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), uPtr(obj)->Length());

    for (int i = 0; i < obj->Length(); ++i)
        uPtr(result)->Item< ::JSValueRef>(i) = Unwrap1(uPtr(obj)->Strong<uObject*>(i));

    return result;
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef UnwrapArrayBuffer(byte[] data) [instance] :211
::JSValueRef Context::UnwrapArrayBuffer(uArray* data)
{
    ::JSObjectRef ind18;
    ::JSObjectRef ind19;
    ::JSObjectRef arrayBuffer = ::g::Fuse::Scripting::JavaScriptCore::JSTypedArray::TryMakeArrayBufferWithBytes(_context, data, _onError);

    if (::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::op_Inequality(arrayBuffer, NULL))
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetProperty1(arrayBuffer, _context, uString::Const("__unoHandle"), Unwrap1(::g::Fuse::Scripting::External::New1(data)), _onError);
    else
    {
        int len = uPtr(data)->Length();
        arrayBuffer = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind18 = _arrayBufferType, ind18), _context, uArray::Init< ::JSValueRef>(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), 1, ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)len)), _onError);
        ::JSObjectRef byteArray = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind19 = _byteArrayType, ind19), _context, uArray::Init< ::JSValueRef>(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), 1, ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(arrayBuffer)), _onError);

        for (int i = 0; i < len; ++i)
            ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetPropertyAtIndex1(byteArray, _context, i, ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)uPtr(data)->Item<uint8_t>(i)), _onError);
    }

    return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(arrayBuffer);
}

// internal object Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef value) [instance] :138
uObject* Context::Wrap1(::JSValueRef value)
{
    switch (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetType1(value, _context))
    {
        case 0:
            return NULL;
        case 1:
            return NULL;
        case 2:
            return uBox(::g::Uno::Bool_typeof(), ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToBoolean(value, _context));
        case 3:
            return uBox(::g::Uno::Double_typeof(), ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(value, _context, _onError));
        case 4:
            return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToString1(value, _context, _onError);
        case 5:
        {
            ::JSObjectRef obj = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(value, _context);
            uObject* priv = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetPrivate(obj);

            if ((priv != NULL) && uIs(priv, ::g::Fuse::Scripting::External_typeof()))
                return priv;

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(value, _context, _functionType, _onError))
                return ::g::Fuse::Scripting::JavaScriptCore::Function::New1(this, obj);

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(value, _context, _arrayType, _onError))
                return ::g::Fuse::Scripting::JavaScriptCore::Array::New1(this, obj);

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(value, _context, _arrayBufferType, _onError))
                return WrapArrayBuffer(obj);

            return ::g::Fuse::Scripting::JavaScriptCore::Object::New1(this, obj);
        }
        case 6:
            U_THROW(::g::Uno::Exception::New2(uString::Const("Internal error in JavaScriptCore wrapper")));
        default:
            U_THROW(::g::Uno::Exception::New2(uString::Const("Unhandled JSType in JavaScriptCore wrapper")));
    }
}

// internal object[] Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef[] values) [instance] :163
uArray* Context::Wrap2(uArray* values)
{
    uArray* result = uArray::New(::TYPES[3/*object[]*/], uPtr(values)->Length());

    for (int i = 0; i < values->Length(); ++i)
        uPtr(result)->Strong<uObject*>(i) = Wrap1(uPtr(values)->Item< ::JSValueRef>(i));

    return result;
}

// private byte[] WrapArrayBuffer(Fuse.Scripting.JavaScriptCore.JSObjectRef value) [instance] :242
uArray* Context::WrapArrayBuffer(::JSObjectRef value)
{
    ::JSObjectRef ind20;

    if (::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::HasProperty1(value, _context, uString::Const("__unoHandle")))
    {
        ::g::Fuse::Scripting::External* unoHandle = uAs< ::g::Fuse::Scripting::External*>(Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(value, _context, uString::Const("__unoHandle"), _onError)), ::g::Fuse::Scripting::External_typeof());

        if (unoHandle != NULL)
        {
            uArray* result = uAs<uArray*>(uPtr(unoHandle)->Object, ::g::Uno::Byte_typeof()->Array());

            if (result != NULL)
                return result;
        }
    }

    uArray* res = ::g::Fuse::Scripting::JavaScriptCore::JSTypedArray::TryCopyArrayBufferBytes(_context, value, _onError);

    if (res != NULL)
        return res;

    ::JSObjectRef byteArray = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind20 = _byteArrayType, ind20), _context, uArray::Init< ::JSValueRef>(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), 1, ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(value)), _onError);
    int len = (int)::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(value, _context, uString::Const("byteLength"), _onError), _context, _onError);
    res = uArray::New(::g::Uno::Byte_typeof()->Array(), len);

    for (int i = 0; i < len; ++i)
        uPtr(res)->Item<uint8_t>(i) = (uint8_t)::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetPropertyAtIndex1(byteArray, _context, i, _onError), _context, _onError);

    return res;
}

// public Context New(Fuse.Scripting.IThreadWorker worker) [static] :22
Context* Context::New1(uObject* worker)
{
    Context* obj26 = (Context*)uNew(Context_typeof());
    obj26->ctor_1(worker);
    return obj26;
}

// private static void OnSetupErrorError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) [static] :93
void Context::OnSetupErrorError(::JSValueRef exception)
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/Function.uno
// ------------------------------------------------------------------------------

// internal sealed extern class Function :6
// {
// ~Function() :18
static void Function__Finalize_fn(Function* __this)
{
    ::JSObjectRef ind2;

    if (!uPtr(__this->_context)->_disposed)
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = __this->_value, ind2)), uPtr(__this->_context)->_context);
}

static void Function_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(Function, _context), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Function, _value), 0);
}

::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Function_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Finalize = (void(*)(uObject*))Function__Finalize_fn;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    return type;
}

// internal Function(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) :11
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* function)
{
    __this->ctor_1(context, *function);
}

// public override sealed object Call(object[] args) :24
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval)
{
    ::JSObjectRef ind3;
    return *__retval = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsFunction((ind3 = __this->_value, ind3), uPtr(__this->_context)->_context, NULL, uPtr(__this->_context)->Unwrap2(args), uPtr(__this->_context)->_onError)), void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :34
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    ::JSObjectRef ind4;
    return *__retval = uCast< ::g::Fuse::Scripting::Object*>(uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind4 = __this->_value, ind4), uPtr(__this->_context)->_context, uPtr(__this->_context)->Unwrap2(args), uPtr(__this->_context)->_onError))), ::TYPES[1/*Fuse.Scripting.Object*/]), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :43
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    ::JSObjectRef ind5;
    return *__retval = uIs(f, __this->__type) && ::g::Uno::Object::Equals(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind5 = __this->_value, ind5), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize)), uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), uPtr(uCast<Function*>(f, __this->__type))->_value)), void();
}

// public override sealed int GetHashCode() :48
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    ::JSObjectRef ind6;
    return *__retval = ::g::Uno::Object::GetHashCode(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind6 = __this->_value, ind6), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))), void();
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) :11
void Function__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* function, Function** __retval)
{
    *__retval = Function::New1(context, *function);
}

// internal Function(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) [instance] :11
void Function::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef function)
{
    ::JSObjectRef ind1;
    ctor_();
    _context = context;
    _value = function;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind1 = _value, ind1)), uPtr(_context)->_context);
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) [static] :11
Function* Function::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef function)
{
    Function* obj7 = (Function*)uNew(Function_typeof());
    obj7->ctor_1(context, function);
    return obj7;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno
// ------------------------------------------------------------------------------------

// internal extern struct JSClassRef :414
// {
// public void Dispose() [adapter] :488
static void JSClassRef__Dispose_ex(uObject* __this)
{
    JSClassRef__Dispose_fn((::JSClassRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSClassRef_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSClassRef_type, interface0));
}

JSClassRef_type* JSClassRef_typeof()
{
    static uSStrong<JSClassRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.Alignment = alignof(::JSClassRef);
    options.ValueSize = sizeof(::JSClassRef);
    options.TypeSize = sizeof(JSClassRef_type);
    type = (JSClassRef_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSClassRef", options);
    type->fp_build_ = JSClassRef_build;
    type->interface0.fp_Dispose = JSClassRef__Dispose_ex;
    return type;
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoCallback() :432
void JSClassRef__CreateUnoCallback_fn(::JSClassRef* __retval)
{
    *__retval = JSClassRef::CreateUnoCallback();
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoFinalizer() :418
void JSClassRef__CreateUnoFinalizer_fn(::JSClassRef* __retval)
{
    *__retval = JSClassRef::CreateUnoFinalizer();
}

// public void Dispose() :488
void JSClassRef__Dispose_fn(::JSClassRef* __this)
{
    JSClassRef::Dispose(*__this);
}

// public void Dispose() [instance] :488
void JSClassRef::Dispose(::JSClassRef __this)
{
    ::JSClassRelease(*&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoCallback() [static] :432
::JSClassRef JSClassRef::CreateUnoCallback()
{
    ::JSClassDefinition classDef = kJSClassDefinitionEmpty;
    classDef.finalize = (::JSObjectFinalizeCallback) [] (::JSObjectRef obj) -> void
    {
    	uObject* unoObj = (uObject*)JSObjectGetPrivate(obj);
    	::uRelease(unoObj);
    };
    
    classDef.callAsFunction = (::JSObjectCallAsFunctionCallback) [] (
    	::JSContextRef ctx,
    	::JSObjectRef function,
    	::JSObjectRef thisObject,
    	size_t argumentCount,
    	const ::JSValueRef arguments[],
    	::JSValueRef* exception) -> ::JSValueRef
    {
    	uDelegate* unoDelegate = (uDelegate*)JSObjectGetPrivate(function);
    	uArray* unoArguments = uArray::New(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), (int)argumentCount);
    	for (int i = 0; i < argumentCount; ++i)
    	{
    		unoArguments->Item< ::JSValueRef>(i) = arguments[i];
    	}
    
    	return uUnbox< ::JSValueRef>(unoDelegate->Invoke(2, unoArguments, exception));
    };
    
    classDef.callAsConstructor = (::JSObjectCallAsConstructorCallback) [] (
    	::JSContextRef ctx,
    	::JSObjectRef constructor,
    	size_t argumentCount,
    	const ::JSValueRef arguments[],
    	::JSValueRef* exception) -> ::JSObjectRef
    {
    	uDelegate* unoDelegate = (uDelegate*)JSObjectGetPrivate(constructor);
    	uArray* unoArguments = uArray::New(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), (int)argumentCount);
    	for (int i = 0; i < argumentCount; ++i)
    	{
    		unoArguments->Item< ::JSValueRef>(i) = arguments[i];
    	}
    
    	::JSValueRef result = uUnbox< ::JSValueRef>(unoDelegate->Invoke(2, unoArguments, exception));
    	if (!::JSValueIsObject(ctx, result))
    	{
    		const char* errorStr
    			= "Scripting.Callback called as a constructor returned a non-object.";
    		::uString* unoErrorStr = ::uString::Ansi(errorStr);
    		*exception = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(ctx, unoErrorStr);
    		return NULL;
    	}
    	return (::JSObjectRef)result;
    };
    
    return ::JSClassCreate(&classDef);
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoFinalizer() [static] :418
::JSClassRef JSClassRef::CreateUnoFinalizer()
{
    ::JSClassDefinition classDef = kJSClassDefinitionEmpty;
    classDef.finalize = (::JSObjectFinalizeCallback)
    [] (::JSObjectRef obj) -> void
    {
    	uObject* unoObj = (uObject*)JSObjectGetPrivate(obj);
    	::uRelease(unoObj);
    };
    return ::JSClassCreate(&classDef);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno
// ------------------------------------------------------------------------------------

// internal extern struct JSContextRef :351
// {
// public void Dispose() [adapter] :360
static void JSContextRef__Dispose_ex(uObject* __this)
{
    JSContextRef__Dispose_fn((::JSContextRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSContextRef_build(uType* type)
{
    ::STRINGS[1] = uString::Const("script");
    ::STRINGS[2] = uString::Const("sourceURL");
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof());
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(JSContextRef_type, interface0));
}

JSContextRef_type* JSContextRef_typeof()
{
    static uSStrong<JSContextRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.Alignment = alignof(::JSContextRef);
    options.ValueSize = sizeof(::JSContextRef);
    options.TypeSize = sizeof(JSContextRef_type);
    type = (JSContextRef_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSContextRef", options);
    type->fp_build_ = JSContextRef_build;
    type->interface0.fp_Dispose = JSContextRef__Dispose_ex;
    return type;
}

// public static Fuse.Scripting.JavaScriptCore.JSContextRef Create() :355
void JSContextRef__Create_fn(::JSContextRef* __retval)
{
    *__retval = JSContextRef::Create();
}

// public void Dispose() :360
void JSContextRef__Dispose_fn(::JSContextRef* __this)
{
    JSContextRef::Dispose(*__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(Fuse.Scripting.JavaScriptCore.JSStringRef script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSStringRef sourceURL, int startingLineNumber, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :373
void JSContextRef__EvaluateScript_fn(::JSContextRef* __this, ::JSStringRef* script, ::JSObjectRef* thisObject, ::JSStringRef* sourceURL, int* startingLineNumber, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = JSContextRef::EvaluateScript(*__this, *script, *thisObject, *sourceURL, *startingLineNumber, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(string script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, string sourceURL, int startingLineNumber, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :383
void JSContextRef__EvaluateScript1_fn(::JSContextRef* __this, uString* script, ::JSObjectRef* thisObject, uString* sourceURL, int* startingLineNumber, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSContextRef::EvaluateScript1(*__this, script, *thisObject, sourceURL, *startingLineNumber, onException);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef get_GlobalObject() :367
void JSContextRef__get_GlobalObject_fn(::JSContextRef* __this, ::JSObjectRef* __retval)
{
    *__retval = JSContextRef::GlobalObject(*__this);
}

// public void Dispose() [instance] :360
void JSContextRef::Dispose(::JSContextRef __this)
{
    ::JSGlobalContextRelease((::JSGlobalContextRef)*&__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(Fuse.Scripting.JavaScriptCore.JSStringRef script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSStringRef sourceURL, int startingLineNumber, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :373
::JSValueRef JSContextRef::EvaluateScript(::JSContextRef __this, ::JSStringRef script, ::JSObjectRef thisObject, ::JSStringRef sourceURL, int startingLineNumber, ::JSValueRef* exception)
{
    return ::JSEvaluateScript(*&__this, script, thisObject, sourceURL, startingLineNumber, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(string script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, string sourceURL, int startingLineNumber, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :383
::JSValueRef JSContextRef::EvaluateScript1(::JSContextRef __this, uString* script, ::JSObjectRef thisObject, uString* sourceURL, int startingLineNumber, uDelegate* onException)
{
    if (::g::Uno::String::op_Equality(script, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"script"*/]));

    if (::g::Uno::String::op_Equality(sourceURL, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"sourceURL"*/]));

    ::JSStringRef scriptRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(script);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[4/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], scriptRef), ::TYPES[2/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::JSStringRef sourceRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(sourceURL);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[4/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], sourceRef), ::TYPES[2/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            ::JSValueRef exception = NULL;
            ::JSValueRef result = JSContextRef::EvaluateScript(__this, scriptRef, thisObject, sourceRef, startingLineNumber, &exception);

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
                uPtr(onException)->InvokeVoid(uCRef(exception));

            return result;
        }
    }

    return NULL;
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef get_GlobalObject() [instance] :367
::JSObjectRef JSContextRef::GlobalObject(::JSContextRef __this)
{
    return ::JSContextGetGlobalObject(*&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSContextRef Create() [static] :355
::JSContextRef JSContextRef::Create()
{
    return (::JSContextRef)::JSGlobalContextCreate(NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno
// ------------------------------------------------------------------------------------

// internal extern struct JSObjectRef :168
// {
static void JSObjectRef_build(uType* type)
{
    ::STRINGS[3] = uString::Const("propertyName");
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof());
}

uStructType* JSObjectRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.Alignment = alignof(::JSObjectRef);
    options.ValueSize = sizeof(::JSObjectRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.JavaScriptCore.JSObjectRef", options);
    type->fp_build_ = JSObjectRef_build;
    return type;
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef CallAsConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :301
void JSObjectRef__CallAsConstructor_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uArray* arguments, uDelegate* onException, ::JSObjectRef* __retval)
{
    *__retval = JSObjectRef::CallAsConstructor(*__this, *ctx, arguments, onException);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef CallAsFunction(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :282
void JSObjectRef__CallAsFunction_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSObjectRef* thisObject, uArray* arguments, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::CallAsFunction(*__this, *ctx, *thisObject, arguments, onException);
}

// public Fuse.Scripting.JavaScriptCore.JSPropertyNameArray CopyPropertyNames(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :271
void JSObjectRef__CopyPropertyNames_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSPropertyNameArrayRef* __retval)
{
    *__retval = JSObjectRef::CopyPropertyNames(*__this, *ctx);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetJSValueRef() :251
void JSObjectRef__GetJSValueRef_fn(::JSObjectRef* __this, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetJSValueRef(*__this);
}

// public object GetPrivate() :256
void JSObjectRef__GetPrivate_fn(::JSObjectRef* __this, uObject** __retval)
{
    *__retval = JSObjectRef::GetPrivate(*__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :175
void JSObjectRef__GetProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetProperty(*__this, *ctx, *propertyName, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :180
void JSObjectRef__GetProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetProperty1(*__this, *ctx, propertyName, onException);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :210
void JSObjectRef__GetPropertyAtIndex_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetPropertyAtIndex(*__this, *ctx, *index, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :215
void JSObjectRef__GetPropertyAtIndex1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetPropertyAtIndex1(*__this, *ctx, *index, onException);
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName) :237
void JSObjectRef__HasProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, bool* __retval)
{
    *__retval = JSObjectRef::HasProperty(*__this, *ctx, *propertyName);
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName) :242
void JSObjectRef__HasProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, bool* __retval)
{
    *__retval = JSObjectRef::HasProperty1(*__this, *ctx, propertyName);
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef Make(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, [Fuse.Scripting.JavaScriptCore.JSClassRef classRef], [object data]) :276
void JSObjectRef__Make_fn(::JSContextRef* ctx, ::JSClassRef* classRef, uObject* data, ::JSObjectRef* __retval)
{
    *__retval = JSObjectRef::Make(*ctx, *classRef, data);
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSObjectRef o1, Fuse.Scripting.JavaScriptCore.JSObjectRef o2) :173
void JSObjectRef__op_Inequality_fn(::JSObjectRef* o1, ::JSObjectRef* o2, bool* __retval)
{
    *__retval = JSObjectRef::op_Inequality(*o1, *o2);
}

// private void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :193
void JSObjectRef__SetProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, ::JSValueRef* value, ::JSValueRef* exception)
{
    JSObjectRef::SetProperty(*__this, *ctx, *propertyName, *value, exception);
}

// public void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :198
void JSObjectRef__SetProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, ::JSValueRef* value, uDelegate* onException)
{
    JSObjectRef::SetProperty1(*__this, *ctx, propertyName, *value, onException);
}

// private void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :224
void JSObjectRef__SetPropertyAtIndex_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, ::JSValueRef* value, ::JSValueRef* exception)
{
    JSObjectRef::SetPropertyAtIndex(*__this, *ctx, *index, *value, exception);
}

// public void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :229
void JSObjectRef__SetPropertyAtIndex1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, ::JSValueRef* value, uDelegate* onException)
{
    JSObjectRef::SetPropertyAtIndex1(*__this, *ctx, *index, *value, onException);
}

// public void SetPrototype(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef value) :266
void JSObjectRef__SetPrototype_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSValueRef* value)
{
    JSObjectRef::SetPrototype(*__this, *ctx, *value);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef CallAsConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :301
::JSObjectRef JSObjectRef::CallAsConstructor(::JSObjectRef __this, ::JSContextRef ctx, uArray* arguments, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    ::JSObjectRef result = ::JSObjectCallAsConstructor(
    	ctx,
    	*&__this,
    	(size_t)arguments->Length(),
    	(::JSValueRef*)arguments->Ptr(),
    	&exception);
    if (exception != NULL)
    	onException->InvokeVoid(uCRef(exception));
    return result;
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef CallAsFunction(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :282
::JSValueRef JSObjectRef::CallAsFunction(::JSObjectRef __this, ::JSContextRef ctx, ::JSObjectRef thisObject, uArray* arguments, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    ::JSValueRef result = JSObjectCallAsFunction(
    	ctx,
    	*&__this,
    	thisObject,
    	(size_t)arguments->Length(),
    	(::JSValueRef*)arguments->Ptr(),
    	&exception);
    if (exception != NULL)
    	onException->InvokeVoid(uCRef(exception));
    return result;
}

// public Fuse.Scripting.JavaScriptCore.JSPropertyNameArray CopyPropertyNames(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :271
::JSPropertyNameArrayRef JSObjectRef::CopyPropertyNames(::JSObjectRef __this, ::JSContextRef ctx)
{
    return ::JSObjectCopyPropertyNames(ctx, *&__this);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetJSValueRef() [instance] :251
::JSValueRef JSObjectRef::GetJSValueRef(::JSObjectRef __this)
{
    return (::JSValueRef)*&__this;
}

// public object GetPrivate() [instance] :256
uObject* JSObjectRef::GetPrivate(::JSObjectRef __this)
{
    return (uObject*)::JSObjectGetPrivate(*&__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :175
::JSValueRef JSObjectRef::GetProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName, ::JSValueRef* exception)
{
    return ::JSObjectGetProperty(ctx, *&__this, propertyName, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :180
::JSValueRef JSObjectRef::GetProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName, uDelegate* onException)
{
    if (::g::Uno::String::op_Equality(propertyName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"propertyName"*/]));

    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(propertyName);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[4/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[2/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::JSValueRef exception = NULL;
        ::JSValueRef result = JSObjectRef::GetProperty(__this, ctx, strRef, &exception);

        if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
            uPtr(onException)->InvokeVoid(uCRef(exception));

        return result;
    }
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :210
::JSValueRef JSObjectRef::GetPropertyAtIndex(::JSObjectRef __this, ::JSContextRef ctx, int index, ::JSValueRef* exception)
{
    return ::JSObjectGetPropertyAtIndex(ctx, *&__this, (unsigned)index, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :215
::JSValueRef JSObjectRef::GetPropertyAtIndex1(::JSObjectRef __this, ::JSContextRef ctx, int index, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    ::JSValueRef result = JSObjectRef::GetPropertyAtIndex(__this, ctx, index, &exception);

    if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
        uPtr(onException)->InvokeVoid(uCRef(exception));

    return result;
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName) [instance] :237
bool JSObjectRef::HasProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName)
{
    return ::JSObjectHasProperty(ctx, *&__this, propertyName);
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName) [instance] :242
bool JSObjectRef::HasProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName)
{
    if (::g::Uno::String::op_Equality(propertyName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"propertyName"*/]));

    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(propertyName);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[4/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[2/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return JSObjectRef::HasProperty(__this, ctx, strRef);
    }
}

// private void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :193
void JSObjectRef::SetProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName, ::JSValueRef value, ::JSValueRef* exception)
{
    ::JSObjectSetProperty(ctx, *&__this, propertyName, value, ::kJSPropertyAttributeNone, exception);
}

// public void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :198
void JSObjectRef::SetProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName, ::JSValueRef value, uDelegate* onException)
{
    if (::g::Uno::String::op_Equality(propertyName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"propertyName"*/]));

    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(propertyName);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[4/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[2/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::JSValueRef exception = NULL;
        JSObjectRef::SetProperty(__this, ctx, strRef, value, &exception);

        if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
            uPtr(onException)->InvokeVoid(uCRef(exception));
    }
}

// private void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :224
void JSObjectRef::SetPropertyAtIndex(::JSObjectRef __this, ::JSContextRef ctx, int index, ::JSValueRef value, ::JSValueRef* exception)
{
    ::JSObjectSetPropertyAtIndex(ctx, *&__this, (unsigned)index, value, exception);
}

// public void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :229
void JSObjectRef::SetPropertyAtIndex1(::JSObjectRef __this, ::JSContextRef ctx, int index, ::JSValueRef value, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    JSObjectRef::SetPropertyAtIndex(__this, ctx, index, value, &exception);

    if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
        uPtr(onException)->InvokeVoid(uCRef(exception));
}

// public void SetPrototype(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef value) [instance] :266
void JSObjectRef::SetPrototype(::JSObjectRef __this, ::JSContextRef ctx, ::JSValueRef value)
{
    ::JSObjectSetPrototype(ctx, *&__this, value);
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef Make(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, [Fuse.Scripting.JavaScriptCore.JSClassRef classRef], [object data]) [static] :276
::JSObjectRef JSObjectRef::Make(::JSContextRef ctx, ::JSClassRef classRef, uObject* data)
{
    ::uRetain(data);
    return ::JSObjectMake(ctx, classRef, data);
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSObjectRef o1, Fuse.Scripting.JavaScriptCore.JSObjectRef o2) [static] :173
bool JSObjectRef::op_Inequality(::JSObjectRef o1, ::JSObjectRef o2)
{
    return o1 != o2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno
// ------------------------------------------------------------------------------------

// internal extern struct JSPropertyNameArray :323
// {
// public void Dispose() [adapter] :340
static void JSPropertyNameArray__Dispose_ex(uObject* __this)
{
    JSPropertyNameArray__Dispose_fn((::JSPropertyNameArrayRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSPropertyNameArray_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSPropertyNameArray_type, interface0));
}

JSPropertyNameArray_type* JSPropertyNameArray_typeof()
{
    static uSStrong<JSPropertyNameArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.Alignment = alignof(::JSPropertyNameArrayRef);
    options.ValueSize = sizeof(::JSPropertyNameArrayRef);
    options.TypeSize = sizeof(JSPropertyNameArray_type);
    type = (JSPropertyNameArray_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSPropertyNameArray", options);
    type->fp_build_ = JSPropertyNameArray_build;
    type->interface0.fp_Dispose = JSPropertyNameArray__Dispose_ex;
    return type;
}

// public void Dispose() :340
void JSPropertyNameArray__Dispose_fn(::JSPropertyNameArrayRef* __this)
{
    JSPropertyNameArray::Dispose(*__this);
}

// public int GetCount() :327
void JSPropertyNameArray__GetCount_fn(::JSPropertyNameArrayRef* __this, int* __retval)
{
    *__retval = JSPropertyNameArray::GetCount(*__this);
}

// public Fuse.Scripting.JavaScriptCore.JSStringRef get_Item(int index) :334
void JSPropertyNameArray__get_Item_fn(::JSPropertyNameArrayRef* __this, int* index, ::JSStringRef* __retval)
{
    *__retval = JSPropertyNameArray::Item(*__this, *index);
}

// public void Dispose() [instance] :340
void JSPropertyNameArray::Dispose(::JSPropertyNameArrayRef __this)
{
    ::JSPropertyNameArrayRelease(*&__this);
}

// public int GetCount() [instance] :327
int JSPropertyNameArray::GetCount(::JSPropertyNameArrayRef __this)
{
    return (int)::JSPropertyNameArrayGetCount(*&__this);
}

// public Fuse.Scripting.JavaScriptCore.JSStringRef get_Item(int index) [instance] :334
::JSStringRef JSPropertyNameArray::Item(::JSPropertyNameArrayRef __this, int index)
{
    return ::JSPropertyNameArrayGetNameAtIndex(*&__this, (size_t)index);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno
// ------------------------------------------------------------------------------------

// internal extern struct JSStringRef :141
// {
// public void Dispose() [adapter] :150
static void JSStringRef__Dispose_ex(uObject* __this)
{
    JSStringRef__Dispose_fn((::JSStringRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSStringRef_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSStringRef_type, interface0));
}

JSStringRef_type* JSStringRef_typeof()
{
    static uSStrong<JSStringRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.Alignment = alignof(::JSStringRef);
    options.ValueSize = sizeof(::JSStringRef);
    options.TypeSize = sizeof(JSStringRef_type);
    type = (JSStringRef_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSStringRef", options);
    type->fp_build_ = JSStringRef_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))JSStringRef__ToString_fn;
    type->interface0.fp_Dispose = JSStringRef__Dispose_ex;
    return type;
}

// public static Fuse.Scripting.JavaScriptCore.JSStringRef Create(string str) :145
void JSStringRef__Create_fn(uString* str, ::JSStringRef* __retval)
{
    *__retval = JSStringRef::Create(str);
}

// public void Dispose() :150
void JSStringRef__Dispose_fn(::JSStringRef* __this)
{
    JSStringRef::Dispose(*__this);
}

// public override sealed string ToString() :155
void JSStringRef__ToString_fn(::JSStringRef* __this, uType* __type, uString** __retval)
{
    size_t len = ::JSStringGetLength(*__this);
    uString* result = ::uString::New((int)len);
    ::memcpy((void*)result->Ptr(), ::JSStringGetCharactersPtr(*__this), sizeof(uChar) * len);
    return *__retval = result, void();
}

// public void Dispose() [instance] :150
void JSStringRef::Dispose(::JSStringRef __this)
{
    ::JSStringRelease(*&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSStringRef Create(string str) [static] :145
::JSStringRef JSStringRef::Create(uString* str)
{
    return ::JSStringCreateWithCharacters((const JSChar*)str->Ptr(), str->Length());
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno
// ------------------------------------------------------------------------------------

// internal extern enum JSType :126
uEnumType* JSType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.JavaScriptCore.JSType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Undefined", 0LL,
        "Null", 1LL,
        "Boolean", 2LL,
        "Number", 3LL,
        "String", 4LL,
        "Object", 5LL,
        "FlipTheTable", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno
// ------------------------------------------------------------------------------------

// internal static extern class JSTypedArray :496
// {
static void JSTypedArray_build(uType* type)
{
}

uClassType* JSTypedArray_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.JSTypedArray", options);
    type->fp_build_ = JSTypedArray_build;
    return type;
}

// public static byte[] TryCopyArrayBufferBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef obj, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :525
void JSTypedArray__TryCopyArrayBufferBytes_fn(::JSContextRef* ctx, ::JSObjectRef* obj, uDelegate* onException, uArray** __retval)
{
    *__retval = JSTypedArray::TryCopyArrayBufferBytes(*ctx, *obj, onException);
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef TryMakeArrayBufferWithBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, byte[] bytes, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :498
void JSTypedArray__TryMakeArrayBufferWithBytes_fn(::JSContextRef* ctx, uArray* bytes, uDelegate* onException, ::JSObjectRef* __retval)
{
    *__retval = JSTypedArray::TryMakeArrayBufferWithBytes(*ctx, bytes, onException);
}

// public static byte[] TryCopyArrayBufferBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef obj, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [static] :525
uArray* JSTypedArray::TryCopyArrayBufferBytes(::JSContextRef ctx, ::JSObjectRef obj, uDelegate* onException)
{
    #ifdef JAVASCRIPTCORE_ARRAYBUFFER_SUPPORT
    if (&::JSObjectGetArrayBufferBytesPtr != NULL &&
    	&::JSObjectGetArrayBufferByteLength != NULL)
    {
    	::JSValueRef exception = NULL;
    	size_t length = ::JSObjectGetArrayBufferByteLength(ctx, obj, &exception);
    	if (exception != NULL)
    		onException->InvokeVoid(uCRef(exception));
    	void* bytesPtr = ::JSObjectGetArrayBufferBytesPtr(ctx, obj, &exception);
    	if (exception != NULL)
    		onException->InvokeVoid(uCRef(exception));
    
    	uArray* result = ::uArray::New(::g::Uno::Byte_typeof()->Array(), (int)length, bytesPtr);
    	return result;
    }
    #endif
    return NULL;
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef TryMakeArrayBufferWithBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, byte[] bytes, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [static] :498
::JSObjectRef JSTypedArray::TryMakeArrayBufferWithBytes(::JSContextRef ctx, uArray* bytes, uDelegate* onException)
{
    // Check for sufficient base SDK version
    #ifdef JAVASCRIPTCORE_ARRAYBUFFER_SUPPORT
    // Check for runtime availability (running on earlier iOS versions)
    if (&::JSObjectMakeArrayBufferWithBytesNoCopy != NULL)
    {
    	::JSValueRef exception = NULL;
    	::uRetain(bytes);
    	::JSObjectRef result = ::JSObjectMakeArrayBufferWithBytesNoCopy(
    		ctx,
    		bytes->Ptr(),
    		bytes->Length(),
    		(::JSTypedArrayBytesDeallocator)[] (void* bytes, void* deallocatorContext) -> void
    		{
    			::uRelease((uArray*)deallocatorContext);
    		},
    		bytes, // deallocatorContext
    		&exception);
    	if (exception != NULL)
    		onException->InvokeVoid(uCRef(exception));
    	return result;
    }
    #endif
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno
// ------------------------------------------------------------------------------------

// internal extern struct JSValueRef :10
// {
static void JSValueRef_build(uType* type)
{
    ::STRINGS[4] = uString::Const("(&this).IsObject(ctx)");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno");
    ::STRINGS[6] = uString::Const("str");
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
}

uStructType* JSValueRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.Alignment = alignof(::JSValueRef);
    options.ValueSize = sizeof(::JSValueRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.JavaScriptCore.JSValueRef", options);
    type->fp_build_ = JSValueRef_build;
    return type;
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef GetJSObjectRef(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :29
void JSValueRef__GetJSObjectRef_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSObjectRef* __retval)
{
    *__retval = JSValueRef::GetJSObjectRef(*__this, *ctx);
}

// public Fuse.Scripting.JavaScriptCore.JSType GetType(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :37
void JSValueRef__GetType1_fn(::JSValueRef* __this, ::JSContextRef* ctx, int* __retval)
{
    *__retval = JSValueRef::GetType1(*__this, *ctx);
}

// public bool IsInstanceOfConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef constructor, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :73
void JSValueRef__IsInstanceOfConstructor_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSObjectRef* constructor, uDelegate* onException, bool* __retval)
{
    *__retval = JSValueRef::IsInstanceOfConstructor(*__this, *ctx, *constructor, onException);
}

// public bool IsObject(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :68
void JSValueRef__IsObject_fn(::JSValueRef* __this, ::JSContextRef* ctx, bool* __retval)
{
    *__retval = JSValueRef::IsObject(*__this, *ctx);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, bool boolean) :106
void JSValueRef__MakeBoolean_fn(::JSContextRef* ctx, bool* boolean, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeBoolean(*ctx, *boolean);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNull(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :96
void JSValueRef__MakeNull_fn(::JSContextRef* ctx, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeNull(*ctx);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, double number) :101
void JSValueRef__MakeNumber_fn(::JSContextRef* ctx, double* number, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeNumber(*ctx, *number);
}

// private static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef str) :82
void JSValueRef__MakeString_fn(::JSContextRef* ctx, ::JSStringRef* str, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeString(*ctx, *str);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string str) :87
void JSValueRef__MakeString1_fn(::JSContextRef* ctx, uString* str, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeString1(*ctx, str);
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSValueRef v1, Fuse.Scripting.JavaScriptCore.JSValueRef v2) :15
void JSValueRef__op_Inequality_fn(::JSValueRef* v1, ::JSValueRef* v2, bool* __retval)
{
    *__retval = JSValueRef::op_Inequality(*v1, *v2);
}

// public void Protect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :18
void JSValueRef__Protect_fn(::JSValueRef* __this, ::JSContextRef* ctx)
{
    JSValueRef::Protect(*__this, *ctx);
}

// public bool ToBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :111
void JSValueRef__ToBoolean_fn(::JSValueRef* __this, ::JSContextRef* ctx, bool* __retval)
{
    *__retval = JSValueRef::ToBoolean(*__this, *ctx);
}

// public double ToNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :116
void JSValueRef__ToNumber_fn(::JSValueRef* __this, ::JSContextRef* ctx, uDelegate* onException, double* __retval)
{
    *__retval = JSValueRef::ToNumber(*__this, *ctx, onException);
}

// public string ToString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :57
void JSValueRef__ToString1_fn(::JSValueRef* __this, ::JSContextRef* ctx, uDelegate* onException, uString** __retval)
{
    *__retval = JSValueRef::ToString1(*__this, *ctx, onException);
}

// private Fuse.Scripting.JavaScriptCore.JSStringRef ToStringCopy(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :52
void JSValueRef__ToStringCopy_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSValueRef* exception, ::JSStringRef* __retval)
{
    *__retval = JSValueRef::ToStringCopy(*__this, *ctx, exception);
}

// public void Unprotect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :24
void JSValueRef__Unprotect_fn(::JSValueRef* __this, ::JSContextRef* ctx)
{
    JSValueRef::Unprotect(*__this, *ctx);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef GetJSObjectRef(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :29
::JSObjectRef JSValueRef::GetJSObjectRef(::JSValueRef __this, ::JSContextRef ctx)
{
    ::g::Uno::Diagnostics::Debug::Assert(JSValueRef::IsObject(__this, ctx), ::STRINGS[4/*"(&this).IsO...*/], ::STRINGS[5/*"/usr/local/...*/], 31, uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uBox(::g::Fuse::Scripting::JavaScriptCore::JSContextRef_typeof(), ctx)));
    return (::JSObjectRef)*&__this;
}

// public Fuse.Scripting.JavaScriptCore.JSType GetType(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :37
int JSValueRef::GetType1(::JSValueRef __this, ::JSContextRef ctx)
{
    ::JSType type = ::JSValueGetType(ctx, *&__this);
    switch (type)
    {
    	case ::kJSTypeUndefined: return 0;
    	case ::kJSTypeNull: return 1;
    	case ::kJSTypeBoolean: return 2;
    	case ::kJSTypeNumber: return 3;
    	case ::kJSTypeString: return 4;
    	case ::kJSTypeObject: return 5;
    	default: return 6;
    }
}

// public bool IsInstanceOfConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef constructor, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :73
bool JSValueRef::IsInstanceOfConstructor(::JSValueRef __this, ::JSContextRef ctx, ::JSObjectRef constructor, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    bool result = ::JSValueIsInstanceOfConstructor(ctx, *&__this, constructor, &exception);
    if (exception != NULL)
    	onException->InvokeVoid(uCRef(exception));
    return result;
}

// public bool IsObject(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :68
bool JSValueRef::IsObject(::JSValueRef __this, ::JSContextRef ctx)
{
    return ::JSValueIsObject(ctx, *&__this);
}

// public void Protect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :18
void JSValueRef::Protect(::JSValueRef __this, ::JSContextRef ctx)
{
    ::JSValueProtect(ctx, *&__this);
}

// public bool ToBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :111
bool JSValueRef::ToBoolean(::JSValueRef __this, ::JSContextRef ctx)
{
    return ::JSValueToBoolean(ctx, *&__this);
}

// public double ToNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :116
double JSValueRef::ToNumber(::JSValueRef __this, ::JSContextRef ctx, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    double result = ::JSValueToNumber(ctx, *&__this, &exception);
    if (exception != NULL)
    	onException->InvokeVoid(uCRef(exception));
    return result;
}

// public string ToString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :57
uString* JSValueRef::ToString1(::JSValueRef __this, ::JSContextRef ctx, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    ::JSStringRef strRef = JSValueRef::ToStringCopy(__this, ctx, &exception);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[4/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[2/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (JSValueRef::op_Inequality(exception, NULL))
            uPtr(onException)->InvokeVoid(uCRef(exception));

        return ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::ToString(strRef, ::TYPES[4/*Fuse.Scripting.JavaScriptCore.JSStringRef*/]);
    }
}

// private Fuse.Scripting.JavaScriptCore.JSStringRef ToStringCopy(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :52
::JSStringRef JSValueRef::ToStringCopy(::JSValueRef __this, ::JSContextRef ctx, ::JSValueRef* exception)
{
    return ::JSValueToStringCopy(ctx, *&__this, exception);
}

// public void Unprotect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :24
void JSValueRef::Unprotect(::JSValueRef __this, ::JSContextRef ctx)
{
    ::JSValueUnprotect(ctx, *&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, bool boolean) [static] :106
::JSValueRef JSValueRef::MakeBoolean(::JSContextRef ctx, bool boolean)
{
    return ::JSValueMakeBoolean(ctx, boolean);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNull(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [static] :96
::JSValueRef JSValueRef::MakeNull(::JSContextRef ctx)
{
    return ::JSValueMakeNull(ctx);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, double number) [static] :101
::JSValueRef JSValueRef::MakeNumber(::JSContextRef ctx, double number)
{
    return ::JSValueMakeNumber(ctx, number);
}

// private static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef str) [static] :82
::JSValueRef JSValueRef::MakeString(::JSContextRef ctx, ::JSStringRef str)
{
    return ::JSValueMakeString(ctx, str);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string str) [static] :87
::JSValueRef JSValueRef::MakeString1(::JSContextRef ctx, uString* str)
{
    if (::g::Uno::String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[6/*"str"*/]));

    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(str);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[4/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[2/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return JSValueRef::MakeString(ctx, strRef);
    }
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSValueRef v1, Fuse.Scripting.JavaScriptCore.JSValueRef v2) [static] :15
bool JSValueRef::op_Inequality(::JSValueRef v1, ::JSValueRef v2)
{
    return v1 != v2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/Object.uno
// ----------------------------------------------------------------------------

// internal sealed extern class Object :8
// {
// ~Object() :20
static void Object__Finalize_fn(Object* __this)
{
    ::JSObjectRef ind2;

    if (!uPtr(__this->_context)->_disposed)
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = __this->_value, ind2)), uPtr(__this->_context)->_context);
}

static void Object_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Object.CallMethod.name");
    ::TYPES[5] = ::g::Fuse::Scripting::JavaScriptCore::Function_typeof();
    ::TYPES[6] = ::g::Uno::String_typeof()->Array();
    ::TYPES[4] = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(::g::Fuse::Scripting::Object_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(Object, _context), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Object, _value), 0);
}

::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Object_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))Object__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))Object__get_Item_fn;
    type->interface0.fp_get_Keys = (void(*)(uObject*, uArray**))Object__get_Keys_fn;
    return type;
}

// internal Object(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) :13
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* value)
{
    __this->ctor_1(context, *value);
}

// public override sealed object CallMethod(string name, object[] args) :71
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval)
{
    ::JSObjectRef ind7;

    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[7/*"Object.Call...*/]));

    ::JSObjectRef f = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1((ind7 = __this->_value, ind7), uPtr(__this->_context)->_context, name, uPtr(__this->_context)->_onError), uPtr(__this->_context)->_context);
    return *__retval = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsFunction(f, uPtr(__this->_context)->_context, __this->_value, uPtr(__this->_context)->Unwrap2(args), uPtr(__this->_context)->_onError)), void();
}

// public override sealed bool ContainsKey(string key) :86
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    ::JSObjectRef ind8;
    return *__retval = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::HasProperty1((ind8 = __this->_value, ind8), uPtr(__this->_context)->_context, key), void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :91
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    ::JSObjectRef ind9;
    return *__retval = uIs(o, __this->__type) && ::g::Uno::Object::Equals(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind9 = __this->_value, ind9), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize)), uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), uPtr(uCast<Object*>(o, __this->__type))->_value)), void();
}

// public override sealed int GetHashCode() :96
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    ::JSObjectRef ind10;
    return *__retval = ::g::Uno::Object::GetHashCode(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind10 = __this->_value, ind10), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))), void();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :62
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    ::JSObjectRef ind6;
    return *__retval = uIs(type, ::TYPES[5/*Fuse.Scripting.JavaScriptCore.Function*/]) && ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind6 = __this->_value, ind6)), uPtr(__this->_context)->_context, uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(type, ::TYPES[5/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value, uPtr(__this->_context)->_onError), void();
}

// public override sealed object get_Item(string key) :28
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    ::JSObjectRef ind3;
    return *__retval = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1((ind3 = __this->_value, ind3), uPtr(__this->_context)->_context, key, uPtr(__this->_context)->_onError)), void();
}

// public override sealed void set_Item(string key, object value) :35
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    ::JSObjectRef ind4;
    ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetProperty1((ind4 = __this->_value, ind4), uPtr(__this->_context)->_context, key, uPtr(__this->_context)->Unwrap1(value), uPtr(__this->_context)->_onError);
}

// public override sealed string[] get_Keys() :47
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    ::JSObjectRef ind5;
    ::JSPropertyNameArrayRef arr = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CopyPropertyNames((ind5 = __this->_value, ind5), uPtr(__this->_context)->_context);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray_typeof(), arr), ::TYPES[2/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        int count = ::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray::GetCount(arr);
        uArray* result = uArray::New(::TYPES[6/*string[]*/], count);

        for (int i = 0; i < count; ++i)
            uPtr(result)->Strong<uString*>(i) = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::ToString(::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray::Item(arr, i), ::TYPES[4/*Fuse.Scripting.JavaScriptCore.JSStringRef*/]);

        return *__retval = result, void();
    }
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) :13
void Object__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* value, Object** __retval)
{
    *__retval = Object::New1(context, *value);
}

// internal Object(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) [instance] :13
void Object::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef value)
{
    ::JSObjectRef ind1;
    ctor_();
    _context = context;
    _value = value;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind1 = _value, ind1)), uPtr(_context)->_context);
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) [static] :13
Object* Object::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef value)
{
    Object* obj11 = (Object*)uNew(Object_typeof());
    obj11->ctor_1(context, value);
    return obj11;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno
// ------------------------------------------------------------------------------------

// public delegate Fuse.Scripting.JavaScriptCore.JSValueRef JSClassRef.RawCallback(Fuse.Scripting.JavaScriptCore.JSValueRef[] args, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :430
uDelegateType* JSClassRef__RawCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.JavaScriptCore.JSClassRef.RawCallback", 2, 0);
    type->SetSignature(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(),
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(),
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->ByRef());
    return type;
}

}}}} // ::g::Fuse::Scripting::JavaScriptCore
