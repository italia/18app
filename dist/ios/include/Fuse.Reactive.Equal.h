// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Equal;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Equal :154
// {
::g::Fuse::Reactive::InfixOperator_type* Equal_typeof();
void Equal__Compute_fn(Equal* __this, uObject* left, uObject* right, uObject** __retval);
void Equal__get_Symbol_fn(Equal* __this, uString** __retval);

struct Equal : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
