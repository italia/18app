// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Delegate.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.Offset.h>
#include <Uno.Time.Text.FixedFormatPattern-1.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.LocalDateTimePattern.h>
#include <Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h>
#include <Uno.Time.Text.NumberPart-1.h>
#include <Uno.Time.Text.OffsetPattern.h>
#include <Uno.Time.Text.OffsetPattern.OffsetBucket.h>
#include <Uno.Time.Text.PatternPart-2.h>
#include <Uno.Time.Text.SeparatorPart-1.h>
#include <Uno.Time.Text.SignPart-1.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/FixedFormatPattern.uno
// ---------------------------------------------------------------------------------------

// internal sealed class FixedFormatPattern<T> :5
// {
static void FixedFormatPattern_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Time::Text::IPatternPart_typeof();
    type->SetPrecalc(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(type->T(0), NULL)->Array(), offsetof(FixedFormatPattern, _parts), 0);
}

uType* FixedFormatPattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(FixedFormatPattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.FixedFormatPattern`1", options);
    type->fp_build_ = FixedFormatPattern_build;
    return type;
}

// public FixedFormatPattern(Uno.Time.Text.IPatternPart<T>[] parts) :9
void FixedFormatPattern__ctor__fn(FixedFormatPattern* __this, uArray* parts)
{
    __this->ctor_(parts);
}

// public string Format(T bucket) :33
void FixedFormatPattern__Format_fn(FixedFormatPattern* __this, void* bucket, uString** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Time.Text.IPatternPart<T>*/),
    };
    uArray* array1;
    int index2;
    int length3;
    uString* ret2;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (array1 = __this->_parts, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uObject* part = uPtr(array1)->Strong<uObject*>(index2);
        uPtr(sb)->Append2((::g::Uno::Time::Text::IPatternPart::Write_ex(uInterface(uPtr(part), __types[0]), bucket, &ret2), ret2));
    }

    return *__retval = sb->ToString(), void();
}

// public FixedFormatPattern New(Uno.Time.Text.IPatternPart<T>[] parts) :9
void FixedFormatPattern__New1_fn(uType* __type, uArray* parts, FixedFormatPattern** __retval)
{
    *__retval = FixedFormatPattern::New1(__type, parts);
}

// public FixedFormatPattern(Uno.Time.Text.IPatternPart<T>[] parts) [instance] :9
void FixedFormatPattern::ctor_(uArray* parts)
{
    _parts = parts;
}

// public FixedFormatPattern New(Uno.Time.Text.IPatternPart<T>[] parts) [static] :9
FixedFormatPattern* FixedFormatPattern::New1(uType* __type, uArray* parts)
{
    FixedFormatPattern* obj1 = (FixedFormatPattern*)uNew(__type);
    obj1->ctor_(parts);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal abstract interface IPatternPart<T> :3
// {
uInterfaceType* IPatternPart_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Time.Text.IPatternPart`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/LocalDateTimePattern.uno
// -----------------------------------------------------------------------------------------

// private sealed class LocalDateTimePattern.LocalDateTimeBucket :142
// {
static void LocalDateTimePattern__LocalDateTimeBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Day), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Month), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Second), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Sign), 0,
        ::g::Uno::Int_typeof(), offsetof(LocalDateTimePattern__LocalDateTimeBucket, Year), 0);
}

uType* LocalDateTimePattern__LocalDateTimeBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(LocalDateTimePattern__LocalDateTimeBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket", options);
    type->fp_build_ = LocalDateTimePattern__LocalDateTimeBucket_build;
    type->fp_ctor_ = (void*)LocalDateTimePattern__LocalDateTimeBucket__New1_fn;
    return type;
}

// public generated LocalDateTimeBucket() :142
void LocalDateTimePattern__LocalDateTimeBucket__ctor__fn(LocalDateTimePattern__LocalDateTimeBucket* __this)
{
    __this->ctor_();
}

// public generated LocalDateTimeBucket New() :142
void LocalDateTimePattern__LocalDateTimeBucket__New1_fn(LocalDateTimePattern__LocalDateTimeBucket** __retval)
{
    *__retval = LocalDateTimePattern__LocalDateTimeBucket::New1();
}

// public generated LocalDateTimeBucket() [instance] :142
void LocalDateTimePattern__LocalDateTimeBucket::ctor_()
{
}

