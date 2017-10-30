// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/JavaScriptCore.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <JavaScriptCore/JSStringRef.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal extern struct JSStringRef :141
// {
struct JSStringRef_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

JSStringRef_type* JSStringRef_typeof();
void JSStringRef__Create_fn(uString* str, ::JSStringRef* __retval);
void JSStringRef__Dispose_fn(::JSStringRef* __this);
void JSStringRef__ToString_fn(::JSStringRef* __this, uType* __type, uString** __retval);

struct JSStringRef
{
    void* _dummy;

    static void Dispose(::JSStringRef __this);
    static uString* ToString(::JSStringRef __this, uType* __type) { uString* __retval; return JSStringRef__ToString_fn(&__this, __type, &__retval), __retval; }
    static ::JSStringRef Create(uString* str);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
