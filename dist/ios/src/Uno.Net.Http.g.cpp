// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Exception.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.AbsolutePathParser.h>
#include <Uno.Net.Http.HashParser.h>
#include <Uno.Net.Http.HostInfo.h>
#include <Uno.Net.Http.HostInfoParser.h>
#include <Uno.Net.Http.HttpDefaultDispatcher.h>
#include <Uno.Net.Http.HttpMessageCache.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandler.StaticData.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpRequest.h>
#include <Uno.Net.Http.Implementation.iOSHttpSharedCache.h>
#include <Uno.Net.Http.InvalidResponseTypeException.h>
#include <Uno.Net.Http.InvalidStateException.h>
#include <Uno.Net.Http.QueryParser.h>
#include <Uno.Net.Http.SchemeParser.h>
#include <Uno.Net.Http.SchemeParserResult.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Net.Http.UriFormatException.h>
#include <Uno.Net.Http.UriScheme.h>
#include <Uno.Net.Http.UriSchemeType.h>
#include <Uno.Net.Http.UserInfoParser.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.IDispatcher.h>
static uString* STRINGS[88];
static uType* TYPES[7];

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/AbsolutePathParser.uno
// ----------------------------------------------------------------------------------

// public sealed class AbsolutePathParser :6
// {
static void AbsolutePathParser_build(uType* type)
{
    ::STRINGS[0] = uString::Const("/");
}

uType* AbsolutePathParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AbsolutePathParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.AbsolutePathParser", options);
    type->fp_build_ = AbsolutePathParser_build;
    return type;
}

// public static string Parse(string uriString, int idx, int endIdx, int& startPartIdx) :8
void AbsolutePathParser__Parse_fn(uString* uriString, int* idx, int* endIdx, int* startPartIdx, uString** __retval)
{
    *__retval = AbsolutePathParser::Parse(uriString, *idx, *endIdx, startPartIdx);
}

// public static string Parse(string uriString, int idx, int endIdx, int& startPartIdx) [static] :8
uString* AbsolutePathParser::Parse(uString* uriString, int idx, int endIdx, int* startPartIdx)
{
    int start = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[0/*"/"*/], idx);

    if ((start < 0) || (start >= endIdx))
    {
        *startPartIdx = endIdx;
        return ::STRINGS[0/*"/"*/];
    }

    *startPartIdx = start;
    return ::g::Uno::String::Substring1(uriString, start, endIdx - start);
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandlerRequest.uno
// ------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure :138
// {
static void HttpMessageHandlerRequest__DispatchClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL), offsetof(HttpMessageHandlerRequest__DispatchClosure, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure, _arg), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure, _state), 0);
}

uType* HttpMessageHandlerRequest__DispatchClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", options);
    type->fp_build_ = HttpMessageHandlerRequest__DispatchClosure_build;
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :144
void HttpMessageHandlerRequest__DispatchClosure__ctor__fn(HttpMessageHandlerRequest__DispatchClosure* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    __this->ctor_(*state, action, arg);
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :144
void HttpMessageHandlerRequest__DispatchClosure__New1_fn(int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg, HttpMessageHandlerRequest__DispatchClosure** __retval)
{
    *__retval = HttpMessageHandlerRequest__DispatchClosure::New1(*state, action, arg);
}

// public void Run() :151
void HttpMessageHandlerRequest__DispatchClosure__Run_fn(HttpMessageHandlerRequest__DispatchClosure* __this)
{
    __this->Run();
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [instance] :144
void HttpMessageHandlerRequest__DispatchClosure::ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    _action = action;
    _arg = arg;
    _state = state;
}

// public void Run() [instance] :151
void HttpMessageHandlerRequest__DispatchClosure::Run()
{
    if (uPtr(_arg)->IsComplete())
        return;

    uPtr(_arg)->State(_state);
    uPtr(_action)->InvokeVoid(_arg);
    uPtr(_arg)->CompleteRequest();
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [static] :144
HttpMessageHandlerRequest__DispatchClosure* HttpMessageHandlerRequest__DispatchClosure::New1(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    HttpMessageHandlerRequest__DispatchClosure* obj1 = (HttpMessageHandlerRequest__DispatchClosure*)uNew(HttpMessageHandlerRequest__DispatchClosure_typeof());
    obj1->ctor_(state, action, arg);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandlerRequest.uno
// ------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure<TArg1> :161
// {
static void HttpMessageHandlerRequest__DispatchClosure1_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), type->T(0), NULL), offsetof(HttpMessageHandlerRequest__DispatchClosure1, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure1, _arg0), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure1, _state), 0);
}

uType* HttpMessageHandlerRequest__DispatchClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", options);
    type->fp_build_ = HttpMessageHandlerRequest__DispatchClosure1_build;
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :168
void HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(HttpMessageHandlerRequest__DispatchClosure1* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1)
{
    int state_ = *state;
    __this->_action = action;
    __this->_arg0 = arg0;
    __this->_arg1() = arg1;
    __this->_state = state_;
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :168
void HttpMessageHandlerRequest__DispatchClosure1__New1_fn(uType* __type, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1, HttpMessageHandlerRequest__DispatchClosure1** __retval)
{
    int state_ = *state;
    HttpMessageHandlerRequest__DispatchClosure1* obj1 = (HttpMessageHandlerRequest__DispatchClosure1*)uNew(__type);
    HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(obj1, uCRef<int>(state_), action, arg0, arg1);
    return *__retval = obj1, void();
}

// public void Run() :176
void HttpMessageHandlerRequest__DispatchClosure1__Run_fn(HttpMessageHandlerRequest__DispatchClosure1* __this)
{
    __this->Run();
}

// public void Run() [instance] :176
void HttpMessageHandlerRequest__DispatchClosure1::Run()
{
    if (uPtr(_arg0)->IsComplete())
        return;

    uPtr(_arg0)->State(_state);
    uPtr(_action)->Invoke(2, (::g::Uno::Net::Http::HttpMessageHandlerRequest*)_arg0, (void*)_arg1());
    uPtr(_arg0)->CompleteRequest();
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/HashParser.uno
// --------------------------------------------------------------------------

// public sealed class HashParser :6
// {
static void HashParser_build(uType* type)
{
}

uType* HashParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(HashParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HashParser", options);
    type->fp_build_ = HashParser_build;
    return type;
}

// public static string Parse(string uriString, int idx, int& startPartIdx) :8
void HashParser__Parse_fn(uString* uriString, int* idx, int* startPartIdx, uString** __retval)
{
    *__retval = HashParser::Parse(uriString, *idx, startPartIdx);
}

// public static string Parse(string uriString, int idx, int& startPartIdx) [static] :8
uString* HashParser::Parse(uString* uriString, int idx, int* startPartIdx)
{
    if (idx >= uPtr(uriString)->Length())
        return ::g::Uno::String::Empty_;

    int start = ::g::Uno::String::IndexOf(uPtr(uriString), '#', idx);

    if (start >= 0)
    {
        *startPartIdx = start;
        return ::g::Uno::String::Substring(uPtr(uriString), *startPartIdx);
    }

    return ::g::Uno::String::Empty_;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/HostInfoParser.uno
// ------------------------------------------------------------------------------

// public sealed class HostInfo :6
// {
static void HostInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(HostInfo, _Authority), 0,
        ::g::Uno::String_typeof(), offsetof(HostInfo, _Host), 0,
        ::g::Uno::Int_typeof(), offsetof(HostInfo, _Port), 0);
}

uType* HostInfo_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HostInfo);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HostInfo", options);
    type->fp_build_ = HostInfo_build;
    type->fp_ctor_ = (void*)HostInfo__New1_fn;
    return type;
}

// public generated HostInfo() :6
void HostInfo__ctor__fn(HostInfo* __this)
{
    __this->ctor_();
}

// public generated string get_Authority() :8
void HostInfo__get_Authority_fn(HostInfo* __this, uString** __retval)
{
    *__retval = __this->Authority();
}

// public generated void set_Authority(string value) :8
void HostInfo__set_Authority_fn(HostInfo* __this, uString* value)
{
    __this->Authority(value);
}

// public generated string get_Host() :10
void HostInfo__get_Host_fn(HostInfo* __this, uString** __retval)
{
    *__retval = __this->Host();
}

// public generated void set_Host(string value) :10
void HostInfo__set_Host_fn(HostInfo* __this, uString* value)
{
    __this->Host(value);
}

// public generated HostInfo New() :6
void HostInfo__New1_fn(HostInfo** __retval)
{
    *__retval = HostInfo::New1();
}

// public generated int get_Port() :12
void HostInfo__get_Port_fn(HostInfo* __this, int* __retval)
{
    *__retval = __this->Port();
}

// public generated void set_Port(int value) :12
void HostInfo__set_Port_fn(HostInfo* __this, int* value)
{
    __this->Port(*value);
}

// public generated HostInfo() [instance] :6
void HostInfo::ctor_()
{
}

// public generated string get_Authority() [instance] :8
uString* HostInfo::Authority()
{
    return _Authority;
}

// public generated void set_Authority(string value) [instance] :8
void HostInfo::Authority(uString* value)
{
    _Authority = value;
}

// public generated string get_Host() [instance] :10
uString* HostInfo::Host()
{
    return _Host;
}

// public generated void set_Host(string value) [instance] :10
void HostInfo::Host(uString* value)
{
    _Host = value;
}

// public generated int get_Port() [instance] :12
int HostInfo::Port()
{
    return _Port;
}

// public generated void set_Port(int value) [instance] :12
void HostInfo::Port(int value)
{
    _Port = value;
}

