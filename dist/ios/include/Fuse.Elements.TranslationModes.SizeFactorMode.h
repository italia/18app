// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Transforms.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__SizeFactorMode;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class TranslationModes.SizeFactorMode :88
// {
struct TranslationModes__SizeFactorMode_type : uType
{
    ::g::Fuse::IScalingMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

TranslationModes__SizeFactorMode_type* TranslationModes__SizeFactorMode_typeof();
void TranslationModes__SizeFactorMode__ctor__fn(TranslationModes__SizeFactorMode* __this);
void TranslationModes__SizeFactorMode__GetScaleVector_fn(TranslationModes__SizeFactorMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval);
void TranslationModes__SizeFactorMode__New1_fn(TranslationModes__SizeFactorMode** __retval);
void TranslationModes__SizeFactorMode__Subscribe_fn(TranslationModes__SizeFactorMode* __this, uObject* transform, uObject** __retval);
void TranslationModes__SizeFactorMode__Unsubscribe_fn(TranslationModes__SizeFactorMode* __this, uObject* transform, uObject* sub);

struct TranslationModes__SizeFactorMode : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetScaleVector(::g::Fuse::Scaling* t);
    uObject* Subscribe(uObject* transform);
    void Unsubscribe(uObject* transform, uObject* sub);
    static TranslationModes__SizeFactorMode* New1();
};
// }

}}} // ::g::Fuse::Elements
