// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.FormatException.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.Internal.FormatSpecifier.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringItem.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringLiteral.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State.h>
#include <Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
static uString* STRINGS[12];
static uType* TYPES[16];

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/ArrayEnumerable.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class ArrayEnumerable<T> :47
// {
static void ArrayEnumerable_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(ArrayEnumerable_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(ArrayEnumerable, _source), 0);
}

ArrayEnumerable_type* ArrayEnumerable_typeof()
{
    static uSStrong<ArrayEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ArrayEnumerable);
    options.TypeSize = sizeof(ArrayEnumerable_type);
    type = (ArrayEnumerable_type*)uClassType::New("Uno.Runtime.Implementation.Internal.ArrayEnumerable`1", options);
    type->fp_build_ = ArrayEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ArrayEnumerable__GetEnumerator_fn;
    return type;
}

// public ArrayEnumerable(T[] source) :51
void ArrayEnumerable__ctor__fn(ArrayEnumerable* __this, uArray* source)
{
    __this->ctor_(source);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :56
void ArrayEnumerable__GetEnumerator_fn(ArrayEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public ArrayEnumerable New(T[] source) :51
void ArrayEnumerable__New1_fn(uType* __type, uArray* source, ArrayEnumerable** __retval)
{
    *__retval = ArrayEnumerable::New1(__type, source);
}

// public ArrayEnumerable(T[] source) [instance] :51
void ArrayEnumerable::ctor_(uArray* source)
{
    _source = source;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :56
uObject* ArrayEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.Internal.ArrayEnumerator<T>*/),
    };
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator::New1(__types[0], _source));
}

// public ArrayEnumerable New(T[] source) [static] :51
ArrayEnumerable* ArrayEnumerable::New1(uType* __type, uArray* source)
{
    ArrayEnumerable* obj1 = (ArrayEnumerable*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/ArrayEnumerable.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class ArrayEnumerator<T> :5
// {
static void ArrayEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(ArrayEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ArrayEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(ArrayEnumerator_type, interface2));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), offsetof(ArrayEnumerator, _iterator), 0,
        type->T(0)->Array(), offsetof(ArrayEnumerator, _source), 0);
}

ArrayEnumerator_type* ArrayEnumerator_typeof()
{
    static uSStrong<ArrayEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ArrayEnumerator);
    options.TypeSize = sizeof(ArrayEnumerator_type);
    type = (ArrayEnumerator_type*)uClassType::New("Uno.Runtime.Implementation.Internal.ArrayEnumerator`1", options);
    type->fp_build_ = ArrayEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))ArrayEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ArrayEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))ArrayEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))ArrayEnumerator__MoveNext_fn;
    return type;
}

// public ArrayEnumerator(T[] source) :11
void ArrayEnumerator__ctor__fn(ArrayEnumerator* __this, uArray* source)
{
    __this->ctor_(source);
}

