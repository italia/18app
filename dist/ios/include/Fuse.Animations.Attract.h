// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Attract.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Animations{struct Attract;}}}
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Attract :41
// {
::g::Fuse::Reactive::Expression_type* Attract_typeof();
void Attract__Subscribe_fn(Attract* __this, uObject* context, uObject* listener, uObject** __retval);

struct Attract : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Animations::AttractorConfig*> _config;
    uStrong< ::g::Fuse::Reactive::Expression*> _sourceValue;
};
// }

}}} // ::g::Fuse::Animations
