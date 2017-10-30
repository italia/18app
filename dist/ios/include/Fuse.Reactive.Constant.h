// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Expression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Constant;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Constant :24
// {
::g::Fuse::Reactive::ConstantExpression_type* Constant_typeof();
void Constant__ctor_2_fn(Constant* __this, uObject* value);
void Constant__GetValue_fn(Constant* __this, uObject* context, uObject** __retval);
void Constant__New1_fn(uObject* value, Constant** __retval);
void Constant__ToString_fn(Constant* __this, uString** __retval);
void Constant__get_Value_fn(Constant* __this, uObject** __retval);
void Constant__set_Value_fn(Constant* __this, uObject* value);

struct Constant : ::g::Fuse::Reactive::ConstantExpression
{
    uStrong<uObject*> _Value;

    void ctor_2(uObject* value);
    uObject* Value();
    void Value(uObject* value);
    static Constant* New1(uObject* value);
};
// }

}}} // ::g::Fuse::Reactive
