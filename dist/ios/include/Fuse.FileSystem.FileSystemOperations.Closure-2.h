// This file was generated based on /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/FileSystemOperations.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemOperations__Closure;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// private sealed class FileSystemOperations.Closure<T1, TResult> :262
// {
uType* FileSystemOperations__Closure_typeof();
void FileSystemOperations__Closure__ctor__fn(FileSystemOperations__Closure* __this, uDelegate* del, void* arg1);
void FileSystemOperations__Closure__Invoke_fn(FileSystemOperations__Closure* __this, uTRef __retval);
void FileSystemOperations__Closure__New1_fn(uType* __type, uDelegate* del, void* arg1, FileSystemOperations__Closure** __retval);

struct FileSystemOperations__Closure : uObject
{
    uTField _arg1() { return __type->Field(this, 0); }
    uStrong<uDelegate*> _del;

    template<class T1>
    void ctor_(uDelegate* del, T1 arg1) { FileSystemOperations__Closure__ctor__fn(this, del, uConstrain(__type->T(0), arg1)); }
    template<class TResult>
    TResult Invoke() { TResult __retval; return FileSystemOperations__Closure__Invoke_fn(this, &__retval), __retval; }
    template<class T1>
    static FileSystemOperations__Closure* New1(uType* __type, uDelegate* del, T1 arg1) { FileSystemOperations__Closure* __retval; return FileSystemOperations__Closure__New1_fn(__type, del, uConstrain(__type->T(0), arg1), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::FileSystem
