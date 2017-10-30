// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Sockets/1.3.2/Socket.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class Socket :261
// {
struct Socket_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Socket_type* Socket_typeof();
void Socket__Dispose_fn(Socket* __this);
void Socket__Dispose1_fn(Socket* __this, bool* disposing);
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* flags, int* __retval);
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* flags, int* __retval);

struct Socket : uObject
{
    int _handle;

    void Dispose();
    void Dispose1(bool disposing);
    int Receive1(uArray* buffer, int offset, int length, int flags);
    int Send1(uArray* buffer, int offset, int length, int flags);
};
// }

}}}} // ::g::Uno::Net::Sockets
