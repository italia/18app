// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Selection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Preview{struct SelectionManager;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Preview{

// public static class SelectionManager :5
// {
uClassType* SelectionManager_typeof();
void SelectionManager__IsSelected_fn(uObject* obj, bool* __retval);
void SelectionManager__get_Selection_fn(uObject** __retval);
void SelectionManager__set_Selection_fn(uObject* value);
void SelectionManager__add_SelectionChanged_fn(uDelegate* value);
void SelectionManager__remove_SelectionChanged_fn(uDelegate* value);

struct SelectionManager : uObject
{
    static uSStrong<uObject*> _Selection_;
    static uSStrong<uObject*>& _Selection() { return _Selection_; }
    static uSStrong<uDelegate*> SelectionChanged1_;
    static uSStrong<uDelegate*>& SelectionChanged1() { return SelectionChanged1_; }

    static bool IsSelected(uObject* obj);
    static uObject* Selection();
    static void Selection(uObject* value);
    static void add_SelectionChanged(uDelegate* value);
    static void remove_SelectionChanged(uDelegate* value);
};
// }

}}} // ::g::Fuse::Preview
