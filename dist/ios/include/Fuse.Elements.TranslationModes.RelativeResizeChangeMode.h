// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Transforms.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResizeMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__RelativeResizeChangeMode;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class TranslationModes.RelativeResizeChangeMode :126
// {
struct TranslationModes__RelativeResizeChangeMode_type : uType
{
    ::g::Fuse::Animations::IResizeMode interface0;
};

TranslationModes__RelativeResizeChangeMode_type* TranslationModes__RelativeResizeChangeMode_typeof();
void TranslationModes__RelativeResizeChangeMode__ctor__fn(TranslationModes__RelativeResizeChangeMode* __this);
void TranslationModes__RelativeResizeChangeMode__GetSizeChange_fn(TranslationModes__RelativeResizeChangeMode* __this, ::g::Fuse::Visual* target, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval);
void TranslationModes__RelativeResizeChangeMode__New1_fn(TranslationModes__RelativeResizeChangeMode** __retval);

struct TranslationModes__RelativeResizeChangeMode : uObject
{
    void ctor_();
    bool GetSizeChange(::g::Fuse::Visual* target, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize);
    static TranslationModes__RelativeResizeChangeMode* New1();
};
// }

}}} // ::g::Fuse::Elements
