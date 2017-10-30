// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct NotEqual;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NotEqual :166
// {
::g::Fuse::Reactive::InfixOperator_type* NotEqual_typeof();
void NotEqual__Compute_fn(NotEqual* __this, uObject* left, uObject* right, uObject** __retval);
void NotEqual__get_Symbol_fn(NotEqual* __this, uString** __retval);

struct NotEqual : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