// public T get_Current() :19
void ArrayEnumerator__get_Current_fn(ArrayEnumerator* __this, uTRef __retval)
{
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :22
void ArrayEnumerator__Dispose_fn(ArrayEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :33
void ArrayEnumerator__MoveNext_fn(ArrayEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public ArrayEnumerator New(T[] source) :11
void ArrayEnumerator__New1_fn(uType* __type, uArray* source, ArrayEnumerator** __retval)
{
    *__retval = ArrayEnumerator::New1(__type, source);
}

// public void Reset() :27
void ArrayEnumerator__Reset_fn(ArrayEnumerator* __this)
{
    __this->Reset();
}

// public ArrayEnumerator(T[] source) [instance] :11
void ArrayEnumerator::ctor_(uArray* source)
{
    _source = source;
    _iterator = -1;
}

// public void Dispose() [instance] :22
void ArrayEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :33
bool ArrayEnumerator::MoveNext()
{
    _iterator++;

    if (_iterator < uPtr(_source)->Length())
    {
        _current() = uPtr(_source)->TItem(_iterator);
        return true;
    }

    return false;
}

// public void Reset() [instance] :27
void ArrayEnumerator::Reset()
{
    _iterator = -1;
    _current().Default();
}

// public ArrayEnumerator New(T[] source) [static] :11
ArrayEnumerator* ArrayEnumerator::New1(uType* __type, uArray* source)
{
    ArrayEnumerator* obj1 = (ArrayEnumerator*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/BufferConverters.uno
// -----------------------------------------------------------------------------------------------------------

// public static class BufferConverters :3
// {
static void BufferConverters_build(uType* type)
{
}

uClassType* BufferConverters_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.BufferConverters", options);
    type->fp_build_ = BufferConverters_build;
    return type;
}

// public static Uno.Buffer ToBuffer(float2[] data) :15
void BufferConverters__ToBuffer3_fn(uArray* data, ::g::Uno::Buffer** __retval)
{
    *__retval = BufferConverters::ToBuffer3(data);
}

// public static Uno.Buffer ToBuffer(float3[] data) :25
void BufferConverters__ToBuffer4_fn(uArray* data, ::g::Uno::Buffer** __retval)
{
    *__retval = BufferConverters::ToBuffer4(data);
}

// public static Uno.Buffer ToBuffer(ushort[] data) :65
void BufferConverters__ToBuffer9_fn(uArray* data, ::g::Uno::Buffer** __retval)
{
    *__retval = BufferConverters::ToBuffer9(data);
}

// public static Uno.Buffer ToBuffer(float2[] data) [static] :15
::g::Uno::Buffer* BufferConverters::ToBuffer3(uArray* data)
{
    ::g::Uno::Buffer* result = ::g::Uno::Buffer::New4(uPtr(data)->Length() * 8);

    for (int i = 0; i < data->Length(); i++)
        uPtr(result)->Set5(i * 8, uPtr(data)->Item< ::g::Uno::Float2>(i), true);

    return result;
}

// public static Uno.Buffer ToBuffer(float3[] data) [static] :25
::g::Uno::Buffer* BufferConverters::ToBuffer4(uArray* data)
{
    ::g::Uno::Buffer* result = ::g::Uno::Buffer::New4(uPtr(data)->Length() * 12);

    for (int i = 0; i < data->Length(); i++)
        uPtr(result)->Set6(i * 12, uPtr(data)->Item< ::g::Uno::Float3>(i), true);

    return result;
}

// public static Uno.Buffer ToBuffer(ushort[] data) [static] :65
::g::Uno::Buffer* BufferConverters::ToBuffer9(uArray* data)
{
    ::g::Uno::Buffer* result = ::g::Uno::Buffer::New4(uPtr(data)->Length() * 2);

    for (int i = 0; i < data->Length(); i++)
        uPtr(result)->Set23(i * 2, uPtr(data)->Item<uint16_t>(i), true);

    return result;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/NumericFormatter.uno
// -----------------------------------------------------------------------------------------------------------

// internal enum FormatSpecifier :6
uEnumType* FormatSpecifier_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Runtime.Implementation.Internal.FormatSpecifier", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Decimal", 0LL,
        "FixedPoint", 1LL,
        "Hexadecimal", 2LL,
        "Exponential", 3LL,
        "General", 4LL,
        "Percent", 5LL,
        "Number", 6LL,
        "Custom", 7LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/FormatStringItem.uno
// -----------------------------------------------------------------------------------------------------------

// public sealed class FormatStringItem :3
// {
static void FormatStringItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Index (zero based) must be greater than or equal to zero and less than the size of the argument list.");
    ::STRINGS[1] = uString::Const("Format specifier was invalid");
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Uno::Char_typeof();
    ::TYPES[3] = ::g::Uno::SByte_typeof();
    ::TYPES[4] = ::g::Uno::Byte_typeof();
    ::TYPES[5] = ::g::Uno::Short_typeof();
    ::TYPES[6] = ::g::Uno::UShort_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::UInt_typeof();
    ::TYPES[9] = ::g::Uno::Long_typeof();
    ::TYPES[10] = ::g::Uno::ULong_typeof();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    type->SetDependencies(
        ::g::Uno::Runtime::Implementation::Internal::NumericFormatter_typeof());
    type->SetFields(1);
}

::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringItem_typeof()
{
    static uSStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FormatStringItem);
    options.TypeSize = sizeof(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type);
    type = (::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*)uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringItem", options);
    type->fp_build_ = FormatStringItem_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FormatStringItem__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))FormatStringItem__GetHashCode_fn;
    type->fp_ToString1 = (void(*)(::g::Uno::Runtime::Implementation::Internal::FormatStringToken*, uArray*, uString**))FormatStringItem__ToString1_fn;
    return type;
}

// public FormatStringItem(string lexeme) :5
void FormatStringItem__ctor_1_fn(FormatStringItem* __this, uString* lexeme)
{
    __this->ctor_1(lexeme);
}

// public override sealed bool Equals(object obj) :36
void FormatStringItem__Equals_fn(FormatStringItem* __this, uObject* obj, bool* __retval)
{
    if (obj == NULL)
        return *__retval = false, void();

    FormatStringItem* token = uAs<FormatStringItem*>(obj, __this->__type);

    if (token == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::String::op_Equality(__this->Lexeme(), uPtr(token)->Lexeme()), void();
}

// public string get_FormatString() :24
void FormatStringItem__get_FormatString_fn(FormatStringItem* __this, uString** __retval)
{
    *__retval = __this->FormatString();
}

// public override sealed int GetHashCode() :48
void FormatStringItem__GetHashCode_fn(FormatStringItem* __this, int* __retval)
{
    return *__retval = uPtr(__this->Lexeme())->GetHashCode(), void();
}

// public FormatStringItem New(string lexeme) :5
void FormatStringItem__New1_fn(uString* lexeme, FormatStringItem** __retval)
{
    *__retval = FormatStringItem::New1(lexeme);
}

// public int get_Number() :11
void FormatStringItem__get_Number_fn(FormatStringItem* __this, int* __retval)
{
    *__retval = __this->Number();
}

// public override sealed string ToString(object[] objs) :53
void FormatStringItem__ToString1_fn(FormatStringItem* __this, uArray* objs, uString** __retval)
{
    if ((__this->Number() < 0) || (__this->Number() > (uPtr(objs)->Length() - 1)))
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[0/*"Index (zero...*/]));

    uObject* o = uPtr(objs)->Strong<uObject*>(__this->Number());
    uString* formatString = __this->FormatString();

    if (::g::Uno::String::IsNullOrEmpty(formatString))
        return *__retval = ::g::Uno::Object::ToString(uPtr(o)), void();
    else
    {
        if (uIs(o, ::TYPES[1/*bool*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format(formatString, uUnbox<bool>(::TYPES[1/*bool*/], o)), void();

        if (uIs(o, ::TYPES[2/*char*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format3(formatString, (int)uUnbox<uChar>(::TYPES[2/*char*/], o)), void();

        if (uIs(o, ::TYPES[3/*sbyte*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format5(formatString, uUnbox<int8_t>(::TYPES[3/*sbyte*/], o)), void();

        if (uIs(o, ::TYPES[4/*byte*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format6(formatString, (int16_t)uUnbox<uint8_t>(::TYPES[4/*byte*/], o)), void();

        if (uIs(o, ::TYPES[5/*short*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format6(formatString, uUnbox<int16_t>(::TYPES[5/*short*/], o)), void();

        if (uIs(o, ::TYPES[6/*ushort*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format3(formatString, (int)uUnbox<uint16_t>(::TYPES[6/*ushort*/], o)), void();

        if (uIs(o, ::TYPES[7/*int*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format3(formatString, uUnbox<int>(::TYPES[7/*int*/], o)), void();

        if (uIs(o, ::TYPES[8/*uint*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format4(formatString, (int64_t)uUnbox<uint32_t>(::TYPES[8/*uint*/], o)), void();

        if (uIs(o, ::TYPES[9/*long*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format4(formatString, uUnbox<int64_t>(::TYPES[9/*long*/], o)), void();

        if (uIs(o, ::TYPES[10/*ulong*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format7(formatString, uUnbox<uint64_t>(::TYPES[10/*ulong*/], o)), void();

        if (uIs(o, ::TYPES[11/*float*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format2(formatString, uUnbox<float>(::TYPES[11/*float*/], o)), void();

        if (uIs(o, ::TYPES[12/*double*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format1(formatString, uUnbox<double>(::TYPES[12/*double*/], o)), void();
    }

    return *__retval = ::g::Uno::Object::ToString(uPtr(o)), void();
}

// public FormatStringItem(string lexeme) [instance] :5
void FormatStringItem::ctor_1(uString* lexeme)
{
    ctor_(lexeme);
}

// public string get_FormatString() [instance] :24
uString* FormatStringItem::FormatString()
{
    int colon = ::g::Uno::String::IndexOf(uPtr(Lexeme()), ':', 0);

    if (colon == -1)
        return NULL;

    int end = ::g::Uno::String::IndexOf(uPtr(Lexeme()), '}', 0);

    if (end == -1)
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Format spec...*/]));

    return ::g::Uno::String::Substring1(uPtr(Lexeme()), colon + 1, (end - colon) - 1);
}

// public int get_Number() [instance] :11
int FormatStringItem::Number()
{
    int index = ::g::Uno::String::IndexOf(uPtr(Lexeme()), ',', 0);

    if (index == -1)
        index = ::g::Uno::String::IndexOf(uPtr(Lexeme()), ':', 0);

    if (index == -1)
        index = ::g::Uno::String::IndexOf(uPtr(Lexeme()), '}', 0);

    return ::g::Uno::Int::Parse(::g::Uno::String::Substring1(uPtr(Lexeme()), 1, index - 1));
}

// public FormatStringItem New(string lexeme) [static] :5
FormatStringItem* FormatStringItem::New1(uString* lexeme)
{
    FormatStringItem* obj1 = (FormatStringItem*)uNew(FormatStringItem_typeof());
    obj1->ctor_1(lexeme);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/FormatStringLiteral.uno
// --------------------------------------------------------------------------------------------------------------

// public sealed class FormatStringLiteral :3
// {
static void FormatStringLiteral_build(uType* type)
{
    type->SetFields(1);
}

::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringLiteral_typeof()
{
    static uSStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FormatStringLiteral);
    options.TypeSize = sizeof(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type);
    type = (::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*)uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringLiteral", options);
    type->fp_build_ = FormatStringLiteral_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FormatStringLiteral__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))FormatStringLiteral__GetHashCode_fn;
    type->fp_ToString1 = (void(*)(::g::Uno::Runtime::Implementation::Internal::FormatStringToken*, uArray*, uString**))FormatStringLiteral__ToString1_fn;
    return type;
}

