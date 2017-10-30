// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Diagnostics.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Fuse{struct Diagnostics__Temporal;}}

namespace g{
namespace Fuse{

// private sealed class Diagnostics.Temporal :147
// {
struct Diagnostics__Temporal_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Diagnostics__Temporal_type* Diagnostics__Temporal_typeof();
void Diagnostics__Temporal__ctor__fn(Diagnostics__Temporal* __this, ::g::Fuse::Diagnostic* diag);
void Diagnostics__Temporal__Dispose_fn(Diagnostics__Temporal* __this);
void Diagnostics__Temporal__New1_fn(::g::Fuse::Diagnostic* diag, Diagnostics__Temporal** __retval);

struct Diagnostics__Temporal : uObject
{
    uStrong< ::g::Fuse::Diagnostic*> _diag;

    void ctor_(::g::Fuse::Diagnostic* diag);
    void Dispose();
    static Diagnostics__Temporal* New1(::g::Fuse::Diagnostic* diag);
};
// }

}} // ::g::Fuse
