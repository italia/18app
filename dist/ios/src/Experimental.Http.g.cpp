// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Cache.CacheLoaded.h>
#include <Experimental.Cache.ICache.h>
#include <Experimental.Cache.ICacheReader.h>
#include <Experimental.Cache.ICacheWriter.h>
#include <Experimental.Http.BinaryLoader.h>
#include <Experimental.Http.HttpLoader.h>
#include <Experimental.Http.HttpResponseHeader.h>
#include <Experimental.Http.Internal.DateUtil.h>
#include <Experimental.Http.Loader.h>
#include <Experimental.Http.LoaderConst.h>
#include <Experimental.Http.TextLoader.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
static uString* STRINGS[12];
static uType* TYPES[12];

namespace g{
namespace Experimental{
namespace Http{

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/BinaryLoader.uno
// ----------------------------------------------------------------------

// internal sealed class BinaryLoader :8
// {
static void BinaryLoader_build(uType* type)
{
    ::TYPES[0] = ::g::Experimental::Cache::ICacheReader_typeof();
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[2] = ::g::Experimental::Cache::ICacheWriter_typeof();
    type->SetFields(6,
        ::g::Uno::Buffer_typeof(), offsetof(BinaryLoader, _loadedCache), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Experimental::Http::HttpResponseHeader_typeof(), ::g::Uno::Buffer_typeof(), NULL), offsetof(BinaryLoader, Callback), 0);
}

::g::Experimental::Http::Loader_type* BinaryLoader_typeof()
{
    static uSStrong< ::g::Experimental::Http::Loader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Experimental::Http::Loader_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(BinaryLoader);
    options.TypeSize = sizeof(::g::Experimental::Http::Loader_type);
    type = (::g::Experimental::Http::Loader_type*)uClassType::New("Experimental.Http.BinaryLoader", options);
    type->fp_build_ = BinaryLoader_build;
    type->fp_ctor_ = (void*)BinaryLoader__New1_fn;
    type->fp_CompleteLoading = (void(*)(::g::Experimental::Http::Loader*, ::g::Uno::Net::Http::HttpMessageHandlerRequest*))BinaryLoader__CompleteLoading_fn;
    type->fp_LoadCacheData = (void(*)(::g::Experimental::Http::Loader*))BinaryLoader__LoadCacheData_fn;
    type->fp_LoadCacheRaw = (void(*)(::g::Experimental::Http::Loader*, uObject*, bool*))BinaryLoader__LoadCacheRaw_fn;
    type->fp_PrepareRequest = (void(*)(::g::Experimental::Http::Loader*, ::g::Uno::Net::Http::HttpMessageHandlerRequest*))BinaryLoader__PrepareRequest_fn;
    return type;
}

// public generated BinaryLoader() :8
void BinaryLoader__ctor_1_fn(BinaryLoader* __this)
{
    __this->ctor_1();
}

// protected override sealed void CompleteLoading(Uno.Net.Http.HttpMessageHandlerRequest resp) :17
void BinaryLoader__CompleteLoading_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp)
{
    __this->OnBufferLoaded(uPtr(resp)->GetResponseContentByteArray());
}

// protected override sealed void LoadCacheData() :34
void BinaryLoader__LoadCacheData_fn(BinaryLoader* __this)
{
    uPtr(__this->Callback)->Invoke(2, (::g::Experimental::Http::HttpResponseHeader*)__this->Header(), (::g::Uno::Buffer*)__this->_loadedCache);
}

// protected override sealed bool LoadCacheRaw(Experimental.Cache.ICacheReader record) :40
void BinaryLoader__LoadCacheRaw_fn(BinaryLoader* __this, uObject* record, bool* __retval)
{
    int len = (int)(uPtr(::g::Experimental::Cache::ICacheReader::Stream(uInterface(uPtr(record), ::TYPES[0/*Experimental.Cache.ICacheReader*/])))->Length() - uPtr(::g::Experimental::Cache::ICacheReader::Stream(uInterface(uPtr(record), ::TYPES[0/*Experimental.Cache.ICacheReader*/])))->Position());
    uArray* b = uArray::New(::TYPES[1/*byte[]*/], len);
    uPtr(::g::Experimental::Cache::ICacheReader::Stream(uInterface(record, ::TYPES[0/*Experimental.Cache.ICacheReader*/])))->Read(b, 0, len);
    __this->_loadedCache = ::g::Uno::Buffer::New1(b);
    return *__retval = true, void();
}

// public generated BinaryLoader New() :8
void BinaryLoader__New1_fn(BinaryLoader** __retval)
{
    *__retval = BinaryLoader::New1();
}

// private void OnBufferLoaded(byte[] data) :22
void BinaryLoader__OnBufferLoaded_fn(BinaryLoader* __this, uArray* data)
{
    __this->OnBufferLoaded(data);
}

// protected override sealed void PrepareRequest(Uno.Net.Http.HttpMessageHandlerRequest request) :12
void BinaryLoader__PrepareRequest_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    uPtr(request)->SetResponseType(1);
}

