// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/FileSystemEnumerator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.String.h>
class CppXliFileSystemEnumerator;
namespace g{namespace Uno{namespace IO{struct FileSystemEnumerator;}}}

namespace g{
namespace Uno{
namespace IO{

// internal sealed class FileSystemEnumerator :14
// {
struct FileSystemEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

FileSystemEnumerator_type* FileSystemEnumerator_typeof();
void FileSystemEnumerator__ctor__fn(FileSystemEnumerator* __this, ::CppXliFileSystemEnumerator** handle, int* mode);
void FileSystemEnumerator__get_Current_fn(FileSystemEnumerator* __this, uString** __retval);
void FileSystemEnumerator__Dispose_fn(FileSystemEnumerator* __this);
void FileSystemEnumerator__GetName_fn(::CppXliFileSystemEnumerator** handle, uString** __retval);
void FileSystemEnumerator__IsDirectory_fn(::CppXliFileSystemEnumerator** handle, bool* __retval);
void FileSystemEnumerator__MoveNext_fn(FileSystemEnumerator* __this, bool* __retval);
void FileSystemEnumerator__MoveNext1_fn(::CppXliFileSystemEnumerator** handle, bool* __retval);
void FileSystemEnumerator__New1_fn(::CppXliFileSystemEnumerator** handle, int* mode, FileSystemEnumerator** __retval);
void FileSystemEnumerator__Reset_fn(FileSystemEnumerator* __this);

struct FileSystemEnumerator : uObject
{
    ::CppXliFileSystemEnumerator* _handle;
    int _mode;

    void ctor_(::CppXliFileSystemEnumerator* handle, int mode);
    uString* Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static uString* GetName(::CppXliFileSystemEnumerator* handle);
    static bool IsDirectory(::CppXliFileSystemEnumerator* handle);
    static bool MoveNext1(::CppXliFileSystemEnumerator* handle);
    static FileSystemEnumerator* New1(::CppXliFileSystemEnumerator* handle, int mode);
};
// }

}}} // ::g::Uno::IO