// public FormatStringLiteral(string lexeme) :5
void FormatStringLiteral__ctor_1_fn(FormatStringLiteral* __this, uString* lexeme)
{
    __this->ctor_1(lexeme);
}

// public override sealed bool Equals(object obj) :7
void FormatStringLiteral__Equals_fn(FormatStringLiteral* __this, uObject* obj, bool* __retval)
{
    if (obj == NULL)
        return *__retval = false, void();

    FormatStringLiteral* token = uAs<FormatStringLiteral*>(obj, __this->__type);

    if (token == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::String::op_Equality(__this->Lexeme(), uPtr(token)->Lexeme()), void();
}

// public override sealed int GetHashCode() :19
void FormatStringLiteral__GetHashCode_fn(FormatStringLiteral* __this, int* __retval)
{
    return *__retval = uPtr(__this->Lexeme())->GetHashCode(), void();
}

// public FormatStringLiteral New(string lexeme) :5
void FormatStringLiteral__New1_fn(uString* lexeme, FormatStringLiteral** __retval)
{
    *__retval = FormatStringLiteral::New1(lexeme);
}

// public override sealed string ToString(object[] objs) :24
void FormatStringLiteral__ToString1_fn(FormatStringLiteral* __this, uArray* objs, uString** __retval)
{
    return *__retval = __this->Lexeme(), void();
}

// public FormatStringLiteral(string lexeme) [instance] :5
void FormatStringLiteral::ctor_1(uString* lexeme)
{
    ctor_(lexeme);
}

// public FormatStringLiteral New(string lexeme) [static] :5
FormatStringLiteral* FormatStringLiteral::New1(uString* lexeme)
{
    FormatStringLiteral* obj1 = (FormatStringLiteral*)uNew(FormatStringLiteral_typeof());
    obj1->ctor_1(lexeme);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/FormatStringToken.uno
// ------------------------------------------------------------------------------------------------------------

// public abstract class FormatStringToken :3
// {
static void FormatStringToken_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(FormatStringToken, _Lexeme), 0);
}

FormatStringToken_type* FormatStringToken_typeof()
{
    static uSStrong<FormatStringToken_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FormatStringToken);
    options.TypeSize = sizeof(FormatStringToken_type);
    type = (FormatStringToken_type*)uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringToken", options);
    type->fp_build_ = FormatStringToken_build;
    return type;
}

// protected FormatStringToken(string lexeme) :7
void FormatStringToken__ctor__fn(FormatStringToken* __this, uString* lexeme)
{
    __this->ctor_(lexeme);
}

// public generated string get_Lexeme() :5
void FormatStringToken__get_Lexeme_fn(FormatStringToken* __this, uString** __retval)
{
    *__retval = __this->Lexeme();
}

// private generated void set_Lexeme(string value) :5
void FormatStringToken__set_Lexeme_fn(FormatStringToken* __this, uString* value)
{
    __this->Lexeme(value);
}

// protected FormatStringToken(string lexeme) [instance] :7
void FormatStringToken::ctor_(uString* lexeme)
{
    Lexeme(lexeme);
}

// public generated string get_Lexeme() [instance] :5
uString* FormatStringToken::Lexeme()
{
    return _Lexeme;
}

// private generated void set_Lexeme(string value) [instance] :5
void FormatStringToken::Lexeme(uString* value)
{
    _Lexeme = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/FormatStringTokenizer.uno
// ----------------------------------------------------------------------------------------------------------------

// public sealed class FormatStringTokenizer :5
// {
static void FormatStringTokenizer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(FormatStringTokenizer, _format), 0,
        ::g::Uno::Int_typeof(), offsetof(FormatStringTokenizer, _index), 0,
        ::g::Uno::Int_typeof(), offsetof(FormatStringTokenizer, _prevIndex), 0,
        FormatStringTokenizer__State_typeof(), offsetof(FormatStringTokenizer, _state), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof(), NULL), offsetof(FormatStringTokenizer, _tokens), 0);
}

uType* FormatStringTokenizer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FormatStringTokenizer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", options);
    type->fp_build_ = FormatStringTokenizer_build;
    return type;
}

// public FormatStringTokenizer(string format) :14
void FormatStringTokenizer__ctor__fn(FormatStringTokenizer* __this, uString* format)
{
    __this->ctor_(format);
}

// private void AddFormatItemAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) :76
void FormatStringTokenizer__AddFormatItemAndGoTo_fn(FormatStringTokenizer* __this, int* state)
{
    __this->AddFormatItemAndGoTo(*state);
}

// private void AddLiteralAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) :83
void FormatStringTokenizer__AddLiteralAndGoTo_fn(FormatStringTokenizer* __this, int* state)
{
    __this->AddLiteralAndGoTo(*state);
}

// private bool AtEnd() :101
void FormatStringTokenizer__AtEnd_fn(FormatStringTokenizer* __this, bool* __retval)
{
    *__retval = __this->AtEnd();
}

// private void DiscardCharacterAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) :90
void FormatStringTokenizer__DiscardCharacterAndGoTo_fn(FormatStringTokenizer* __this, int* state)
{
    __this->DiscardCharacterAndGoTo(*state);
}

// public FormatStringTokenizer New(string format) :14
void FormatStringTokenizer__New1_fn(uString* format, FormatStringTokenizer** __retval)
{
    *__retval = FormatStringTokenizer::New1(format);
}

// private void Throw() :96
void FormatStringTokenizer__Throw_fn(FormatStringTokenizer* __this)
{
    __this->Throw();
}

// public static Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatString(string format) :19
void FormatStringTokenizer__TokenizeFormatString_fn(uString* format, ::g::Uno::Collections::List** __retval)
{
    *__retval = FormatStringTokenizer::TokenizeFormatString(format);
}

// private Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatStringInternal() :24
void FormatStringTokenizer__TokenizeFormatStringInternal_fn(FormatStringTokenizer* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->TokenizeFormatStringInternal();
}

// public FormatStringTokenizer(string format) [instance] :14
void FormatStringTokenizer::ctor_(uString* format)
{
    _format = format;
}

// private void AddFormatItemAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) [instance] :76
void FormatStringTokenizer::AddFormatItemAndGoTo(int state)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::g::Uno::Runtime::Implementation::Internal::FormatStringItem::New1(::g::Uno::String::Substring1(uPtr(_format), _prevIndex, (_index - _prevIndex) + 1)));
    _prevIndex = (_index + 1);
    _state = state;
}

// private void AddLiteralAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) [instance] :83
void FormatStringTokenizer::AddLiteralAndGoTo(int state)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::g::Uno::Runtime::Implementation::Internal::FormatStringLiteral::New1(::g::Uno::String::Substring1(uPtr(_format), _prevIndex, _index - _prevIndex)));
    _prevIndex = _index;
    _state = state;
}

