// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/NumericFormatter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct NumericFormatter;}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public static class NumericFormatter :18
// {
uClassType* NumericFormatter_typeof();
void NumericFormatter__CalculateExponential_fn(double* d, double* significand, int* exponent);
void NumericFormatter__get_DecimalPoint_fn(uString** __retval);
void NumericFormatter__Digits_fn(uString* formatString, int* __retval);
void NumericFormatter__DoFormatHex_fn(uString* formatString, uint64_t* l, int* maxLength, uString** __retval);
void NumericFormatter__Format_fn(uString* formatString, bool* i, uString** __retval);
void NumericFormatter__Format1_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__Format2_fn(uString* formatString, float* f, uString** __retval);
void NumericFormatter__Format3_fn(uString* formatString, int* i, uString** __retval);
void NumericFormatter__Format4_fn(uString* formatString, int64_t* i, uString** __retval);
void NumericFormatter__Format5_fn(uString* formatString, int8_t* b, uString** __retval);
void NumericFormatter__Format6_fn(uString* formatString, int16_t* s, uString** __retval);
void NumericFormatter__Format7_fn(uString* formatString, uint64_t* i, uString** __retval);
void NumericFormatter__FormatCustom_fn(uString* formatString, double* value, uString** __retval);
void NumericFormatter__FormatCustom1_fn(uString* formatString, uint64_t* value, uString** __retval);
void NumericFormatter__FormatCustomDoublePart_fn(uString* doubleFormat, double* d, bool* decimalPoint, uString** __retval);
void NumericFormatter__FormatCustomIntegerPart_fn(uString* integerFormat, uint64_t* value, uString** __retval);
void NumericFormatter__FormatDecimal_fn(uString* formatString, uint64_t* l, uString** __retval);
void NumericFormatter__FormatExponential_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__FormatFixedPoint_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__FormatFixedPoint1_fn(uString* formatString, uint64_t* d, uString** __retval);
void NumericFormatter__FormatFloatGeneral_fn(uString* formatString, float* f, uString** __retval);
void NumericFormatter__FormatGeneral_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__FormatGeneral1_fn(uString* formatString, uint64_t* i, uString** __retval);
void NumericFormatter__FormatHex_fn(uString* formatString, int* i, uString** __retval);
void NumericFormatter__FormatHex1_fn(uString* formatString, int64_t* l, uString** __retval);
void NumericFormatter__FormatHex2_fn(uString* formatString, int8_t* b, uString** __retval);
void NumericFormatter__FormatHex3_fn(uString* formatString, int16_t* s, uString** __retval);
void NumericFormatter__FormatHex4_fn(uString* formatString, uint64_t* l, uString** __retval);
void NumericFormatter__FormatNumber_fn(double* d, uString** __retval);
void NumericFormatter__FormatNumber1_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__FormatNumber2_fn(uString* formatString, uint64_t* i, uString** __retval);
void NumericFormatter__FormatNumber3_fn(uint64_t* i, uString** __retval);
void NumericFormatter__GetFormatSpecifier_fn(uString* formatString, int* __retval);
void NumericFormatter__GetStandartFormat_fn(uChar* symbol, int* __retval);
void NumericFormatter__IsLetter_fn(uChar* symbol, bool* __retval);
void NumericFormatter__Pad_fn(uString* unmodified, uString* formatString, uString** __retval);
void NumericFormatter__Padding_fn(int* length, uString** __retval);

struct NumericFormatter : uObject
{
    static uSStrong<uString*> _decimalPoint_;
    static uSStrong<uString*>& _decimalPoint() { return _decimalPoint_; }
    static int ExponentialDigits_;
    static int& ExponentialDigits() { return ExponentialDigits_; }
    static int NumberDecimalDigits_;
    static int& NumberDecimalDigits() { return NumberDecimalDigits_; }

    static void CalculateExponential(double d, double* significand, int* exponent);
    static int Digits(uString* formatString);
    static uString* DoFormatHex(uString* formatString, uint64_t l, int maxLength);
    static uString* Format(uString* formatString, bool i);
    static uString* Format1(uString* formatString, double d);
    static uString* Format2(uString* formatString, float f);
    static uString* Format3(uString* formatString, int i);
    static uString* Format4(uString* formatString, int64_t i);
    static uString* Format5(uString* formatString, int8_t b);
    static uString* Format6(uString* formatString, int16_t s);
    static uString* Format7(uString* formatString, uint64_t i);
    static uString* FormatCustom(uString* formatString, double value);
    static uString* FormatCustom1(uString* formatString, uint64_t value);
    static uString* FormatCustomDoublePart(uString* doubleFormat, double d, bool* decimalPoint);
    static uString* FormatCustomIntegerPart(uString* integerFormat, uint64_t value);
    static uString* FormatDecimal(uString* formatString, uint64_t l);
    static uString* FormatExponential(uString* formatString, double d);
    static uString* FormatFixedPoint(uString* formatString, double d);
    static uString* FormatFixedPoint1(uString* formatString, uint64_t d);
    static uString* FormatFloatGeneral(uString* formatString, float f);
    static uString* FormatGeneral(uString* formatString, double d);
    static uString* FormatGeneral1(uString* formatString, uint64_t i);
    static uString* FormatHex(uString* formatString, int i);
    static uString* FormatHex1(uString* formatString, int64_t l);
    static uString* FormatHex2(uString* formatString, int8_t b);
    static uString* FormatHex3(uString* formatString, int16_t s);
    static uString* FormatHex4(uString* formatString, uint64_t l);
    static uString* FormatNumber(double d);
    static uString* FormatNumber1(uString* formatString, double d);
    static uString* FormatNumber2(uString* formatString, uint64_t i);
    static uString* FormatNumber3(uint64_t i);
    static int GetFormatSpecifier(uString* formatString);
    static int GetStandartFormat(uChar symbol);
    static bool IsLetter(uChar symbol);
    static uString* Pad(uString* unmodified, uString* formatString);
    static uString* Padding(int length);
    static uString* DecimalPoint();
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
