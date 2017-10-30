// This file was generated based on /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/FileSystemOperations.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemOperations__Closure1;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// private sealed class FileSystemOperations.Closure<T1, T2, TResult> :280
// {
uType* FileSystemOperations__Closure1_typeof();
void FileSystemOperations__Closure1__ctor__fn(FileSystemOperations__Closure1* __this, uDelegate* del, void* arg1, void* arg2);
void FileSystemOperations__Closure1__Invoke_fn(FileSystemOperations__Closure1* __this, uTRef __retval);
void FileSystemOperations__Closure1__New1_fn(uType* __type, uDelegate* del, void* arg1, void* arg2, FileSystemOperations__Closure1** __retval);

struct FileSystemOperations__Closure1 : uObject
{
    uTField _arg1() { return __type->Field(this, 0); }
    uTField _arg2() { return __type->Field(this, 1); }
    uStrong<uDelegate*> _del;

    template<class T1, class T2>
    void ctor_(uDelegate* del, T1 arg1, T2 arg2) { FileSystemOperations__Closure1__ctor__fn(this, del, uConstrain(__type->T(0), arg1), uConstrain(__type->T(1), arg2)); }
    template<class TResult>
    TResult Invoke() { TResult __retval; return FileSystemOperations__Closure1__Invoke_fn(this, &__retval), __retval; }
    template<class T1, class T2>
    static FileSystemOperations__Closure1* New1(uType* __type, uDelegate* del, T1 arg1, T2 arg2) { FileSystemOperations__Closure1* __retval; return FileSystemOperations__Closure1__New1_fn(__type, del, uConstrain(__type->T(0), arg1), uConstrain(__type->T(1), arg2), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::FileSystem
