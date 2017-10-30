// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/VarArgFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.VarArgFunction.h>
namespace g{namespace Fuse{namespace Reactive{struct SimpleVarArgFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class SimpleVarArgFunction :137
// {
::g::Fuse::Reactive::Expression_type* SimpleVarArgFunction_typeof();
void SimpleVarArgFunction__OnNewArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener);
void SimpleVarArgFunction__OnNewPartialArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener);
void SimpleVarArgFunction__Subscribe_fn(SimpleVarArgFunction* __this, uObject* context, uObject* listener, uObject** __retval);

struct SimpleVarArgFunction : ::g::Fuse::Reactive::VarArgFunction
{
    void OnNewArguments(uArray* args, uObject* listener);
    void OnNewPartialArguments(uArray* args, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
