// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.3.1/ios/SocketRocket/WebSocketClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <ios/SocketRocket/WebSocketClientObjc.h>
#include <ObjC.Object.h>
#include <SocketRocket.WebSocketClient.h>
#include <SRWebSocket.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{
namespace SocketRocket{

// public sealed extern class WebSocketClient :17
// {
static void WebSocketClient_build(uType* type)
{
    ::STRINGS[0] = uString::Const("open");
    ::STRINGS[1] = uString::Const("close");
    ::STRINGS[2] = uString::Const("error");
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::WebSocket::IWebSocketClient_typeof(), offsetof(WebSocketClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebSocketClient_type, interface1));
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(WebSocketClient, _close), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(WebSocketClient, _error), 0,
        ::g::Uno::Action_typeof(), offsetof(WebSocketClient, _open), 0,
        ::g::ObjC::Object_typeof(), offsetof(WebSocketClient, _webSocket), 0);
}

WebSocketClient_type* WebSocketClient_typeof()
{
    static uSStrong<WebSocketClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebSocketClient);
    options.TypeSize = sizeof(WebSocketClient_type);
    type = (WebSocketClient_type*)uClassType::New("SocketRocket.WebSocketClient", options);
    type->fp_build_ = WebSocketClient_build;
    type->fp_ctor_ = (void*)WebSocketClient__New1_fn;
    type->interface0.fp_Create = (void(*)(uObject*, uString*, uArray*, uDelegate*, uDelegate*, uDelegate*, uDelegate*, uDelegate*))WebSocketClient__Create_fn;
    type->interface0.fp_Send1 = (void(*)(uObject*, uString*))WebSocketClient__Send1_fn;
    type->interface0.fp_Send = (void(*)(uObject*, uArray*))WebSocketClient__Send_fn;
    type->interface0.fp_Connect = (void(*)(uObject*))WebSocketClient__Connect_fn;
    type->interface0.fp_Close = (void(*)(uObject*))WebSocketClient__Close_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WebSocketClient__Dispose_fn;
    return type;
}

// public generated WebSocketClient() :17
void WebSocketClient__ctor__fn(WebSocketClient* __this)
{
    __this->ctor_();
}

// public void Close() :65
void WebSocketClient__Close_fn(WebSocketClient* __this)
{
    __this->Close();
}

// public void Connect() :59
void WebSocketClient__Connect_fn(WebSocketClient* __this)
{
    __this->Connect();
}

// public void Create(string uri, string[] protocols, Uno.Action open, Uno.Action close, Uno.Action<string> error, Uno.Action<string> receiveMessage, Uno.Action<byte[]> receiveData) :24
void WebSocketClient__Create_fn(WebSocketClient* __this, uString* uri, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessage, uDelegate* receiveData)
{
    __this->Create(uri, protocols, open, close, error, receiveMessage, receiveData);
}

// private ObjC.Object Create(string url, string[] protocols, Uno.Action<string, string> eventHandler, Uno.Action<string> receiveMessageHandler, Uno.Action<byte[]> receiveDataHandler) :40
void WebSocketClient__Create1_fn(WebSocketClient* __this, uString* url, uArray* protocols, uDelegate* eventHandler, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Create1(url, protocols, eventHandler, receiveMessageHandler, receiveDataHandler);
}

// public void Dispose() :101
void WebSocketClient__Dispose_fn(WebSocketClient* __this)
{
    __this->Dispose();
}

// private void HandleEvent(string type, string message) :89
void WebSocketClient__HandleEvent_fn(WebSocketClient* __this, uString* type, uString* message)
{
    __this->HandleEvent(type, message);
}

// public generated WebSocketClient New() :17
void WebSocketClient__New1_fn(WebSocketClient** __retval)
{
    *__retval = WebSocketClient::New1();
}

// public void Send(byte[] data) :77
void WebSocketClient__Send_fn(WebSocketClient* __this, uArray* data)
{
    __this->Send(data);
}

// public void Send(string data) :71
void WebSocketClient__Send1_fn(WebSocketClient* __this, uString* data)
{
    __this->Send1(data);
}

// public generated WebSocketClient() [instance] :17
void WebSocketClient::ctor_()
{
}

