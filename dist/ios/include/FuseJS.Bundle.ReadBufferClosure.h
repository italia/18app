// This file was generated based on /usr/local/share/uno/Packages/FuseJS/1.3.1/Bundle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace FuseJS{struct Bundle__ReadBufferClosure;}}

namespace g{
namespace FuseJS{

// private sealed class Bundle.ReadBufferClosure :272
// {
uType* Bundle__ReadBufferClosure_typeof();
void Bundle__ReadBufferClosure__ctor__fn(Bundle__ReadBufferClosure* __this, uString* filename);
void Bundle__ReadBufferClosure__Invoke_fn(Bundle__ReadBufferClosure* __this, uArray** __retval);
void Bundle__ReadBufferClosure__New1_fn(uString* filename, Bundle__ReadBufferClosure** __retval);

struct Bundle__ReadBufferClosure : uObject
{
    uStrong<uString*> _filename;

    void ctor_(uString* filename);
    uArray* Invoke();
    static Bundle__ReadBufferClosure* New1(uString* filename);
};
// }

}} // ::g::FuseJS
