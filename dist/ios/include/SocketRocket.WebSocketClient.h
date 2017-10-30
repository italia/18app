// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.3.1/ios/SocketRocket/WebSocketClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.WebSocket.IWebSocketClient.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace SocketRocket{struct WebSocketClient;}}

namespace g{
namespace SocketRocket{

// public sealed extern class WebSocketClient :17
// {
struct WebSocketClient_type : uType
{
    ::g::Fuse::WebSocket::IWebSocketClient interface0;
    ::g::Uno::IDisposable interface1;
};

WebSocketClient_type* WebSocketClient_typeof();
void WebSocketClient__ctor__fn(WebSocketClient* __this);
void WebSocketClient__Close_fn(WebSocketClient* __this);
void WebSocketClient__Connect_fn(WebSocketClient* __this);
void WebSocketClient__Create_fn(WebSocketClient* __this, uString* uri, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessage, uDelegate* receiveData);
void WebSocketClient__Create1_fn(WebSocketClient* __this, uString* url, uArray* protocols, uDelegate* eventHandler, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler, ::g::ObjC::Object** __retval);
void WebSocketClient__Dispose_fn(WebSocketClient* __this);
void WebSocketClient__HandleEvent_fn(WebSocketClient* __this, uString* type, uString* message);
void WebSocketClient__New1_fn(WebSocketClient** __retval);
void WebSocketClient__Send_fn(WebSocketClient* __this, uArray* data);
void WebSocketClient__Send1_fn(WebSocketClient* __this, uString* data);

struct WebSocketClient : uObject
{
    uStrong<uDelegate*> _close;
    uStrong<uDelegate*> _error;
    uStrong<uDelegate*> _open;
    uStrong< ::g::ObjC::Object*> _webSocket;

    void ctor_();
    void Close();
    void Connect();
    void Create(uString* uri, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessage, uDelegate* receiveData);
    ::g::ObjC::Object* Create1(uString* url, uArray* protocols, uDelegate* eventHandler, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler);
    void Dispose();
    void HandleEvent(uString* type, uString* message);
    void Send(uArray* data);
    void Send1(uString* data);
    static WebSocketClient* New1();
};
// }

}} // ::g::SocketRocket
