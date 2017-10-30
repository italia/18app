// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.3.1/WebSocketClient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace WebSocket{

// internal abstract interface IWebSocketClient :81
// {
uInterfaceType* IWebSocketClient_typeof();

struct IWebSocketClient
{
    void(*fp_Close)(uObject*);
    void(*fp_Connect)(uObject*);
    void(*fp_Create)(uObject*, uString*, uArray*, uDelegate*, uDelegate*, uDelegate*, uDelegate*, uDelegate*);
    void(*fp_Send)(uObject*, uArray*);
    void(*fp_Send1)(uObject*, uString*);
    static void Close(const uInterface& __this) { __this.VTable<IWebSocketClient>()->fp_Close(__this); }
    static void Connect(const uInterface& __this) { __this.VTable<IWebSocketClient>()->fp_Connect(__this); }
    static void Create(const uInterface& __this, uString* uri, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessage, uDelegate* receiveData) { __this.VTable<IWebSocketClient>()->fp_Create(__this, uri, protocols, open, close, error, receiveMessage, receiveData); }
    static void Send(const uInterface& __this, uArray* data) { __this.VTable<IWebSocketClient>()->fp_Send(__this, data); }
    static void Send1(const uInterface& __this, uString* data) { __this.VTable<IWebSocketClient>()->fp_Send1(__this, data); }
};
// }

}}} // ::g::Fuse::WebSocket
