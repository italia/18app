// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{struct StringComputer;}}

namespace g{
namespace Fuse{

// internal sealed class StringComputer :56
// {
::g::Fuse::Computer1_type* StringComputer_typeof();
void StringComputer__ctor_2_fn(StringComputer* __this);
void StringComputer__Add1_fn(StringComputer* __this, uString* a, uString* b, uString** __retval);
void StringComputer__Convert_fn(StringComputer* __this, uObject* obj, uString** __retval);
void StringComputer__EqualTo1_fn(StringComputer* __this, uString* a, uString* b, bool* __retval);
void StringComputer__New1_fn(StringComputer** __retval);

struct StringComputer : ::g::Fuse::Computer1
{
    void ctor_2();
    static StringComputer* New1();
};
// }

}} // ::g::Fuse