// public generated HostInfo New() [static] :6
HostInfo* HostInfo::New1()
{
    HostInfo* obj1 = (HostInfo*)uNew(HostInfo_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/HostInfoParser.uno
// ------------------------------------------------------------------------------

// public sealed class HostInfoParser :15
// {
// static generated HostInfoParser() :15
static void HostInfoParser__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::List* collection1;
    HostInfoParser::_invalidChars_ = (collection1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[1/*".."*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[2/*","*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[3/*"\\"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[4/*"|"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[5/*"<"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[6/*">"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[7/*"'"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[8/*";"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[9/*":"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[10/*"["*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[11/*"]"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[12/*"{"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[13/*"}"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[14/*"("*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[15/*")"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[16/*"="*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[17/*"+"*/]), collection1);
}

static void HostInfoParser_build(uType* type)
{
    ::STRINGS[1] = uString::Const("..");
    ::STRINGS[2] = uString::Const(",");
    ::STRINGS[3] = uString::Const("\\");
    ::STRINGS[4] = uString::Const("|");
    ::STRINGS[5] = uString::Const("<");
    ::STRINGS[6] = uString::Const(">");
    ::STRINGS[7] = uString::Const("'");
    ::STRINGS[8] = uString::Const(";");
    ::STRINGS[9] = uString::Const(":");
    ::STRINGS[10] = uString::Const("[");
    ::STRINGS[11] = uString::Const("]");
    ::STRINGS[12] = uString::Const("{");
    ::STRINGS[13] = uString::Const("}");
    ::STRINGS[14] = uString::Const("(");
    ::STRINGS[15] = uString::Const(")");
    ::STRINGS[16] = uString::Const("=");
    ::STRINGS[17] = uString::Const("+");
    ::STRINGS[18] = uString::Const("The port number specified in uriString is not valid or cannot be parsed.");
    ::STRINGS[19] = uString::Const(".");
    ::STRINGS[20] = uString::Const("There is an invalid character sequence in uriString.");
    ::STRINGS[0] = uString::Const("/");
    ::STRINGS[21] = uString::Const("The host specified in uriString is not valid or cannot be parsed.");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Net::Http::UriScheme_typeof());
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&HostInfoParser::_invalidChars_, uFieldFlagsStatic);
}

uType* HostInfoParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HostInfoParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HostInfoParser", options);
    type->fp_build_ = HostInfoParser_build;
    type->fp_cctor_ = HostInfoParser__cctor__fn;
    return type;
}

// private static int ExtractPort(string portString, int defaultPort) :75
void HostInfoParser__ExtractPort_fn(uString* portString, int* defaultPort, int* __retval)
{
    *__retval = HostInfoParser::ExtractPort(portString, *defaultPort);
}

// private static int GetDafaultPort(string scheme) :93
void HostInfoParser__GetDafaultPort_fn(uString* scheme, int* __retval)
{
    *__retval = HostInfoParser::GetDafaultPort(scheme);
}

// private static bool IsHostValid(string userInfo) :64
void HostInfoParser__IsHostValid_fn(uString* userInfo, bool* __retval)
{
    *__retval = HostInfoParser::IsHostValid(userInfo);
}

// public static Uno.Net.Http.HostInfo Parse(string uriString, string scheme, int endIdx, int& idx) :19
void HostInfoParser__Parse_fn(uString* uriString, uString* scheme, int* endIdx, int* idx, ::g::Uno::Net::Http::HostInfo** __retval)
{
    *__retval = HostInfoParser::Parse(uriString, scheme, *endIdx, idx);
}

uSStrong< ::g::Uno::Collections::List*> HostInfoParser::_invalidChars_;

// private static int ExtractPort(string portString, int defaultPort) [static] :75
int HostInfoParser::ExtractPort(uString* portString, int defaultPort)
{
    int port = 0;

    if (::g::Uno::String::IsNullOrEmpty(portString))
        port = defaultPort;
    else
    {
        if (!::g::Uno::Int::TryParse(portString, &port))
            U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[18/*"The port nu...*/]));
    }

    return port;
}

// private static int GetDafaultPort(string scheme) [static] :93
int HostInfoParser::GetDafaultPort(uString* scheme)
{
    int ret5;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Uno::Net::Http::UriScheme::DefaultPorts()), ::g::Uno::String::ToLower(uPtr(scheme)), &ret5), ret5);
}

// private static bool IsHostValid(string userInfo) [static] :64
bool HostInfoParser::IsHostValid(uString* userInfo)
{
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret6;
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(HostInfoParser::_invalidChars_), &ret6), ret6);

    {
        const auto __finally_fun = [&]()
        {
            enum3.Dispose(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum3.MoveNext(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]))
        {
            uString* chars = enum3.Current(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);

            if (::g::Uno::String::IndexOf1(uPtr(userInfo), chars, 0) >= 0)
                return false;
        }
    }

    return !::g::Uno::String::StartsWith(uPtr(userInfo), ::STRINGS[19/*"."*/]);
}

// public static Uno.Net.Http.HostInfo Parse(string uriString, string scheme, int endIdx, int& idx) [static] :19
::g::Uno::Net::Http::HostInfo* HostInfoParser::Parse(uString* uriString, uString* scheme, int endIdx, int* idx)
{
    ::g::Uno::Net::Http::HostInfo* collection2;

    if (*idx >= endIdx)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[20/*"There is an...*/]));

    int end = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[0/*"/"*/], *idx);

    if ((end < 0) || (end >= endIdx))
        end = endIdx;

    uString* hostInfoString = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);
    *idx = end;

    if (::g::Uno::String::IsNullOrEmpty(hostInfoString))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"The host sp...*/]));

    int delim = ::g::Uno::String::IndexOf1(uPtr(hostInfoString), ::STRINGS[9/*":"*/], 0);
    collection2 = ::g::Uno::Net::Http::HostInfo::New1();
    uPtr(collection2)->Authority(hostInfoString);
    hostInfoString;
    ::g::Uno::Net::Http::HostInfo* hostInfo = collection2;

    if (delim > 0)
    {
        uString* portString = ::g::Uno::String::Substring(uPtr(hostInfoString), delim + 1);
        uPtr(hostInfo)->Host(::g::Uno::String::Substring1(hostInfoString, 0, delim));
        hostInfo->Port(HostInfoParser::ExtractPort(portString, HostInfoParser::GetDafaultPort(scheme)));
    }
    else
    {
        uPtr(hostInfo)->Host(hostInfoString);
        hostInfo->Port(HostInfoParser::GetDafaultPort(scheme));
    }

    if (!HostInfoParser::IsHostValid(uPtr(hostInfo)->Host()))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"The host sp...*/]));

    return hostInfo;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpDefaultDispatcher.uno
// --------------------------------------------------------------------------

// internal sealed class HttpDefaultDispatcher :6
// {
static void HttpDefaultDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpDefaultDispatcher_type, interface0));
}

HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof()
{
    static uSStrong<HttpDefaultDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpDefaultDispatcher);
    options.TypeSize = sizeof(HttpDefaultDispatcher_type);
    type = (HttpDefaultDispatcher_type*)uClassType::New("Uno.Net.Http.HttpDefaultDispatcher", options);
    type->fp_build_ = HttpDefaultDispatcher_build;
    type->fp_ctor_ = (void*)HttpDefaultDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))HttpDefaultDispatcher__Invoke_fn;
    return type;
}

// public HttpDefaultDispatcher() :8
void HttpDefaultDispatcher__ctor__fn(HttpDefaultDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :13
void HttpDefaultDispatcher__Invoke_fn(HttpDefaultDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public HttpDefaultDispatcher New() :8
void HttpDefaultDispatcher__New1_fn(HttpDefaultDispatcher** __retval)
{
    *__retval = HttpDefaultDispatcher::New1();
}

// public HttpDefaultDispatcher() [instance] :8
void HttpDefaultDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :13
void HttpDefaultDispatcher::Invoke(uDelegate* action)
{
    uPtr(action)->InvokeVoid();
}

// public HttpDefaultDispatcher New() [static] :8
HttpDefaultDispatcher* HttpDefaultDispatcher::New1()
{
    HttpDefaultDispatcher* obj1 = (HttpDefaultDispatcher*)uNew(HttpDefaultDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageCache.uno
// ---------------------------------------------------------------------

// public static class HttpMessageCache :3
// {
// static HttpMessageCache() :34
static void HttpMessageCache__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_Started(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));
}

static void HttpMessageCache_build(uType* type)
{
    ::STRINGS[22] = uString::Const("Uno.Net.Http.HttpMessageCache: Changes to IsCacheEnabled are ignored after initialization.");
    ::STRINGS[23] = uString::Const("/usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageCache.uno");
    ::STRINGS[24] = uString::Const("Uno.Net.Http.HttpMessageCache: Changes to MaxCacheSizeInBytes are ignored after initialization.");
    ::TYPES[2] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof(),
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&HttpMessageCache::_isCacheDisabled_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&HttpMessageCache::_isInitialized_, uFieldFlagsStatic,
        ::g::Uno::Long_typeof(), (uintptr_t)&HttpMessageCache::_maxCacheSizeInBytes_, uFieldFlagsStatic);
}

uClassType* HttpMessageCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageCache", options);
    type->fp_build_ = HttpMessageCache_build;
    type->fp_cctor_ = HttpMessageCache__cctor__fn;
    return type;
}

