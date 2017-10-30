// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Subtract;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Subtract :31
// {
::g::Fuse::Reactive::InfixOperator_type* Subtract_typeof();
void Subtract__Compute_fn(Subtract* __this, uObject* left, uObject* right, uObject** __retval);
void Subtract__get_Symbol_fn(Subtract* __this, uString** __retval);

struct Subtract : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
