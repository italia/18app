// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Transforms.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode;}}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// private class TranslationModes.OffsetMode :10
// {
struct TranslationModes__OffsetMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
    void(*fp_GetDstOffset)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*);
    void(*fp_GetSrcOffset)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*);
};

TranslationModes__OffsetMode_type* TranslationModes__OffsetMode_typeof();
void TranslationModes__OffsetMode__ctor__fn(TranslationModes__OffsetMode* __this);
void TranslationModes__OffsetMode__GetAbsVector_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void TranslationModes__OffsetMode__GetDstOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval);
void TranslationModes__OffsetMode__GetSrcOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval);
void TranslationModes__OffsetMode__Subscribe_fn(TranslationModes__OffsetMode* __this, uObject* transform, uObject** __retval);
void TranslationModes__OffsetMode__Unsubscribe_fn(TranslationModes__OffsetMode* __this, uObject* transform, uObject* sub);

struct TranslationModes__OffsetMode : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    ::g::Uno::Float3 GetDstOffset(::g::Fuse::Elements::Element* e);
    ::g::Uno::Float3 GetSrcOffset(::g::Fuse::Elements::Element* e);
    uObject* Subscribe(uObject* transform);
    void Unsubscribe(uObject* transform, uObject* sub);
    static ::g::Uno::Float3 GetDstOffset(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e);
    static ::g::Uno::Float3 GetSrcOffset(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e);
};

}}} // ::g::Fuse::Elements

#include <Uno.Float3.h>

namespace g{
namespace Fuse{
namespace Elements{

inline ::g::Uno::Float3 TranslationModes__OffsetMode::GetDstOffset(::g::Fuse::Elements::Element* e) { ::g::Uno::Float3 __retval; return (((TranslationModes__OffsetMode_type*)__type)->fp_GetDstOffset)(this, e, &__retval), __retval; }
inline ::g::Uno::Float3 TranslationModes__OffsetMode::GetSrcOffset(::g::Fuse::Elements::Element* e) { ::g::Uno::Float3 __retval; return (((TranslationModes__OffsetMode_type*)__type)->fp_GetSrcOffset)(this, e, &__retval), __retval; }
inline ::g::Uno::Float3 TranslationModes__OffsetMode::GetDstOffset(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e) { ::g::Uno::Float3 __retval; return TranslationModes__OffsetMode__GetDstOffset_fn(__this, e, &__retval), __retval; }
inline ::g::Uno::Float3 TranslationModes__OffsetMode::GetSrcOffset(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e) { ::g::Uno::Float3 __retval; return TranslationModes__OffsetMode__GetSrcOffset_fn(__this, e, &__retval), __retval; }
// }

}}} // ::g::Fuse::Elements
