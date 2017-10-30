// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/BoxSizing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}

namespace g{
namespace Fuse{
namespace Elements{

// public struct BoxPlacement :9
// {
uStructType* BoxPlacement_typeof();
void BoxPlacement__NoGood_fn(BoxPlacement* __this, float* value, bool* __retval);
void BoxPlacement__NoGoodSize_fn(BoxPlacement* __this, float* value, bool* __retval);
void BoxPlacement__SanityConstrain_fn(BoxPlacement* __this, bool* __retval);

struct BoxPlacement
{
    ::g::Uno::Float2 MarginBox;
    ::g::Uno::Float2 Position;
    ::g::Uno::Float2 Size;

    bool NoGood(float value);
    bool NoGoodSize(float value);
    bool SanityConstrain();
};
// }

}}} // ::g::Fuse::Elements
