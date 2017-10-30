// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/BinaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct BinaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class BinaryOperator :12
// {
struct BinaryOperator_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_Compute)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**);
    void(*fp_get_IsLeftOptional)(::g::Fuse::Reactive::BinaryOperator*, bool*);
};

BinaryOperator_type* BinaryOperator_typeof();
void BinaryOperator__ctor_1_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void BinaryOperator__Compute_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** __retval);
void BinaryOperator__get_IsLeftOptional_fn(BinaryOperator* __this, bool* __retval);
void BinaryOperator__get_IsRightOptional_fn(BinaryOperator* __this, bool* __retval);
void BinaryOperator__get_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void BinaryOperator__set_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value);
void BinaryOperator__OnNewOperands_fn(BinaryOperator* __this, uObject* listener, uObject* left, uObject* right);
void BinaryOperator__get_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void BinaryOperator__set_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value);
void BinaryOperator__Subscribe_fn(BinaryOperator* __this, uObject* context, uObject* listener, uObject** __retval);

struct BinaryOperator : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _Left;
    uStrong< ::g::Fuse::Reactive::Expression*> _Right;

    void ctor_1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    uObject* Compute(uObject* left, uObject* right) { uObject* __retval; return (((BinaryOperator_type*)__type)->fp_Compute)(this, left, right, &__retval), __retval; }
    bool IsLeftOptional() { bool __retval; return (((BinaryOperator_type*)__type)->fp_get_IsLeftOptional)(this, &__retval), __retval; }
    bool IsRightOptional();
    ::g::Fuse::Reactive::Expression* Left();
    void Left(::g::Fuse::Reactive::Expression* value);
    void OnNewOperands(uObject* listener, uObject* left, uObject* right);
    ::g::Fuse::Reactive::Expression* Right();
    void Right(::g::Fuse::Reactive::Expression* value);
    static uObject* Compute(BinaryOperator* __this, uObject* left, uObject* right) { uObject* __retval; return BinaryOperator__Compute_fn(__this, left, right, &__retval), __retval; }
    static bool IsLeftOptional(BinaryOperator* __this) { bool __retval; return BinaryOperator__get_IsLeftOptional_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
