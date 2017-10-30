// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct NullCoalesce;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NullCoalesce :67
// {
::g::Fuse::Reactive::InfixOperator_type* NullCoalesce_typeof();
void NullCoalesce__Compute_fn(NullCoalesce* __this, uObject* left, uObject* right, uObject** __retval);
void NullCoalesce__get_IsLeftOptional_fn(NullCoalesce* __this, bool* __retval);
void NullCoalesce__get_Symbol_fn(NullCoalesce* __this, uString** __retval);

struct NullCoalesce : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
