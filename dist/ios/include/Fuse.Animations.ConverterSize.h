// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Converter-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Animations{struct ConverterSize;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ConverterSize :254
// {
::g::Fuse::Animations::Converter_type* ConverterSize_typeof();
void ConverterSize__ctor_1_fn(ConverterSize* __this);
void ConverterSize__In_fn(ConverterSize* __this, ::g::Uno::UX::Size* value, ::g::Uno::Float4* __retval);
void ConverterSize__New1_fn(ConverterSize** __retval);
void ConverterSize__Out_fn(ConverterSize* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size* __retval);

struct ConverterSize : ::g::Fuse::Animations::Converter
{
    static uSStrong<ConverterSize*> Singleton_;
    static uSStrong<ConverterSize*>& Singleton() { return Singleton_; }

    void ctor_1();
    static ConverterSize* New1();
};
// }

}}} // ::g::Fuse::Animations
