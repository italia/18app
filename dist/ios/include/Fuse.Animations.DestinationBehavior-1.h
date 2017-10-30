// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/DestinationBehavior.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct DestinationBehavior;}}}
namespace g{namespace Fuse{namespace Motion{struct DestinationMotionConfig;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DestinationBehavior<T> :13
// {
uType* DestinationBehavior_typeof();
void DestinationBehavior__ctor__fn(DestinationBehavior* __this);
void DestinationBehavior__New1_fn(uType* __type, DestinationBehavior** __retval);
void DestinationBehavior__OnUpdate_fn(DestinationBehavior* __this);
void DestinationBehavior__SetValue_fn(DestinationBehavior* __this, void* value, uDelegate* handler);
void DestinationBehavior__StopListenUpdate_fn(DestinationBehavior* __this);
void DestinationBehavior__Unroot_fn(DestinationBehavior* __this);

struct DestinationBehavior : uObject
{
    uStrong<uDelegate*> _handler;
    bool _listenUpdate;
    uStrong<uObject*> _simulation;
    uStrong< ::g::Fuse::Motion::DestinationMotionConfig*> Motion;

    void ctor_();
    void OnUpdate();
    template<class T>
    void SetValue(T value, uDelegate* handler) { DestinationBehavior__SetValue_fn(this, uConstrain(__type->T(0), value), handler); }
    void StopListenUpdate();
    void Unroot();
    static DestinationBehavior* New1(uType* __type);
};
// }

}}} // ::g::Fuse::Animations
