// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Attractor.uno.
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
namespace g{namespace Fuse{namespace Animations{struct Attractor;}}}
namespace g{namespace Fuse{namespace Motion{struct DestinationMotion;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Attractor<T> :26
// {
struct Attractor_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface6;
};

Attractor_type* Attractor_typeof();
void Attractor__CheckNeedUpdate_fn(Attractor* __this);
void Attractor__get_IsEnabled_fn(Attractor* __this, bool* __retval);
void Attractor__set_IsEnabled_fn(Attractor* __this, bool* value);
void Attractor__get_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion** __retval);
void Attractor__set_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion* value);
void Attractor__OnRooted_fn(Attractor* __this);
void Attractor__OnUnrooted_fn(Attractor* __this);
void Attractor__get_Target_fn(Attractor* __this, ::g::Uno::UX::Property1** __retval);
void Attractor__set_Target_fn(Attractor* __this, ::g::Uno::UX::Property1* value);
void Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn(Attractor* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void Attractor__Update_fn(Attractor* __this);

struct Attractor : ::g::Fuse::Behavior
{
    bool _isEnabled;
    bool _isUpdate;
    uStrong< ::g::Fuse::Motion::DestinationMotion*> _motion;
    uStrong<uObject*> _sim;
    float _timeMultiplier;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    void CheckNeedUpdate();
    bool IsEnabled();
    void IsEnabled(bool value);
    ::g::Fuse::Motion::DestinationMotion* Motion();
    void Motion(::g::Fuse::Motion::DestinationMotion* value);
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    void Update();
};
// }

}}} // ::g::Fuse::Animations
