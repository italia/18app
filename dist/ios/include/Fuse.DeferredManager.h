// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Deferred.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct DeferredManager;}}
namespace g{namespace Uno{namespace Collections{struct PriorityQueue;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// internal static class DeferredManager :20
// {
uClassType* DeferredManager_typeof();
void DeferredManager__AddPending_fn(uObject* d, ::g::Uno::Float2* priority);
void DeferredManager__CheckUpdate_fn();
void DeferredManager__OnUpdate_fn();

struct DeferredManager : uObject
{
    static uSStrong< ::g::Uno::Collections::PriorityQueue*> _pending_;
    static uSStrong< ::g::Uno::Collections::PriorityQueue*>& _pending() { return _pending_; }
    static int _startFrame_;
    static int& _startFrame() { return _startFrame_; }
    static bool _update_;
    static bool& _update() { return _update_; }
    static double TimeLimit_;
    static double& TimeLimit() { return TimeLimit_; }

    static void AddPending(uObject* d, ::g::Uno::Float2 priority);
    static void CheckUpdate();
    static void OnUpdate();
};
// }

}} // ::g::Fuse
