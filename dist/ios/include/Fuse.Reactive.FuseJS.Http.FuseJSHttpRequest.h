// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/Http.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http__FuseJSHttpRequest;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Http.FuseJSHttpRequest :78
// {
uType* Http__FuseJSHttpRequest_typeof();
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req);
void Http__FuseJSHttpRequest__Abort_fn(Http__FuseJSHttpRequest* __this);
void Http__FuseJSHttpRequest__CheckIsAttached_fn(Http__FuseJSHttpRequest* __this);
void Http__FuseJSHttpRequest__DetachRequest_fn(Http__FuseJSHttpRequest* __this);
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetResponseContentByteArray_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetResponseContentString_fn(Http__FuseJSHttpRequest* __this, uArray* args, uString** __retval);
void Http__FuseJSHttpRequest__GetResponseHeader_fn(Http__FuseJSHttpRequest* __this, uString* key, uString** __retval);
void Http__FuseJSHttpRequest__GetResponseHeaders_fn(Http__FuseJSHttpRequest* __this, uString** __retval);
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetResponseStatus_fn(Http__FuseJSHttpRequest* __this, int* __retval);
void Http__FuseJSHttpRequest__GetResponseType_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval);
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval);
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value);
void Http__FuseJSHttpRequest__OnAbort_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error);
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int* current, int* total, bool* hastotal);
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__SetHeader_fn(Http__FuseJSHttpRequest* __this, uString* key, uString* value);
void Http__FuseJSHttpRequest__SetResponseType_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__SetTimeout_fn(Http__FuseJSHttpRequest* __this, int* timeout);

struct Http__FuseJSHttpRequest : uObject
{
    uStrong<uObject*> _cachedResponseContent;
    uStrong<uString*> _cachedResponseHeaders;
    int _cachedResponseStatus;
    int _cachedResponseType;
    int _finalState;
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _req;
    uStrong< ::g::Fuse::Scripting::Object*> _Obj;

    void ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req);
    void Abort();
    void CheckIsAttached();
    void DetachRequest();
    uObject* EnableCache(uArray* args);
    uObject* GetResponseContentByteArray(uArray* args);
    uString* GetResponseContentString(uArray* args);
    uString* GetResponseHeader(uString* key);
    uString* GetResponseHeaders();
    uObject* GetResponseReasonPhrase(uArray* args);
    int GetResponseStatus();
    uObject* GetResponseType(uArray* args);
    uObject* GetState(uArray* args);
    ::g::Fuse::Scripting::Object* Obj();
    void Obj(::g::Fuse::Scripting::Object* value);
    void OnAbort(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    void OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    void OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error);
    void OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int current, int total, bool hastotal);
    void OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    void OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    uObject* SendAsync(uArray* args);
    void SetHeader(uString* key, uString* value);
    uObject* SetResponseType(uArray* args);
    void SetTimeout(int timeout);
    static Http__FuseJSHttpRequest* New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
