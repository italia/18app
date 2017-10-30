// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{

// public sealed class PlacedArgs :21
// {
struct PlacedArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

PlacedArgs_type* PlacedArgs_typeof();
void PlacedArgs__ctor_1_fn(PlacedArgs* __this, bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize);
void PlacedArgs__get_HasPrev_fn(PlacedArgs* __this, bool* __retval);
void PlacedArgs__set_HasPrev_fn(PlacedArgs* __this, bool* value);
void PlacedArgs__New2_fn(bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize, PlacedArgs** __retval);
void PlacedArgs__get_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval);
void PlacedArgs__set_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value);
void PlacedArgs__get_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval);
void PlacedArgs__set_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value);
void PlacedArgs__get_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval);
void PlacedArgs__set_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value);
void PlacedArgs__get_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval);
void PlacedArgs__set_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value);
void PlacedArgs__Serialize_fn(PlacedArgs* __this, uObject* serializer);

struct PlacedArgs : ::g::Uno::EventArgs
{
    bool _HasPrev;
    ::g::Uno::Float2 _NewPosition;
    ::g::Uno::Float2 _NewSize;
    ::g::Uno::Float2 _PrevPosition;
    ::g::Uno::Float2 _PrevSize;

    void ctor_1(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize);
    bool HasPrev();
    void HasPrev(bool value);
    ::g::Uno::Float2 NewPosition();
    void NewPosition(::g::Uno::Float2 value);
    ::g::Uno::Float2 NewSize();
    void NewSize(::g::Uno::Float2 value);
    ::g::Uno::Float2 PrevPosition();
    void PrevPosition(::g::Uno::Float2 value);
    ::g::Uno::Float2 PrevSize();
    void PrevSize(::g::Uno::Float2 value);
    void Serialize(uObject* serializer);
    static PlacedArgs* New2(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize);
};
// }

}} // ::g::Fuse