// public void Close() [instance] :65
void WebSocketClient::Close()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<WebSocketClient*>((_this).unoObject, WebSocketClient_typeof())->_webSocket); }() disconnect];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void Connect() [instance] :59
void WebSocketClient::Connect()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<WebSocketClient*>((_this).unoObject, WebSocketClient_typeof())->_webSocket); }() connect];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void Create(string uri, string[] protocols, Uno.Action open, Uno.Action close, Uno.Action<string> error, Uno.Action<string> receiveMessage, Uno.Action<byte[]> receiveData) [instance] :24
void WebSocketClient::Create(uString* uri, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessage, uDelegate* receiveData)
{
    _open = open;
    _close = close;
    _error = error;
    _webSocket = Create1(uri, protocols, uDelegate::New(::TYPES[0/*Uno.Action<string, string>*/], (void*)WebSocketClient__HandleEvent_fn, this), receiveMessage, receiveData);
}

// private ObjC.Object Create(string url, string[] protocols, Uno.Action<string, string> eventHandler, Uno.Action<string> receiveMessageHandler, Uno.Action<byte[]> receiveDataHandler) [instance] :40
::g::ObjC::Object* WebSocketClient::Create1(uString* url, uArray* protocols, uDelegate* eventHandler, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::NSString* url, id<UnoArray> protocols, ::uObjC::Function<void, ::NSString*, ::NSString*> eventHandler, ::uObjC::Function<void, ::NSString*> receiveMessageHandler, ::uObjC::Function<void, id<UnoArray>> receiveDataHandler) -> ::id
        {
            return [[WebSocketClientObjc alloc] 
            				initWithUrl:url
            				protocols:[protocols copyArray]
            				eventHandler:eventHandler
            				onReceivedMessage:receiveMessageHandler
            				onReceivedData:^(uint8_t * data, NSUInteger length) {
            					id<UnoArray> arr = [&]() -> id<UnoArray> { ::uForeignPool __foreignPool; return [::StrongUnoArray strongUnoArrayWithUnoArray: uArray::New(::g::Uno::Byte_typeof()->Array(), (int)length) getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<uint8_t>(arr->Item<uint8_t>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<uint8_t>(i) = ::uObjC::Unbox<uint8_t>(obj); }]; }();
            					memcpy(arr.unoArray->Ptr(), data, length);
            					receiveDataHandler(arr);
            				}];
        } (::uObjC::NativeString(url), [::StrongUnoArray strongUnoArrayWithUnoArray: protocols getAt: ^ id (::uArray* arr, int i) { return (::id)::uObjC::NativeString(arr->Strong<uString*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uString*>(i) = ::uObjC::UnoString((::NSString*)obj); }], [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*, ::NSString*>)nil : (^ void (::NSString* arg1, ::NSString* arg2)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(2, ::uObjC::UnoString(arg1), ::uObjC::UnoString(arg2));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: eventHandler]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: receiveMessageHandler]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, id<UnoArray>>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, id<UnoArray>>)nil : (^ void (id<UnoArray> arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(uCast<uArray*>((arg).unoArray, ::g::Uno::Byte_typeof()->Array()));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: receiveDataHandler])));
        
    }
    
}

// public void Dispose() [instance] :101
void WebSocketClient::Dispose()
{
    _webSocket = NULL;
}

// private void HandleEvent(string type, string message) [instance] :89
void WebSocketClient::HandleEvent(uString* type, uString* message)
{
    if (::g::Uno::String::op_Equality(type, ::STRINGS[0/*"open"*/]))
        uPtr(_open)->InvokeVoid();

    if (::g::Uno::String::op_Equality(type, ::STRINGS[1/*"close"*/]))
        uPtr(_close)->InvokeVoid();

    if (::g::Uno::String::op_Equality(type, ::STRINGS[2/*"error"*/]))
        uPtr(_error)->InvokeVoid(message);
}

// public void Send(byte[] data) [instance] :77
void WebSocketClient::Send(uArray* data)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, id<UnoArray> data) -> void
        {
            const uint8_t *arrPtr = (const uint8_t *)[data unoArray]->Ptr();
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<WebSocketClient*>((_this).unoObject, WebSocketClient_typeof())->_webSocket); }() sendData:arrPtr length:[data count]];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], [::StrongUnoArray strongUnoArrayWithUnoArray: data getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<uint8_t>(arr->Item<uint8_t>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<uint8_t>(i) = ::uObjC::Unbox<uint8_t>(obj); }]);
        
    }
    
}

// public void Send(string data) [instance] :71
void WebSocketClient::Send1(uString* data)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* data) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<WebSocketClient*>((_this).unoObject, WebSocketClient_typeof())->_webSocket); }() sendString:data];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(data));
        
    }
    
}

// public generated WebSocketClient New() [static] :17
WebSocketClient* WebSocketClient::New1()
{
    WebSocketClient* obj1 = (WebSocketClient*)uNew(WebSocketClient_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}} // ::g::SocketRocket
