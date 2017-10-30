// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptException;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptException :4
// {
::g::Uno::Exception_type* ScriptException_typeof();
void ScriptException__ctor_3_fn(ScriptException* __this, uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace);
void ScriptException__get_ErrorMessage_fn(ScriptException* __this, uString** __retval);
void ScriptException__set_ErrorMessage_fn(ScriptException* __this, uString* value);
void ScriptException__get_FileName_fn(ScriptException* __this, uString** __retval);
void ScriptException__set_FileName_fn(ScriptException* __this, uString* value);
void ScriptException__get_JSStackTrace_fn(ScriptException* __this, uString** __retval);
void ScriptException__set_JSStackTrace_fn(ScriptException* __this, uString* value);
void ScriptException__get_LineNumber_fn(ScriptException* __this, int* __retval);
void ScriptException__set_LineNumber_fn(ScriptException* __this, int* value);
void ScriptException__get_Message_fn(ScriptException* __this, uString** __retval);
void ScriptException__get_Name_fn(ScriptException* __this, uString** __retval);
void ScriptException__set_Name_fn(ScriptException* __this, uString* value);
void ScriptException__New4_fn(uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace, ScriptException** __retval);
void ScriptException__get_SourceLine_fn(ScriptException* __this, uString** __retval);
void ScriptException__set_SourceLine_fn(ScriptException* __this, uString* value);

struct ScriptException : ::g::Uno::Exception
{
    uStrong<uString*> _ErrorMessage;
    uStrong<uString*> _FileName;
    uStrong<uString*> _JSStackTrace;
    int _LineNumber;
    uStrong<uString*> _Name;
    uStrong<uString*> _SourceLine;

    void ctor_3(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace);
    uString* ErrorMessage();
    void ErrorMessage(uString* value);
    uString* FileName();
    void FileName(uString* value);
    uString* JSStackTrace();
    void JSStackTrace(uString* value);
    int LineNumber();
    void LineNumber(int value);
    uString* Name();
    void Name(uString* value);
    uString* SourceLine();
    void SourceLine(uString* value);
    static ScriptException* New4(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace);
};
// }

}}} // ::g::Fuse::Scripting