// public generated LocalDateTimeBucket New() [static] :142
LocalDateTimePattern__LocalDateTimeBucket* LocalDateTimePattern__LocalDateTimeBucket::New1()
{
    LocalDateTimePattern__LocalDateTimeBucket* obj1 = (LocalDateTimePattern__LocalDateTimeBucket*)uNew(LocalDateTimePattern__LocalDateTimeBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/LocalDateTimePattern.uno
// -----------------------------------------------------------------------------------------

// public sealed class LocalDateTimePattern :3
// {
static void LocalDateTimePattern_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), offsetof(LocalDateTimePattern, _generalPattern), 0,
        type, (uintptr_t)&LocalDateTimePattern::General_, uFieldFlagsStatic);
}

uType* LocalDateTimePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalDateTimePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDateTimePattern", options);
    type->fp_build_ = LocalDateTimePattern_build;
    type->fp_ctor_ = (void*)LocalDateTimePattern__New1_fn;
    return type;
}

// private LocalDateTimePattern() :21
void LocalDateTimePattern__ctor__fn(LocalDateTimePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.LocalDateTime value) :57
void LocalDateTimePattern__Format_fn(LocalDateTimePattern* __this, ::g::Uno::Time::LocalDateTime* value, uString** __retval)
{
    *__retval = __this->Format(value);
}

// public static Uno.Time.Text.LocalDateTimePattern get_GeneralIsoPattern() :9
void LocalDateTimePattern__get_GeneralIsoPattern_fn(LocalDateTimePattern** __retval)
{
    *__retval = LocalDateTimePattern::GeneralIsoPattern();
}

// private int GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :107
void LocalDateTimePattern__GetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetDay(value);
}

// private int GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :117
void LocalDateTimePattern__GetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :127
void LocalDateTimePattern__GetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :97
void LocalDateTimePattern__GetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMonth(value);
}

// private int GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :137
void LocalDateTimePattern__GetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :77
void LocalDateTimePattern__GetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetSign(value);
}

// private int GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :87
void LocalDateTimePattern__GetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetYear(value);
}

// private LocalDateTimePattern New() :21
void LocalDateTimePattern__New1_fn(LocalDateTimePattern** __retval)
{
    *__retval = LocalDateTimePattern::New1();
}

// private void SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int day) :102
void LocalDateTimePattern__SetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* day)
{
    __this->SetDay(value, *day);
}

// private void SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int hour) :112
void LocalDateTimePattern__SetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int minute) :122
void LocalDateTimePattern__SetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int month) :92
void LocalDateTimePattern__SetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* month)
{
    __this->SetMonth(value, *month);
}

// private void SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int second) :132
void LocalDateTimePattern__SetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int sign) :72
void LocalDateTimePattern__SetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* sign)
{
    __this->SetSign(value, *sign);
}

// private void SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int year) :82
void LocalDateTimePattern__SetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* year)
{
    __this->SetYear(value, *year);
}

uSStrong<LocalDateTimePattern*> LocalDateTimePattern::General_;

// private LocalDateTimePattern() [instance] :21
void LocalDateTimePattern::ctor_()
{
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), uArray::Init<uObject*>(::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL)->Array(), 12, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New2(::g::Uno::Time::Text::SignPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetSign_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 4, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetYear_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetYear_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetMonth_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetMonth_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetDay_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetDay_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, 'T', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetHour_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetMinute_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__SetSecond_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)LocalDateTimePattern__GetSecond_fn, this))))));
}