// public static void Init() :45
void HttpMessageCache__Init_fn()
{
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() :11
void HttpMessageCache__get_IsCacheEnabled_fn(bool* __retval)
{
    *__retval = HttpMessageCache::IsCacheEnabled();
}

// public static void set_IsCacheEnabled(bool value) :12
void HttpMessageCache__set_IsCacheEnabled_fn(bool* value)
{
    HttpMessageCache::IsCacheEnabled(*value);
}

// public static long get_MaxCacheSizeInBytes() :24
void HttpMessageCache__get_MaxCacheSizeInBytes_fn(int64_t* __retval)
{
    *__retval = HttpMessageCache::MaxCacheSizeInBytes();
}

// public static void set_MaxCacheSizeInBytes(long value) :25
void HttpMessageCache__set_MaxCacheSizeInBytes_fn(int64_t* value)
{
    HttpMessageCache::MaxCacheSizeInBytes(*value);
}

// private static void OnApplicationStarted(Uno.Platform.ApplicationState state) :40
void HttpMessageCache__OnApplicationStarted_fn(int* state)
{
    HttpMessageCache::OnApplicationStarted(*state);
}

bool HttpMessageCache::_isCacheDisabled_;
bool HttpMessageCache::_isInitialized_;
int64_t HttpMessageCache::_maxCacheSizeInBytes_;

// public static void Init() [static] :45
void HttpMessageCache::Init()
{
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized_)
        return;

    HttpMessageCache::_isInitialized_ = true;
    ::g::Uno::Platform::CoreApp::remove_Started(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));
    ::g::Uno::Net::Http::Implementation::iOSHttpSharedCache::SetupSharedCache(HttpMessageCache::IsCacheEnabled(), HttpMessageCache::MaxCacheSizeInBytes());
}

// private static void OnApplicationStarted(Uno.Platform.ApplicationState state) [static] :40
void HttpMessageCache::OnApplicationStarted(int state)
{
    HttpMessageCache_typeof()->Init();
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() [static] :11
bool HttpMessageCache::IsCacheEnabled()
{
    HttpMessageCache_typeof()->Init();
    return !HttpMessageCache::_isCacheDisabled_;
}

// public static void set_IsCacheEnabled(bool value) [static] :12
void HttpMessageCache::IsCacheEnabled(bool value)
{
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized_)
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[22/*"Uno.Net.Htt...*/], 0, ::STRINGS[23/*"/usr/local/...*/], 15);
    else
        HttpMessageCache::_isCacheDisabled_ = !value;
}

// public static long get_MaxCacheSizeInBytes() [static] :24
int64_t HttpMessageCache::MaxCacheSizeInBytes()
{
    HttpMessageCache_typeof()->Init();
    return HttpMessageCache::_maxCacheSizeInBytes_;
}

// public static void set_MaxCacheSizeInBytes(long value) [static] :25
void HttpMessageCache::MaxCacheSizeInBytes(int64_t value)
{
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized_)
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[24/*"Uno.Net.Htt...*/], 0, ::STRINGS[23/*"/usr/local/...*/], 28);
    else
        HttpMessageCache::_maxCacheSizeInBytes_ = value;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandler.uno
// -----------------------------------------------------------------------

// public sealed class HttpMessageHandler :8
// {
static void HttpMessageHandler_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandler_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpMessageHandler, _defaultDispatcher), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL), offsetof(HttpMessageHandler, _pendingRequests), 0);
}

HttpMessageHandler_type* HttpMessageHandler_typeof()
{
    static uSStrong<HttpMessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandler);
    options.TypeSize = sizeof(HttpMessageHandler_type);
    type = (HttpMessageHandler_type*)uClassType::New("Uno.Net.Http.HttpMessageHandler", options);
    type->fp_build_ = HttpMessageHandler_build;
    type->fp_ctor_ = (void*)HttpMessageHandler__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandler__Dispose_fn;
    return type;
}

// public HttpMessageHandler() :40
void HttpMessageHandler__ctor__fn(HttpMessageHandler* __this)
{
    __this->ctor_();
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) :91
void HttpMessageHandler__CompleteRequest_fn(HttpMessageHandler* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    __this->CompleteRequest(request);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) :72
void HttpMessageHandler__CreateRequest1_fn(HttpMessageHandler* __this, uString* method, uString* url, uObject* dispatcher, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = __this->CreateRequest1(method, url, dispatcher);
}

// public void Dispose() :51
void HttpMessageHandler__Dispose_fn(HttpMessageHandler* __this)
{
    __this->Dispose();
}

// public HttpMessageHandler New() :40
void HttpMessageHandler__New1_fn(HttpMessageHandler** __retval)
{
    *__retval = HttpMessageHandler::New1();
}

// public HttpMessageHandler() [instance] :40
void HttpMessageHandler::ctor_()
{
    ::g::Uno::Net::Http::HttpMessageCache::Init();
    _pendingRequests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL)));
    _defaultDispatcher = (uObject*)::g::Uno::Net::Http::HttpDefaultDispatcher::New1();
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) [instance] :91
void HttpMessageHandler::CompleteRequest(::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret5;

    for (int i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), &ret5), ret5) == request)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), NULL);
            HttpMessageHandler__StaticData::DecrementPendingRequests();
            break;
        }
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :72
::g::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler::CreateRequest1(uString* method, uString* url, uObject* dispatcher)
{
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret6;
    HttpMessageHandler__StaticData::IncrementPendingRequests();
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = ::g::Uno::Net::Http::HttpMessageHandlerRequest::New1(this, method, url, dispatcher);

    for (int i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), &ret6), ret6) == NULL)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), request);
            return request;
        }

    ::g::Uno::Collections::List__Add_fn(uPtr(_pendingRequests), request);
    return request;
}

// public void Dispose() [instance] :51
void HttpMessageHandler::Dispose()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pendingRequests), &ret7), ret7);

    {
        const auto __finally_fun = [&]()
        {
            enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum1.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL)))
        {
            ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = enum1.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));

            if (request != NULL)
                uPtr(request)->Dispose();
        }
    }

    _pendingRequests = NULL;
}

// public HttpMessageHandler New() [static] :40
HttpMessageHandler* HttpMessageHandler::New1()
{
    HttpMessageHandler* obj3 = (HttpMessageHandler*)uNew(HttpMessageHandler_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandlerRequest.uno
// ------------------------------------------------------------------------------

// public sealed class HttpMessageHandlerRequest :8
// {
// ~HttpMessageHandlerRequest() :65
static void HttpMessageHandlerRequest__Finalize_fn(HttpMessageHandlerRequest* __this)
{
    if (__this->_httpRequest == NULL)
        return;

    __this->Dispose();
}

static void HttpMessageHandlerRequest_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandlerRequest_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpMessageHandlerRequest, _dispatcher), 0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(HttpMessageHandlerRequest, _httpMessageHandler), 0,
        ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof(), offsetof(HttpMessageHandlerRequest, _httpRequest), 0,
        ::g::Uno::String_typeof(), offsetof(HttpMessageHandlerRequest, _method), 0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(HttpMessageHandlerRequest, _optionalPayloadCache), 0,
        ::g::Uno::Net::Http::HttpResponseType_typeof(), offsetof(HttpMessageHandlerRequest, _responseType), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest, _state), 0,
        ::g::Uno::String_typeof(), offsetof(HttpMessageHandlerRequest, _url), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, Aborted1), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, Done1), 0,
        ::g::Uno::Action2_typeof()->MakeType(type, ::g::Uno::String_typeof(), NULL), offsetof(HttpMessageHandlerRequest, Error1), 0,
        ::g::Uno::Action4_typeof()->MakeType(type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL), offsetof(HttpMessageHandlerRequest, Progress1), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, StateChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, Timeout1), 0);
}

HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof()
{
    static uSStrong<HttpMessageHandlerRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest);
    options.TypeSize = sizeof(HttpMessageHandlerRequest_type);
    type = (HttpMessageHandlerRequest_type*)uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest", options);
    type->fp_build_ = HttpMessageHandlerRequest_build;
    type->fp_Finalize = (void(*)(uObject*))HttpMessageHandlerRequest__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandlerRequest__Dispose_fn;
    return type;
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :22
void HttpMessageHandlerRequest__ctor__fn(HttpMessageHandlerRequest* __this, ::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    __this->ctor_(handler, method, url, dispatcher);
}

// public void Abort() :373
void HttpMessageHandlerRequest__Abort_fn(HttpMessageHandlerRequest* __this)
{
    __this->Abort();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :131
void HttpMessageHandlerRequest__add_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Aborted(value);
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :131
void HttpMessageHandlerRequest__remove_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Aborted(value);
}

// private void CheckDisposed() :73
void HttpMessageHandlerRequest__CheckDisposed_fn(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();
}

// internal void CompleteRequest() :90
void HttpMessageHandlerRequest__CompleteRequest_fn(HttpMessageHandlerRequest* __this)
{
    __this->CompleteRequest();
}

// public void Dispose() :79
void HttpMessageHandlerRequest__Dispose_fn(HttpMessageHandlerRequest* __this)
{
    __this->Dispose();
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :134
void HttpMessageHandlerRequest__add_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Done(value);
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :134
void HttpMessageHandlerRequest__remove_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Done(value);
}

// public void EnableCache(bool enableCache) :264
void HttpMessageHandlerRequest__EnableCache_fn(HttpMessageHandlerRequest* __this, bool* enableCache)
{
    __this->EnableCache(*enableCache);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :132
void HttpMessageHandlerRequest__add_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :132
void HttpMessageHandlerRequest__remove_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public byte[] GetResponseContentByteArray() :435
void HttpMessageHandlerRequest__GetResponseContentByteArray_fn(HttpMessageHandlerRequest* __this, uArray** __retval)
{
    *__retval = __this->GetResponseContentByteArray();
}

// public string GetResponseContentString() :421
void HttpMessageHandlerRequest__GetResponseContentString_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseContentString();
}

