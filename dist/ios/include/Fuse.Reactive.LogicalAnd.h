// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct LogicalAnd;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LogicalAnd :179
// {
::g::Fuse::Reactive::InfixOperator_type* LogicalAnd_typeof();
void LogicalAnd__Compute_fn(LogicalAnd* __this, uObject* left, uObject* right, uObject** __retval);
void LogicalAnd__get_Symbol_fn(LogicalAnd* __this, uString** __retval);

struct LogicalAnd : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
