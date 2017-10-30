// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipingAnimation;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class SwipingAnimation :324
// {
struct SwipingAnimation_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Uno::UX::IPropertyListener interface8;
};

SwipingAnimation_type* SwipingAnimation_typeof();
void SwipingAnimation__ctor_5_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source);
void SwipingAnimation__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval);
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress);
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this);
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this);
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value);
void SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipingAnimation* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop);

struct SwipingAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _region;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Source;

    void ctor_5(::g::Fuse::Gestures::SwipeGesture* source);
    void OnProgressChanged1(double progress);
    ::g::Fuse::Gestures::SwipeGesture* Source();
    void Source(::g::Fuse::Gestures::SwipeGesture* value);
    static SwipingAnimation* New2(::g::Fuse::Gestures::SwipeGesture* source);
};
// }

}}} // ::g::Fuse::Gestures