// public string Format(Uno.Time.LocalDateTime value) [instance] :57
uString* LocalDateTimePattern::Format(::g::Uno::Time::LocalDateTime* value)
{
    LocalDateTimePattern__LocalDateTimeBucket* collection1;
    uString* ret3;
    collection1 = LocalDateTimePattern__LocalDateTimeBucket::New1();
    uPtr(collection1)->Sign = ((uPtr(value)->Year() < 0) ? -1 : 1);
    uPtr(collection1)->Year = uPtr(value)->Year();
    uPtr(collection1)->Month = uPtr(value)->Month();
    uPtr(collection1)->Day = uPtr(value)->Day();
    uPtr(collection1)->Hour = uPtr(value)->Hour();
    uPtr(collection1)->Minute = uPtr(value)->Minute();
    uPtr(collection1)->Second = uPtr(value)->Second();
    LocalDateTimePattern__LocalDateTimeBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :107
int LocalDateTimePattern::GetDay(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Day;
}

// private int GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :117
int LocalDateTimePattern::GetHour(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Hour;
}

// private int GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :127
int LocalDateTimePattern::GetMinute(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Minute;
}

// private int GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :97
int LocalDateTimePattern::GetMonth(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Month;
}

// private int GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :137
int LocalDateTimePattern::GetSecond(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :77
int LocalDateTimePattern::GetSign(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Sign;
}

// private int GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :87
int LocalDateTimePattern::GetYear(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    return uPtr(value)->Year;
}

// private void SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int day) [instance] :102
void LocalDateTimePattern::SetDay(LocalDateTimePattern__LocalDateTimeBucket* value, int day)
{
    uPtr(value)->Day = day;
}

// private void SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int hour) [instance] :112
void LocalDateTimePattern::SetHour(LocalDateTimePattern__LocalDateTimeBucket* value, int hour)
{
    uPtr(value)->Hour = hour;
}

// private void SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int minute) [instance] :122
void LocalDateTimePattern::SetMinute(LocalDateTimePattern__LocalDateTimeBucket* value, int minute)
{
    uPtr(value)->Minute = minute;
}

// private void SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int month) [instance] :92
void LocalDateTimePattern::SetMonth(LocalDateTimePattern__LocalDateTimeBucket* value, int month)
{
    uPtr(value)->Month = month;
}

// private void SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int second) [instance] :132
void LocalDateTimePattern::SetSecond(LocalDateTimePattern__LocalDateTimeBucket* value, int second)
{
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int sign) [instance] :72
void LocalDateTimePattern::SetSign(LocalDateTimePattern__LocalDateTimeBucket* value, int sign)
{
    uPtr(value)->Sign = sign;
}

// private void SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int year) [instance] :82
void LocalDateTimePattern::SetYear(LocalDateTimePattern__LocalDateTimeBucket* value, int year)
{
    uPtr(value)->Year = year;
}

// private LocalDateTimePattern New() [static] :21
LocalDateTimePattern* LocalDateTimePattern::New1()
{
    LocalDateTimePattern* obj2 = (LocalDateTimePattern*)uNew(LocalDateTimePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.LocalDateTimePattern get_GeneralIsoPattern() [static] :9
LocalDateTimePattern* LocalDateTimePattern::GeneralIsoPattern()
{
    if (LocalDateTimePattern::General_ == NULL)
        LocalDateTimePattern::General_ = LocalDateTimePattern::New1();

    return LocalDateTimePattern::General_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal sealed class NumberPart<T> :45
// {
static void NumberPart_build(uType* type)
{
    ::STRINGS[0] = uString::Const("{0:D");
    ::STRINGS[1] = uString::Const("}");
    ::TYPES[1] = uObject_typeof()->Array();
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
}

::g::Uno::Time::Text::PatternPart_type* NumberPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NumberPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.NumberPart`1", options);
    type->fp_build_ = NumberPart_build;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))NumberPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))NumberPart__Write_fn;
    return type;
}

// public NumberPart(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :47
void NumberPart__ctor_1_fn(NumberPart* __this, int* size, bool* obligatory, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*size, *obligatory, setter, getter);
}

// public NumberPart New(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :47
void NumberPart__New1_fn(uType* __type, int* size, bool* obligatory, uDelegate* setter, uDelegate* getter, NumberPart** __retval)
{
    *__retval = NumberPart::New1(__type, *size, *obligatory, setter, getter);
}

// public override sealed string Write(T value) :79
void NumberPart__Write_fn(NumberPart* __this, void* value, uString** __retval)
{
    int ret2;
    return *__retval = ::g::Uno::String::Format(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"{0:D"*/], uBox<int>(::g::Uno::Int_typeof(), __this->ExpectedSize())), ::STRINGS[1/*"}"*/]), uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox<int>(::g::Uno::Int_typeof(), ::g::Uno::Math::Abs5((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret2), ret2))))), void();
}

// public NumberPart(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :47
void NumberPart::ctor_1(int size, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(size);
    Obligatory(obligatory);
}

// public NumberPart New(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :47
NumberPart* NumberPart::New1(uType* __type, int size, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    NumberPart* obj1 = (NumberPart*)uNew(__type);
    obj1->ctor_1(size, obligatory, setter, getter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/OffsetPattern.uno
// ----------------------------------------------------------------------------------

// private sealed class OffsetPattern.OffsetBucket :106
// {
static void OffsetPattern__OffsetBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(OffsetPattern__OffsetBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetPattern__OffsetBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetPattern__OffsetBucket, Second), 0,
        ::g::Uno::Int_typeof(), offsetof(OffsetPattern__OffsetBucket, Sign), 0);
}

uType* OffsetPattern__OffsetBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(OffsetPattern__OffsetBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetPattern.OffsetBucket", options);
    type->fp_build_ = OffsetPattern__OffsetBucket_build;
    type->fp_ctor_ = (void*)OffsetPattern__OffsetBucket__New1_fn;
    return type;
}

// public generated OffsetBucket() :106
void OffsetPattern__OffsetBucket__ctor__fn(OffsetPattern__OffsetBucket* __this)
{
    __this->ctor_();
}

// public generated OffsetBucket New() :106
void OffsetPattern__OffsetBucket__New1_fn(OffsetPattern__OffsetBucket** __retval)
{
    *__retval = OffsetPattern__OffsetBucket::New1();
}

// public generated OffsetBucket() [instance] :106
void OffsetPattern__OffsetBucket::ctor_()
{
}

// public generated OffsetBucket New() [static] :106
OffsetPattern__OffsetBucket* OffsetPattern__OffsetBucket::New1()
{
    OffsetPattern__OffsetBucket* obj1 = (OffsetPattern__OffsetBucket*)uNew(OffsetPattern__OffsetBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/OffsetPattern.uno
// ----------------------------------------------------------------------------------

// public sealed class OffsetPattern :3
// {
static void OffsetPattern_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), offsetof(OffsetPattern, _generalPattern), 0,
        type, (uintptr_t)&OffsetPattern::General_, uFieldFlagsStatic);
}

uType* OffsetPattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OffsetPattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetPattern", options);
    type->fp_build_ = OffsetPattern_build;
    type->fp_ctor_ = (void*)OffsetPattern__New1_fn;
    return type;
}

// private OffsetPattern() :21
void OffsetPattern__ctor__fn(OffsetPattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.Offset value) :54
void OffsetPattern__Format_fn(OffsetPattern* __this, ::g::Uno::Time::Offset* value, uString** __retval)
{
    *__retval = __this->Format(*value);
}

// public static Uno.Time.Text.OffsetPattern get_GeneralIsoPattern() :9
void OffsetPattern__get_GeneralIsoPattern_fn(OffsetPattern** __retval)
{
    *__retval = OffsetPattern::GeneralIsoPattern();
}

// private int GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value) :81
void OffsetPattern__GetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value) :91
void OffsetPattern__GetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value) :101
void OffsetPattern__GetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value) :71
void OffsetPattern__GetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetSign(value);
}

// private OffsetPattern New() :21
void OffsetPattern__New1_fn(OffsetPattern** __retval)
{
    *__retval = OffsetPattern::New1();
}

// private void SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value, int hour) :76
void OffsetPattern__SetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value, int minute) :86
void OffsetPattern__SetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value, int second) :96
void OffsetPattern__SetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value, int sign) :66
void OffsetPattern__SetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* sign)
{
    __this->SetSign(value, *sign);
}

uSStrong<OffsetPattern*> OffsetPattern::General_;

// private OffsetPattern() [instance] :21
void OffsetPattern::ctor_()
{
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), uArray::Init<uObject*>(::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL)->Array(), 6, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New1(::g::Uno::Time::Text::SignPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__SetSign_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), 2, true, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__SetHour_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New1(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), false, true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), 2, false, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__SetMinute_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New1(::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), false, true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL), 2, false, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__SetSecond_fn, this), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL), (void*)OffsetPattern__GetSecond_fn, this))))));
}

// public string Format(Uno.Time.Offset value) [instance] :54
uString* OffsetPattern::Format(::g::Uno::Time::Offset value)
{
    uString* ret2;
    OffsetPattern__OffsetBucket* bucket = OffsetPattern__OffsetBucket::New1();
    bucket->Sign = ((value.Milliseconds() < 0) ? -1 : 1);
    bucket->Hour = (value.Milliseconds() / 3600000);
    int remaining = value.Milliseconds() % 3600000;
    bucket->Minute = (remaining / 60000);
    remaining = remaining % 60000;
    bucket->Second = (remaining / 1000);
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret2), ret2);
}

// private int GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :81
int OffsetPattern::GetHour(OffsetPattern__OffsetBucket* value)
{
    return uPtr(value)->Hour;
}

// private int GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :91
int OffsetPattern::GetMinute(OffsetPattern__OffsetBucket* value)
{
    return uPtr(value)->Minute;
}

// private int GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :101
int OffsetPattern::GetSecond(OffsetPattern__OffsetBucket* value)
{
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :71
int OffsetPattern::GetSign(OffsetPattern__OffsetBucket* value)
{
    return uPtr(value)->Sign;
}

// private void SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value, int hour) [instance] :76
void OffsetPattern::SetHour(OffsetPattern__OffsetBucket* value, int hour)
{
    uPtr(value)->Hour = hour;
}

// private void SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value, int minute) [instance] :86
void OffsetPattern::SetMinute(OffsetPattern__OffsetBucket* value, int minute)
{
    uPtr(value)->Minute = minute;
}

// private void SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value, int second) [instance] :96
void OffsetPattern::SetSecond(OffsetPattern__OffsetBucket* value, int second)
{
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value, int sign) [instance] :66
void OffsetPattern::SetSign(OffsetPattern__OffsetBucket* value, int sign)
{
    uPtr(value)->Sign = sign;
}

// private OffsetPattern New() [static] :21
OffsetPattern* OffsetPattern::New1()
{
    OffsetPattern* obj1 = (OffsetPattern*)uNew(OffsetPattern_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Time.Text.OffsetPattern get_GeneralIsoPattern() [static] :9
OffsetPattern* OffsetPattern::GeneralIsoPattern()
{
    if (OffsetPattern::General_ == NULL)
        OffsetPattern::General_ = OffsetPattern::New1();

    return OffsetPattern::General_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal abstract class PatternPart<TBucket, T> :12
// {
static void PatternPart_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(PatternPart_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(PatternPart, _ExpectedSize), 0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(PatternPart, _Getter), 0,
        ::g::Uno::Bool_typeof(), offsetof(PatternPart, _Obligatory), 0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(PatternPart, _Setter), 0,
        ::g::Uno::Int_typeof(), offsetof(PatternPart, _SkipNextPartsCountIfThisNotSpecified), 0);
}

PatternPart_type* PatternPart_typeof()
{
    static uSStrong<PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PatternPart);
    options.TypeSize = sizeof(PatternPart_type);
    type = (PatternPart_type*)uClassType::New("Uno.Time.Text.PatternPart`2", options);
    type->fp_build_ = PatternPart_build;
    type->fp_Write = PatternPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))PatternPart__Write_fn;
    return type;
}

// protected generated PatternPart() :12
void PatternPart__ctor__fn(PatternPart* __this)
{
    __this->ctor_();
}

// public generated int get_ExpectedSize() :18
void PatternPart__get_ExpectedSize_fn(PatternPart* __this, int* __retval)
{
    *__retval = __this->ExpectedSize();
}

// protected generated void set_ExpectedSize(int value) :18
void PatternPart__set_ExpectedSize_fn(PatternPart* __this, int* value)
{
    __this->ExpectedSize(*value);
}

// protected T Get(TBucket bucket) :37
void PatternPart__Get_fn(PatternPart* __this, void* bucket, uTRef __retval)
{
    uT ret1(__this->__type->GetBase(PatternPart_typeof())->T(1), U_ALLOCA(__this->__type->GetBase(PatternPart_typeof())->T(1)->ValueSize));

    if (::g::Uno::Delegate::op_Inequality(__this->Getter(), NULL))
        return __retval.Store((uPtr(__this->Getter())->Invoke(&ret1, 1, bucket), ret1)), void();

    return __retval.Store(__this->__type->GetBase(PatternPart_typeof())->T(1), uT(__this->__type->GetBase(PatternPart_typeof())->T(1), U_ALLOCA(__this->__type->GetBase(PatternPart_typeof())->T(1)->ValueSize))), void();
}

// public generated Uno.Func<TBucket, T> get_Getter() :16
void PatternPart__get_Getter_fn(PatternPart* __this, uDelegate** __retval)
{
    *__retval = __this->Getter();
}

// protected generated void set_Getter(Uno.Func<TBucket, T> value) :16
void PatternPart__set_Getter_fn(PatternPart* __this, uDelegate* value)
{
    __this->Getter(value);
}

// public generated bool get_Obligatory() :22
void PatternPart__get_Obligatory_fn(PatternPart* __this, bool* __retval)
{
    *__retval = __this->Obligatory();
}

// protected generated void set_Obligatory(bool value) :22
void PatternPart__set_Obligatory_fn(PatternPart* __this, bool* value)
{
    __this->Obligatory(*value);
}

// public generated Uno.Action<TBucket, T> get_Setter() :14
void PatternPart__get_Setter_fn(PatternPart* __this, uDelegate** __retval)
{
    *__retval = __this->Setter();
}

// protected generated void set_Setter(Uno.Action<TBucket, T> value) :14
void PatternPart__set_Setter_fn(PatternPart* __this, uDelegate* value)
{
    __this->Setter(value);
}

// public generated int get_SkipNextPartsCountIfThisNotSpecified() :20
void PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int* __retval)
{
    *__retval = __this->SkipNextPartsCountIfThisNotSpecified();
}

// protected generated void set_SkipNextPartsCountIfThisNotSpecified(int value) :20
void PatternPart__set_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int* value)
{
    __this->SkipNextPartsCountIfThisNotSpecified(*value);
}

