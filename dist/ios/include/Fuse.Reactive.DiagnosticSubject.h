// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/DiagnosticSubject.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct DiagnosticSubject;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal class DiagnosticSubject :6
// {
uType* DiagnosticSubject_typeof();
void DiagnosticSubject__ctor__fn(DiagnosticSubject* __this);
void DiagnosticSubject__ClearDiagnostic_fn(DiagnosticSubject* __this);
void DiagnosticSubject__New1_fn(DiagnosticSubject** __retval);

struct DiagnosticSubject : uObject
{
    uStrong<uObject*> _diagnostic;

    void ctor_();
    void ClearDiagnostic();
    static DiagnosticSubject* New1();
};
// }

}}} // ::g::Fuse::Reactive
