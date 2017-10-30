// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/QuaternaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct QuaternaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class QuaternaryOperator :8
// {
struct QuaternaryOperator_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_Compute)(::g::Fuse::Reactive::QuaternaryOperator*, uObject*, uObject*, uObject*, uObject*, uObject**);
};

QuaternaryOperator_type* QuaternaryOperator_typeof();
void QuaternaryOperator__get_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void QuaternaryOperator__set_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value);
void QuaternaryOperator__get_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void QuaternaryOperator__set_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value);
void QuaternaryOperator__get_IsFirstOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_IsFourthOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_IsSecondOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_IsThirdOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void QuaternaryOperator__set_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value);
void QuaternaryOperator__Subscribe_fn(QuaternaryOperator* __this, uObject* context, uObject* listener, uObject** __retval);
void QuaternaryOperator__get_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void QuaternaryOperator__set_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value);

struct QuaternaryOperator : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _First;
    uStrong< ::g::Fuse::Reactive::Expression*> _Fourth;
    uStrong< ::g::Fuse::Reactive::Expression*> _Second;
    uStrong< ::g::Fuse::Reactive::Expression*> _Third;

    uObject* Compute(uObject* first, uObject* second, uObject* third, uObject* fourth) { uObject* __retval; return (((QuaternaryOperator_type*)__type)->fp_Compute)(this, first, second, third, fourth, &__retval), __retval; }
    ::g::Fuse::Reactive::Expression* First();
    void First(::g::Fuse::Reactive::Expression* value);
    ::g::Fuse::Reactive::Expression* Fourth();
    void Fourth(::g::Fuse::Reactive::Expression* value);
    bool IsFirstOptional();
    bool IsFourthOptional();
    bool IsSecondOptional();
    bool IsThirdOptional();
    ::g::Fuse::Reactive::Expression* Second();
    void Second(::g::Fuse::Reactive::Expression* value);
    ::g::Fuse::Reactive::Expression* Third();
    void Third(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
