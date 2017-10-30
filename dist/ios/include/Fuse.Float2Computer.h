// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{struct Float2Computer;}}

namespace g{
namespace Fuse{

// internal sealed class Float2Computer :105
// {
::g::Fuse::Computer1_type* Float2Computer_typeof();
void Float2Computer__ctor_2_fn(Float2Computer* __this);
void Float2Computer__Add1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void Float2Computer__Convert_fn(Float2Computer* __this, uObject* obj, ::g::Uno::Float2* __retval);
void Float2Computer__Divide1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void Float2Computer__EqualTo1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, bool* __retval);
void Float2Computer__Multiply1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void Float2Computer__New1_fn(Float2Computer** __retval);
void Float2Computer__Subtract1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);

struct Float2Computer : ::g::Fuse::Computer1
{
    void ctor_2();
    static Float2Computer* New1();
};
// }

}} // ::g::Fuse