// private bool AtEnd() [instance] :101
bool FormatStringTokenizer::AtEnd()
{
    return _index == uPtr(_format)->Length();
}

// private void DiscardCharacterAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) [instance] :90
void FormatStringTokenizer::DiscardCharacterAndGoTo(int state)
{
    _prevIndex++;
    _state = state;
}

// private void Throw() [instance] :96
void FormatStringTokenizer::Throw()
{
    U_THROW(::g::Uno::FormatException::New4(uString::Const("Input string was not in a correct format")));
}

// private Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatStringInternal() [instance] :24
::g::Uno::Collections::List* FormatStringTokenizer::TokenizeFormatStringInternal()
{
    _index = 0;
    _prevIndex = 0;
    _state = 0;
    _tokens = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof(), NULL)));

    while (_index <= uPtr(_format)->Length())
    {
        switch (_state)
        {
            case 0:
            {
                if (AtEnd())
                    _state = 4;
                else if (uPtr(_format)->Item(_index) == '{')
                    _state = 2;
                else if (uPtr(_format)->Item(_index) == '}')
                    Throw();
                else
                    _state = 1;

                break;
            }
            case 2:
            {
                if (AtEnd())
                    Throw();
                else if (uPtr(_format)->Item(_index) == '{')
                    DiscardCharacterAndGoTo(1);
                else if (uPtr(_format)->Item(_index) == '}')
                    Throw();
                else
                    _state = 3;

                break;
            }
            case 3:
            {
                if (AtEnd())
                    Throw();
                else if (uPtr(_format)->Item(_index) == '}')
                    AddFormatItemAndGoTo(0);
                else if (uPtr(_format)->Item(_index) == '{')
                    Throw();

                break;
            }
            case 1:
            {
                if (AtEnd())
                    AddLiteralAndGoTo(4);
                else if (uPtr(_format)->Item(_index) == '{')
                    AddLiteralAndGoTo(2);
                else if (uPtr(_format)->Item(_index) == '}')
                    Throw();

                break;
            }
        }

        _index++;
    }

    return _tokens;
}

// public FormatStringTokenizer New(string format) [static] :14
FormatStringTokenizer* FormatStringTokenizer::New1(uString* format)
{
    FormatStringTokenizer* obj1 = (FormatStringTokenizer*)uNew(FormatStringTokenizer_typeof());
    obj1->ctor_(format);
    return obj1;
}

// public static Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatString(string format) [static] :19
::g::Uno::Collections::List* FormatStringTokenizer::TokenizeFormatString(uString* format)
{
    return FormatStringTokenizer::New1(format)->TokenizeFormatStringInternal();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/NumericFormatter.uno
// -----------------------------------------------------------------------------------------------------------

// public static class NumericFormatter :18
// {
// static generated NumericFormatter() :18
static void NumericFormatter__cctor__fn(uType* __type)
{
    NumericFormatter::NumberDecimalDigits_ = 2;
    NumericFormatter::ExponentialDigits_ = 6;
}

static void NumericFormatter_build(uType* type)
{
    ::STRINGS[2] = uString::Const("0");
    ::STRINGS[3] = uString::Const(" %");
    ::STRINGS[1] = uString::Const("Format specifier was invalid");
    ::STRINGS[4] = uString::Const("-");
    ::STRINGS[5] = uString::Const(".");
    ::STRINGS[6] = uString::Const("E");
    ::STRINGS[7] = uString::Const("+");
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[9] = uString::Const("E+");
    ::STRINGS[10] = uString::Const("8000000000000000");
    ::STRINGS[11] = uString::Const(",");
    ::TYPES[13] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[14] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Char_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::ULong_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[15] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Char_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&NumericFormatter::_decimalPoint_, uFieldFlagsStatic,
        ::TYPES[7/*int*/], (uintptr_t)&NumericFormatter::ExponentialDigits_, uFieldFlagsStatic,
        ::TYPES[7/*int*/], (uintptr_t)&NumericFormatter::NumberDecimalDigits_, uFieldFlagsStatic);
}

uClassType* NumericFormatter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.NumericFormatter", options);
    type->fp_build_ = NumericFormatter_build;
    type->fp_cctor_ = NumericFormatter__cctor__fn;
    return type;
}

// private static void CalculateExponential(double d, double& significand, int& exponent) :408
void NumericFormatter__CalculateExponential_fn(double* d, double* significand, int* exponent)
{
    NumericFormatter::CalculateExponential(*d, significand, exponent);
}

// private static string get_DecimalPoint() :26
void NumericFormatter__get_DecimalPoint_fn(uString** __retval)
{
    *__retval = NumericFormatter::DecimalPoint();
}

// private static int Digits(string formatString) :424
void NumericFormatter__Digits_fn(uString* formatString, int* __retval)
{
    *__retval = NumericFormatter::Digits(formatString);
}

// private static string DoFormatHex(string formatString, ulong l, int maxLength) :183
void NumericFormatter__DoFormatHex_fn(uString* formatString, uint64_t* l, int* maxLength, uString** __retval)
{
    *__retval = NumericFormatter::DoFormatHex(formatString, *l, *maxLength);
}

// public static string Format(string formatString, bool i) :36
void NumericFormatter__Format_fn(uString* formatString, bool* i, uString** __retval)
{
    *__retval = NumericFormatter::Format(formatString, *i);
}

// public static string Format(string formatString, double d) :102
void NumericFormatter__Format1_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::Format1(formatString, *d);
}

// public static string Format(string formatString, float f) :95
void NumericFormatter__Format2_fn(uString* formatString, float* f, uString** __retval)
{
    *__retval = NumericFormatter::Format2(formatString, *f);
}

// public static string Format(string formatString, int i) :55
void NumericFormatter__Format3_fn(uString* formatString, int* i, uString** __retval)
{
    *__retval = NumericFormatter::Format3(formatString, *i);
}

// public static string Format(string formatString, long i) :62
void NumericFormatter__Format4_fn(uString* formatString, int64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::Format4(formatString, *i);
}

// public static string Format(string formatString, sbyte b) :41
void NumericFormatter__Format5_fn(uString* formatString, int8_t* b, uString** __retval)
{
    *__retval = NumericFormatter::Format5(formatString, *b);
}

// public static string Format(string formatString, short s) :48
void NumericFormatter__Format6_fn(uString* formatString, int16_t* s, uString** __retval)
{
    *__retval = NumericFormatter::Format6(formatString, *s);
}

// public static string Format(string formatString, ulong i) :72
void NumericFormatter__Format7_fn(uString* formatString, uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::Format7(formatString, *i);
}

// private static string FormatCustom(string formatString, double value) :317
void NumericFormatter__FormatCustom_fn(uString* formatString, double* value, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustom(formatString, *value);
}

// private static string FormatCustom(string formatString, ulong value) :305
void NumericFormatter__FormatCustom1_fn(uString* formatString, uint64_t* value, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustom1(formatString, *value);
}

// private static string FormatCustomDoublePart(string doubleFormat, double d, bool& decimalPoint) :330
void NumericFormatter__FormatCustomDoublePart_fn(uString* doubleFormat, double* d, bool* decimalPoint, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustomDoublePart(doubleFormat, *d, decimalPoint);
}

