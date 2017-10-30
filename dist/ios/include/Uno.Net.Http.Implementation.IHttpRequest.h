// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/Implementation/IHttpRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Net{
namespace Http{
namespace Implementation{

// public abstract interface IHttpRequest :7
// {
uInterfaceType* IHttpRequest_typeof();

struct IHttpRequest
{
    void(*fp_Abort)(uObject*);
    void(*fp_EnableCache)(uObject*, bool*);
    void(*fp_GetResponseContentByteArray)(uObject*, uArray**);
    void(*fp_GetResponseContentString)(uObject*, uString**);
    void(*fp_GetResponseHeader)(uObject*, uString*, uString**);
    void(*fp_GetResponseHeaders)(uObject*, uString**);
    void(*fp_GetResponseStatus)(uObject*, int*);
    void(*fp_SendAsync)(uObject*);
    void(*fp_SendAsync1)(uObject*, uArray*);
    void(*fp_SendAsync2)(uObject*, uString*);
    void(*fp_SetHeader)(uObject*, uString*, uString*);
    void(*fp_SetTimeout)(uObject*, int*);
    static void Abort(const uInterface& __this) { __this.VTable<IHttpRequest>()->fp_Abort(__this); }
    static void EnableCache(const uInterface& __this, bool enableCache) { __this.VTable<IHttpRequest>()->fp_EnableCache(__this, &enableCache); }
    static uArray* GetResponseContentByteArray(const uInterface& __this) { uArray* __retval; return __this.VTable<IHttpRequest>()->fp_GetResponseContentByteArray(__this, &__retval), __retval; }
    static uString* GetResponseContentString(const uInterface& __this) { uString* __retval; return __this.VTable<IHttpRequest>()->fp_GetResponseContentString(__this, &__retval), __retval; }
    static uString* GetResponseHeader(const uInterface& __this, uString* name) { uString* __retval; return __this.VTable<IHttpRequest>()->fp_GetResponseHeader(__this, name, &__retval), __retval; }
    static uString* GetResponseHeaders(const uInterface& __this) { uString* __retval; return __this.VTable<IHttpRequest>()->fp_GetResponseHeaders(__this, &__retval), __retval; }
    static int GetResponseStatus(const uInterface& __this) { int __retval; return __this.VTable<IHttpRequest>()->fp_GetResponseStatus(__this, &__retval), __retval; }
    static void SendAsync(const uInterface& __this) { __this.VTable<IHttpRequest>()->fp_SendAsync(__this); }
    static void SendAsync1(const uInterface& __this, uArray* data) { __this.VTable<IHttpRequest>()->fp_SendAsync1(__this, data); }
    static void SendAsync2(const uInterface& __this, uString* data) { __this.VTable<IHttpRequest>()->fp_SendAsync2(__this, data); }
    static void SetHeader(const uInterface& __this, uString* name, uString* value) { __this.VTable<IHttpRequest>()->fp_SetHeader(__this, name, value); }
    static void SetTimeout(const uInterface& __this, int timeoutInMilliseconds) { __this.VTable<IHttpRequest>()->fp_SetTimeout(__this, &timeoutInMilliseconds); }
};
// }

}}}}} // ::g::Uno::Net::Http::Implementation