// public generated BinaryLoader() [instance] :8
void BinaryLoader::ctor_1()
{
    ctor_();
}

// private void OnBufferLoaded(byte[] data) [instance] :22
void BinaryLoader::OnBufferLoaded(uArray* data)
{
    uObject* record = OpenRecord();

    if (record != NULL)
    {
        uPtr(::g::Experimental::Cache::ICacheWriter::Stream(uInterface(uPtr(record), ::TYPES[2/*Experimental.Cache.ICacheWriter*/])))->Write(data, 0, uPtr(data)->Length());
        CloseRecord(record);
    }

    uPtr(Callback)->Invoke(2, (::g::Experimental::Http::HttpResponseHeader*)Header(), (::g::Uno::Buffer*)::g::Uno::Buffer::New1(data));
}

// public generated BinaryLoader New() [static] :8
BinaryLoader* BinaryLoader::New1()
{
    BinaryLoader* obj1 = (BinaryLoader*)uNew(BinaryLoader_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/HttpLoader.uno
// --------------------------------------------------------------------

// public static class HttpLoader :9
// {
// static generated HttpLoader() :9
static void HttpLoader__cctor__fn(uType* __type)
{
    HttpLoader::_maxAge_ = 86400;
}

static void HttpLoader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("GET");
    ::STRINGS[1] = uString::Const("LoadBinary requires callback action");
    ::STRINGS[2] = uString::Const("LoadBinary requires error action");
    ::TYPES[3] = ::g::Experimental::Cache::ICache_typeof();
    type->SetDependencies(
        ::g::Experimental::Http::Loader_typeof());
    type->SetFields(0,
        ::TYPES[3/*Experimental.Cache.ICache*/], (uintptr_t)&HttpLoader::_cache_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&HttpLoader::_maxAge_, uFieldFlagsStatic);
}

uClassType* HttpLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.Http.HttpLoader", options);
    type->fp_build_ = HttpLoader_build;
    type->fp_cctor_ = HttpLoader__cctor__fn;
    return type;
}

// public static int get_CacheMaxAge() :17
void HttpLoader__get_CacheMaxAge_fn(int* __retval)
{
    *__retval = HttpLoader::CacheMaxAge();
}

// public static void set_CacheMaxAge(int value) :18
void HttpLoader__set_CacheMaxAge_fn(int* value)
{
    HttpLoader::CacheMaxAge(*value);
}

// public static void Discard(string requestUri) :35
void HttpLoader__Discard_fn(uString* requestUri)
{
    HttpLoader::Discard(requestUri);
}

// public static void LoadBinary(string requestUri, Uno.Action<Experimental.Http.HttpResponseHeader, Uno.Buffer> callback, Uno.Action<string> error) :44
void HttpLoader__LoadBinary_fn(uString* requestUri, uDelegate* callback, uDelegate* error)
{
    HttpLoader::LoadBinary(requestUri, callback, error);
}

uSStrong<uObject*> HttpLoader::_cache_;
int HttpLoader::_maxAge_;

// public static void Discard(string requestUri) [static] :35
void HttpLoader::Discard(uString* requestUri)
{
    if (HttpLoader::_cache_ != NULL)
        ::g::Experimental::Cache::ICache::DeleteRecord(uInterface(uPtr(HttpLoader::_cache_), ::TYPES[3/*Experimental.Cache.ICache*/]), ::g::Experimental::Http::Loader::ConstructRecordId(::STRINGS[0/*"GET"*/], requestUri));
}

