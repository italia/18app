// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Text/Utf8.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Text.Decoder.h>
namespace g{namespace Uno{namespace Text{struct UTF8Decoder;}}}

namespace g{
namespace Uno{
namespace Text{

// internal sealed class UTF8Decoder :14
// {
::g::Uno::Text::Decoder_type* UTF8Decoder_typeof();
void UTF8Decoder__ctor_1_fn(UTF8Decoder* __this);
void UTF8Decoder__ConvertInternal_fn(UTF8Decoder* __this, uArray* bytes, int* byteIndex, int* byteCount, uArray* chars, int* charIndex, int* charCount, int* __retval);
void UTF8Decoder__GetChars_fn(UTF8Decoder* __this, uArray* bytes, int* byteIndex, int* byteCount, uArray* chars, int* charIndex, int* __retval);
void UTF8Decoder__New1_fn(UTF8Decoder** __retval);

struct UTF8Decoder : ::g::Uno::Text::Decoder
{
    int _state;

    void ctor_1();
    int ConvertInternal(uArray* bytes, int byteIndex, int byteCount, uArray* chars, int charIndex, int charCount);
    static UTF8Decoder* New1();
};
// }

}}} // ::g::Uno::Text