// public string GetResponseHeader(string name) :398
void HttpMessageHandlerRequest__GetResponseHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString** __retval)
{
    *__retval = __this->GetResponseHeader(name);
}

// public string GetResponseHeaders() :409
void HttpMessageHandlerRequest__GetResponseHeaders_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public int GetResponseStatus() :387
void HttpMessageHandlerRequest__GetResponseStatus_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() :101
void HttpMessageHandlerRequest__get_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->HttpResponseType();
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) :102
void HttpMessageHandlerRequest__set_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* value)
{
    __this->HttpResponseType(*value);
}

// private bool IsComplete() :215
void HttpMessageHandlerRequest__IsComplete_fn(HttpMessageHandlerRequest* __this, bool* __retval)
{
    *__retval = __this->IsComplete();
}

// private static bool IsHeaderValid(string name, string value) :450
void HttpMessageHandlerRequest__IsHeaderValid_fn(uString* name, uString* value, bool* __retval)
{
    *__retval = HttpMessageHandlerRequest::IsHeaderValid(name, value);
}

// public string get_Method() :96
void HttpMessageHandlerRequest__get_Method_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->Method();
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :22
void HttpMessageHandlerRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher, HttpMessageHandlerRequest** __retval)
{
    *__retval = HttpMessageHandlerRequest::New1(handler, method, url, dispatcher);
}

// internal void OnAborted() :220
void HttpMessageHandlerRequest__OnAborted_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnAborted();
}

// internal void OnDone() :241
void HttpMessageHandlerRequest__OnDone_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnDone();
}

// internal void OnError(string platformspesificErrorMessage) :227
void HttpMessageHandlerRequest__OnError_fn(HttpMessageHandlerRequest* __this, uString* platformspesificErrorMessage)
{
    __this->OnError(platformspesificErrorMessage);
}

// internal void OnStateChanged() :118
void HttpMessageHandlerRequest__OnStateChanged_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnStateChanged();
}

// internal void OnTimeout() :234
void HttpMessageHandlerRequest__OnTimeout_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnTimeout();
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :136
void HttpMessageHandlerRequest__add_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Progress(value);
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :136
void HttpMessageHandlerRequest__remove_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Progress(value);
}

// public void SendAsync() :360
void HttpMessageHandlerRequest__SendAsync_fn(HttpMessageHandlerRequest* __this)
{
    __this->SendAsync();
}

// public void SendAsync(byte[] data) :314
void HttpMessageHandlerRequest__SendAsync1_fn(HttpMessageHandlerRequest* __this, uArray* data)
{
    __this->SendAsync1(data);
}

// public void SendAsync(string data) :342
void HttpMessageHandlerRequest__SendAsync2_fn(HttpMessageHandlerRequest* __this, uString* data)
{
    __this->SendAsync2(data);
}

// public void SetHeader(string name, string value) :276
void HttpMessageHandlerRequest__SetHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString* value)
{
    __this->SetHeader(name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) :299
void HttpMessageHandlerRequest__SetResponseType_fn(HttpMessageHandlerRequest* __this, int* responseType)
{
    __this->SetResponseType(*responseType);
}

// public void SetTimeout(int timeoutInMilliseconds) :289
void HttpMessageHandlerRequest__SetTimeout_fn(HttpMessageHandlerRequest* __this, int* timeoutInMilliseconds)
{
    __this->SetTimeout(*timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State() :107
void HttpMessageHandlerRequest__get_State_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->State();
}

// private void set_State(Uno.Net.Http.HttpRequestState value) :108
void HttpMessageHandlerRequest__set_State_fn(HttpMessageHandlerRequest* __this, int* value)
{
    __this->State(*value);
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :135
void HttpMessageHandlerRequest__add_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_StateChanged(value);
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :135
void HttpMessageHandlerRequest__remove_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_StateChanged(value);
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :133
void HttpMessageHandlerRequest__add_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Timeout(value);
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :133
void HttpMessageHandlerRequest__remove_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Timeout(value);
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :22
void HttpMessageHandlerRequest::ctor_(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    if (handler == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("handler")));

    if (::g::Uno::String::op_Equality(method, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("method")));

    if (::g::Uno::String::op_Equality(url, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("url")));

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dispatcher")));

    method = ::g::Uno::String::ToUpper(uPtr(method));
    _httpRequest = (uObject*)::g::Uno::Net::Http::Implementation::iOSHttpRequest::New1(this, method, url);
    _httpMessageHandler = handler;
    _method = method;
    _url = url;
    _dispatcher = dispatcher;
    State(1);
}

// public void Abort() [instance] :373
void HttpMessageHandlerRequest::Abort()
{
    CheckDisposed();

    if (State() >= 5)
        return;

    ::g::Uno::Net::Http::Implementation::IHttpRequest::Abort(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    OnAborted();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :131
void HttpMessageHandlerRequest::add_Aborted(uDelegate* value)
{
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Aborted1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :131
void HttpMessageHandlerRequest::remove_Aborted(uDelegate* value)
{
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Aborted1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// private void CheckDisposed() [instance] :73
void HttpMessageHandlerRequest::CheckDisposed()
{
    if (_httpRequest == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(uString::Const("HttpMessageHandlerRequest")));
}

// internal void CompleteRequest() [instance] :90
void HttpMessageHandlerRequest::CompleteRequest()
{
    uPtr(_httpMessageHandler)->CompleteRequest(this);
    _httpMessageHandler = NULL;
}

// public void Dispose() [instance] :79
void HttpMessageHandlerRequest::Dispose()
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_httpRequest), ::g::Uno::IDisposable_typeof()));
    _httpRequest = NULL;
    _optionalPayloadCache = NULL;
    ::g::Uno::GC::SuppressFinalize(this);
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :134
void HttpMessageHandlerRequest::add_Done(uDelegate* value)
{
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Done1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :134
void HttpMessageHandlerRequest::remove_Done(uDelegate* value)
{
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Done1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public void EnableCache(bool enableCache) [instance] :264
void HttpMessageHandlerRequest::EnableCache(bool enableCache)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    ::g::Uno::Net::Http::Implementation::IHttpRequest::EnableCache(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), enableCache);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :132
void HttpMessageHandlerRequest::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::g::Uno::Action2_typeof()->MakeType(__type, ::g::Uno::String_typeof(), NULL));
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :132
void HttpMessageHandlerRequest::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::g::Uno::Action2_typeof()->MakeType(__type, ::g::Uno::String_typeof(), NULL));
}

// public byte[] GetResponseContentByteArray() [instance] :435
uArray* HttpMessageHandlerRequest::GetResponseContentByteArray()
{
    uArray* ind2;
    CheckDisposed();

    if (HttpResponseType() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return uArray::New(::g::Uno::Byte_typeof()->Array(), 0);

    ind2 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentByteArray(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    return (ind2 != NULL) ? ind2 : uArray::New(::g::Uno::Byte_typeof()->Array(), 0);
}

// public string GetResponseContentString() [instance] :421
uString* HttpMessageHandlerRequest::GetResponseContentString()
{
    uString* ind1;
    CheckDisposed();

    if (HttpResponseType() != 0)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return uString::Const("");

    ind1 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentString(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    return (ind1 != NULL) ? ind1 : uString::Const("");
}

// public string GetResponseHeader(string name) [instance] :398
uString* HttpMessageHandlerRequest::GetResponseHeader(uString* name)
{
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return uString::Const("");

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeader(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), name);
}

// public string GetResponseHeaders() [instance] :409
uString* HttpMessageHandlerRequest::GetResponseHeaders()
{
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return uString::Const("");

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeaders(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
}

// public int GetResponseStatus() [instance] :387
int HttpMessageHandlerRequest::GetResponseStatus()
{
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return 0;

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseStatus(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() [instance] :101
int HttpMessageHandlerRequest::HttpResponseType()
{
    return _responseType;
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) [instance] :102
void HttpMessageHandlerRequest::HttpResponseType(int value)
{
    SetResponseType(value);
}

// private bool IsComplete() [instance] :215
bool HttpMessageHandlerRequest::IsComplete()
{
    return State() >= 5;
}

// public string get_Method() [instance] :96
uString* HttpMessageHandlerRequest::Method()
{
    return _method;
}

// internal void OnAborted() [instance] :220
void HttpMessageHandlerRequest::OnAborted()
{
    uDelegate* handler = Aborted1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(6, handler, this)));
}

// internal void OnDone() [instance] :241
void HttpMessageHandlerRequest::OnDone()
{
    uDelegate* handler = Done1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(5, handler, this)));
}

// internal void OnError(string platformspesificErrorMessage) [instance] :227
void HttpMessageHandlerRequest::OnError(uString* platformspesificErrorMessage)
{
    HttpMessageHandlerRequest__DispatchClosure1* ret4;
    uDelegate* handler = Error1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure1__Run_fn, (HttpMessageHandlerRequest__DispatchClosure1__New1_fn(HttpMessageHandlerRequest__DispatchClosure1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), uCRef<int>(7), handler, this, platformspesificErrorMessage, &ret4), ret4)));
}

// internal void OnStateChanged() [instance] :118
void HttpMessageHandlerRequest::OnStateChanged()
{
    if (State() > 5)
        return;

    uDelegate* handler = StateChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(this);
}

