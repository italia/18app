// This file was generated based on /usr/local/share/uno/Packages/Fuse.Selection/1.3.1/Selection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Selection{struct Selection__ListWrapper;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Selection{

// private sealed class Selection.ListWrapper :339
// {
struct Selection__ListWrapper_type : uType
{
    ::g::Fuse::IArray interface0;
};

Selection__ListWrapper_type* Selection__ListWrapper_typeof();
void Selection__ListWrapper__ctor__fn(Selection__ListWrapper* __this, ::g::Uno::Collections::List* list);
void Selection__ListWrapper__get_Item_fn(Selection__ListWrapper* __this, int* index, uObject** __retval);
void Selection__ListWrapper__get_Length_fn(Selection__ListWrapper* __this, int* __retval);
void Selection__ListWrapper__New1_fn(::g::Uno::Collections::List* list, Selection__ListWrapper** __retval);

struct Selection__ListWrapper : uObject
{
    uStrong< ::g::Uno::Collections::List*> _list;

    void ctor_(::g::Uno::Collections::List* list);
    uObject* Item(int index);
    int Length();
    static Selection__ListWrapper* New1(::g::Uno::Collections::List* list);
};
// }

}}} // ::g::Fuse::Selection
