// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/KeepInView.uno.
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
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct KeepInViewCommon;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public class KeepInViewCommon :8
// {
::g::Fuse::Node_type* KeepInViewCommon_typeof();
void KeepInViewCommon__ctor_3_fn(KeepInViewCommon* __this);
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this);
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this);
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this);
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this);
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval);
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value);
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a);

struct KeepInViewCommon : ::g::Fuse::Behavior
{
    bool _attached;
    uStrong< ::g::Fuse::Elements::Element*> _rootElement;
    uStrong< ::g::Fuse::Elements::Element*> _target;

    void ctor_3();
    void AttachElement();
    void ReleaseElement();
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    void Update(uObject* s, uObject* a);
};
// }

}}} // ::g::Fuse::Gestures
