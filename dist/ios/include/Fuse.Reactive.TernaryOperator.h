// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/TernaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct TernaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class TernaryOperator :8
// {
struct TernaryOperator_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_Compute)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**);
    void(*fp_get_IsThirdOptional)(::g::Fuse::Reactive::TernaryOperator*, bool*);
};

TernaryOperator_type* TernaryOperator_typeof();
void TernaryOperator__get_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void TernaryOperator__set_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value);
void TernaryOperator__get_IsFirstOptional_fn(TernaryOperator* __this, bool* __retval);
void TernaryOperator__get_IsSecondOptional_fn(TernaryOperator* __this, bool* __retval);
void TernaryOperator__get_IsThirdOptional_fn(TernaryOperator* __this, bool* __retval);
void TernaryOperator__get_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void TernaryOperator__set_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value);
void TernaryOperator__Subscribe_fn(TernaryOperator* __this, uObject* context, uObject* listener, uObject** __retval);
void TernaryOperator__get_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void TernaryOperator__set_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value);

struct TernaryOperator : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _First;
    uStrong< ::g::Fuse::Reactive::Expression*> _Second;
    uStrong< ::g::Fuse::Reactive::Expression*> _Third;

    uObject* Compute(uObject* first, uObject* second, uObject* third) { uObject* __retval; return (((TernaryOperator_type*)__type)->fp_Compute)(this, first, second, third, &__retval), __retval; }
    ::g::Fuse::Reactive::Expression* First();
    void First(::g::Fuse::Reactive::Expression* value);
    bool IsFirstOptional();
    bool IsSecondOptional();
    bool IsThirdOptional() { bool __retval; return (((TernaryOperator_type*)__type)->fp_get_IsThirdOptional)(this, &__retval), __retval; }
    ::g::Fuse::Reactive::Expression* Second();
    void Second(::g::Fuse::Reactive::Expression* value);
    ::g::Fuse::Reactive::Expression* Third();
    void Third(::g::Fuse::Reactive::Expression* value);
    static bool IsThirdOptional(TernaryOperator* __this) { bool __retval; return TernaryOperator__get_IsThirdOptional_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
