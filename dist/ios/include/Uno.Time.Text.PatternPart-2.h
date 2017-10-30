// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/PatternPart.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.Text.IPatternPart-1.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal abstract class PatternPart<TBucket, T> :12
// {
struct PatternPart_type : uType
{
    ::g::Uno::Time::Text::IPatternPart interface0;
    void(*fp_Write)(::g::Uno::Time::Text::PatternPart*, void*, uString**);
};

PatternPart_type* PatternPart_typeof();
void PatternPart__ctor__fn(PatternPart* __this);
void PatternPart__get_ExpectedSize_fn(PatternPart* __this, int* __retval);
void PatternPart__set_ExpectedSize_fn(PatternPart* __this, int* value);
void PatternPart__Get_fn(PatternPart* __this, void* bucket, uTRef __retval);
void PatternPart__get_Getter_fn(PatternPart* __this, uDelegate** __retval);
void PatternPart__set_Getter_fn(PatternPart* __this, uDelegate* value);
void PatternPart__get_Obligatory_fn(PatternPart* __this, bool* __retval);
void PatternPart__set_Obligatory_fn(PatternPart* __this, bool* value);
void PatternPart__get_Setter_fn(PatternPart* __this, uDelegate** __retval);
void PatternPart__set_Setter_fn(PatternPart* __this, uDelegate* value);
void PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int* __retval);
void PatternPart__set_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int* value);
void PatternPart__Write_fn(PatternPart* __this, void* value, uString** __retval);

struct PatternPart : uObject
{
    int _ExpectedSize;
    uStrong<uDelegate*> _Getter;
    bool _Obligatory;
    uStrong<uDelegate*> _Setter;
    int _SkipNextPartsCountIfThisNotSpecified;

    void ctor_();
    int ExpectedSize();
    void ExpectedSize(int value);
    template<class TBucket, class T>
    T Get(TBucket bucket) { T __retval; return PatternPart__Get_fn(this, uConstrain(__type->GetBase(PatternPart_typeof())->T(0), bucket), &__retval), __retval; }
    uDelegate* Getter();
    void Getter(uDelegate* value);
    bool Obligatory();
    void Obligatory(bool value);
    uDelegate* Setter();
    void Setter(uDelegate* value);
    int SkipNextPartsCountIfThisNotSpecified();
    void SkipNextPartsCountIfThisNotSpecified(int value);
    template<class TBucket>
    uString* Write(TBucket value) { uString* __retval; return (((PatternPart_type*)__type)->fp_Write)(this, uConstrain(__type->GetBase(PatternPart_typeof())->T(0), value), &__retval), __retval; }
    void Write_ex(void* value, uString** __retval) { (((PatternPart_type*)__type)->fp_Write)(this, value, __retval); }
    template<class TBucket>
    static uString* Write(PatternPart* __this, TBucket value) { uString* __retval; return PatternPart__Write_fn(__this, uConstrain(__this->__type->GetBase(PatternPart_typeof())->T(0), value), &__retval), __retval; }
};
// }

}}}} // ::g::Uno::Time::Text
