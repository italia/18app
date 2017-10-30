// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/String.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic sealed class String :13
// {
uType* String_typeof();
void String__Compare_fn(uString* a, uString* b, int* __retval);
void String__Concat_fn(uObject* a, uObject* b, uString** __retval);
void String__Concat1_fn(uString* a, uString* b, uString** __retval);
void String__Contains_fn(uString* __this, uString* str, bool* __retval);
void String__EndsWith_fn(uString* __this, uString* value, bool* __retval);
void String__Equals_fn(uString* __this, uObject* other, bool* __retval);
void String__Equals2_fn(uString* __this, uString* other, bool* __retval);
void String__Equals3_fn(uString* left, uString* right, bool* __retval);
void String__Format_fn(uString* str, uArray* objs, uString** __retval);
void String__GetHashCode_fn(uString* __this, int* __retval);
void String__IndexOf_fn(uString* __this, uChar* c, int* startIndex, int* __retval);
void String__IndexOf1_fn(uString* __this, uString* str, int* startIndex, int* __retval);
void String__IndexOfFirstNotInSet_fn(uString* __this, uArray* charSet, int* __retval);
void String__IndexOfFirstNotWhiteSpace_fn(uString* __this, int* __retval);
void String__IndexOfLastNotInSet_fn(uString* __this, uArray* charSet, int* __retval);
void String__IndexOfLastNotWhiteSpace_fn(uString* __this, int* __retval);
void String__Insert_fn(uString* __this, int* pos, uString* str, uString** __retval);
void String__InSet_fn(uString* __this, uChar* c, uArray* charSet, bool* __retval);
void String__IsNullOrEmpty_fn(uString* s, bool* __retval);
void String__Join_fn(uString* separator, uArray* value, uString** __retval);
void String__LastIndexOf_fn(uString* __this, uChar* c, int* __retval);
void String__LastIndexOf1_fn(uString* __this, uChar* c, int* startIndex, int* __retval);
void String__MatchesAt_fn(uString* __this, uString* str, int* pos, bool* __retval);
void String__op_Addition_fn(uObject* a, uString* b, uString** __retval);
void String__op_Addition1_fn(uString* a, uObject* b, uString** __retval);
void String__op_Addition2_fn(uString* a, uString* b, uString** __retval);
void String__op_Equality_fn(uString* left, uString* right, bool* __retval);
void String__op_Inequality_fn(uString* left, uString* right, bool* __retval);
void String__Replace_fn(uString* __this, uChar* oldChar, uChar* newChar, uString** __retval);
void String__Replace1_fn(uString* __this, uString* oldValue, uString* newValue, uString** __retval);
void String__Split_fn(uString* __this, uArray* splitChars, uArray** __retval);
void String__StartsWith_fn(uString* __this, uString* value, bool* __retval);
void String__SubCharArray_fn(uString* __this, int* start, int* len, uArray** __retval);
void String__Substring_fn(uString* __this, int* start, uString** __retval);
void String__Substring1_fn(uString* __this, int* start, int* len, uString** __retval);
void String__ToCharArray_fn(uString* __this, uArray** __retval);
void String__ToCharArray1_fn(uString* __this, int* start, int* length, uArray** __retval);
void String__ToLower_fn(uString* __this, uString** __retval);
void String__ToString_fn(uString* __this, uString** __retval);
void String__ToUpper_fn(uString* __this, uString** __retval);
void String__Trim_fn(uString* __this, uString** __retval);
void String__Trim1_fn(uString* __this, uArray* trimChars, uString** __retval);

struct String
{
    static uSStrong<uString*> Empty_;
    static uSStrong<uString*>& Empty() { return Empty_; }

    static bool Contains(uString* __this, uString* str);
    static bool EndsWith(uString* __this, uString* value);
    static bool Equals2(uString* __this, uString* other);
    static int IndexOf(uString* __this, uChar c, int startIndex);
    static int IndexOf1(uString* __this, uString* str, int startIndex);
    static int IndexOfFirstNotInSet(uString* __this, uArray* charSet);
    static int IndexOfFirstNotWhiteSpace(uString* __this);
    static int IndexOfLastNotInSet(uString* __this, uArray* charSet);
    static int IndexOfLastNotWhiteSpace(uString* __this);
    static uString* Insert(uString* __this, int pos, uString* str);
    static bool InSet(uString* __this, uChar c, uArray* charSet);
    static int LastIndexOf(uString* __this, uChar c);
    static int LastIndexOf1(uString* __this, uChar c, int startIndex);
    static bool MatchesAt(uString* __this, uString* str, int pos);
    static uString* Replace(uString* __this, uChar oldChar, uChar newChar);
    static uString* Replace1(uString* __this, uString* oldValue, uString* newValue);
    static uArray* Split(uString* __this, uArray* splitChars);
    static bool StartsWith(uString* __this, uString* value);
    static uArray* SubCharArray(uString* __this, int start, int len);
    static uString* Substring(uString* __this, int start);
    static uString* Substring1(uString* __this, int start, int len);
    static uArray* ToCharArray(uString* __this);
    static uArray* ToCharArray1(uString* __this, int start, int length);
    static uString* ToLower(uString* __this);
    static uString* ToUpper(uString* __this);
    static uString* Trim(uString* __this);
    static uString* Trim1(uString* __this, uArray* trimChars);
    static int Compare(uString* a, uString* b);
    static uString* Concat(uObject* a, uObject* b);
    static uString* Concat1(uString* a, uString* b);
    static bool Equals3(uString* left, uString* right);
    static uString* Format(uString* str, uArray* objs);
    static bool IsNullOrEmpty(uString* s);
    static uString* Join(uString* separator, uArray* value);
    static uString* op_Addition(uObject* a, uString* b);
    static uString* op_Addition1(uString* a, uObject* b);
    static uString* op_Addition2(uString* a, uString* b);
    static bool op_Equality(uString* left, uString* right);
    static bool op_Inequality(uString* left, uString* right);
};
// }

}} // ::g::Uno
