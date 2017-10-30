// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/PatternPart.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.PatternPart-2.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct SignPart;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal sealed class SignPart<T> :143
// {
::g::Uno::Time::Text::PatternPart_type* SignPart_typeof();
void SignPart__ctor_1_fn(SignPart* __this, bool* obligatory, uDelegate* setter, uDelegate* getter);
void SignPart__ctor_2_fn(SignPart* __this, uDelegate* setter, uDelegate* getter);
void SignPart__New1_fn(uType* __type, bool* obligatory, uDelegate* setter, uDelegate* getter, SignPart** __retval);
void SignPart__New2_fn(uType* __type, uDelegate* setter, uDelegate* getter, SignPart** __retval);
void SignPart__Write_fn(SignPart* __this, void* value, uString** __retval);

struct SignPart : ::g::Uno::Time::Text::PatternPart
{
    void ctor_1(bool obligatory, uDelegate* setter, uDelegate* getter);
    void ctor_2(uDelegate* setter, uDelegate* getter);
    static SignPart* New1(uType* __type, bool obligatory, uDelegate* setter, uDelegate* getter);
    static SignPart* New2(uType* __type, uDelegate* setter, uDelegate* getter);
};
// }

}}}} // ::g::Uno::Time::Text