// public static void LoadBinary(string requestUri, Uno.Action<Experimental.Http.HttpResponseHeader, Uno.Buffer> callback, Uno.Action<string> error) [static] :44
void HttpLoader::LoadBinary(uString* requestUri, uDelegate* callback, uDelegate* error)
{
    if (::g::Uno::Delegate::op_Equality(callback, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"LoadBinary ...*/]));

    if (::g::Uno::Delegate::op_Equality(error, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"LoadBinary ...*/]));

    ::g::Experimental::Http::BinaryLoader* bl = ::g::Experimental::Http::BinaryLoader::New1();
    bl->Uri = requestUri;
    bl->Method = ::STRINGS[0/*"GET"*/];
    bl->Callback = callback;
    bl->ErrorCallback = error;
    bl->Cache = HttpLoader::_cache_;
    bl->Initiate();
}

// public static int get_CacheMaxAge() [static] :17
int HttpLoader::CacheMaxAge()
{
    return HttpLoader::_maxAge_;
}

// public static void set_CacheMaxAge(int value) [static] :18
void HttpLoader::CacheMaxAge(int value)
{
    HttpLoader::_maxAge_ = value;
}
// }

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/HttpResponseHeader.uno
// ----------------------------------------------------------------------------

// public sealed class HttpResponseHeader :7
// {
static void HttpResponseHeader_build(uType* type)
{
    ::STRINGS[3] = uString::Const("!");
    ::TYPES[4] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.Dictionary<string, string>*/], offsetof(HttpResponseHeader, _Headers), 0,
        ::g::Uno::String_typeof(), offsetof(HttpResponseHeader, _ReasonPhrase), 0,
        ::g::Uno::Int_typeof(), offsetof(HttpResponseHeader, _StatusCode), 0);
}

uType* HttpResponseHeader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HttpResponseHeader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Http.HttpResponseHeader", options);
    type->fp_build_ = HttpResponseHeader_build;
    type->fp_ctor_ = (void*)HttpResponseHeader__New1_fn;
    return type;
}

// public generated HttpResponseHeader() :7
void HttpResponseHeader__ctor__fn(HttpResponseHeader* __this)
{
    __this->ctor_();
}

// public generated Uno.Collections.Dictionary<string, string> get_Headers() :12
void HttpResponseHeader__get_Headers_fn(HttpResponseHeader* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Headers();
}

// internal generated void set_Headers(Uno.Collections.Dictionary<string, string> value) :12
void HttpResponseHeader__set_Headers_fn(HttpResponseHeader* __this, ::g::Uno::Collections::Dictionary* value)
{
    __this->Headers(value);
}

// public generated HttpResponseHeader New() :7
void HttpResponseHeader__New1_fn(HttpResponseHeader** __retval)
{
    *__retval = HttpResponseHeader::New1();
}

// internal static Experimental.Http.HttpResponseHeader Read(Uno.IO.BinaryReader r) :37
void HttpResponseHeader__Read_fn(::g::Uno::IO::BinaryReader* r, HttpResponseHeader** __retval)
{
    *__retval = HttpResponseHeader::Read(r);
}

// public generated string get_ReasonPhrase() :10
void HttpResponseHeader__get_ReasonPhrase_fn(HttpResponseHeader* __this, uString** __retval)
{
    *__retval = __this->ReasonPhrase();
}

// internal generated void set_ReasonPhrase(string value) :10
void HttpResponseHeader__set_ReasonPhrase_fn(HttpResponseHeader* __this, uString* value)
{
    __this->ReasonPhrase(value);
}

// public generated int get_StatusCode() :9
void HttpResponseHeader__get_StatusCode_fn(HttpResponseHeader* __this, int* __retval)
{
    *__retval = __this->StatusCode();
}

// internal generated void set_StatusCode(int value) :9
void HttpResponseHeader__set_StatusCode_fn(HttpResponseHeader* __this, int* value)
{
    __this->StatusCode(*value);
}

// internal void Write(Uno.IO.BinaryWriter w) :22
void HttpResponseHeader__Write_fn(HttpResponseHeader* __this, ::g::Uno::IO::BinaryWriter* w)
{
    __this->Write(w);
}

// private void WriteSafe(Uno.IO.BinaryWriter w, string s) :14
void HttpResponseHeader__WriteSafe_fn(HttpResponseHeader* __this, ::g::Uno::IO::BinaryWriter* w, uString* s)
{
    __this->WriteSafe(w, s);
}

// public generated HttpResponseHeader() [instance] :7
void HttpResponseHeader::ctor_()
{
}

// public generated Uno.Collections.Dictionary<string, string> get_Headers() [instance] :12
::g::Uno::Collections::Dictionary* HttpResponseHeader::Headers()
{
    return _Headers;
}

// internal generated void set_Headers(Uno.Collections.Dictionary<string, string> value) [instance] :12
void HttpResponseHeader::Headers(::g::Uno::Collections::Dictionary* value)
{
    _Headers = value;
}

// public generated string get_ReasonPhrase() [instance] :10
uString* HttpResponseHeader::ReasonPhrase()
{
    return _ReasonPhrase;
}

// internal generated void set_ReasonPhrase(string value) [instance] :10
void HttpResponseHeader::ReasonPhrase(uString* value)
{
    _ReasonPhrase = value;
}

// public generated int get_StatusCode() [instance] :9
int HttpResponseHeader::StatusCode()
{
    return _StatusCode;
}

// internal generated void set_StatusCode(int value) [instance] :9
void HttpResponseHeader::StatusCode(int value)
{
    _StatusCode = value;
}

// internal void Write(Uno.IO.BinaryWriter w) [instance] :22
void HttpResponseHeader::Write(::g::Uno::IO::BinaryWriter* w)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > ret3;
    uPtr(w)->Write13(StatusCode());
    WriteSafe(w, ReasonPhrase());
    int c = uPtr(Headers())->Count();
    w->Write13(c);
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Headers()), &ret3), ret3);

    {
        const auto __finally_fun = [&]()
        {
            enum1.Dispose(::TYPES[5/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum1.MoveNext(::TYPES[5/*Uno.Collections.Dictionary<string, string>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uString*> > h = enum1.Current(::TYPES[5/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);
            WriteSafe(w, h.Key(::TYPES[6/*Uno.Collections.KeyValuePair<string, string>*/]));
            WriteSafe(w, h.Value(::TYPES[6/*Uno.Collections.KeyValuePair<string, string>*/]));
        }
    }
}

