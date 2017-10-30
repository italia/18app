// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Converter-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Animations{struct ConverterFloat2;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ConverterFloat2 :269
// {
::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof();
void ConverterFloat2__ctor_1_fn(ConverterFloat2* __this);
void ConverterFloat2__In_fn(ConverterFloat2* __this, ::g::Uno::Float2* value, ::g::Uno::Float4* __retval);
void ConverterFloat2__New1_fn(ConverterFloat2** __retval);
void ConverterFloat2__Out_fn(ConverterFloat2* __this, ::g::Uno::Float4* value, ::g::Uno::Float2* __retval);

struct ConverterFloat2 : ::g::Fuse::Animations::Converter
{
    static uSStrong<ConverterFloat2*> Singleton_;
    static uSStrong<ConverterFloat2*>& Singleton() { return Singleton_; }

    void ctor_1();
    static ConverterFloat2* New1();
};
// }

}}} // ::g::Fuse::Animations
