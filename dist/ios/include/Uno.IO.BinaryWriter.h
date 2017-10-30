// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/BinaryWriter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class BinaryWriter :6
// {
struct BinaryWriter_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BinaryWriter_type* BinaryWriter_typeof();
void BinaryWriter__ctor__fn(BinaryWriter* __this, ::g::Uno::IO::Stream* stream);
void BinaryWriter__Dispose_fn(BinaryWriter* __this);
void BinaryWriter__get_LittleEndian_fn(BinaryWriter* __this, bool* __retval);
void BinaryWriter__set_LittleEndian_fn(BinaryWriter* __this, bool* value);
void BinaryWriter__New1_fn(::g::Uno::IO::Stream* stream, BinaryWriter** __retval);
void BinaryWriter__Write1_fn(BinaryWriter* __this, uint8_t* value);
void BinaryWriter__Write2_fn(BinaryWriter* __this, uArray* value);
void BinaryWriter__Write13_fn(BinaryWriter* __this, int* value);
void BinaryWriter__Write24_fn(BinaryWriter* __this, uString* value);
void BinaryWriter__Write7BitEncodedInt_fn(BinaryWriter* __this, int* value);

struct BinaryWriter : uObject
{
    uStrong<uArray*> _buffer;
    uStrong< ::g::Uno::IO::Stream*> _stream;
    bool _LittleEndian;

    void ctor_(::g::Uno::IO::Stream* stream);
    void Dispose();
    bool LittleEndian();
    void LittleEndian(bool value);
    void Write1(uint8_t value);
    void Write2(uArray* value);
    void Write13(int value);
    void Write24(uString* value);
    void Write7BitEncodedInt(int value);
    static BinaryWriter* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::Uno::IO