// public virtual string Write(TBucket value) :26
void PatternPart__Write_fn(PatternPart* __this, void* value, uString** __retval)
{
    uT ret2(__this->__type->GetBase(PatternPart_typeof())->T(1), U_ALLOCA(__this->__type->GetBase(PatternPart_typeof())->T(1)->ValueSize));
    return *__retval = ::g::Uno::Object::ToString(uBoxPtr(__this->__type->GetBase(PatternPart_typeof())->T(1), uPtr((PatternPart__Get_fn(__this, value, &ret2), ret2)), U_ALLOCA(__this->__type->GetBase(PatternPart_typeof())->T(1)->ObjectSize))), void();
}

// protected generated PatternPart() [instance] :12
void PatternPart::ctor_()
{
}

// public generated int get_ExpectedSize() [instance] :18
int PatternPart::ExpectedSize()
{
    return _ExpectedSize;
}

// protected generated void set_ExpectedSize(int value) [instance] :18
void PatternPart::ExpectedSize(int value)
{
    _ExpectedSize = value;
}

// public generated Uno.Func<TBucket, T> get_Getter() [instance] :16
uDelegate* PatternPart::Getter()
{
    return _Getter;
}

// protected generated void set_Getter(Uno.Func<TBucket, T> value) [instance] :16
void PatternPart::Getter(uDelegate* value)
{
    _Getter = value;
}

