// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/Stream.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public abstract class Stream :7
// {
struct Stream_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Close)(::g::Uno::IO::Stream*);
    void(*fp_Dispose1)(::g::Uno::IO::Stream*, bool*);
    void(*fp_Flush)(::g::Uno::IO::Stream*);
    void(*fp_get_Length)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_get_Position)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_set_Position)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_Read)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*);
    void(*fp_Write)(::g::Uno::IO::Stream*, uArray*, int*, int*);
};

Stream_type* Stream_typeof();
void Stream__ctor__fn(Stream* __this);
void Stream__Close_fn(Stream* __this);
void Stream__Dispose_fn(Stream* __this);
void Stream__Dispose1_fn(Stream* __this, bool* disposing);

struct Stream : uObject
{
    void ctor_();
    void Close() { (((Stream_type*)__type)->fp_Close)(this); }
    void Dispose();
    void Dispose1(bool disposing) { (((Stream_type*)__type)->fp_Dispose1)(this, &disposing); }
    void Flush() { (((Stream_type*)__type)->fp_Flush)(this); }
    int64_t Length() { int64_t __retval; return (((Stream_type*)__type)->fp_get_Length)(this, &__retval), __retval; }
    int64_t Position() { int64_t __retval; return (((Stream_type*)__type)->fp_get_Position)(this, &__retval), __retval; }
    void Position(int64_t value) { (((Stream_type*)__type)->fp_set_Position)(this, &value); }
    int Read(uArray* dst, int byteOffset, int byteCount) { int __retval; return (((Stream_type*)__type)->fp_Read)(this, dst, &byteOffset, &byteCount, &__retval), __retval; }
    void Write(uArray* src, int byteOffset, int byteCount) { (((Stream_type*)__type)->fp_Write)(this, src, &byteOffset, &byteCount); }
    static void Close(Stream* __this) { Stream__Close_fn(__this); }
    static void Dispose1(Stream* __this, bool disposing) { Stream__Dispose1_fn(__this, &disposing); }
};
// }

}}} // ::g::Uno::IO
