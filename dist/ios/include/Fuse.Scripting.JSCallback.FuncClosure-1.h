// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSCallback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct JSCallback__FuncClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class JSCallback.FuncClosure<TResult> :96
// {
uType* JSCallback__FuncClosure_typeof();
void JSCallback__FuncClosure__ctor__fn(JSCallback__FuncClosure* __this, uDelegate* method);
void JSCallback__FuncClosure__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure** __retval);
void JSCallback__FuncClosure__Run_fn(JSCallback__FuncClosure* __this, uArray* args, uObject** __retval);

struct JSCallback__FuncClosure : uObject
{
    uStrong<uDelegate*> _method;

    void ctor_(uDelegate* method);
    uObject* Run(uArray* args);
    static JSCallback__FuncClosure* New1(uType* __type, uDelegate* method);
};
// }

}}} // ::g::Fuse::Scripting
