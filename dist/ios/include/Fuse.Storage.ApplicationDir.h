// This file was generated based on /usr/local/share/uno/Packages/Fuse.Storage/1.3.1/ApplicationDir.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Storage{struct ApplicationDir;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Storage{

// internal static class ApplicationDir :7
// {
uClassType* ApplicationDir_typeof();
void ApplicationDir__CreateFile_fn(uString* filepath);
void ApplicationDir__Delete_fn(uString* filename, bool* __retval);
void ApplicationDir__Read_fn(uString* filename, uString** __retval);
void ApplicationDir__ReadAsync_fn(uString* filename, ::g::Uno::Threading::Future1** __retval);
void ApplicationDir__TryRead_fn(uString* filename, uString** content, bool* __retval);
void ApplicationDir__Write_fn(uString* filename, uString* value, bool* __retval);
void ApplicationDir__WriteAsync_fn(uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval);

struct ApplicationDir : uObject
{
    static void CreateFile(uString* filepath);
    static bool Delete(uString* filename);
    static uString* Read(uString* filename);
    static ::g::Uno::Threading::Future1* ReadAsync(uString* filename);
    static bool TryRead(uString* filename, uString** content);
    static bool Write(uString* filename, uString* value);
    static ::g::Uno::Threading::Future1* WriteAsync(uString* filename, uString* value);
};
// }

}}} // ::g::Fuse::Storage
