// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/WhileCount.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int2.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileCount;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class WhileCount :44
// {
struct WhileCount_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Reactive::IObserver interface8;
};

WhileCount_type* WhileCount_typeof();
void WhileCount__ctor_6_fn(WhileCount* __this);
void WhileCount__Assess_fn(WhileCount* __this, int* count);
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue);
void WhileCount__FuseReactiveIObserverOnClear_fn(WhileCount* __this);
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message);
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, uObject* values);
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__FuseReactiveIObserverOnRemoveAt_fn(WhileCount* __this, int* index);
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue);
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval);
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value);
void WhileCount__IsOn_fn(WhileCount* __this, int* count, bool* __retval);
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval);
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value);
void WhileCount__OnItemsChanged_fn(WhileCount* __this);
void WhileCount__OnRooted_fn(WhileCount* __this);
void WhileCount__OnUnrooted_fn(WhileCount* __this);
void WhileCount__UpdateState_fn(WhileCount* __this);

struct WhileCount : ::g::Fuse::Triggers::WhileTrigger
{
    ::g::Uno::Int2 _compare;
    int _high;
    uStrong<uObject*> _items;
    int _low;
    int _oldCount;
    uStrong<uObject*> _subscription;

    void ctor_6();
    void Assess(int count);
    int GreaterThan();
    void GreaterThan(int value);
    bool IsOn(int count);
    uObject* Items();
    void Items(uObject* value);
    void OnItemsChanged();
    void UpdateState();
};
// }

}}} // ::g::Fuse::Reactive