// private void WriteSafe(Uno.IO.BinaryWriter w, string s) [instance] :14
void HttpResponseHeader::WriteSafe(::g::Uno::IO::BinaryWriter* w, uString* s)
{
    if (::g::Uno::String::op_Equality(s, NULL) || (uPtr(s)->Length() == 0))
        uPtr(w)->Write24(::STRINGS[3/*"!"*/]);
    else
        uPtr(w)->Write24(s);
}

// public generated HttpResponseHeader New() [static] :7
HttpResponseHeader* HttpResponseHeader::New1()
{
    HttpResponseHeader* obj2 = (HttpResponseHeader*)uNew(HttpResponseHeader_typeof());
    obj2->ctor_();
    return obj2;
}

// internal static Experimental.Http.HttpResponseHeader Read(Uno.IO.BinaryReader r) [static] :37
HttpResponseHeader* HttpResponseHeader::Read(::g::Uno::IO::BinaryReader* r)
{
    HttpResponseHeader* h = HttpResponseHeader::New1();
    h->StatusCode(uPtr(r)->ReadInt());
    h->ReasonPhrase(r->ReadString());
    int c = r->ReadInt();
    h->Headers((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[4/*Uno.Collections.Dictionary<string, string>*/]));

    for (int i = 0; i < c; ++i)
    {
        uString* k = uPtr(r)->ReadString();
        uString* v = r->ReadString();
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(uPtr(h)->Headers()), k, v);
    }

    return h;
}
// }

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/Loader.uno
// ----------------------------------------------------------------

