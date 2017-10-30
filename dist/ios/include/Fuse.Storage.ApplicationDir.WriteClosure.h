// This file was generated based on /usr/local/share/uno/Packages/Fuse.Storage/1.3.1/ApplicationDir.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Storage{struct ApplicationDir__WriteClosure;}}}

namespace g{
namespace Fuse{
namespace Storage{

// private sealed class ApplicationDir.WriteClosure :91
// {
uType* ApplicationDir__WriteClosure_typeof();
void ApplicationDir__WriteClosure__ctor__fn(ApplicationDir__WriteClosure* __this, uString* filename, uString* value);
void ApplicationDir__WriteClosure__Invoke_fn(ApplicationDir__WriteClosure* __this, bool* __retval);
void ApplicationDir__WriteClosure__New1_fn(uString* filename, uString* value, ApplicationDir__WriteClosure** __retval);

struct ApplicationDir__WriteClosure : uObject
{
    uStrong<uString*> _filename;
    uStrong<uString*> _value;

    void ctor_(uString* filename, uString* value);
    bool Invoke();
    static ApplicationDir__WriteClosure* New1(uString* filename, uString* value);
};
// }

}}} // ::g::Fuse::Storage
