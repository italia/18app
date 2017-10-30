// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct PageExpression;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class PageExpression :15
// {
::g::Fuse::Reactive::Expression_type* PageExpression_typeof();
void PageExpression__get_Key_fn(PageExpression* __this, uString** __retval);
void PageExpression__set_Key_fn(PageExpression* __this, uString* value);
void PageExpression__Subscribe_fn(PageExpression* __this, uObject* dc, uObject* listener, uObject** __retval);

struct PageExpression : ::g::Fuse::Reactive::Expression
{
    uStrong<uString*> _Key;

    uString* Key();
    void Key(uString* value);
};
// }

}}} // ::g::Fuse::Navigation
