// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/Transition.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigatorSwitchedArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct Transition;}}}
namespace g{namespace Fuse{namespace Triggers{struct TransitionGroup;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// internal sealed class TransitionGroup :11
// {
uType* TransitionGroup_typeof();
void TransitionGroup__ctor__fn(TransitionGroup* __this, ::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent);
void TransitionGroup__Add_fn(TransitionGroup* __this, ::g::Fuse::Triggers::Transition* t);
void TransitionGroup__Cleanup_fn(TransitionGroup* __this);
void TransitionGroup__get_Navigator_fn(TransitionGroup* __this, ::g::Fuse::Controls::Navigator** __retval);
void TransitionGroup__New1_fn(::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent, TransitionGroup** __retval);
void TransitionGroup__OnSwitched_fn(TransitionGroup* __this, uObject* sender, ::g::Fuse::Controls::NavigatorSwitchedArgs* args);
void TransitionGroup__get_Page_fn(TransitionGroup* __this, ::g::Fuse::Visual** __retval);
void TransitionGroup__ReleasePage_fn(TransitionGroup* __this);
void TransitionGroup__Root_fn(::g::Fuse::Triggers::Transition* t, TransitionGroup** __retval);
void TransitionGroup__SelectTransition_fn(TransitionGroup* __this, ::g::Fuse::Triggers::Transition* which);
void TransitionGroup__Unroot_fn(TransitionGroup* __this, ::g::Fuse::Triggers::Transition* t);

struct TransitionGroup : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _groupMap_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _groupMap() { return _groupMap_; }
    uStrong< ::g::Fuse::Controls::Navigator*> _navigator;
    uStrong< ::g::Fuse::Visual*> _parent;
    uStrong< ::g::Fuse::Triggers::Transition*> _selected;
    uStrong< ::g::Uno::Collections::List*> _states;

    void ctor_(::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent);
    void Add(::g::Fuse::Triggers::Transition* t);
    void Cleanup();
    ::g::Fuse::Controls::Navigator* Navigator();
    void OnSwitched(uObject* sender, ::g::Fuse::Controls::NavigatorSwitchedArgs* args);
    ::g::Fuse::Visual* Page();
    void ReleasePage();
    void SelectTransition(::g::Fuse::Triggers::Transition* which);
    void Unroot(::g::Fuse::Triggers::Transition* t);
    static TransitionGroup* New1(::g::Fuse::Controls::Navigator* navigator, ::g::Fuse::Visual* parent);
    static TransitionGroup* Root(::g::Fuse::Triggers::Transition* t);
};
// }

}}} // ::g::Fuse::Triggers