// internal abstract class Loader :17
// {
static void Loader_build(uType* type)
{
    ::STRINGS[4] = uString::Const("updated");
    ::STRINGS[5] = uString::Const("");
    ::STRINGS[6] = uString::Const("etag");
    ::STRINGS[7] = uString::Const(" ");
    ::STRINGS[8] = uString::Const(":");
    ::STRINGS[9] = uString::Const("/usr/local/share/uno/Packages/Experimental.Http/1.3.1/Loader.uno");
    ::STRINGS[10] = uString::Const("Failed loading caching: ");
    ::STRINGS[11] = uString::Const("If-None-Match");
    ::STRINGS[0] = uString::Const("GET");
    ::TYPES[2] = ::g::Experimental::Cache::ICacheWriter_typeof();
    ::TYPES[4] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[3] = ::g::Experimental::Cache::ICache_typeof();
    ::TYPES[8] = ::g::Experimental::Cache::CacheLoaded_typeof();
    ::TYPES[9] = ::g::Uno::Exception_typeof();
    ::TYPES[0] = ::g::Experimental::Cache::ICacheReader_typeof();
    ::TYPES[10] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL);
    type->SetDependencies(
        ::g::Experimental::Http::Internal::DateUtil_typeof(),
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Experimental::Http::HttpLoader_typeof());
    type->SetFields(0,
        ::TYPES[0/*Experimental.Cache.ICacheReader*/], offsetof(Loader, _cacheRecord), 0,
        ::g::Experimental::Http::HttpResponseHeader_typeof(), offsetof(Loader, _header), 0,
        ::TYPES[3/*Experimental.Cache.ICache*/], offsetof(Loader, Cache), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Loader, ErrorCallback), 0,
        ::g::Uno::String_typeof(), offsetof(Loader, Method), 0,
        ::g::Uno::String_typeof(), offsetof(Loader, Uri), 0);
}

Loader_type* Loader_typeof()
{
    static uSStrong<Loader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Loader);
    options.TypeSize = sizeof(Loader_type);
    type = (Loader_type*)uClassType::New("Experimental.Http.Loader", options);
    type->fp_build_ = Loader_build;
    return type;
}

// protected generated Loader() :17
void Loader__ctor__fn(Loader* __this)
{
    __this->ctor_();
}

// protected void CloseRecord(Experimental.Cache.ICacheWriter record) :117
void Loader__CloseRecord_fn(Loader* __this, uObject* record)
{
    __this->CloseRecord(record);
}

// public static string ConstructRecordId(string method, string uri) :98
void Loader__ConstructRecordId_fn(uString* method, uString* uri, uString** __retval)
{
    *__retval = Loader::ConstructRecordId(method, uri);
}

// private Uno.Collections.Dictionary<string, string> ExtractHeaders(string headers) :83
void Loader__ExtractHeaders_fn(Loader* __this, uString* headers, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->ExtractHeaders(headers);
}

// protected Experimental.Http.HttpResponseHeader get_Header() :62
void Loader__get_Header_fn(Loader* __this, ::g::Experimental::Http::HttpResponseHeader** __retval)
{
    *__retval = __this->Header();
}

// public void Initiate() :24
void Loader__Initiate_fn(Loader* __this)
{
    __this->Initiate();
}

// private bool IsExpired(Experimental.Cache.ICacheReader record) :175
void Loader__IsExpired_fn(Loader* __this, uObject* record, bool* __retval)
{
    *__retval = __this->IsExpired(record);
}

// private bool LoadCache(Experimental.Cache.ICacheReader record) :149
void Loader__LoadCache_fn(Loader* __this, uObject* record, bool* __retval)
{
    *__retval = __this->LoadCache(record);
}

// public void MakeRequest() :38
void Loader__MakeRequest_fn(Loader* __this)
{
    __this->MakeRequest();
}

// public void OnCacheReady(Experimental.Cache.ICacheReader record) :133
void Loader__OnCacheReady_fn(Loader* __this, uObject* record)
{
    __this->OnCacheReady(record);
}

// public void OnError(Uno.Net.Http.HttpMessageHandlerRequest msg, string reason) :127
void Loader__OnError_fn(Loader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* msg, uString* reason)
{
    __this->OnError(msg, reason);
}

// public void OnLoaded(Uno.Net.Http.HttpMessageHandlerRequest resp) :65
void Loader__OnLoaded_fn(Loader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp)
{
    __this->OnLoaded(resp);
}

// protected Experimental.Cache.ICacheWriter OpenRecord() :103
void Loader__OpenRecord_fn(Loader* __this, uObject** __retval)
{
    *__retval = __this->OpenRecord();
}

// protected generated Loader() [instance] :17
void Loader::ctor_()
{
}

