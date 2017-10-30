// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <JavaScriptCore/JSContextRef.h>
#include <JavaScriptCore/JSObjectRef.h>
#include <JavaScriptCore/JSStringRef.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal extern struct JSObjectRef :168
// {
uStructType* JSObjectRef_typeof();
void JSObjectRef__CallAsConstructor_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uArray* arguments, uDelegate* onException, ::JSObjectRef* __retval);
void JSObjectRef__CallAsFunction_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSObjectRef* thisObject, uArray* arguments, uDelegate* onException, ::JSValueRef* __retval);
void JSObjectRef__CopyPropertyNames_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSPropertyNameArrayRef* __retval);
void JSObjectRef__GetJSValueRef_fn(::JSObjectRef* __this, ::JSValueRef* __retval);
void JSObjectRef__GetPrivate_fn(::JSObjectRef* __this, uObject** __retval);
void JSObjectRef__GetProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, ::JSValueRef* exception, ::JSValueRef* __retval);
void JSObjectRef__GetProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, uDelegate* onException, ::JSValueRef* __retval);
void JSObjectRef__GetPropertyAtIndex_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, ::JSValueRef* exception, ::JSValueRef* __retval);
void JSObjectRef__GetPropertyAtIndex1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, uDelegate* onException, ::JSValueRef* __retval);
void JSObjectRef__HasProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, bool* __retval);
void JSObjectRef__HasProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, bool* __retval);
void JSObjectRef__Make_fn(::JSContextRef* ctx, ::JSClassRef* classRef, uObject* data, ::JSObjectRef* __retval);
void JSObjectRef__op_Inequality_fn(::JSObjectRef* o1, ::JSObjectRef* o2, bool* __retval);
void JSObjectRef__SetProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, ::JSValueRef* value, ::JSValueRef* exception);
void JSObjectRef__SetProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, ::JSValueRef* value, uDelegate* onException);
void JSObjectRef__SetPropertyAtIndex_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, ::JSValueRef* value, ::JSValueRef* exception);
void JSObjectRef__SetPropertyAtIndex1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, ::JSValueRef* value, uDelegate* onException);
void JSObjectRef__SetPrototype_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSValueRef* value);

struct JSObjectRef
{
    void* _dummy;

    static ::JSObjectRef CallAsConstructor(::JSObjectRef __this, ::JSContextRef ctx, uArray* arguments, uDelegate* onException);
    static ::JSValueRef CallAsFunction(::JSObjectRef __this, ::JSContextRef ctx, ::JSObjectRef thisObject, uArray* arguments, uDelegate* onException);
    static ::JSPropertyNameArrayRef CopyPropertyNames(::JSObjectRef __this, ::JSContextRef ctx);
    static ::JSValueRef GetJSValueRef(::JSObjectRef __this);
    static uObject* GetPrivate(::JSObjectRef __this);
    static ::JSValueRef GetProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName, ::JSValueRef* exception);
    static ::JSValueRef GetProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName, uDelegate* onException);
    static ::JSValueRef GetPropertyAtIndex(::JSObjectRef __this, ::JSContextRef ctx, int index, ::JSValueRef* exception);
    static ::JSValueRef GetPropertyAtIndex1(::JSObjectRef __this, ::JSContextRef ctx, int index, uDelegate* onException);
    static bool HasProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName);
    static bool HasProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName);
    static void SetProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName, ::JSValueRef value, ::JSValueRef* exception);
    static void SetProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName, ::JSValueRef value, uDelegate* onException);
    static void SetPropertyAtIndex(::JSObjectRef __this, ::JSContextRef ctx, int index, ::JSValueRef value, ::JSValueRef* exception);
    static void SetPropertyAtIndex1(::JSObjectRef __this, ::JSContextRef ctx, int index, ::JSValueRef value, uDelegate* onException);
    static void SetPrototype(::JSObjectRef __this, ::JSContextRef ctx, ::JSValueRef value);
    static ::JSObjectRef Make(::JSContextRef ctx, ::JSClassRef classRef, uObject* data);
    static bool op_Inequality(::JSObjectRef o1, ::JSObjectRef o2);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
