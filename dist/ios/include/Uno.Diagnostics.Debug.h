// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Diagnostics/Debug.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Debug;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Debug :26
// {
uClassType* Debug_typeof();
void Debug__Assert_fn(bool* value, uString* expression, uString* filename, int* line, uArray* operands);
void Debug__EmitLog_fn(uString* message, int* type);
void Debug__Log2_fn(uObject* message, int* type, uString* filename, int* line);
void Debug__Log3_fn(uString* message);
void Debug__Log4_fn(uString* message, int* type);
void Debug__Log5_fn(uString* message, int* type, uString* filename, int* line);

struct Debug : uObject
{
    static uSStrong<uDelegate*> _assertionHandler_;
    static uSStrong<uDelegate*>& _assertionHandler() { return _assertionHandler_; }
    static uSStrong<uString*> _indentStr_;
    static uSStrong<uString*>& _indentStr() { return _indentStr_; }
    static uSStrong<uDelegate*> _logHandler_;
    static uSStrong<uDelegate*>& _logHandler() { return _logHandler_; }

    static void Assert(bool value, uString* expression, uString* filename, int line, uArray* operands);
    static void EmitLog(uString* message, int type);
    static void Log2(uObject* message, int type, uString* filename, int line);
    static void Log3(uString* message);
    static void Log4(uString* message, int type);
    static void Log5(uString* message, int type, uString* filename, int line);
};
// }

}}} // ::g::Uno::Diagnostics
