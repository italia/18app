// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Transforms.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode__Subscriptions;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class TranslationModes.OffsetMode.Subscriptions :35
// {
uType* TranslationModes__OffsetMode__Subscriptions_typeof();
void TranslationModes__OffsetMode__Subscriptions__ctor__fn(TranslationModes__OffsetMode__Subscriptions* __this);
void TranslationModes__OffsetMode__Subscriptions__New1_fn(TranslationModes__OffsetMode__Subscriptions** __retval);

struct TranslationModes__OffsetMode__Subscriptions : uObject
{
    uStrong< ::g::Fuse::Visual*> Relative;
    uStrong< ::g::Fuse::Elements::Element*> Target;
    uStrong< ::g::Fuse::Visual*> TargetParent;

    void ctor_();
    static TranslationModes__OffsetMode__Subscriptions* New1();
};
// }

}}} // ::g::Fuse::Elements
