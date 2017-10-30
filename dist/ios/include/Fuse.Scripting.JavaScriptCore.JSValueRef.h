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

// internal extern struct JSValueRef :10
// {
uStructType* JSValueRef_typeof();
void JSValueRef__GetJSObjectRef_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSObjectRef* __retval);
void JSValueRef__GetType1_fn(::JSValueRef* __this, ::JSContextRef* ctx, int* __retval);
void JSValueRef__IsInstanceOfConstructor_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSObjectRef* constructor, uDelegate* onException, bool* __retval);
void JSValueRef__IsObject_fn(::JSValueRef* __this, ::JSContextRef* ctx, bool* __retval);
void JSValueRef__MakeBoolean_fn(::JSContextRef* ctx, bool* boolean, ::JSValueRef* __retval);
void JSValueRef__MakeNull_fn(::JSContextRef* ctx, ::JSValueRef* __retval);
void JSValueRef__MakeNumber_fn(::JSContextRef* ctx, double* number, ::JSValueRef* __retval);
void JSValueRef__MakeString_fn(::JSContextRef* ctx, ::JSStringRef* str, ::JSValueRef* __retval);
void JSValueRef__MakeString1_fn(::JSContextRef* ctx, uString* str, ::JSValueRef* __retval);
void JSValueRef__op_Inequality_fn(::JSValueRef* v1, ::JSValueRef* v2, bool* __retval);
void JSValueRef__Protect_fn(::JSValueRef* __this, ::JSContextRef* ctx);
void JSValueRef__ToBoolean_fn(::JSValueRef* __this, ::JSContextRef* ctx, bool* __retval);
void JSValueRef__ToNumber_fn(::JSValueRef* __this, ::JSContextRef* ctx, uDelegate* onException, double* __retval);
void JSValueRef__ToString1_fn(::JSValueRef* __this, ::JSContextRef* ctx, uDelegate* onException, uString** __retval);
void JSValueRef__ToStringCopy_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSValueRef* exception, ::JSStringRef* __retval);
void JSValueRef__Unprotect_fn(::JSValueRef* __this, ::JSContextRef* ctx);

struct JSValueRef
{
    void* _dummy;

    static ::JSObjectRef GetJSObjectRef(::JSValueRef __this, ::JSContextRef ctx);
    static int GetType1(::JSValueRef __this, ::JSContextRef ctx);
    static bool IsInstanceOfConstructor(::JSValueRef __this, ::JSContextRef ctx, ::JSObjectRef constructor, uDelegate* onException);
    static bool IsObject(::JSValueRef __this, ::JSContextRef ctx);
    static void Protect(::JSValueRef __this, ::JSContextRef ctx);
    static bool ToBoolean(::JSValueRef __this, ::JSContextRef ctx);
    static double ToNumber(::JSValueRef __this, ::JSContextRef ctx, uDelegate* onException);
    static uString* ToString1(::JSValueRef __this, ::JSContextRef ctx, uDelegate* onException);
    static ::JSStringRef ToStringCopy(::JSValueRef __this, ::JSContextRef ctx, ::JSValueRef* exception);
    static void Unprotect(::JSValueRef __this, ::JSContextRef ctx);
    static ::JSValueRef MakeBoolean(::JSContextRef ctx, bool boolean);
    static ::JSValueRef MakeNull(::JSContextRef ctx);
    static ::JSValueRef MakeNumber(::JSContextRef ctx, double number);
    static ::JSValueRef MakeString(::JSContextRef ctx, ::JSStringRef str);
    static ::JSValueRef MakeString1(::JSContextRef ctx, uString* str);
    static bool op_Inequality(::JSValueRef v1, ::JSValueRef v2);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
