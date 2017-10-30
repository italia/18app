// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/FormatStringLiteral.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Runtime.Implementation.Internal.FormatStringToken.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringLiteral;}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public sealed class FormatStringLiteral :3
// {
::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringLiteral_typeof();
void FormatStringLiteral__ctor_1_fn(FormatStringLiteral* __this, uString* lexeme);
void FormatStringLiteral__Equals_fn(FormatStringLiteral* __this, uObject* obj, bool* __retval);
void FormatStringLiteral__GetHashCode_fn(FormatStringLiteral* __this, int* __retval);
void FormatStringLiteral__New1_fn(uString* lexeme, FormatStringLiteral** __retval);
void FormatStringLiteral__ToString1_fn(FormatStringLiteral* __this, uArray* objs, uString** __retval);

struct FormatStringLiteral : ::g::Uno::Runtime::Implementation::Internal::FormatStringToken
{
    void ctor_1(uString* lexeme);
    static FormatStringLiteral* New1(uString* lexeme);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
