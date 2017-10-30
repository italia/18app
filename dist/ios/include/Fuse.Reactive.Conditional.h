// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.TernaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Conditional;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Conditional :83
// {
::g::Fuse::Reactive::TernaryOperator_type* Conditional_typeof();
void Conditional__Compute_fn(Conditional* __this, uObject* cond, uObject* trueVal, uObject* falseVal, uObject** __retval);
void Conditional__get_IsThirdOptional_fn(Conditional* __this, bool* __retval);
void Conditional__ToString_fn(Conditional* __this, uString** __retval);

struct Conditional : ::g::Fuse::Reactive::TernaryOperator
{
};
// }

}}} // ::g::Fuse::Reactive
