// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Multiply;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Multiply :43
// {
::g::Fuse::Reactive::InfixOperator_type* Multiply_typeof();
void Multiply__Compute_fn(Multiply* __this, uObject* left, uObject* right, uObject** __retval);
void Multiply__get_Symbol_fn(Multiply* __this, uString** __retval);

struct Multiply : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
