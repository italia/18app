// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Swipe.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct Swiper;}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class SwipeGesture :55
// {
struct SwipeGesture_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface6;
};

SwipeGesture_type* SwipeGesture_typeof();
void SwipeGesture__ctor_3_fn(SwipeGesture* __this);
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int* __retval);
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int* value);
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval);
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value);
void SwipeGesture__get_IsEnabled_fn(SwipeGesture* __this, bool* __retval);
void SwipeGesture__set_IsEnabled_fn(SwipeGesture* __this, bool* value);
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval);
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value);
void SwipeGesture__New2_fn(SwipeGesture** __retval);
void SwipeGesture__OnRooted_fn(SwipeGesture* __this);
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this);
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval);
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass);
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin);
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int* __retval);
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int* value);
void SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeGesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct SwipeGesture : ::g::Fuse::Behavior
{
    int _direction;
    int _gesturePriority;
    bool _hasDirection;
    static ::g::Uno::UX::Selector _isActiveName_;
    static ::g::Uno::UX::Selector& _isActiveName() { return _isActiveName_; }
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _region;
    uStrong< ::g::Fuse::Gestures::Internal::Swiper*> _swiper;
    int _type;
    static ::g::Uno::UX::Selector GesturePriorityName_;
    static ::g::Uno::UX::Selector& GesturePriorityName() { return GesturePriorityName_; }

    void ctor_3();
    int Direction();
    void Direction(int value);
    bool IsActive();
    void IsActive(bool value);
    bool IsEnabled();
    void IsEnabled(bool value);
    ::g::Fuse::Elements::Element* LengthNode();
    void LengthNode(::g::Fuse::Elements::Element* value);
    ::g::Fuse::Gestures::Internal::SwipeRegion* Region();
    void SetActive(bool value, uObject* origin, bool bypass);
    void SetIsActive(bool value, uObject* origin);
    int Type();
    void Type(int value);
    static SwipeGesture* New2();
};
// }

}}} // ::g::Fuse::Gestures
