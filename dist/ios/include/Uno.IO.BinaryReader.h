// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/BinaryReader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class BinaryReader :7
// {
struct BinaryReader_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BinaryReader_type* BinaryReader_typeof();
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream);
void BinaryReader__Dispose_fn(BinaryReader* __this);
void BinaryReader__FillBuffer_fn(BinaryReader* __this, int* byteCount);
void BinaryReader__get_LittleEndian_fn(BinaryReader* __this, bool* __retval);
void BinaryReader__set_LittleEndian_fn(BinaryReader* __this, bool* value);
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval);
void BinaryReader__Read7BitEncodedInt_fn(BinaryReader* __this, int* __retval);
void BinaryReader__ReadByte_fn(BinaryReader* __this, uint8_t* __retval);
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int* byteCount, uArray** __retval);
void BinaryReader__ReadInt_fn(BinaryReader* __this, int* __retval);
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval);

struct BinaryReader : uObject
{
    uStrong<uArray*> _buffer;
    uStrong< ::g::Uno::IO::Stream*> _stream;
    bool _LittleEndian;

    void ctor_(::g::Uno::IO::Stream* stream);
    void Dispose();
    void FillBuffer(int byteCount);
    bool LittleEndian();
    void LittleEndian(bool value);
    int Read7BitEncodedInt();
    uint8_t ReadByte();
    uArray* ReadBytes(int byteCount);
    int ReadInt();
    uString* ReadString();
    static BinaryReader* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::Uno::IO
