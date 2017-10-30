// This file was generated based on /usr/local/share/uno/Packages/Experimental.Http/1.3.1/Loader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}
namespace g{namespace Experimental{namespace Http{struct Loader;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Experimental{
namespace Http{

// internal abstract class Loader :17
// {
struct Loader_type : uType
{
    void(*fp_CompleteLoading)(::g::Experimental::Http::Loader*, ::g::Uno::Net::Http::HttpMessageHandlerRequest*);
    void(*fp_LoadCacheData)(::g::Experimental::Http::Loader*);
    void(*fp_LoadCacheRaw)(::g::Experimental::Http::Loader*, uObject*, bool*);
    void(*fp_PrepareRequest)(::g::Experimental::Http::Loader*, ::g::Uno::Net::Http::HttpMessageHandlerRequest*);
};

Loader_type* Loader_typeof();
void Loader__ctor__fn(Loader* __this);
void Loader__CloseRecord_fn(Loader* __this, uObject* record);
void Loader__ConstructRecordId_fn(uString* method, uString* uri, uString** __retval);
void Loader__ExtractHeaders_fn(Loader* __this, uString* headers, ::g::Uno::Collections::Dictionary** __retval);
void Loader__get_Header_fn(Loader* __this, ::g::Experimental::Http::HttpResponseHeader** __retval);
void Loader__Initiate_fn(Loader* __this);
void Loader__IsExpired_fn(Loader* __this, uObject* record, bool* __retval);
void Loader__LoadCache_fn(Loader* __this, uObject* record, bool* __retval);
void Loader__MakeRequest_fn(Loader* __this);
void Loader__OnCacheReady_fn(Loader* __this, uObject* record);
void Loader__OnError_fn(Loader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* msg, uString* reason);
void Loader__OnLoaded_fn(Loader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp);
void Loader__OpenRecord_fn(Loader* __this, uObject** __retval);

struct Loader : uObject
{
    uStrong<uObject*> _cacheRecord;
    uStrong< ::g::Experimental::Http::HttpResponseHeader*> _header;
    uStrong<uObject*> Cache;
    uStrong<uDelegate*> ErrorCallback;
    uStrong<uString*> Method;
    uStrong<uString*> Uri;

    void ctor_();
    void CloseRecord(uObject* record);
    void CompleteLoading(::g::Uno::Net::Http::HttpMessageHandlerRequest* resp) { (((Loader_type*)__type)->fp_CompleteLoading)(this, resp); }
    ::g::Uno::Collections::Dictionary* ExtractHeaders(uString* headers);
    ::g::Experimental::Http::HttpResponseHeader* Header();
    void Initiate();
    bool IsExpired(uObject* record);
    bool LoadCache(uObject* record);
    void LoadCacheData() { (((Loader_type*)__type)->fp_LoadCacheData)(this); }
    bool LoadCacheRaw(uObject* record) { bool __retval; return (((Loader_type*)__type)->fp_LoadCacheRaw)(this, record, &__retval), __retval; }
    void MakeRequest();
    void OnCacheReady(uObject* record);
    void OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* msg, uString* reason);
    void OnLoaded(::g::Uno::Net::Http::HttpMessageHandlerRequest* resp);
    uObject* OpenRecord();
    void PrepareRequest(::g::Uno::Net::Http::HttpMessageHandlerRequest* request) { (((Loader_type*)__type)->fp_PrepareRequest)(this, request); }
    static uString* ConstructRecordId(uString* method, uString* uri);
};
// }

}}} // ::g::Experimental::Http