// protected void CloseRecord(Experimental.Cache.ICacheWriter record) [instance] :117
void Loader::CloseRecord(uObject* record)
{
    bool ret4;
    uString* ret5;
    ::g::Experimental::Cache::ICacheWriter::AddMeta(uInterface(uPtr(record), ::TYPES[2/*Experimental.Cache.ICacheWriter*/]), ::STRINGS[4/*"updated"*/], ::g::Uno::String::op_Addition1(::STRINGS[5/*""*/], uBox<int>(::g::Uno::Int_typeof(), ::g::Experimental::Http::Internal::DateUtil::TimestampNow())));

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(uPtr(_header)->Headers()), ::STRINGS[6/*"etag"*/], &ret4), ret4))
        ::g::Experimental::Cache::ICacheWriter::AddMeta(uInterface(uPtr(record), ::TYPES[2/*Experimental.Cache.ICacheWriter*/]), ::STRINGS[6/*"etag"*/], (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(uPtr(_header)->Headers()), ::STRINGS[6/*"etag"*/], &ret5), ret5));

    ::g::Experimental::Cache::ICacheWriter::Close(uInterface(record, ::TYPES[2/*Experimental.Cache.ICacheWriter*/]));
}

// private Uno.Collections.Dictionary<string, string> ExtractHeaders(string headers) [instance] :83
::g::Uno::Collections::Dictionary* Loader::ExtractHeaders(uString* headers)
{
    uArray* array1;
    int index2;
    int length3;
    ::g::Uno::Collections::Dictionary* res = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[4/*Uno.Collections.Dictionary<string, string>*/]);

    for (array1 = ::g::Uno::String::Split(uPtr(headers), uArray::Init<int>(::TYPES[7/*char[]*/], 1, 10)), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uString* header = uPtr(array1)->Strong<uString*>(index2);

        if (!::g::Uno::String::IsNullOrEmpty(::g::Uno::String::Trim(uPtr(header))))
        {
            uArray* arr = ::g::Uno::String::Split(uPtr(header), uArray::Init<int>(::TYPES[7/*char[]*/], 1, ':'));
            uString* actualValue = (uPtr(arr)->Length() > 1) ? (uString*)::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring(header, ::g::Uno::String::IndexOf1(header, ::STRINGS[8/*":"*/], 0) + 1))) : (uString*)::g::Uno::String::Empty_;
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(res), ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Trim(uPtr(arr->Strong<uString*>(0))))), actualValue);
        }
    }

    return res;
}

// protected Experimental.Http.HttpResponseHeader get_Header() [instance] :62
::g::Experimental::Http::HttpResponseHeader* Loader::Header()
{
    return _header;
}

// public void Initiate() [instance] :24
void Loader::Initiate()
{
    if (Cache != NULL)
    {
        bool has = ::g::Experimental::Cache::ICache::LoadRecord(uInterface(uPtr(Cache), ::TYPES[3/*Experimental.Cache.ICache*/]), Loader::ConstructRecordId(Method, Uri), uDelegate::New(::TYPES[8/*Experimental.Cache.CacheLoaded*/], (void*)Loader__OnCacheReady_fn, this));

        if (!has)
            MakeRequest();
    }
    else
        MakeRequest();
}

// private bool IsExpired(Experimental.Cache.ICacheReader record) [instance] :175
bool Loader::IsExpired(uObject* record)
{
    try
    {
        uString* updatedStr = ::g::Experimental::Cache::ICacheReader::GetMeta(uInterface(uPtr(record), ::TYPES[0/*Experimental.Cache.ICacheReader*/]), ::STRINGS[4/*"updated"*/]);

        if (::g::Uno::String::op_Equality(updatedStr, NULL))
            return true;

        int updated = ::g::Uno::Int::Parse(updatedStr);
        int age = ::g::Experimental::Http::Internal::DateUtil::TimestampNow() - updated;

        if (age > ::g::Experimental::Http::HttpLoader::CacheMaxAge())
            return true;

        return false;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return true;
    }
}

// private bool LoadCache(Experimental.Cache.ICacheReader record) [instance] :149
bool Loader::LoadCache(uObject* record)
{
    ::g::Uno::IO::Stream* stream = ::g::Experimental::Cache::ICacheReader::Stream(uInterface(uPtr(record), ::TYPES[0/*Experimental.Cache.ICacheReader*/]));
    ::g::Uno::IO::BinaryReader* reader = ::g::Uno::IO::BinaryReader::New1(stream);

    try
    {
        _header = ::g::Experimental::Http::HttpResponseHeader::Read(reader);

        if (!LoadCacheRaw(record))
            return false;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log2(e, 0, ::STRINGS[9/*"/usr/local/...*/], 162);
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[10/*"Failed load...*/], Uri), 0, ::STRINGS[9/*"/usr/local/...*/], 163);
        ::g::Experimental::Cache::ICacheReader::Delete(uInterface(uPtr(record), ::TYPES[0/*Experimental.Cache.ICacheReader*/]));
        return false;
    }

    LoadCacheData();
    return true;
}

