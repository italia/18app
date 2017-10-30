// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Resources/DisposalManager.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Resources{struct DisposalManager;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal static class DisposalManager :7
// {
uClassType* DisposalManager_typeof();
void DisposalManager__Add_fn(uObject* item);
void DisposalManager__Add1_fn(uObject* item);
void DisposalManager__Clean_fn(int* dr);
void DisposalManager__Remove_fn(uObject* item);
void DisposalManager__Update_fn();
void DisposalManager__VerifyAttach_fn();

struct DisposalManager : uObject
{
    static bool _actionAdded_;
    static bool& _actionAdded() { return _actionAdded_; }
    static int _disposeAt_;
    static int& _disposeAt() { return _disposeAt_; }
    static uSStrong< ::g::Uno::Collections::List*> _items_;
    static uSStrong< ::g::Uno::Collections::List*>& _items() { return _items_; }
    static uSStrong< ::g::Uno::Collections::List*> _softDisposables_;
    static uSStrong< ::g::Uno::Collections::List*>& _softDisposables() { return _softDisposables_; }

    static void Add(uObject* item);
    static void Add1(uObject* item);
    static void Clean(int dr);
    static void Remove(uObject* item);
    static void Update();
    static void VerifyAttach();
};
// }

}}} // ::g::Fuse::Resources
