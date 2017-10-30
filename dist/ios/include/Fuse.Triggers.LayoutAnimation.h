// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Triggers/LayoutAnimation.uno.
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
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct PreplacementArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutAnimation;}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransitionedArgs;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class LayoutAnimation :211
// {
::g::Fuse::Triggers::Trigger_type* LayoutAnimation_typeof();
void LayoutAnimation__ctor_5_fn(LayoutAnimation* __this);
void LayoutAnimation__New2_fn(LayoutAnimation** __retval);
void LayoutAnimation__OnPlaced_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::PlacedArgs* args);
void LayoutAnimation__OnPreplacement_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args);
void LayoutAnimation__OnRooted_fn(LayoutAnimation* __this);
void LayoutAnimation__OnTransitioned_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args);
void LayoutAnimation__OnUnrooted_fn(LayoutAnimation* __this);
void LayoutAnimation__get_Type_fn(LayoutAnimation* __this, int* __retval);
void LayoutAnimation__set_Type_fn(LayoutAnimation* __this, int* value);

struct LayoutAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Elements::Element*> _element;
    int _frameTrans;
    int _hasOld;
    ::g::Uno::Float4x4 _oldLocal;
    uStrong< ::g::Fuse::Visual*> _oldParent;
    ::g::Uno::Float2 _oldPosition;
    ::g::Uno::Float2 _oldSize;
    ::g::Uno::Float4x4 _oldWorld;
    int _type;

    void ctor_5();
    void OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args);
    void OnPreplacement(uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args);
    void OnTransitioned(uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args);
    int Type();
    void Type(int value);
    static LayoutAnimation* New2();
};
// }

}}} // ::g::Fuse::Triggers
