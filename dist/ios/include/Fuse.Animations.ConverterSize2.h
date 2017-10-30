// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Converter-1.h>
#include <Uno.UX.Size2.h>
namespace g{namespace Fuse{namespace Animations{struct ConverterSize2;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ConverterSize2 :261
// {
::g::Fuse::Animations::Converter_type* ConverterSize2_typeof();
void ConverterSize2__ctor_1_fn(ConverterSize2* __this);
void ConverterSize2__In_fn(ConverterSize2* __this, ::g::Uno::UX::Size2* value, ::g::Uno::Float4* __retval);
void ConverterSize2__New1_fn(ConverterSize2** __retval);
void ConverterSize2__Out_fn(ConverterSize2* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size2* __retval);

struct ConverterSize2 : ::g::Fuse::Animations::Converter
{
    static uSStrong<ConverterSize2*> Singleton_;
    static uSStrong<ConverterSize2*>& Singleton() { return Singleton_; }

    void ctor_1();
    static ConverterSize2* New1();
};
// }

}}} // ::g::Fuse::Animations
