// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// private class TranslationModes.SizeMode :75
// {
struct TranslationModes__SizeMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
    void(*fp_GetAbsVector)(::g::Fuse::TranslationModes__SizeMode*, ::g::Fuse::Translation*, ::g::Uno::Float3*);
};

TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof();
void TranslationModes__SizeMode__ctor__fn(TranslationModes__SizeMode* __this);
void TranslationModes__SizeMode__GetAbsVector_fn(TranslationModes__SizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void TranslationModes__SizeMode__New1_fn(TranslationModes__SizeMode** __retval);
void TranslationModes__SizeMode__Subscribe_fn(TranslationModes__SizeMode* __this, uObject* transform, uObject** __retval);
void TranslationModes__SizeMode__Unsubscribe_fn(TranslationModes__SizeMode* __this, uObject* transform, uObject* sub);

struct TranslationModes__SizeMode : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    uObject* Subscribe(uObject* transform);
    void Unsubscribe(uObject* transform, uObject* sub);
    static ::g::Uno::Float3 GetAbsVector(TranslationModes__SizeMode* __this, ::g::Fuse::Translation* t);
    static TranslationModes__SizeMode* New1();
};

}} // ::g::Fuse

#include <Uno.Float3.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float3 TranslationModes__SizeMode::GetAbsVector(::g::Fuse::Translation* t) { ::g::Uno::Float3 __retval; return (((TranslationModes__SizeMode_type*)__type)->fp_GetAbsVector)(this, t, &__retval), __retval; }
inline ::g::Uno::Float3 TranslationModes__SizeMode::GetAbsVector(TranslationModes__SizeMode* __this, ::g::Fuse::Translation* t) { ::g::Uno::Float3 __retval; return TranslationModes__SizeMode__GetAbsVector_fn(__this, t, &__retval), __retval; }
// }

}} // ::g::Fuse