// private static string FormatCustomIntegerPart(string integerFormat, ulong value) :371
void NumericFormatter__FormatCustomIntegerPart_fn(uString* integerFormat, uint64_t* value, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustomIntegerPart(integerFormat, *value);
}

// private static string FormatDecimal(string formatString, ulong l) :123
void NumericFormatter__FormatDecimal_fn(uString* formatString, uint64_t* l, uString** __retval)
{
    *__retval = NumericFormatter::FormatDecimal(formatString, *l);
}

// private static string FormatExponential(string formatString, double d) :206
void NumericFormatter__FormatExponential_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatExponential(formatString, *d);
}

// private static string FormatFixedPoint(string formatString, double d) :133
void NumericFormatter__FormatFixedPoint_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatFixedPoint(formatString, *d);
}

// private static string FormatFixedPoint(string formatString, ulong d) :128
void NumericFormatter__FormatFixedPoint1_fn(uString* formatString, uint64_t* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatFixedPoint1(formatString, *d);
}

// private static string FormatFloatGeneral(string formatString, float f) :235
void NumericFormatter__FormatFloatGeneral_fn(uString* formatString, float* f, uString** __retval)
{
    *__retval = NumericFormatter::FormatFloatGeneral(formatString, *f);
}

// private static string FormatGeneral(string formatString, double d) :242
void NumericFormatter__FormatGeneral_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatGeneral(formatString, *d);
}

// private static string FormatGeneral(string formatString, ulong i) :222
void NumericFormatter__FormatGeneral1_fn(uString* formatString, uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatGeneral1(formatString, *i);
}

// private static string FormatHex(string formatString, int i) :162
void NumericFormatter__FormatHex_fn(uString* formatString, int* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex(formatString, *i);
}

// private static string FormatHex(string formatString, long l) :169
void NumericFormatter__FormatHex1_fn(uString* formatString, int64_t* l, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex1(formatString, *l);
}

// private static string FormatHex(string formatString, sbyte b) :148
void NumericFormatter__FormatHex2_fn(uString* formatString, int8_t* b, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex2(formatString, *b);
}

// private static string FormatHex(string formatString, short s) :155
void NumericFormatter__FormatHex3_fn(uString* formatString, int16_t* s, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex3(formatString, *s);
}

// private static string FormatHex(string formatString, ulong l) :178
void NumericFormatter__FormatHex4_fn(uString* formatString, uint64_t* l, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex4(formatString, *l);
}

// private static string FormatNumber(double d) :280
void NumericFormatter__FormatNumber_fn(double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber(*d);
}

// private static string FormatNumber(string formatString, double d) :269
void NumericFormatter__FormatNumber1_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber1(formatString, *d);
}

// private static string FormatNumber(string formatString, ulong i) :261
void NumericFormatter__FormatNumber2_fn(uString* formatString, uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber2(formatString, *i);
}

// private static string FormatNumber(ulong i) :287
void NumericFormatter__FormatNumber3_fn(uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber3(*i);
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetFormatSpecifier(string formatString) :454
void NumericFormatter__GetFormatSpecifier_fn(uString* formatString, int* __retval)
{
    *__retval = NumericFormatter::GetFormatSpecifier(formatString);
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetStandartFormat(char symbol) :474
void NumericFormatter__GetStandartFormat_fn(uChar* symbol, int* __retval)
{
    *__retval = NumericFormatter::GetStandartFormat(*symbol);
}

// private static bool IsLetter(char symbol) :429
void NumericFormatter__IsLetter_fn(uChar* symbol, bool* __retval)
{
    *__retval = NumericFormatter::IsLetter(*symbol);
}

// private static string Pad(string unmodified, string formatString) :434
void NumericFormatter__Pad_fn(uString* unmodified, uString* formatString, uString** __retval)
{
    *__retval = NumericFormatter::Pad(unmodified, formatString);
}

// private static string Padding(int length) :444
void NumericFormatter__Padding_fn(int* length, uString** __retval)
{
    *__retval = NumericFormatter::Padding(*length);
}

uSStrong<uString*> NumericFormatter::_decimalPoint_;
int NumericFormatter::ExponentialDigits_;
int NumericFormatter::NumberDecimalDigits_;

// private static void CalculateExponential(double d, double& significand, int& exponent) [static] :408
void NumericFormatter::CalculateExponential(double d, double* significand, int* exponent)
{
    *significand = d;
    *exponent = 0;

    while (*significand < 1.0)
    {
        *exponent = *exponent - 1;
        *significand = *significand * 10.0;
    }

    while (*significand >= 10.0)
    {
        *exponent = *exponent + 1;
        *significand = *significand / 10.0;
    }
}

// private static int Digits(string formatString) [static] :424
int NumericFormatter::Digits(uString* formatString)
{
    return ::g::Uno::Int::Parse(::g::Uno::String::Substring(uPtr(formatString), 1));
}

// private static string DoFormatHex(string formatString, ulong l, int maxLength) [static] :183
uString* NumericFormatter::DoFormatHex(uString* formatString, uint64_t l, int maxLength)
{
    if (l == 0ULL)
        return NumericFormatter::Pad(::STRINGS[2/*"0"*/], formatString);

    uArray* hexChars = uArray::Init<int>(::TYPES[13/*char[]*/], 16, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F');
    uArray* buffer = uArray::New(::TYPES[13/*char[]*/], maxLength);
    int index = maxLength;

    while (l != 0ULL)
    {
        uPtr(buffer)->Item<uChar>(--index) = uPtr(hexChars)->Item<uChar>((int)(l % 16ULL));
        l = l / 16ULL;
    }

    uArray* result = uArray::New(::TYPES[13/*char[]*/], maxLength - index);

    for (int i = 0; i < result->Length(); i++)
        uPtr(result)->Item<uChar>(i) = uPtr(buffer)->Item<uChar>(i + index);

    uString* returnString = uString::CharArray(result);

    if (uPtr(formatString)->Item(0) == 'x')
        returnString = ::g::Uno::String::ToLower(uPtr(returnString));

    return NumericFormatter::Pad(returnString, formatString);
}

// public static string Format(string formatString, bool i) [static] :36
uString* NumericFormatter::Format(uString* formatString, bool i)
{
    return ::g::Uno::Bool::ToString(i, ::TYPES[1/*bool*/]);
}

// public static string Format(string formatString, double d) [static] :102
uString* NumericFormatter::Format1(uString* formatString, double d)
{
    switch (NumericFormatter::GetFormatSpecifier(formatString))
    {
        case 1:
            return NumericFormatter::FormatFixedPoint(formatString, d);
        case 3:
            return NumericFormatter::FormatExponential(formatString, d);
        case 4:
            return NumericFormatter::FormatGeneral(formatString, d);
        case 5:
            return ::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber1(formatString, 100.0 * d), ::STRINGS[3/*" %"*/]);
        case 6:
            return NumericFormatter::FormatNumber1(formatString, d);
        case 7:
            return NumericFormatter::FormatCustom(formatString, d);
        default:
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Format spec...*/]));
    }
}

