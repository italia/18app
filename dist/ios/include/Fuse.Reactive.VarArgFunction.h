// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/VarArgFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class VarArgFunction :10
// {
::g::Fuse::Reactive::Expression_type* VarArgFunction_typeof();
void VarArgFunction__get_Arguments_fn(VarArgFunction* __this, uObject** __retval);
void VarArgFunction__FormatString_fn(VarArgFunction* __this, uString* funcName, uString** __retval);

struct VarArgFunction : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Uno::Collections::List*> _args;

    uObject* Arguments();
    uString* FormatString(uString* funcName);
};
// }

}}} // ::g::Fuse::Reactive
