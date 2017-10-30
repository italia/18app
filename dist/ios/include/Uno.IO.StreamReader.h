// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/StreamReader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.TextReader.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}
namespace g{namespace Uno{namespace IO{struct StreamReader;}}}
namespace g{namespace Uno{namespace Text{struct Decoder;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class StreamReader :7
// {
::g::Uno::IO::TextReader_type* StreamReader_typeof();
void StreamReader__ctor_1_fn(StreamReader* __this, ::g::Uno::IO::Stream* stream);
void StreamReader__Dispose1_fn(StreamReader* __this, bool* disposing);
void StreamReader__New1_fn(::g::Uno::IO::Stream* stream, StreamReader** __retval);
void StreamReader__Peek_fn(StreamReader* __this, int* __retval);
void StreamReader__Read_fn(StreamReader* __this, int* __retval);
void StreamReader__ReadBuffer_fn(StreamReader* __this);
void StreamReader__ReadToEnd_fn(StreamReader* __this, uString** __retval);

struct StreamReader : ::g::Uno::IO::TextReader
{
    uStrong<uArray*> _byteBuffer;
    int _byteLen;
    uStrong<uArray*> _charBuffer;
    int _charLen;
    int _charPos;
    uStrong< ::g::Uno::Text::Decoder*> _decoder;
    uStrong< ::g::Uno::IO::Stream*> _stream;

    void ctor_1(::g::Uno::IO::Stream* stream);
    void ReadBuffer();
    uString* ReadToEnd();
    static StreamReader* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::Uno::IO