// public static string Format(string formatString, float f) [static] :95
uString* NumericFormatter::Format2(uString* formatString, float f)
{
    if (NumericFormatter::GetFormatSpecifier(formatString) == 4)
        return NumericFormatter::FormatFloatGeneral(formatString, f);

    return NumericFormatter::Format1(formatString, (double)f);
}

// public static string Format(string formatString, int i) [static] :55
uString* NumericFormatter::Format3(uString* formatString, int i)
{
    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex(formatString, i);

    return NumericFormatter::Format4(formatString, (int64_t)i);
}

// public static string Format(string formatString, long i) [static] :62
uString* NumericFormatter::Format4(uString* formatString, int64_t i)
{
    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex1(formatString, i);
    else if (i >= 0LL)
        return NumericFormatter::Format7(formatString, (uint64_t)i);
    else
        return ::g::Uno::String::op_Addition2(::STRINGS[4/*"-"*/], NumericFormatter::Format7(formatString, (uint64_t)(i * -1LL)));
}

// public static string Format(string formatString, sbyte b) [static] :41
uString* NumericFormatter::Format5(uString* formatString, int8_t b)
{
    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex2(formatString, b);

    return NumericFormatter::Format4(formatString, (int64_t)b);
}

// public static string Format(string formatString, short s) [static] :48
uString* NumericFormatter::Format6(uString* formatString, int16_t s)
{
    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex3(formatString, s);

    return NumericFormatter::Format4(formatString, (int64_t)s);
}

// public static string Format(string formatString, ulong i) [static] :72
uString* NumericFormatter::Format7(uString* formatString, uint64_t i)
{
    switch (NumericFormatter::GetFormatSpecifier(formatString))
    {
        case 0:
            return NumericFormatter::FormatDecimal(formatString, i);
        case 1:
            return NumericFormatter::FormatFixedPoint1(formatString, i);
        case 2:
            return NumericFormatter::FormatHex4(formatString, i);
        case 3:
            return NumericFormatter::FormatExponential(formatString, (double)i);
        case 4:
            return NumericFormatter::FormatGeneral1(formatString, i);
        case 5:
            return ::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber2(formatString, 100ULL * i), ::STRINGS[3/*" %"*/]);
        case 6:
            return NumericFormatter::FormatNumber2(formatString, i);
        default:
            return NumericFormatter::FormatCustom1(formatString, i);
    }
}

// private static string FormatCustom(string formatString, double value) [static] :317
uString* NumericFormatter::FormatCustom(uString* formatString, double value)
{
    double absoluteValue = ::g::Uno::Math::Abs(value);
    int decimalPoint = ::g::Uno::String::IndexOf(uPtr(formatString), '.', 0);

    if (decimalPoint == -1)
        return NumericFormatter::FormatCustomIntegerPart(formatString, (uint64_t)absoluteValue);

    bool hasDecimalPoint;
    uString* integerPart = NumericFormatter::FormatCustomIntegerPart(::g::Uno::String::Substring1(formatString, 0, decimalPoint), (uint64_t)absoluteValue);
    uString* doublePart = NumericFormatter::FormatCustomDoublePart(::g::Uno::String::Substring(formatString, decimalPoint + 1), absoluteValue, &hasDecimalPoint);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((value < 0.0) ? ::STRINGS[4/*"-"*/] : (uString*)::g::Uno::String::Empty_, integerPart), hasDecimalPoint ? ::STRINGS[5/*"."*/] : (uString*)::g::Uno::String::Empty_), doublePart);
}

// private static string FormatCustom(string formatString, ulong value) [static] :305
uString* NumericFormatter::FormatCustom1(uString* formatString, uint64_t value)
{
    int decimalPoint = ::g::Uno::String::IndexOf(uPtr(formatString), '.', 0);

    if (decimalPoint == -1)
        return NumericFormatter::FormatCustomIntegerPart(formatString, value);

    bool hasDecimalPoint;
    uString* integerPart = NumericFormatter::FormatCustomIntegerPart(::g::Uno::String::Substring1(formatString, 0, decimalPoint), value);
    uString* doublePart = NumericFormatter::FormatCustomDoublePart(::g::Uno::String::Substring(formatString, decimalPoint + 1), 0.0, &hasDecimalPoint);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(integerPart, hasDecimalPoint ? ::STRINGS[5/*"."*/] : (uString*)::g::Uno::String::Empty_), doublePart);
}

// private static string FormatCustomDoublePart(string doubleFormat, double d, bool& decimalPoint) [static] :330
uString* NumericFormatter::FormatCustomDoublePart(uString* doubleFormat, double d, bool* decimalPoint)
{
    int precision = 0;
    bool hasZero = false;
    uArray* processedFormat = ::g::Uno::String::ToCharArray(uPtr(doubleFormat));

    for (int i = uPtr(processedFormat)->Length() - 1; i >= 0; i--)
    {
        if (uPtr(processedFormat)->Item<uChar>(i) == '0')
            hasZero = true;

        if ((uPtr(processedFormat)->Item<uChar>(i) == '0') || (uPtr(processedFormat)->Item<uChar>(i) == '#'))
        {
            uPtr(processedFormat)->Item<uChar>(i) = hasZero ? '0' : uPtr(processedFormat)->Item<uChar>(i);
            precision++;
        }
    }

    uString* raw = ::g::Uno::Double::ToString(::g::Uno::Math::Round1(d, precision), ::TYPES[12/*double*/]);
    int index = ::g::Uno::String::IndexOf1(uPtr(raw), NumericFormatter::DecimalPoint(), 0) + 1;
    *decimalPoint = (index != 0) || hasZero;

    if (index == 0)
        index = uPtr(raw)->Length();

    ::g::Uno::Collections::List* formatted = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[14/*Uno.Collections.List<char>*/], processedFormat->Length());

    for (int i1 = 0; i1 < processedFormat->Length(); i1++)

        switch (uPtr(processedFormat)->Item<uChar>(i1))
        {
            case '0':
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(formatted), uCRef<uChar>((index >= uPtr(raw)->Length()) ? '0' : uPtr(raw)->Item(index++)));
                break;
            }
            case '#':
            {
                if (index < uPtr(raw)->Length())
                    ::g::Uno::Collections::List__Add_fn(uPtr(formatted), uCRef<uChar>(uPtr(raw)->Item(index++)));

                break;
            }
            case '.':
                break;
            default:
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(formatted), uCRef<uChar>(uPtr(processedFormat)->Item<uChar>(i1)));
                break;
            }
        }

    return uString::CharArray((uArray*)formatted->ToArray());
}