// public void MakeRequest() [instance] :38
void Loader::MakeRequest()
{
    if (::g::Experimental::Http::LoaderConst::Handler_ == NULL)
        ::g::Experimental::Http::LoaderConst::Handler_ = ::g::Uno::Net::Http::HttpMessageHandler::New1();

    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = uPtr(::g::Experimental::Http::LoaderConst::Handler_)->CreateRequest1(Method, Uri, ::g::Fuse::UpdateManager::Dispatcher());
    uPtr(request)->add_Error(uDelegate::New(::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Loader__OnError_fn, this));
    request->add_Done(uDelegate::New(::TYPES[11/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Loader__OnLoaded_fn, this));

    if (_cacheRecord != NULL)
    {
        uString* etag = ::g::Experimental::Cache::ICacheReader::GetMeta(uInterface(uPtr(_cacheRecord), ::TYPES[0/*Experimental.Cache.ICacheReader*/]), ::STRINGS[6/*"etag"*/]);

        if (::g::Uno::String::op_Inequality(etag, NULL))
            uPtr(request)->SetHeader(::STRINGS[11/*"If-None-Match"*/], etag);
    }

    PrepareRequest(request);
    request->SendAsync();
}

// public void OnCacheReady(Experimental.Cache.ICacheReader record) [instance] :133
void Loader::OnCacheReady(uObject* record)
{
    _cacheRecord = record;

    if (IsExpired(record))
    {
        MakeRequest();
        return;
    }

    if (!LoadCache(record))
    {
        _cacheRecord = NULL;
        MakeRequest();
    }
}

// public void OnError(Uno.Net.Http.HttpMessageHandlerRequest msg, string reason) [instance] :127
void Loader::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* msg, uString* reason)
{
    uPtr(ErrorCallback)->InvokeVoid(reason);
}

// public void OnLoaded(Uno.Net.Http.HttpMessageHandlerRequest resp) [instance] :65
void Loader::OnLoaded(::g::Uno::Net::Http::HttpMessageHandlerRequest* resp)
{
    if ((_cacheRecord != NULL) && (uPtr(resp)->GetResponseStatus() == 304))
    {
        if (LoadCache(_cacheRecord))
            return;
    }

    _header = ::g::Experimental::Http::HttpResponseHeader::New1();
    uPtr(_header)->StatusCode(uPtr(resp)->GetResponseStatus());
    uPtr(_header)->Headers(ExtractHeaders(resp->GetResponseHeaders()));
    CompleteLoading(resp);
}

// protected Experimental.Cache.ICacheWriter OpenRecord() [instance] :103
uObject* Loader::OpenRecord()
{
    if ((Cache == NULL) || ::g::Uno::String::op_Inequality(Method, ::STRINGS[0/*"GET"*/]))
        return NULL;

    uObject* record = ::g::Experimental::Cache::ICache::CreateRecord(uInterface(uPtr(Cache), ::TYPES[3/*Experimental.Cache.ICache*/]), Loader::ConstructRecordId(Method, Uri));
    ::g::Uno::IO::Stream* stream = ::g::Experimental::Cache::ICacheWriter::Stream(uInterface(uPtr(record), ::TYPES[2/*Experimental.Cache.ICacheWriter*/]));
    ::g::Uno::IO::BinaryWriter* writer = ::g::Uno::IO::BinaryWriter::New1(stream);
    uPtr(_header)->Write(writer);
    return record;
}

// public static string ConstructRecordId(string method, string uri) [static] :98
uString* Loader::ConstructRecordId(uString* method, uString* uri)
{
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(method, ::STRINGS[7/*" "*/]), uri);
}
// }

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/Loader.uno
// ----------------------------------------------------------------

// internal static class LoaderConst :10
// {
static void LoaderConst_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), (uintptr_t)&LoaderConst::Handler_, uFieldFlagsStatic);
}

