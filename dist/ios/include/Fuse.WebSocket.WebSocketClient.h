// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.3.1/WebSocketClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace WebSocket{struct WebSocketClient;}}}

namespace g{
namespace Fuse{
namespace WebSocket{

// public sealed class WebSocketClient :6
// {
uType* WebSocketClient_typeof();
void WebSocketClient__ctor__fn(WebSocketClient* __this, uString* uri, uArray* protocols);
void WebSocketClient__Close_fn(WebSocketClient* __this);
void WebSocketClient__Connect_fn(WebSocketClient* __this);
void WebSocketClient__New1_fn(uString* uri, uArray* protocols, WebSocketClient** __retval);
void WebSocketClient__OnClose_fn(WebSocketClient* __this);
void WebSocketClient__OnError_fn(WebSocketClient* __this, uString* error);
void WebSocketClient__OnOpen_fn(WebSocketClient* __this);
void WebSocketClient__OnReceiveData_fn(WebSocketClient* __this, uArray* data);
void WebSocketClient__OnReceiveMessage_fn(WebSocketClient* __this, uString* message);
void WebSocketClient__Send_fn(WebSocketClient* __this, uArray* data);
void WebSocketClient__Send1_fn(WebSocketClient* __this, uString* data);

struct WebSocketClient : uObject
{
    uStrong<uObject*> _client;
    uStrong<uDelegate*> Closed;
    uStrong<uDelegate*> DataReceived;
    uStrong<uDelegate*> ErrorReceived;
    uStrong<uDelegate*> MessageReceived;
    uStrong<uDelegate*> Opened;

    void ctor_(uString* uri, uArray* protocols);
    void Close();
    void Connect();
    void OnClose();
    void OnError(uString* error);
    void OnOpen();
    void OnReceiveData(uArray* data);
    void OnReceiveMessage(uString* message);
    void Send(uArray* data);
    void Send1(uString* data);
    static WebSocketClient* New1(uString* uri, uArray* protocols);
};
// }

}}} // ::g::Fuse::WebSocket