// internal void OnTimeout() [instance] :234
void HttpMessageHandlerRequest::OnTimeout()
{
    uDelegate* handler = Timeout1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(8, handler, this)));
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :136
void HttpMessageHandlerRequest::add_Progress(uDelegate* value)
{
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Progress1, value), ::g::Uno::Action4_typeof()->MakeType(__type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL));
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :136
void HttpMessageHandlerRequest::remove_Progress(uDelegate* value)
{
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Progress1, value), ::g::Uno::Action4_typeof()->MakeType(__type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL));
}

// public void SendAsync() [instance] :360
void HttpMessageHandlerRequest::SendAsync()
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;
    ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    OnStateChanged();
}

// public void SendAsync(byte[] data) [instance] :314
void HttpMessageHandlerRequest::SendAsync1(uArray* data)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;

    if (((::g::Uno::String::op_Equality(Method(), uString::Const("GET")) || ::g::Uno::String::op_Equality(Method(), uString::Const("HEAD"))) || (data == NULL)) || (uPtr(data)->Length() == 0))
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    else
    {
        _optionalPayloadCache = data;
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync1(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), data);
    }

    OnStateChanged();
}

// public void SendAsync(string data) [instance] :342
void HttpMessageHandlerRequest::SendAsync2(uString* data)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;

    if (((::g::Uno::String::op_Equality(Method(), uString::Const("GET")) || ::g::Uno::String::op_Equality(Method(), uString::Const("HEAD"))) || ::g::Uno::String::op_Equality(data, NULL)) || ::g::Uno::String::op_Equality(data, uString::Const("")))
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    else
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync2(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), data);

    OnStateChanged();
}

// public void SetHeader(string name, string value) [instance] :276
void HttpMessageHandlerRequest::SetHeader(uString* name, uString* value)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    if (!HttpMessageHandlerRequest::IsHeaderValid(name, value))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Not allowed to set header \""), name), uString::Const("\" on this target."))));

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetHeader(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) [instance] :299
void HttpMessageHandlerRequest::SetResponseType(int responseType)
{
    CheckDisposed();

    if (State() >= 4)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _responseType = responseType;
}

// public void SetTimeout(int timeoutInMilliseconds) [instance] :289
void HttpMessageHandlerRequest::SetTimeout(int timeoutInMilliseconds)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetTimeout(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State() [instance] :107
int HttpMessageHandlerRequest::State()
{
    return _state;
}

// private void set_State(Uno.Net.Http.HttpRequestState value) [instance] :108
void HttpMessageHandlerRequest::State(int value)
{
    if (_state == value)
        return;

    _state = value;
    OnStateChanged();
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :135
void HttpMessageHandlerRequest::add_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StateChanged1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :135
void HttpMessageHandlerRequest::remove_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StateChanged1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :133
void HttpMessageHandlerRequest::add_Timeout(uDelegate* value)
{
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Timeout1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :133
void HttpMessageHandlerRequest::remove_Timeout(uDelegate* value)
{
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Timeout1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// private static bool IsHeaderValid(string name, string value) [static] :450
bool HttpMessageHandlerRequest::IsHeaderValid(uString* name, uString* value)
{
    return true;
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [static] :22
HttpMessageHandlerRequest* HttpMessageHandlerRequest::New1(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    HttpMessageHandlerRequest* obj3 = (HttpMessageHandlerRequest*)uNew(HttpMessageHandlerRequest_typeof());
    obj3->ctor_(handler, method, url, dispatcher);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpRequestState.uno
// ---------------------------------------------------------------------

// public enum HttpRequestState :3
uEnumType* HttpRequestState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpRequestState", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Opened", 1LL,
        "Sent", 2LL,
        "HeadersReceived", 3LL,
        "Loading", 4LL,
        "Done", 5LL,
        "Aborted", 6LL,
        "Errored", 7LL,
        "TimedOut", 8LL,
        "Unsent", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpResponseType.uno
// ---------------------------------------------------------------------

// public enum HttpResponseType :3
uEnumType* HttpResponseType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpResponseType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", -1LL,
        "String", 0LL,
        "ByteArray", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpStatusReasonPhrase.uno
// ---------------------------------------------------------------------------

// public static class HttpStatusReasonPhrase :5
// {
// static generated HttpStatusReasonPhrase() :5
static void HttpStatusReasonPhrase__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::Dictionary* collection5;
    ::g::Uno::Collections::Dictionary* collection4;
    ::g::Uno::Collections::Dictionary* collection3;
    ::g::Uno::Collections::Dictionary* collection2;
    ::g::Uno::Collections::Dictionary* collection1;
    HttpStatusReasonPhrase::Informational_ = (uObject*)(collection5 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int>(100), ::STRINGS[25/*"Continue"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int>(101), ::STRINGS[26/*"Switching P...*/]), collection5);
    HttpStatusReasonPhrase::Success_ = (uObject*)(collection4 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(200), ::STRINGS[27/*"OK"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(201), ::STRINGS[28/*"Created"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(202), ::STRINGS[29/*"Accepted"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(203), ::STRINGS[30/*"Non-Authori...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(204), ::STRINGS[31/*"No Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(205), ::STRINGS[32/*"Reset Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(206), ::STRINGS[33/*"Partial Con...*/]), collection4);
    HttpStatusReasonPhrase::Redirection_ = (uObject*)(collection3 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(300), ::STRINGS[34/*"Multiple Ch...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(301), ::STRINGS[35/*"Moved Perma...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(302), ::STRINGS[36/*"Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(303), ::STRINGS[37/*"See Other"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(304), ::STRINGS[38/*"Not Modified"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(305), ::STRINGS[39/*"Use Proxy"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(307), ::STRINGS[40/*"Temporary R...*/]), collection3);
    HttpStatusReasonPhrase::ClientErrors_ = (uObject*)(collection2 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(400), ::STRINGS[41/*"Bad Request"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(401), ::STRINGS[42/*"Unauthorized"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(402), ::STRINGS[43/*"Payment Req...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(403), ::STRINGS[44/*"Forbidden"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(404), ::STRINGS[45/*"Not Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(405), ::STRINGS[46/*"Method Not ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(406), ::STRINGS[47/*"Not Accepta...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(407), ::STRINGS[48/*"Proxy Authe...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(408), ::STRINGS[49/*"Request Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(409), ::STRINGS[50/*"Conflict"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(410), ::STRINGS[51/*"Gone"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(411), ::STRINGS[52/*"Length Requ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(412), ::STRINGS[53/*"Preconditio...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(413), ::STRINGS[54/*"Request Ent...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(414), ::STRINGS[55/*"Request-URI...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(415), ::STRINGS[56/*"Unsupported...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(416), ::STRINGS[57/*"Requested r...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(417), ::STRINGS[58/*"Expectation...*/]), collection2);
    HttpStatusReasonPhrase::ServerErrors_ = (uObject*)(collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(500), ::STRINGS[59/*"Internal Se...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(501), ::STRINGS[60/*"Not Impleme...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(502), ::STRINGS[61/*"Bad Gateway"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(503), ::STRINGS[62/*"Service Una...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(504), ::STRINGS[63/*"Gateway Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(505), ::STRINGS[64/*"HTTP Versio...*/]), collection1);
}

static void HttpStatusReasonPhrase_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Continue");
    ::STRINGS[26] = uString::Const("Switching Protocols");
    ::STRINGS[27] = uString::Const("OK");
    ::STRINGS[28] = uString::Const("Created");
    ::STRINGS[29] = uString::Const("Accepted");
    ::STRINGS[30] = uString::Const("Non-Authoritative Information");
    ::STRINGS[31] = uString::Const("No Content");
    ::STRINGS[32] = uString::Const("Reset Content");
    ::STRINGS[33] = uString::Const("Partial Content");
    ::STRINGS[34] = uString::Const("Multiple Choices");
    ::STRINGS[35] = uString::Const("Moved Permanently");
    ::STRINGS[36] = uString::Const("Found");
    ::STRINGS[37] = uString::Const("See Other");
    ::STRINGS[38] = uString::Const("Not Modified");
    ::STRINGS[39] = uString::Const("Use Proxy");
    ::STRINGS[40] = uString::Const("Temporary Redirect");
    ::STRINGS[41] = uString::Const("Bad Request");
    ::STRINGS[42] = uString::Const("Unauthorized");
    ::STRINGS[43] = uString::Const("Payment Required");
    ::STRINGS[44] = uString::Const("Forbidden");
    ::STRINGS[45] = uString::Const("Not Found");
    ::STRINGS[46] = uString::Const("Method Not Allowed");
    ::STRINGS[47] = uString::Const("Not Acceptable");
    ::STRINGS[48] = uString::Const("Proxy Authentication Required");
    ::STRINGS[49] = uString::Const("Request Time-out");
    ::STRINGS[50] = uString::Const("Conflict");
    ::STRINGS[51] = uString::Const("Gone");
    ::STRINGS[52] = uString::Const("Length Required");
    ::STRINGS[53] = uString::Const("Precondition Failed");
    ::STRINGS[54] = uString::Const("Request Entity Too Large");
    ::STRINGS[55] = uString::Const("Request-URI Too Large");
    ::STRINGS[56] = uString::Const("Unsupported Media Type");
    ::STRINGS[57] = uString::Const("Requested range not satisfiable");
    ::STRINGS[58] = uString::Const("Expectation Failed");
    ::STRINGS[59] = uString::Const("Internal Server Error");
    ::STRINGS[60] = uString::Const("Not Implemented");
    ::STRINGS[61] = uString::Const("Bad Gateway");
    ::STRINGS[62] = uString::Const("Service Unavailable");
    ::STRINGS[63] = uString::Const("Gateway Time-out");
    ::STRINGS[64] = uString::Const("HTTP Version not supported");
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::ClientErrors_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::Informational_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::Redirection_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::ServerErrors_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::Success_, uFieldFlagsStatic);
}

