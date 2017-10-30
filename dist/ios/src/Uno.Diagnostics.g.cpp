// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <time.h>
#include <uBase/Time.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.AssertionHandler.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Diagnostics.LogHandler.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{
namespace Uno{
namespace Diagnostics{

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Diagnostics/Debug.uno
// ----------------------------------------------------------------------------

// public delegate void AssertionHandler(bool value, string expression, string filename, int line, object[] operands) :20
uDelegateType* AssertionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Diagnostics.AssertionHandler", 5, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Bool_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Int_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Diagnostics/Clock.uno
// ----------------------------------------------------------------------------

// public static class Clock :9
// {
static void Clock_build(uType* type)
{
}

uClassType* Clock_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Clock", options);
    type->fp_build_ = Clock_build;
    return type;
}

// public static double GetSeconds() :14
void Clock__GetSeconds_fn(double* __retval)
{
    *__retval = Clock::GetSeconds();
}

// public static long GetTicks() :30
void Clock__GetTicks_fn(int64_t* __retval)
{
    *__retval = Clock::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) :46
void Clock__GetTimezoneOffset_fn(int* year, int* month, int* day, int* __retval)
{
    *__retval = Clock::GetTimezoneOffset(*year, *month, *day);
}

// public static double GetSeconds() [static] :14
double Clock::GetSeconds()
{
    return uBase::GetSeconds();
}

// public static long GetTicks() [static] :30
int64_t Clock::GetTicks()
{
    return uBase::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) [static] :46
int Clock::GetTimezoneOffset(int year, int month, int day)
{
    struct tm stm;
    stm.tm_year = year - 1900;
    stm.tm_mon = month - 1;
    stm.tm_mday = day;
    stm.tm_hour = 0;
    stm.tm_min = 0;
    stm.tm_sec = 0;
    stm.tm_wday = 0;
    stm.tm_yday = 0;
    stm.tm_isdst = 0;
    time_t current_time = mktime(&stm);
    #ifdef WIN32
    gmtime_s(&stm, &current_time);
    time_t utc = mktime(&stm);
    
    localtime_s(&stm, &current_time);
    time_t local = mktime(&stm);
    #else
    struct tm *info;
    info = gmtime(&current_time);
    time_t utc = mktime(info);
    
    info = localtime(&current_time);
    time_t local = mktime(info);
    #endif
    return (int)(local - utc) / 60 + stm.tm_isdst * 60;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Diagnostics/Debug.uno
// ----------------------------------------------------------------------------

// public static class Debug :26
// {
// static generated Debug() :26
static void Debug__cctor__fn(uType* __type)
{
    Debug::_indentStr_ = ::STRINGS[0/*""*/];
}

static void Debug_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("Assertion Failed: '");
    ::STRINGS[2] = uString::Const("' in ");
    ::STRINGS[3] = uString::Const("(");
    ::STRINGS[4] = uString::Const(")");
    type->SetFields(0,
        ::g::Uno::Diagnostics::AssertionHandler_typeof(), (uintptr_t)&Debug::_assertionHandler_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Debug::_indentStr_, uFieldFlagsStatic,
        ::g::Uno::Diagnostics::LogHandler_typeof(), (uintptr_t)&Debug::_logHandler_, uFieldFlagsStatic);
}

uClassType* Debug_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Debug", options);
    type->fp_build_ = Debug_build;
    type->fp_cctor_ = Debug__cctor__fn;
    return type;
}

// public static void Assert(bool value, string expression, string filename, int line, object[] operands) :38
void Debug__Assert_fn(bool* value, uString* expression, uString* filename, int* line, uArray* operands)
{
    Debug::Assert(*value, expression, filename, *line, operands);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) :100
void Debug__EmitLog_fn(uString* message, int* type)
{
    Debug::EmitLog(message, *type);
}

// public static void Log(object message, Uno.Diagnostics.DebugMessageType type, string filename, int line) :62
void Debug__Log2_fn(uObject* message, int* type, uString* filename, int* line)
{
    Debug::Log2(message, *type, filename, *line);
}

// public static void Log(string message) :77
void Debug__Log3_fn(uString* message)
{
    Debug::Log3(message);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type) :67
void Debug__Log4_fn(uString* message, int* type)
{
    Debug::Log4(message, *type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) :57
void Debug__Log5_fn(uString* message, int* type, uString* filename, int* line)
{
    Debug::Log5(message, *type, filename, *line);
}

uSStrong<uDelegate*> Debug::_assertionHandler_;
uSStrong<uString*> Debug::_indentStr_;
uSStrong<uDelegate*> Debug::_logHandler_;

// public static void Assert(bool value, string expression, string filename, int line, object[] operands) [static] :38
void Debug::Assert(bool value, uString* expression, uString* filename, int line, uArray* operands)
{
    if (::g::Uno::Delegate::op_Inequality(Debug::_assertionHandler_, NULL))
        uPtr(Debug::_assertionHandler_)->Invoke(5, uCRef(value), expression, filename, uCRef<int>(line), operands);

    if (!value)
        Debug::EmitLog(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[1/*"Assertion F...*/], expression), ::STRINGS[2/*"' in "*/]), filename), ::STRINGS[3/*"("*/]), uBox<int>(::g::Uno::Int_typeof(), line)), ::STRINGS[4/*")"*/]), 3);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) [static] :100
void Debug::EmitLog(uString* message, int type)
{
    if (::g::Uno::Delegate::op_Inequality(Debug::_logHandler_, NULL))
        uPtr(Debug::_logHandler_)->Invoke(2, (uString*)::g::Uno::String::op_Addition2(Debug::_indentStr_, message), uCRef<int>(type));

    const char* cstr = uAllocCStr(message);
    uLog(type, "%s", cstr);
    uFreeCStr(cstr);
}

// public static void Log(object message, Uno.Diagnostics.DebugMessageType type, string filename, int line) [static] :62
void Debug::Log2(uObject* message, int type, uString* filename, int line)
{
    Debug::EmitLog(::g::Uno::Object::ToString(uPtr((message != NULL) ? message : (uString*)::g::Uno::String::Empty_)), type);
}

// public static void Log(string message) [static] :77
void Debug::Log3(uString* message)
{
    Debug::EmitLog(message, 0);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type) [static] :67
void Debug::Log4(uString* message, int type)
{
    Debug::EmitLog(message, type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) [static] :57
void Debug::Log5(uString* message, int type, uString* filename, int line)
{
    Debug::EmitLog(message, type);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Diagnostics/Debug.uno
// ----------------------------------------------------------------------------

// public enum DebugMessageType :7
uEnumType* DebugMessageType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Diagnostics.DebugMessageType", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Debug", 0LL,
        "Information", 1LL,
        "Warning", 2LL,
        "Error", 3LL,
        "Fatal", 4LL,
        "Undefined", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Diagnostics/Debug.uno
// ----------------------------------------------------------------------------

// public delegate void LogHandler(string message, Uno.Diagnostics.DebugMessageType type) :23
uDelegateType* LogHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Diagnostics.LogHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Diagnostics::DebugMessageType_typeof());
    return type;
}

}}} // ::g::Uno::Diagnostics