// public generated bool get_Obligatory() [instance] :22
bool PatternPart::Obligatory()
{
    return _Obligatory;
}

// protected generated void set_Obligatory(bool value) [instance] :22
void PatternPart::Obligatory(bool value)
{
    _Obligatory = value;
}

// public generated Uno.Action<TBucket, T> get_Setter() [instance] :14
uDelegate* PatternPart::Setter()
{
    return _Setter;
}

// protected generated void set_Setter(Uno.Action<TBucket, T> value) [instance] :14
void PatternPart::Setter(uDelegate* value)
{
    _Setter = value;
}

// public generated int get_SkipNextPartsCountIfThisNotSpecified() [instance] :20
int PatternPart::SkipNextPartsCountIfThisNotSpecified()
{
    return _SkipNextPartsCountIfThisNotSpecified;
}

// protected generated void set_SkipNextPartsCountIfThisNotSpecified(int value) [instance] :20
void PatternPart::SkipNextPartsCountIfThisNotSpecified(int value)
{
    _SkipNextPartsCountIfThisNotSpecified = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal sealed class SeparatorPart<T> :192
// {
static void SeparatorPart_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Char_typeof();
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Char_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5,
        ::TYPES[2/*char*/], offsetof(SeparatorPart, _separator), 0,
        ::g::Uno::Bool_typeof(), offsetof(SeparatorPart, _show), 0);
}