uClassType* HttpStatusReasonPhrase_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpStatusReasonPhrase", options);
    type->fp_build_ = HttpStatusReasonPhrase_build;
    type->fp_cctor_ = HttpStatusReasonPhrase__cctor__fn;
    return type;
}

// public static string GetFromStatusCode(int statusCode) :72
void HttpStatusReasonPhrase__GetFromStatusCode_fn(int* statusCode, uString** __retval)
{
    *__retval = HttpStatusReasonPhrase::GetFromStatusCode(*statusCode);
}

uSStrong<uObject*> HttpStatusReasonPhrase::ClientErrors_;
uSStrong<uObject*> HttpStatusReasonPhrase::Informational_;
uSStrong<uObject*> HttpStatusReasonPhrase::Redirection_;
uSStrong<uObject*> HttpStatusReasonPhrase::ServerErrors_;
uSStrong<uObject*> HttpStatusReasonPhrase::Success_;

// public static string GetFromStatusCode(int statusCode) [static] :72
uString* HttpStatusReasonPhrase::GetFromStatusCode(int statusCode)
{
    bool ret6;
    bool ret7;
    bool ret8;
    bool ret9;
    bool ret10;
    uString* description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Informational_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret6), ret6))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Success_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret7), ret7))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Redirection_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret8), ret8))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ClientErrors_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret9), ret9))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ServerErrors_), ::TYPES[4/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret10), ret10))
        return description;

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandlerRequest.uno
// ------------------------------------------------------------------------------

// public sealed class InvalidResponseTypeException :496
// {
static void InvalidResponseTypeException_build(uType* type)
{
    ::STRINGS[65] = uString::Const("Response type is invalid.");
    type->SetFields(4);
}

::g::Uno::Exception_type* InvalidResponseTypeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidResponseTypeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidResponseTypeException", options);
    type->fp_build_ = InvalidResponseTypeException_build;
    type->fp_ctor_ = (void*)InvalidResponseTypeException__New4_fn;
    return type;
}

// public InvalidResponseTypeException() :498
void InvalidResponseTypeException__ctor_3_fn(InvalidResponseTypeException* __this)
{
    __this->ctor_3();
}

// public InvalidResponseTypeException New() :498
void InvalidResponseTypeException__New4_fn(InvalidResponseTypeException** __retval)
{
    *__retval = InvalidResponseTypeException::New4();
}

// public InvalidResponseTypeException() [instance] :498
void InvalidResponseTypeException::ctor_3()
{
    ctor_1(::STRINGS[65/*"Response ty...*/]);
}

// public InvalidResponseTypeException New() [static] :498
InvalidResponseTypeException* InvalidResponseTypeException::New4()
{
    InvalidResponseTypeException* obj1 = (InvalidResponseTypeException*)uNew(InvalidResponseTypeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandlerRequest.uno
// ------------------------------------------------------------------------------

// public sealed class InvalidStateException :502
// {
static void InvalidStateException_build(uType* type)
{
    ::STRINGS[66] = uString::Const("The object is in an invalid state.");
    type->SetFields(4);
}

::g::Uno::Exception_type* InvalidStateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidStateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidStateException", options);
    type->fp_build_ = InvalidStateException_build;
    type->fp_ctor_ = (void*)InvalidStateException__New4_fn;
    return type;
}

// public InvalidStateException() :504
void InvalidStateException__ctor_3_fn(InvalidStateException* __this)
{
    __this->ctor_3();
}

// public InvalidStateException New() :504
void InvalidStateException__New4_fn(InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New4();
}

// public InvalidStateException() [instance] :504
void InvalidStateException::ctor_3()
{
    ctor_1(::STRINGS[66/*"The object ...*/]);
}

// public InvalidStateException New() [static] :504
InvalidStateException* InvalidStateException::New4()
{
    InvalidStateException* obj1 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/QueryParser.uno
// ---------------------------------------------------------------------------

// public sealed class QueryParser :6
// {
static void QueryParser_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Net::Http::UriScheme_typeof());
}

uType* QueryParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(QueryParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.QueryParser", options);
    type->fp_build_ = QueryParser_build;
    return type;
}

// public static string Parse(string uriString, string scheme, int idx, int& startPartIdx) :8
void QueryParser__Parse_fn(uString* uriString, uString* scheme, int* idx, int* startPartIdx, uString** __retval)
{
    *__retval = QueryParser::Parse(uriString, scheme, *idx, startPartIdx);
}

// public static string Parse(string uriString, string scheme, int idx, int& startPartIdx) [static] :8
uString* QueryParser::Parse(uString* uriString, uString* scheme, int idx, int* startPartIdx)
{
    if ((idx >= uPtr(uriString)->Length()) || !::g::Uno::Net::Http::UriScheme::IsHttpScheme(scheme))
        return ::g::Uno::String::Empty_;

    int startQuery = ::g::Uno::String::IndexOf(uPtr(uriString), '?', idx);
    int startHash = ::g::Uno::String::IndexOf(uriString, '#', idx);

    if (startHash < 0)
        startHash = uPtr(uriString)->Length();

    if ((startQuery >= 0) && (startQuery < startHash))
    {
        *startPartIdx = startQuery;
        return ::g::Uno::String::Substring1(uPtr(uriString), *startPartIdx, startHash - *startPartIdx);
    }

    return ::g::Uno::String::Empty_;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/SchemeParser.uno
// ----------------------------------------------------------------------------

// public sealed class SchemeParser :12
// {
static void SchemeParser_build(uType* type)
{
    ::STRINGS[9] = uString::Const(":");
    ::STRINGS[67] = uString::Const("The scheme isn't specified in uriString.");
    ::STRINGS[68] = uString::Const("The scheme specified in uriString is not correctly formed.");
    ::STRINGS[69] = uString::Const("The length of the scheme specified in uriString exceeds 1023 characters.");
    ::STRINGS[20] = uString::Const("There is an invalid character sequence in uriString.");
    type->SetDependencies(
        ::g::Uno::Net::Http::UriScheme_typeof());
}

uType* SchemeParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SchemeParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.SchemeParser", options);
    type->fp_build_ = SchemeParser_build;
    return type;
}

// public static Uno.Net.Http.SchemeParserResult Parse(string uriString, int& idx) :15
void SchemeParser__Parse_fn(uString* uriString, int* idx, ::g::Uno::Net::Http::SchemeParserResult* __retval)
{
    *__retval = SchemeParser::Parse(uriString, idx);
}

// public static Uno.Net.Http.SchemeParserResult Parse(string uriString, int& idx) [static] :15
::g::Uno::Net::Http::SchemeParserResult SchemeParser::Parse(uString* uriString, int* idx)
{
    ::g::Uno::Net::Http::SchemeParserResult result;
    int end = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[9/*":"*/], *idx);

    if (end < 0)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[67/*"The scheme ...*/]));

    if (((*idx + 2) >= uriString->Length()) || (end == *idx))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[68/*"The scheme ...*/]));

    if ((end - *idx) > 1023)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[69/*"The length ...*/]));

    result.Scheme = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);
    result.Type = ::g::Uno::Net::Http::UriScheme::GetSchemeType(result.Scheme);

    if (result.Type == 2)
        return result;

    *idx = end + 1;

    if (result.Type == 0)
    {
        if ((((*idx + 1) >= uPtr(uriString)->Length()) || (uPtr(uriString)->Item(*idx) != '/')) || (uPtr(uriString)->Item(*idx + 1) != '/'))
            U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[20/*"There is an...*/]));

        *idx = *idx + 2;
    }

    return result;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/SchemeParser.uno
// ----------------------------------------------------------------------------

// public struct SchemeParserResult :6
// {
static void SchemeParserResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Net::Http::UriSchemeType_typeof(), offsetof(SchemeParserResult, Type), 0,
        ::g::Uno::String_typeof(), offsetof(SchemeParserResult, Scheme), 0);
}

uStructType* SchemeParserResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(SchemeParserResult);
    options.ValueSize = sizeof(SchemeParserResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Http.SchemeParserResult", options);
    type->fp_build_ = SchemeParserResult_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandler.uno
// -----------------------------------------------------------------------

// internal static class HttpMessageHandler.StaticData :10
// {
static void HttpMessageHandler__StaticData_build(uType* type)
{
}

uClassType* HttpMessageHandler__StaticData_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandler.StaticData", options);
    type->fp_build_ = HttpMessageHandler__StaticData_build;
    return type;
}

// internal static void DecrementPendingRequests() :21
void HttpMessageHandler__StaticData__DecrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::DecrementPendingRequests();
}

// internal static void IncrementPendingRequests() :14
void HttpMessageHandler__StaticData__IncrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::IncrementPendingRequests();
}

// internal static void DecrementPendingRequests() [static] :21
void HttpMessageHandler__StaticData::DecrementPendingRequests()
{
}

// internal static void IncrementPendingRequests() [static] :14
void HttpMessageHandler__StaticData::IncrementPendingRequests()
{
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/Uri.uno
// --------------------------------------------------------

// public sealed class Uri :7
// {
static void Uri_build(uType* type)
{
    ::STRINGS[70] = uString::Const("uriString");
    ::STRINGS[71] = uString::Const("The length of uriString exceeds 65519 characters.");
    ::STRINGS[72] = uString::Const("file");
    ::STRINGS[73] = uString::Const("Hostname part required in uriString for scheme ");
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Net::Http::HostInfoParser_typeof(),
        ::g::Uno::Net::Http::QueryParser_typeof(),
        ::g::Uno::Net::Http::SchemeParser_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Uri, _AbsolutePath), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _AbsoluteUri), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Authority), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Hash), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Host), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _OriginalString), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _PathAndQuery), 0,
        ::g::Uno::Int_typeof(), offsetof(Uri, _Port), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Query), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _Scheme), 0,
        ::g::Uno::String_typeof(), offsetof(Uri, _UserInfo), 0);
}

