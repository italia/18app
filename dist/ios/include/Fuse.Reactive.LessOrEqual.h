// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct LessOrEqual;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LessOrEqual :141
// {
::g::Fuse::Reactive::InfixOperator_type* LessOrEqual_typeof();
void LessOrEqual__Compute_fn(LessOrEqual* __this, uObject* left, uObject* right, uObject** __retval);
void LessOrEqual__get_Symbol_fn(LessOrEqual* __this, uString** __retval);

struct LessOrEqual : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