// private static string FormatCustomIntegerPart(string integerFormat, ulong value) [static] :371
uString* NumericFormatter::FormatCustomIntegerPart(uString* integerFormat, uint64_t value)
{
    uString* raw = ::g::Uno::ULong::ToString(value, ::TYPES[10/*ulong*/]);
    int rawIndex = (value == 0ULL) ? -1 : uPtr(raw)->Length() - 1;
    uArray* formatted = uArray::New(::TYPES[13/*char[]*/], uPtr(integerFormat)->Length());
    int index = integerFormat->Length() - 1;
    int lastNumber = 0;

    for (int i = integerFormat->Length() - 1; i >= 0; i--)

        switch (uPtr(integerFormat)->Item(i))
        {
            case '0':
            {
                lastNumber = i;
                uPtr(formatted)->Item<uChar>(index--) = (rawIndex < 0) ? '0' : uPtr(raw)->Item(rawIndex--);
                break;
            }
            case '#':
            {
                lastNumber = i;

                if (rawIndex >= 0)
                    uPtr(formatted)->Item<uChar>(index--) = uPtr(raw)->Item(rawIndex--);

                break;
            }
            default:
            {
                uPtr(formatted)->Item<uChar>(index--) = uPtr(integerFormat)->Item(i);
                break;
            }
        }

    uString* formattedString = uString::CharArray(formatted);

    if (index != -1)
        formattedString = ::g::Uno::String::Substring(uPtr(formattedString), index + 1);

    if (rawIndex >= 0)
        return ::g::Uno::String::Insert(uPtr(formattedString), lastNumber, ::g::Uno::String::Substring1(uPtr(raw), 0, rawIndex + 1));

    return formattedString;
}

// private static string FormatDecimal(string formatString, ulong l) [static] :123
uString* NumericFormatter::FormatDecimal(uString* formatString, uint64_t l)
{
    return NumericFormatter::Pad(::g::Uno::ULong::ToString(l, ::TYPES[10/*ulong*/]), formatString);
}

// private static string FormatExponential(string formatString, double d) [static] :206
uString* NumericFormatter::FormatExponential(uString* formatString, double d)
{
    double raw;
    int offset;
    NumericFormatter::CalculateExponential(d, &raw, &offset);
    int desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::ExponentialDigits_;
    uString* rounded = ::g::Uno::Double::ToString(::g::Uno::Math::Round1(raw, desiredDigits), ::TYPES[12/*double*/]);

    if (::g::Uno::String::IndexOf1(uPtr(rounded), NumericFormatter::DecimalPoint(), 0) == -1)
        rounded = ::g::Uno::String::op_Addition2(rounded, NumericFormatter::DecimalPoint());

    uString* padding = NumericFormatter::Padding((desiredDigits + 2) - uPtr(rounded)->Length());
    uString* exponent = ::g::Uno::Int::ToString(::g::Uno::Math::Abs5(offset), ::TYPES[7/*int*/]);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(rounded, padding), ::STRINGS[6/*"E"*/]), (offset < 0) ? ::STRINGS[4/*"-"*/] : ::STRINGS[7/*"+"*/]), NumericFormatter::Padding(3 - uPtr(exponent)->Length())), exponent);
}

// private static string FormatFixedPoint(string formatString, double d) [static] :133
uString* NumericFormatter::FormatFixedPoint(uString* formatString, double d)
{
    int desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits_;
    uString* rounded = ::g::Uno::Double::ToString(::g::Uno::Math::Round1(d, desiredDigits), ::TYPES[12/*double*/]);
    int decimalPointPos = uPtr(::g::Uno::Int::ToString((int)d, ::TYPES[7/*int*/]))->Length();
    int actualDigits = ::g::Uno::Math::Max8((uPtr(rounded)->Length() - decimalPointPos) - 1, 0);

    if (desiredDigits <= actualDigits)
        return rounded;

    uString* padding = NumericFormatter::Padding(desiredDigits - actualDigits);
    bool hasDecimalPoint = ::g::Uno::String::IndexOf1(rounded, NumericFormatter::DecimalPoint(), 0) != -1;
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(rounded, hasDecimalPoint ? ::STRINGS[8/*""*/] : (uString*)NumericFormatter::DecimalPoint()), padding);
}

// private static string FormatFixedPoint(string formatString, ulong d) [static] :128
uString* NumericFormatter::FormatFixedPoint1(uString* formatString, uint64_t d)
{
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::ULong::ToString(d, ::TYPES[10/*ulong*/]), NumericFormatter::DecimalPoint()), NumericFormatter::Padding((uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits_));
}

// private static string FormatFloatGeneral(string formatString, float f) [static] :235
uString* NumericFormatter::FormatFloatGeneral(uString* formatString, float f)
{
    if (uPtr(formatString)->Length() == 1)
        return ::g::Uno::Float::ToString(f, ::TYPES[11/*float*/]);

    return NumericFormatter::FormatGeneral(formatString, (double)f);
}

// private static string FormatGeneral(string formatString, double d) [static] :242
uString* NumericFormatter::FormatGeneral(uString* formatString, double d)
{
    if (uPtr(formatString)->Length() == 1)
        return ::g::Uno::Double::ToString(d, ::TYPES[12/*double*/]);

    int desiredDigits = NumericFormatter::Digits(formatString);
    uString* str = ::g::Uno::Double::ToString(d, ::TYPES[12/*double*/]);

    if ((desiredDigits >= uPtr(str)->Length()) || (desiredDigits == 0))
        return str;

    double significand;
    int exponent;
    NumericFormatter::CalculateExponential(::g::Uno::Math::Abs(d), &significand, &exponent);
    significand = ::g::Uno::Math::Round1(significand, desiredDigits - 1);

    if (exponent > desiredDigits)
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(significand, ::TYPES[12/*double*/]), ::STRINGS[9/*"E+"*/]), NumericFormatter::Padding(2 - uPtr(::g::Uno::Int::ToString(exponent, ::TYPES[7/*int*/]))->Length())), ::g::Uno::Int::ToString(exponent, ::TYPES[7/*int*/]));

    return ::g::Uno::String::op_Addition2((d < 0.0) ? ::STRINGS[4/*"-"*/] : (uString*)::g::Uno::String::Empty_, ::g::Uno::Double::ToString(significand * (double)::g::Uno::Math::Pow1(10.0f, (float)exponent), ::TYPES[12/*double*/]));
}

// private static string FormatGeneral(string formatString, ulong i) [static] :222
uString* NumericFormatter::FormatGeneral1(uString* formatString, uint64_t i)
{
    if (uPtr(formatString)->Length() == 1)
        return ::g::Uno::ULong::ToString(i, ::TYPES[10/*ulong*/]);

    int desiredDigits = NumericFormatter::Digits(formatString);
    uString* str = ::g::Uno::ULong::ToString(i, ::TYPES[10/*ulong*/]);

    if ((desiredDigits >= uPtr(str)->Length()) || (desiredDigits == 0))
        return str;

    uString* rounded = ::g::Uno::Double::ToString(::g::Uno::Math::Round1((double)i / (double)::g::Uno::Math::Pow1(10.0f, (float)(uPtr(str)->Length() - 1)), desiredDigits - 1), ::TYPES[12/*double*/]);
    uString* exponent = ::g::Uno::Int::ToString(str->Length() - 1, ::TYPES[7/*int*/]);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(rounded, ::STRINGS[9/*"E+"*/]), NumericFormatter::Padding(2 - uPtr(exponent)->Length())), exponent);
}

// private static string FormatHex(string formatString, int i) [static] :162
uString* NumericFormatter::FormatHex(uString* formatString, int i)
{
    if (i < 0)
        return NumericFormatter::DoFormatHex(formatString, (uint64_t)((4294967295U - (uint32_t)-i) + 1U), 8);

    return NumericFormatter::DoFormatHex(formatString, (uint64_t)i, 8);
}