uType* Uri_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Uri);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.Uri", options);
    type->fp_build_ = Uri_build;
    return type;
}

// public Uri(string uriString) :31
void Uri__ctor__fn(Uri* __this, uString* uriString)
{
    __this->ctor_(uriString);
}

// public generated string get_AbsolutePath() :9
void Uri__get_AbsolutePath_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->AbsolutePath();
}

// private generated void set_AbsolutePath(string value) :9
void Uri__set_AbsolutePath_fn(Uri* __this, uString* value)
{
    __this->AbsolutePath(value);
}

// public generated string get_AbsoluteUri() :11
void Uri__get_AbsoluteUri_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->AbsoluteUri();
}

// private generated void set_AbsoluteUri(string value) :11
void Uri__set_AbsoluteUri_fn(Uri* __this, uString* value)
{
    __this->AbsoluteUri(value);
}

// public generated string get_Authority() :13
void Uri__get_Authority_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Authority();
}

// private generated void set_Authority(string value) :13
void Uri__set_Authority_fn(Uri* __this, uString* value)
{
    __this->Authority(value);
}

// private void CreateThis(string uriString) :67
void Uri__CreateThis_fn(Uri* __this, uString* uriString)
{
    __this->CreateThis(uriString);
}

// public static string Encode(string value) :124
void Uri__Encode_fn(uString* value, uString** __retval)
{
    *__retval = Uri::Encode(value);
}

// private static bool EscapeSymbol(byte symbol) :202
void Uri__EscapeSymbol_fn(uint8_t* symbol, bool* __retval)
{
    *__retval = Uri::EscapeSymbol(*symbol);
}

// private static char GetHexFromNumber(int value) :183
void Uri__GetHexFromNumber_fn(int* value, uChar* __retval)
{
    *__retval = Uri::GetHexFromNumber(*value);
}

// public generated string get_Hash() :25
void Uri__get_Hash_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Hash();
}

// private generated void set_Hash(string value) :25
void Uri__set_Hash_fn(Uri* __this, uString* value)
{
    __this->Hash(value);
}

// public generated string get_Host() :15
void Uri__get_Host_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Host();
}

// private generated void set_Host(string value) :15
void Uri__set_Host_fn(Uri* __this, uString* value)
{
    __this->Host(value);
}

// public Uri New(string uriString) :31
void Uri__New1_fn(uString* uriString, Uri** __retval)
{
    *__retval = Uri::New1(uriString);
}

// public generated string get_OriginalString() :17
void Uri__get_OriginalString_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->OriginalString();
}

// private generated void set_OriginalString(string value) :17
void Uri__set_OriginalString_fn(Uri* __this, uString* value)
{
    __this->OriginalString(value);
}

// public generated string get_PathAndQuery() :19
void Uri__get_PathAndQuery_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->PathAndQuery();
}

// private generated void set_PathAndQuery(string value) :19
void Uri__set_PathAndQuery_fn(Uri* __this, uString* value)
{
    __this->PathAndQuery(value);
}

// public generated int get_Port() :21
void Uri__get_Port_fn(Uri* __this, int* __retval)
{
    *__retval = __this->Port();
}

// private generated void set_Port(int value) :21
void Uri__set_Port_fn(Uri* __this, int* value)
{
    __this->Port(*value);
}

// public generated string get_Query() :23
void Uri__get_Query_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Query();
}

// private generated void set_Query(string value) :23
void Uri__set_Query_fn(Uri* __this, uString* value)
{
    __this->Query(value);
}

// public generated string get_Scheme() :27
void Uri__get_Scheme_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Scheme();
}

// private generated void set_Scheme(string value) :27
void Uri__set_Scheme_fn(Uri* __this, uString* value)
{
    __this->Scheme(value);
}

// public generated string get_UserInfo() :29
void Uri__get_UserInfo_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->UserInfo();
}

// private generated void set_UserInfo(string value) :29
void Uri__set_UserInfo_fn(Uri* __this, uString* value)
{
    __this->UserInfo(value);
}

// public Uri(string uriString) [instance] :31
void Uri::ctor_(uString* uriString)
{
    if (::g::Uno::String::IsNullOrEmpty(uriString))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[70/*"uriString"*/]));

    uriString = ::g::Uno::String::Trim(uPtr(uriString));

    if (uriString->Length() > 65519)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[71/*"The length ...*/]));

    CreateThis(uriString);
}

// public generated string get_AbsolutePath() [instance] :9
uString* Uri::AbsolutePath()
{
    return _AbsolutePath;
}

// private generated void set_AbsolutePath(string value) [instance] :9
void Uri::AbsolutePath(uString* value)
{
    _AbsolutePath = value;
}

// public generated string get_AbsoluteUri() [instance] :11
uString* Uri::AbsoluteUri()
{
    return _AbsoluteUri;
}

// private generated void set_AbsoluteUri(string value) [instance] :11
void Uri::AbsoluteUri(uString* value)
{
    _AbsoluteUri = value;
}

// public generated string get_Authority() [instance] :13
uString* Uri::Authority()
{
    return _Authority;
}

// private generated void set_Authority(string value) [instance] :13
void Uri::Authority(uString* value)
{
    _Authority = value;
}

