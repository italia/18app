// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer-1.h>
#include <Uno.UX.Size2.h>
namespace g{namespace Fuse{struct Size2Computer;}}

namespace g{
namespace Fuse{

// internal sealed class Size2Computer :95
// {
::g::Fuse::Computer1_type* Size2Computer_typeof();
void Size2Computer__ctor_2_fn(Size2Computer* __this);
void Size2Computer__Add1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval);
void Size2Computer__Convert_fn(Size2Computer* __this, uObject* obj, ::g::Uno::UX::Size2* __retval);
void Size2Computer__Divide1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval);
void Size2Computer__EqualTo1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, bool* __retval);
void Size2Computer__Multiply1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval);
void Size2Computer__New1_fn(Size2Computer** __retval);
void Size2Computer__Subtract1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval);

struct Size2Computer : ::g::Fuse::Computer1
{
    void ctor_2();
    static Size2Computer* New1();
};
// }

}} // ::g::Fuse