::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 7;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SeparatorPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.SeparatorPart`1", options);
    type->fp_build_ = SeparatorPart_build;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))SeparatorPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))SeparatorPart__Write_fn;
    return type;
}

// public SeparatorPart(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) :207
void SeparatorPart__ctor_1_fn(SeparatorPart* __this, bool* obligatory, bool* show, uChar* separator, int* skipNextPartsCountIfThisNotSpecified)
{
    __this->ctor_1(*obligatory, *show, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) :198
void SeparatorPart__ctor_2_fn(SeparatorPart* __this, bool* obligatory, uChar* separator, int* skipNextPartsCountIfThisNotSpecified)
{
    __this->ctor_2(*obligatory, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart New(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) :207
void SeparatorPart__New1_fn(uType* __type, bool* obligatory, bool* show, uChar* separator, int* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval)
{
    *__retval = SeparatorPart::New1(__type, *obligatory, *show, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart New(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) :198
void SeparatorPart__New2_fn(uType* __type, bool* obligatory, uChar* separator, int* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval)
{
    *__retval = SeparatorPart::New2(__type, *obligatory, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public override sealed string Write(T value) :234
void SeparatorPart__Write_fn(SeparatorPart* __this, void* value, uString** __retval)
{
    return *__retval = (__this->Obligatory() || __this->_show) ? (uString*)::g::Uno::Char::ToString(__this->_separator, ::TYPES[2/*char*/]) : (uString*)::g::Uno::String::Empty_, void();
}

// public SeparatorPart(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) [instance] :207
void SeparatorPart::ctor_1(bool obligatory, bool show, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ctor_();
    ExpectedSize(1);
    Obligatory(obligatory);
    SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    _separator = separator;
    _show = show;
}

// public SeparatorPart(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) [instance] :198
void SeparatorPart::ctor_2(bool obligatory, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ctor_();
    ExpectedSize(1);
    Obligatory(obligatory);
    SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    _separator = separator;
    _show = false;
}

// public SeparatorPart New(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) [static] :207
SeparatorPart* SeparatorPart::New1(uType* __type, bool obligatory, bool show, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart* obj2 = (SeparatorPart*)uNew(__type);
    obj2->ctor_1(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return obj2;
}

// public SeparatorPart New(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) [static] :198
SeparatorPart* SeparatorPart::New2(uType* __type, bool obligatory, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart* obj1 = (SeparatorPart*)uNew(__type);
    obj1->ctor_2(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/PatternPart.uno
// --------------------------------------------------------------------------------

// internal sealed class SignPart<T> :143
// {
static void SignPart_build(uType* type)
{
    ::STRINGS[2] = uString::Const("+");
    ::STRINGS[3] = uString::Const("-");
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
}

::g::Uno::Time::Text::PatternPart_type* SignPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SignPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.SignPart`1", options);
    type->fp_build_ = SignPart_build;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))SignPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))SignPart__Write_fn;
    return type;
}