uClassType* LoaderConst_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.Http.LoaderConst", options);
    type->fp_build_ = LoaderConst_build;
    return type;
}

uSStrong< ::g::Uno::Net::Http::HttpMessageHandler*> LoaderConst::Handler_;
// }

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/TextLoader.uno
// --------------------------------------------------------------------

// internal sealed class TextLoader :8
// {
static void TextLoader_build(uType* type)
{
    ::TYPES[0] = ::g::Experimental::Cache::ICacheReader_typeof();
    ::TYPES[2] = ::g::Experimental::Cache::ICacheWriter_typeof();
    type->SetFields(6,
        ::g::Uno::String_typeof(), offsetof(TextLoader, _loadedCache), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Experimental::Http::HttpResponseHeader_typeof(), ::g::Uno::String_typeof(), NULL), offsetof(TextLoader, Callback), 0);
}

::g::Experimental::Http::Loader_type* TextLoader_typeof()
{
    static uSStrong< ::g::Experimental::Http::Loader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Experimental::Http::Loader_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TextLoader);
    options.TypeSize = sizeof(::g::Experimental::Http::Loader_type);
    type = (::g::Experimental::Http::Loader_type*)uClassType::New("Experimental.Http.TextLoader", options);
    type->fp_build_ = TextLoader_build;
    type->fp_CompleteLoading = (void(*)(::g::Experimental::Http::Loader*, ::g::Uno::Net::Http::HttpMessageHandlerRequest*))TextLoader__CompleteLoading_fn;
    type->fp_LoadCacheData = (void(*)(::g::Experimental::Http::Loader*))TextLoader__LoadCacheData_fn;
    type->fp_LoadCacheRaw = (void(*)(::g::Experimental::Http::Loader*, uObject*, bool*))TextLoader__LoadCacheRaw_fn;
    type->fp_PrepareRequest = (void(*)(::g::Experimental::Http::Loader*, ::g::Uno::Net::Http::HttpMessageHandlerRequest*))TextLoader__PrepareRequest_fn;
    return type;
}

// protected override sealed void CompleteLoading(Uno.Net.Http.HttpMessageHandlerRequest resp) :17
void TextLoader__CompleteLoading_fn(TextLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp)
{
    __this->OnBufferLoaded(uPtr(resp)->GetResponseContentString());
}

// protected override sealed void LoadCacheData() :35
void TextLoader__LoadCacheData_fn(TextLoader* __this)
{
    uPtr(__this->Callback)->Invoke(2, (::g::Experimental::Http::HttpResponseHeader*)__this->Header(), (uString*)__this->_loadedCache);
}

// protected override sealed bool LoadCacheRaw(Experimental.Cache.ICacheReader record) :41
void TextLoader__LoadCacheRaw_fn(TextLoader* __this, uObject* record, bool* __retval)
{
    ::g::Uno::IO::StreamReader* reader = ::g::Uno::IO::StreamReader::New1(::g::Experimental::Cache::ICacheReader::Stream(uInterface(uPtr(record), ::TYPES[0/*Experimental.Cache.ICacheReader*/])));
    __this->_loadedCache = reader->ReadToEnd();
    return *__retval = true, void();
}

// private void OnBufferLoaded(string data) :22
void TextLoader__OnBufferLoaded_fn(TextLoader* __this, uString* data)
{
    __this->OnBufferLoaded(data);
}

// protected override sealed void PrepareRequest(Uno.Net.Http.HttpMessageHandlerRequest request) :12
void TextLoader__PrepareRequest_fn(TextLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    uPtr(request)->SetResponseType(0);
}

// private void OnBufferLoaded(string data) [instance] :22
void TextLoader::OnBufferLoaded(uString* data)
{
    uObject* record = OpenRecord();

    if (record != NULL)
    {
        ::g::Uno::IO::StreamWriter* textWriter = ::g::Uno::IO::StreamWriter::New1(::g::Experimental::Cache::ICacheWriter::Stream(uInterface(uPtr(record), ::TYPES[2/*Experimental.Cache.ICacheWriter*/])));
        textWriter->Write9(data);
        CloseRecord(record);
    }

    uPtr(Callback)->Invoke(2, (::g::Experimental::Http::HttpResponseHeader*)Header(), data);
}
// }

}}} // ::g::Experimental::Http