// private static string FormatHex(string formatString, long l) [static] :169
uString* NumericFormatter::FormatHex1(uString* formatString, int64_t l)
{
    if (l == (-9223372036854775807LL - 1))
        return ::STRINGS[10/*"80000000000...*/];

    if (l < 0LL)
        return NumericFormatter::DoFormatHex(formatString, (18446744073709551615ULL - (uint64_t)-l) + 1ULL, 16);

    return NumericFormatter::DoFormatHex(formatString, (uint64_t)l, 16);
}

// private static string FormatHex(string formatString, sbyte b) [static] :148
uString* NumericFormatter::FormatHex2(uString* formatString, int8_t b)
{
    if (b < 0)
        return NumericFormatter::DoFormatHex(formatString, (uint64_t)((255 - (uint8_t)-b) + 1), 8);

    return NumericFormatter::DoFormatHex(formatString, (uint64_t)b, 8);
}

// private static string FormatHex(string formatString, short s) [static] :155
uString* NumericFormatter::FormatHex3(uString* formatString, int16_t s)
{
    if (s < 0)
        return NumericFormatter::DoFormatHex(formatString, (uint64_t)((65535 - (uint16_t)-s) + 1), 8);

    return NumericFormatter::DoFormatHex(formatString, (uint64_t)s, 8);
}

// private static string FormatHex(string formatString, ulong l) [static] :178
uString* NumericFormatter::FormatHex4(uString* formatString, uint64_t l)
{
    return NumericFormatter::DoFormatHex(formatString, l, 16);
}

// private static string FormatNumber(double d) [static] :280
uString* NumericFormatter::FormatNumber(double d)
{
    if (d < 0.0)
        return ::g::Uno::String::op_Addition2(::STRINGS[4/*"-"*/], NumericFormatter::FormatNumber3((uint64_t)-d));

    return NumericFormatter::FormatNumber3((uint64_t)d);
}

// private static string FormatNumber(string formatString, double d) [static] :269
uString* NumericFormatter::FormatNumber1(uString* formatString, double d)
{
    int desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits_;
    double rounded = ::g::Uno::Math::Round1(d, desiredDigits);

    if (desiredDigits == 0)
        return NumericFormatter::FormatNumber(rounded);

    uString* str = ::g::Uno::Double::ToString(rounded, ::TYPES[12/*double*/]);
    uString* residue = (::g::Uno::String::IndexOf1(uPtr(str), NumericFormatter::DecimalPoint(), 0) == -1) ? (uString*)::g::Uno::String::Empty_ : (uString*)::g::Uno::String::Substring(uPtr(str), ::g::Uno::String::IndexOf1(uPtr(str), NumericFormatter::DecimalPoint(), 0) + 1);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber(rounded), NumericFormatter::DecimalPoint()), residue), NumericFormatter::Padding(desiredDigits - uPtr(residue)->Length()));
}

// private static string FormatNumber(string formatString, ulong i) [static] :261
uString* NumericFormatter::FormatNumber2(uString* formatString, uint64_t i)
{
    int desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits_;

    if (desiredDigits == 0)
        return NumericFormatter::FormatNumber3(i);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber3(i), ::STRINGS[5/*"."*/]), NumericFormatter::Padding(desiredDigits));
}

// private static string FormatNumber(ulong i) [static] :287
uString* NumericFormatter::FormatNumber3(uint64_t i)
{
    uString* str = ::g::Uno::ULong::ToString(i, ::TYPES[10/*ulong*/]);

    if (uPtr(str)->Length() <= 3)
        return str;

    int start = ((uPtr(str)->Length() % 3) == 0) ? 3 : uPtr(str)->Length() % 3;
    ::g::Uno::Text::StringBuilder* result = ::g::Uno::Text::StringBuilder::New1();
    result->Append2(::g::Uno::String::Substring1(str, 0, start));

    for (int index = start; index < str->Length(); index = index + 3)
    {
        uPtr(result)->Append2(::STRINGS[11/*","*/]);
        result->Append2(::g::Uno::String::Substring1(uPtr(str), index, 3));
    }

    return result->ToString();
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetFormatSpecifier(string formatString) [static] :454
int NumericFormatter::GetFormatSpecifier(uString* formatString)
{
    uChar symbol = ::g::Uno::Char::ToUpper(uPtr(formatString)->Item(0));

    if ((formatString->Length() == 1) && NumericFormatter::IsLetter(symbol))
        return NumericFormatter::GetStandartFormat(symbol);

    try
    {
        int decimals = NumericFormatter::Digits(formatString);

        if (decimals > 99)
            return 7;

        if (uPtr(::g::Uno::String::Trim1(uPtr(formatString), uArray::Init<int>(::TYPES[13/*char[]*/], 1, '0')))->Length() == 0)
            return 7;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception_ = __t.Exception;
        return 7;
    }

    return NumericFormatter::GetStandartFormat(symbol);
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetStandartFormat(char symbol) [static] :474
int NumericFormatter::GetStandartFormat(uChar symbol)
{
    switch (symbol)
    {
        case 'X':
            return 2;
        case 'D':
            return 0;
        case 'F':
            return 1;
        case 'G':
            return 4;
        case 'N':
            return 6;
        case 'E':
            return 3;
        case 'P':
            return 5;
        default:
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Format spec...*/]));
    }
}

// private static bool IsLetter(char symbol) [static] :429
bool NumericFormatter::IsLetter(uChar symbol)
{
    return (symbol >= 'A') && (symbol <= 'Z');
}

// private static string Pad(string unmodified, string formatString) [static] :434
uString* NumericFormatter::Pad(uString* unmodified, uString* formatString)
{
    int actualLength = uPtr(unmodified)->Length();
    int desiredLength = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : actualLength;

    if (desiredLength <= actualLength)
        return unmodified;

    uString* padding = NumericFormatter::Padding(desiredLength - actualLength);
    return ::g::Uno::String::op_Addition2(padding, unmodified);
}

// private static string Padding(int length) [static] :444
uString* NumericFormatter::Padding(int length)
{
    if (length <= 0)
        return ::STRINGS[8/*""*/];

    uArray* padding = uArray::New(::TYPES[13/*char[]*/], length);

    for (int i = 0; i < length; i++)
        uPtr(padding)->Item<uChar>(i) = '0';

    return uString::CharArray(padding);
}

// private static string get_DecimalPoint() [static] :26
uString* NumericFormatter::DecimalPoint()
{
    if (::g::Uno::String::op_Equality(NumericFormatter::_decimalPoint_, NULL))
        NumericFormatter::_decimalPoint_ = ::g::Uno::Char::ToString(uPtr(::g::Uno::Double::ToString(1.1, ::TYPES[12/*double*/]))->Item(1), ::TYPES[2/*char*/]);

    return NumericFormatter::_decimalPoint_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/FormatStringTokenizer.uno
// ----------------------------------------------------------------------------------------------------------------

// private enum FormatStringTokenizer.State :7
uEnumType* FormatStringTokenizer__State_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Beginning", 0LL,
        "Literal", 1LL,
        "FirstCurly", 2LL,
        "FormatItem", 3LL,
        "End", 4LL);
    return type;
}

}}}}} // ::g::Uno::Runtime::Implementation::Internal
