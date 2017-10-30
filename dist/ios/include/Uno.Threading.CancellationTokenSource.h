// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Tasks/Tasks.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct CancellationToken;}}}
namespace g{namespace Uno{namespace Threading{struct CancellationTokenSource;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed class CancellationTokenSource :8
// {
uType* CancellationTokenSource_typeof();
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this);
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this);
void CancellationTokenSource__New1_fn(CancellationTokenSource** __retval);
void CancellationTokenSource__get_Token_fn(CancellationTokenSource* __this, ::g::Uno::Threading::CancellationToken** __retval);

struct CancellationTokenSource : uObject
{
    uStrong< ::g::Uno::Threading::CancellationToken*> _token;

    void ctor_();
    void Cancel();
    ::g::Uno::Threading::CancellationToken* Token();
    static CancellationTokenSource* New1();
};
// }

}}} // ::g::Uno::Threading
