// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.TernaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Clamp;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Clamp :467
// {
::g::Fuse::Reactive::TernaryOperator_type* Clamp_typeof();
void Clamp__Compute_fn(Clamp* __this, uObject* a, uObject* mn, uObject* mx, uObject** __retval);
void Clamp__ToString_fn(Clamp* __this, uString** __retval);

struct Clamp : ::g::Fuse::Reactive::TernaryOperator
{
};
// }

}}} // ::g::Fuse::Reactive
