// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.3.1/WebSocketModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeEventEmitterModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace WebSocket{struct WebSocketClient;}}}
namespace g{namespace Fuse{namespace WebSocket{struct WebSocketClientWrapper;}}}

namespace g{
namespace Fuse{
namespace WebSocket{

// internal sealed class WebSocketClientWrapper :71
// {
::g::Fuse::Scripting::NativeModule_type* WebSocketClientWrapper_typeof();
void WebSocketClientWrapper__ctor_3_fn(WebSocketClientWrapper* __this, uArray* args);
void WebSocketClientWrapper__Close_fn(WebSocketClientWrapper* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void WebSocketClientWrapper__Closed_fn(WebSocketClientWrapper* __this);
void WebSocketClientWrapper__Connect_fn(WebSocketClientWrapper* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void WebSocketClientWrapper__DataReceived_fn(WebSocketClientWrapper* __this, uArray* data);
void WebSocketClientWrapper__ErrorReceived_fn(WebSocketClientWrapper* __this, uString* message);
void WebSocketClientWrapper__MessageReceived_fn(WebSocketClientWrapper* __this, uString* message);
void WebSocketClientWrapper__New3_fn(uArray* args, WebSocketClientWrapper** __retval);
void WebSocketClientWrapper__Opened_fn(WebSocketClientWrapper* __this);
void WebSocketClientWrapper__Send_fn(WebSocketClientWrapper* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);

struct WebSocketClientWrapper : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    uStrong< ::g::Fuse::WebSocket::WebSocketClient*> _client;

    void ctor_3(uArray* args);
    uObject* Close(::g::Fuse::Scripting::Context* c, uArray* args);
    void Closed();
    uObject* Connect(::g::Fuse::Scripting::Context* c, uArray* args);
    void DataReceived(uArray* data);
    void ErrorReceived(uString* message);
    void MessageReceived(uString* message);
    void Opened();
    uObject* Send(::g::Fuse::Scripting::Context* c, uArray* args);
    static WebSocketClientWrapper* New3(uArray* args);
};
// }

}}} // ::g::Fuse::WebSocket
