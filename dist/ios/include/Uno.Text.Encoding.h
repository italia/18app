// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Text/Utf8.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Text{struct Decoder;}}}
namespace g{namespace Uno{namespace Text{struct Encoding;}}}
namespace g{namespace Uno{namespace Text{struct UTF8Encoding;}}}

namespace g{
namespace Uno{
namespace Text{

// public abstract class Encoding :258
// {
struct Encoding_type : uType
{
    void(*fp_GetDecoder)(::g::Uno::Text::Encoding*, ::g::Uno::Text::Decoder**);
};

Encoding_type* Encoding_typeof();
void Encoding__ctor__fn(Encoding* __this);
void Encoding__get_UTF8_fn(Encoding** __retval);

struct Encoding : uObject
{
    static uSStrong< ::g::Uno::Text::UTF8Encoding*> _utf8_;
    static uSStrong< ::g::Uno::Text::UTF8Encoding*>& _utf8() { return _utf8_; }

    void ctor_();
    ::g::Uno::Text::Decoder* GetDecoder() { ::g::Uno::Text::Decoder* __retval; return (((Encoding_type*)__type)->fp_GetDecoder)(this, &__retval), __retval; }
    static Encoding* UTF8();
};
// }

}}} // ::g::Uno::Text