// private void CreateThis(string uriString) [instance] :67
void Uri::CreateThis(uString* uriString)
{
    int idx = 0;
    OriginalString((AbsoluteUri(uriString), uriString));
    ::g::Uno::Net::Http::SchemeParserResult schemeResult = ::g::Uno::Net::Http::SchemeParser::Parse(uriString, &idx);
    Scheme(schemeResult.Scheme);
    int queryOrHashPartIdx = uPtr(uriString)->Length();
    int partStartIdx = uriString->Length();
    int absolutePathPartIdx = 0;

    if (schemeResult.Type == 2)
        return;

    Query(::g::Uno::Net::Http::QueryParser::Parse(uriString, Scheme(), idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    Hash(::g::Uno::Net::Http::HashParser::Parse(uriString, idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    AbsolutePath(::g::Uno::Net::Http::AbsolutePathParser::Parse(uriString, idx, queryOrHashPartIdx, &absolutePathPartIdx));
    PathAndQuery(::g::Uno::String::op_Addition2(AbsolutePath(), Query()));

    if (absolutePathPartIdx > idx)
    {
        UserInfo(::g::Uno::Net::Http::UserInfoParser::Parse(uriString, absolutePathPartIdx, &idx));
        ::g::Uno::Net::Http::HostInfo* hostInfo = ::g::Uno::Net::Http::HostInfoParser::Parse(uriString, Scheme(), absolutePathPartIdx, &idx);
        Host(uPtr(hostInfo)->Host());
        Port(hostInfo->Port());
        Authority(hostInfo->Authority());
    }
    else
    {
        if (::g::Uno::String::op_Inequality(Scheme(), ::STRINGS[72/*"file"*/]))
            U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::g::Uno::String::op_Addition2(::STRINGS[73/*"Hostname pa...*/], Scheme())));
    }
}

// public generated string get_Hash() [instance] :25
uString* Uri::Hash()
{
    return _Hash;
}

// private generated void set_Hash(string value) [instance] :25
void Uri::Hash(uString* value)
{
    _Hash = value;
}

// public generated string get_Host() [instance] :15
uString* Uri::Host()
{
    return _Host;
}

// private generated void set_Host(string value) [instance] :15
void Uri::Host(uString* value)
{
    _Host = value;
}

// public generated string get_OriginalString() [instance] :17
uString* Uri::OriginalString()
{
    return _OriginalString;
}

// private generated void set_OriginalString(string value) [instance] :17
void Uri::OriginalString(uString* value)
{
    _OriginalString = value;
}

// public generated string get_PathAndQuery() [instance] :19
uString* Uri::PathAndQuery()
{
    return _PathAndQuery;
}

// private generated void set_PathAndQuery(string value) [instance] :19
void Uri::PathAndQuery(uString* value)
{
    _PathAndQuery = value;
}

// public generated int get_Port() [instance] :21
int Uri::Port()
{
    return _Port;
}

// private generated void set_Port(int value) [instance] :21
void Uri::Port(int value)
{
    _Port = value;
}

// public generated string get_Query() [instance] :23
uString* Uri::Query()
{
    return _Query;
}

// private generated void set_Query(string value) [instance] :23
void Uri::Query(uString* value)
{
    _Query = value;
}

// public generated string get_Scheme() [instance] :27
uString* Uri::Scheme()
{
    return _Scheme;
}

// private generated void set_Scheme(string value) [instance] :27
void Uri::Scheme(uString* value)
{
    _Scheme = value;
}

// public generated string get_UserInfo() [instance] :29
uString* Uri::UserInfo()
{
    return _UserInfo;
}

// private generated void set_UserInfo(string value) [instance] :29
void Uri::UserInfo(uString* value)
{
    _UserInfo = value;
}

// public static string Encode(string value) [static] :124
uString* Uri::Encode(uString* value)
{
    uArray* bytes = ::g::Uno::Text::Utf8::GetBytes(value);
    int count = 0;

    for (int i = 0; i < uPtr(bytes)->Length(); i++)
    {
        count++;

        if (Uri::EscapeSymbol(uPtr(bytes)->Item<uint8_t>(i)))
            count = count + 2;
    }

    uArray* result = uArray::New(::TYPES[5/*char[]*/], count);
    int index = 0;

    for (int i1 = 0; i1 < uPtr(bytes)->Length(); i1++)
    {
        uint8_t symbol = uPtr(bytes)->Item<uint8_t>(i1);

        if (Uri::EscapeSymbol(symbol))
        {
            uPtr(result)->Item<uChar>(index++) = '%';
            result->Item<uChar>(index++) = Uri::GetHexFromNumber((symbol >> 4) & 15);
            result->Item<uChar>(index++) = Uri::GetHexFromNumber((int)(symbol & 15));
        }
        else
            uPtr(result)->Item<uChar>(index++) = (uChar)symbol;
    }

    return uString::CharArray(result);
}

// private static bool EscapeSymbol(byte symbol) [static] :202
bool Uri::EscapeSymbol(uint8_t symbol)
{
    if (symbol >= 128)
        return true;

    if (::g::Uno::Char::IsLetter((uChar)symbol) || ::g::Uno::Char::IsDigit((uChar)symbol))
        return false;

    switch ((uChar)symbol)
    {
        case '-':
        case '_':
        case '.':
        case '!':
        case '~':
        case '*':
        case '\'':
        case '(':
        case ')':
            return false;
    }

    return true;
}

// private static char GetHexFromNumber(int value) [static] :183
uChar Uri::GetHexFromNumber(int value)
{
    if (value > 9)
        return (uChar)((97 + value) - 10);

    return (uChar)(48 + value);
}

// public Uri New(string uriString) [static] :31
Uri* Uri::New1(uString* uriString)
{
    Uri* obj4 = (Uri*)uNew(Uri_typeof());
    obj4->ctor_(uriString);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriFormatException.uno
// -----------------------------------------------------------------------

// public sealed class UriFormatException :6
// {
static void UriFormatException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* UriFormatException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UriFormatException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.UriFormatException", options);
    type->fp_build_ = UriFormatException_build;
    return type;
}

// public UriFormatException(string message) :8
void UriFormatException__ctor_3_fn(UriFormatException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public UriFormatException New(string message) :8
void UriFormatException__New4_fn(uString* message, UriFormatException** __retval)
{
    *__retval = UriFormatException::New4(message);
}

// public UriFormatException(string message) [instance] :8
void UriFormatException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public UriFormatException New(string message) [static] :8
UriFormatException* UriFormatException::New4(uString* message)
{
    UriFormatException* obj1 = (UriFormatException*)uNew(UriFormatException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriScheme.uno
// --------------------------------------------------------------

// public sealed class UriScheme :13
// {
// static generated UriScheme() :13
static void UriScheme__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::List* collection2;
    ::g::Uno::Collections::List* collection1;
    UriScheme::KnownInternetSchemes_ = (collection2 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[74/*"http"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[75/*"https"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[76/*"ftp"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[77/*"gopher"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[78/*"nntp"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[79/*"telnet"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[80/*"wais"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[72/*"file"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[81/*"prospero"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[82/*"ws"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[83/*"wss"*/]), collection2);
    UriScheme::KnownNonInternetSchemes_ = (collection1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[84/*"mailto"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[85/*"news"*/]), collection1);
}

static void UriScheme_build(uType* type)
{
    ::STRINGS[74] = uString::Const("http");
    ::STRINGS[75] = uString::Const("https");
    ::STRINGS[76] = uString::Const("ftp");
    ::STRINGS[77] = uString::Const("gopher");
    ::STRINGS[78] = uString::Const("nntp");
    ::STRINGS[79] = uString::Const("telnet");
    ::STRINGS[80] = uString::Const("wais");
    ::STRINGS[72] = uString::Const("file");
    ::STRINGS[81] = uString::Const("prospero");
    ::STRINGS[82] = uString::Const("ws");
    ::STRINGS[83] = uString::Const("wss");
    ::STRINGS[84] = uString::Const("mailto");
    ::STRINGS[85] = uString::Const("news");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[6/*Uno.Collections.Dictionary<string, int>*/], (uintptr_t)&UriScheme::_defaultPorts_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&UriScheme::KnownInternetSchemes_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&UriScheme::KnownNonInternetSchemes_, uFieldFlagsStatic);
}

uType* UriScheme_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UriScheme);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UriScheme", options);
    type->fp_build_ = UriScheme_build;
    type->fp_cctor_ = UriScheme__cctor__fn;
    return type;
}

// public static Uno.Collections.Dictionary<string, int> get_DefaultPorts() :23
void UriScheme__get_DefaultPorts_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = UriScheme::DefaultPorts();
}

// public static Uno.Net.Http.UriSchemeType GetSchemeType(string scheme) :46
void UriScheme__GetSchemeType_fn(uString* scheme, int* __retval)
{
    *__retval = UriScheme::GetSchemeType(scheme);
}

// public static bool IsHttpScheme(string scheme) :60
void UriScheme__IsHttpScheme_fn(uString* scheme, bool* __retval)
{
    *__retval = UriScheme::IsHttpScheme(scheme);
}

uSStrong< ::g::Uno::Collections::Dictionary*> UriScheme::_defaultPorts_;
uSStrong< ::g::Uno::Collections::List*> UriScheme::KnownInternetSchemes_;
uSStrong< ::g::Uno::Collections::List*> UriScheme::KnownNonInternetSchemes_;

// public static Uno.Net.Http.UriSchemeType GetSchemeType(string scheme) [static] :46
int UriScheme::GetSchemeType(uString* scheme)
{
    bool ret4;
    bool ret5;
    uString* s = ::g::Uno::String::ToLower(uPtr(scheme));

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(UriScheme::KnownInternetSchemes_), s, &ret4), ret4))
        return 0;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(UriScheme::KnownNonInternetSchemes_), s, &ret5), ret5))
        return 1;

    return 2;
}

// public static bool IsHttpScheme(string scheme) [static] :60
bool UriScheme::IsHttpScheme(uString* scheme)
{
    uString* s = ::g::Uno::String::ToLower(uPtr(scheme));
    return ::g::Uno::String::op_Equality(s, ::STRINGS[74/*"http"*/]) || ::g::Uno::String::op_Equality(s, ::STRINGS[75/*"https"*/]);
}

// public static Uno.Collections.Dictionary<string, int> get_DefaultPorts() [static] :23
::g::Uno::Collections::Dictionary* UriScheme::DefaultPorts()
{
    if (UriScheme::_defaultPorts_ == NULL)
    {
        UriScheme::_defaultPorts_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<string, int>*/]));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[74/*"http"*/], uCRef<int>(80));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[75/*"https"*/], uCRef<int>(443));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[76/*"ftp"*/], uCRef<int>(21));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[77/*"gopher"*/], uCRef<int>(70));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[79/*"telnet"*/], uCRef<int>(119));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[80/*"wais"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[72/*"file"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[81/*"prospero"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[84/*"mailto"*/], uCRef<int>(25));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[85/*"news"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[82/*"ws"*/], uCRef<int>(80));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts_), ::STRINGS[83/*"wss"*/], uCRef<int>(443));
    }

    return UriScheme::_defaultPorts_;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriScheme.uno
// --------------------------------------------------------------

// public enum UriSchemeType :6
uEnumType* UriSchemeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.UriSchemeType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Internet", 0LL,
        "NonInternet", 1LL,
        "Unknown", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/UserInfoParser.uno
// ------------------------------------------------------------------------------

// public sealed class UserInfoParser :6
// {
static void UserInfoParser_build(uType* type)
{
    ::STRINGS[3] = uString::Const("\\");
    ::STRINGS[9] = uString::Const(":");
    ::STRINGS[20] = uString::Const("There is an invalid character sequence in uriString.");
    ::STRINGS[86] = uString::Const("@");
    ::STRINGS[87] = uString::Const("The user name or password specified in uriString is not valid.");
}

uType* UserInfoParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UserInfoParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UserInfoParser", options);
    type->fp_build_ = UserInfoParser_build;
    return type;
}

// private static bool IsValid(string userInfo) :31
void UserInfoParser__IsValid_fn(uString* userInfo, bool* __retval)
{
    *__retval = UserInfoParser::IsValid(userInfo);
}

// public static string Parse(string uriString, int endIdx, int& idx) :8
void UserInfoParser__Parse_fn(uString* uriString, int* endIdx, int* idx, uString** __retval)
{
    *__retval = UserInfoParser::Parse(uriString, *endIdx, idx);
}

// private static bool IsValid(string userInfo) [static] :31
bool UserInfoParser::IsValid(uString* userInfo)
{
    return (((::g::Uno::String::IndexOf1(uPtr(userInfo), ::STRINGS[3/*"\\"*/], 0) < 0) && !::g::Uno::String::EndsWith(uPtr(userInfo), ::STRINGS[9/*":"*/])) && !::g::Uno::String::StartsWith(uPtr(userInfo), ::STRINGS[9/*":"*/])) && !::g::Uno::String::IsNullOrEmpty(userInfo);
}

// public static string Parse(string uriString, int endIdx, int& idx) [static] :8
uString* UserInfoParser::Parse(uString* uriString, int endIdx, int* idx)
{
    if (*idx >= endIdx)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[20/*"There is an...*/]));

    int end = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[86/*"@"*/], *idx);

    if ((end < 0) || (end >= endIdx))
        return ::g::Uno::String::Empty_;

    uString* userInfo = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);

    if (!UserInfoParser::IsValid(userInfo))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[87/*"The user na...*/]));

    *idx = end + 1;
    return userInfo;
}
// }

}}}} // ::g::Uno::Net::Http
