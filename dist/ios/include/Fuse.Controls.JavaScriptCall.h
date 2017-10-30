// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/WebView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.BufferedWebViewCall.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct JavaScriptCall;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class JavaScriptCall :476
// {
struct JavaScriptCall_type : uType
{
    ::g::Fuse::Controls::BufferedWebViewCall interface0;
};

JavaScriptCall_type* JavaScriptCall_typeof();
void JavaScriptCall__ctor__fn(JavaScriptCall* __this, uString* script, uDelegate* handler);
void JavaScriptCall__Apply_fn(JavaScriptCall* __this, uObject* wv);
void JavaScriptCall__New1_fn(uString* script, uDelegate* handler, JavaScriptCall** __retval);

struct JavaScriptCall : uObject
{
    uStrong<uDelegate*> Handler;
    uStrong<uString*> Script;

    void ctor_(uString* script, uDelegate* handler);
    void Apply(uObject* wv);
    static JavaScriptCall* New1(uString* script, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Controls
