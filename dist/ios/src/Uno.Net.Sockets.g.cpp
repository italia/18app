// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <netdb.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.NetworkHelpers.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.Socket.SocketHandle.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.Net.Sockets.SocketFlags.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.3.2/NetworkStream.uno
// ---------------------------------------------------------------------

// public sealed class NetworkStream :10
// {
static void NetworkStream_build(uType* type)
{
    ::STRINGS[0] = uString::Const("sent != byteCount");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(NetworkStream, _socket), 0);
}

::g::Uno::IO::Stream_type* NetworkStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NetworkStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.Net.Sockets.NetworkStream", options);
    type->fp_build_ = NetworkStream_build;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))NetworkStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))NetworkStream__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))NetworkStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public override sealed void Flush() :67
void NetworkStream__Flush_fn(NetworkStream* __this)
{
}

// public override sealed long get_Length() :23
void NetworkStream__get_Length_fn(NetworkStream* __this, int64_t* __retval)
{
    return *__retval = 0LL, void();
}

// public override sealed long get_Position() :28
void NetworkStream__get_Position_fn(NetworkStream* __this, int64_t* __retval)
{
    return *__retval = 0LL, void();
}

// public override sealed void set_Position(long value) :29
void NetworkStream__set_Position_fn(NetworkStream* __this, int64_t* value)
{
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :49
void NetworkStream__Read_fn(NetworkStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    return *__retval = uPtr(__this->_socket)->Receive1(dst, byteOffset_, byteCount_, 0), void();
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :54
void NetworkStream__Write_fn(NetworkStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    int sent = uPtr(__this->_socket)->Send1(src, byteOffset_, byteCount_, 0);

    if (sent != byteCount_)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"sent != byt...*/]));
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.3.2/Socket.uno
// --------------------------------------------------------------

// public sealed class Socket :261
// {
// ~Socket() :538
static void Socket__Finalize_fn(Socket* __this)
{
    __this->Dispose1(false);
}

static void Socket_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Socket_type, interface0));
    type->SetFields(0,
        Socket__SocketHandle_typeof(), offsetof(Socket, _handle), 0);
}

Socket_type* Socket_typeof()
{
    static uSStrong<Socket_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Socket);
    options.TypeSize = sizeof(Socket_type);
    type = (Socket_type*)uClassType::New("Uno.Net.Sockets.Socket", options);
    type->fp_build_ = Socket_build;
    type->fp_Finalize = (void(*)(uObject*))Socket__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Socket__Dispose_fn;
    return type;
}

// public void Dispose() :533
void Socket__Dispose_fn(Socket* __this)
{
    __this->Dispose();
}

// protected void Dispose(bool disposing) :514
void Socket__Dispose1_fn(Socket* __this, bool* disposing)
{
    __this->Dispose1(*disposing);
}

// public int Receive(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) :408
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* flags, int* __retval)
{
    *__retval = __this->Receive1(buffer, *offset, *length, *flags);
}

// public int Send(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) :390
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* flags, int* __retval)
{
    *__retval = __this->Send1(buffer, *offset, *length, *flags);
}

// public void Dispose() [instance] :533
void Socket::Dispose()
{
    Dispose1(true);
}

// protected void Dispose(bool disposing) [instance] :514
void Socket::Dispose1(bool disposing)
{
    bool disposing_ = disposing;

    if (!disposing_)
        return;

    int result;
    result = close(_handle);

    if (result < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));
}

// public int Receive(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) [instance] :408
int Socket::Receive1(uArray* buffer, int offset, int length, int flags)
{
    if ((offset + length) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("Offset and length out of range")));

    int ret = recv(_handle, (char *)buffer->Ptr() + offset, length, 0);

    if (ret < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return ret;
}

// public int Send(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) [instance] :390
int Socket::Send1(uArray* buffer, int offset, int length, int flags)
{
    int ret = send(_handle, (char *)buffer->Ptr() + offset, length, 0);

    if (ret < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return ret;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.3.2/Socket.uno
// --------------------------------------------------------------

// public sealed class SocketException :545
// {
static void SocketException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* SocketException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(SocketException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Sockets.SocketException", options);
    type->fp_build_ = SocketException_build;
    return type;
}

// internal SocketException(string message) :547
void SocketException__ctor_3_fn(SocketException* __this, uString* message)
{
    __this->ctor_3(message);
}

// internal SocketException New(string message) :547
void SocketException__New4_fn(uString* message, SocketException** __retval)
{
    *__retval = SocketException::New4(message);
}

// internal SocketException(string message) [instance] :547
void SocketException::ctor_3(uString* message)
{
    ctor_1(message);
}

// internal SocketException New(string message) [static] :547
SocketException* SocketException::New4(uString* message)
{
    SocketException* obj1 = (SocketException*)uNew(SocketException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.3.2/Socket.uno
// --------------------------------------------------------------

// public enum SocketFlags :45
uEnumType* SocketFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketFlags", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "None", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.3.2/Socket.uno
// --------------------------------------------------------------

// internal extern struct Socket.SocketHandle :268
// {
static void Socket__SocketHandle_build(uType* type)
{
}

uStructType* Socket__SocketHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int);
    options.ValueSize = sizeof(int);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Sockets.Socket.SocketHandle", options);
    type->fp_build_ = Socket__SocketHandle_build;
    return type;
}
// }

}}}} // ::g::Uno::Net::Sockets
