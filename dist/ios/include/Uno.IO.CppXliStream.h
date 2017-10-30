// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/CppXliStream.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace IO{struct CppXliStream;}}}
namespace uBase { class Stream; }

namespace g{
namespace Uno{
namespace IO{

// internal sealed extern class CppXliStream :18
// {
::g::Uno::IO::Stream_type* CppXliStream_typeof();
void CppXliStream__ctor_1_fn(CppXliStream* __this, uBase::Stream** handle);
void CppXliStream__Dispose1_fn(CppXliStream* __this, bool* disposing);
void CppXliStream__Flush_fn(CppXliStream* __this);
void CppXliStream__get_Length_fn(CppXliStream* __this, int64_t* __retval);
void CppXliStream__New1_fn(uBase::Stream** handle, CppXliStream** __retval);
void CppXliStream__get_Position_fn(CppXliStream* __this, int64_t* __retval);
void CppXliStream__set_Position_fn(CppXliStream* __this, int64_t* value);
void CppXliStream__Read_fn(CppXliStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval);
void CppXliStream__Write_fn(CppXliStream* __this, uArray* src, int* byteOffset, int* byteCount);

struct CppXliStream : ::g::Uno::IO::Stream
{
    uBase::Stream* _handle;

    void ctor_1(uBase::Stream* handle);
    static CppXliStream* New1(uBase::Stream* handle);
};
// }

}}} // ::g::Uno::IO
