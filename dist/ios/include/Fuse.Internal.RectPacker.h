// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/RectPacker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.SkylineNode.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct RectPacker;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class RectPacker :26
// {
uType* RectPacker_typeof();
void RectPacker__ctor__fn(RectPacker* __this, ::g::Uno::Int2* size);
void RectPacker__MergeNeighbours_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node);
void RectPacker__New1_fn(::g::Uno::Int2* size, RectPacker** __retval);
void RectPacker__ReplaceNodes_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Fuse::Internal::SkylineNode* newSkyline);
void RectPacker__get_Size_fn(RectPacker* __this, ::g::Uno::Int2* __retval);
void RectPacker__set_Size_fn(RectPacker* __this, ::g::Uno::Int2* value);
void RectPacker__TryAdd_fn(RectPacker* __this, ::g::Uno::Int2* size, ::g::Uno::Recti* rect, bool* __retval);
void RectPacker__TryFit_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Int2* size, int* height, bool* __retval);

struct RectPacker : uObject
{
    uStrong< ::g::Uno::Collections::LinkedList*> _skyline;
    ::g::Uno::Int2 _Size;

    void ctor_(::g::Uno::Int2 size);
    void MergeNeighbours(::g::Uno::Collections::LinkedListNode* node);
    void ReplaceNodes(::g::Uno::Collections::LinkedListNode* node, ::g::Fuse::Internal::SkylineNode newSkyline);
    ::g::Uno::Int2 Size();
    void Size(::g::Uno::Int2 value);
    bool TryAdd(::g::Uno::Int2 size, ::g::Uno::Recti* rect);
    bool TryFit(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Int2 size, int* height);
    static RectPacker* New1(::g::Uno::Int2 size);
};
// }

}}} // ::g::Fuse::Internal
