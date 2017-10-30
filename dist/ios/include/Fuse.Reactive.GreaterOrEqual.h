// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct GreaterOrEqual;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class GreaterOrEqual :128
// {
::g::Fuse::Reactive::InfixOperator_type* GreaterOrEqual_typeof();
void GreaterOrEqual__Compute_fn(GreaterOrEqual* __this, uObject* left, uObject* right, uObject** __retval);
void GreaterOrEqual__get_Symbol_fn(GreaterOrEqual* __this, uString** __retval);

struct GreaterOrEqual : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
