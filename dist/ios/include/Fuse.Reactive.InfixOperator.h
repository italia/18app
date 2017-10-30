// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct InfixOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class InfixOperator :7
// {
struct InfixOperator_type : ::g::Fuse::Reactive::BinaryOperator_type
{
    void(*fp_get_Symbol)(::g::Fuse::Reactive::InfixOperator*, uString**);
};

InfixOperator_type* InfixOperator_typeof();
void InfixOperator__ctor_2_fn(InfixOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void InfixOperator__ToString_fn(InfixOperator* __this, uString** __retval);

struct InfixOperator : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    uString* Symbol() { uString* __retval; return (((InfixOperator_type*)__type)->fp_get_Symbol)(this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