// public SignPart(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :154
void SignPart__ctor_1_fn(SignPart* __this, bool* obligatory, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*obligatory, setter, getter);
}

// public SignPart(Uno.Action<T, int> setter, Uno.Func<T, int> getter) :146
void SignPart__ctor_2_fn(SignPart* __this, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_2(setter, getter);
}

// public SignPart New(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :154
void SignPart__New1_fn(uType* __type, bool* obligatory, uDelegate* setter, uDelegate* getter, SignPart** __retval)
{
    *__retval = SignPart::New1(__type, *obligatory, setter, getter);
}

// public SignPart New(Uno.Action<T, int> setter, Uno.Func<T, int> getter) :146
void SignPart__New2_fn(uType* __type, uDelegate* setter, uDelegate* getter, SignPart** __retval)
{
    *__retval = SignPart::New2(__type, setter, getter);
}

// public override sealed string Write(T value) :184
void SignPart__Write_fn(SignPart* __this, void* value, uString** __retval)
{
    int ret3;

    if ((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret3), ret3) == 1)
        return *__retval = __this->Obligatory() ? ::STRINGS[2/*"+"*/] : (uString*)::g::Uno::String::Empty_, void();

    return *__retval = ::STRINGS[3/*"-"*/], void();
}

// public SignPart(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :154
void SignPart::ctor_1(bool obligatory, uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(1);
    Obligatory(obligatory);
}

// public SignPart(Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :146
void SignPart::ctor_2(uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(1);
    Obligatory(false);
}

// public SignPart New(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :154
SignPart* SignPart::New1(uType* __type, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    SignPart* obj2 = (SignPart*)uNew(__type);
    obj2->ctor_1(obligatory, setter, getter);
    return obj2;
}

// public SignPart New(Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :146
SignPart* SignPart::New2(uType* __type, uDelegate* setter, uDelegate* getter)
{
    SignPart* obj1 = (SignPart*)uNew(__type);
    obj1->ctor_2(setter, getter);
    return obj1;
}
// }

}}}} // ::g::Uno::Time::Text
