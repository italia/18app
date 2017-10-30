// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Converter-1.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{namespace Animations{struct ConverterFloat3;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ConverterFloat3 :276
// {
::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof();
void ConverterFloat3__ctor_1_fn(ConverterFloat3* __this);
void ConverterFloat3__In_fn(ConverterFloat3* __this, ::g::Uno::Float3* value, ::g::Uno::Float4* __retval);
void ConverterFloat3__New1_fn(ConverterFloat3** __retval);
void ConverterFloat3__Out_fn(ConverterFloat3* __this, ::g::Uno::Float4* value, ::g::Uno::Float3* __retval);

struct ConverterFloat3 : ::g::Fuse::Animations::Converter
{
    static uSStrong<ConverterFloat3*> Singleton_;
    static uSStrong<ConverterFloat3*>& Singleton() { return Singleton_; }

    void ctor_1();
    static ConverterFloat3* New1();
};
// }

}}} // ::g::Fuse::Animations
