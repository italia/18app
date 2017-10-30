// This file was generated based on /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/FileSystemOperations.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemInfo;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemOperations;}}}
namespace g{namespace Fuse{namespace FileSystem{struct Nothing;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// internal sealed class FileSystemOperations :8
// {
uType* FileSystemOperations_typeof();
void FileSystemOperations__ctor__fn(FileSystemOperations* __this);
void FileSystemOperations__ctor_1_fn(FileSystemOperations* __this, uObject* dispatcher);
void FileSystemOperations__AppendTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__AppendTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval);
void FileSystemOperations__Copy_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__CopyDirectory_fn(FileSystemOperations* __this, uString* source, uString* destination);
void FileSystemOperations__CopySync_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Fuse::FileSystem::Nothing** __retval);
void FileSystemOperations__CreateDirectory_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__CreateDirectorySync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::Nothing** __retval);
void FileSystemOperations__Delete_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__DeleteSync_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Fuse::FileSystem::Nothing** __retval);
void FileSystemOperations__Exists_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__ExistsSync_fn(FileSystemOperations* __this, uString* path, bool* __retval);
void FileSystemOperations__GetDirectoryInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__GetDirectoryInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::FileSystemInfo** __retval);
void FileSystemOperations__GetFileInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__GetFileInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::FileSystemInfo** __retval);
void FileSystemOperations__ListDirectories_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__ListDirectoriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval);
void FileSystemOperations__ListEntries_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__ListEntriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval);
void FileSystemOperations__ListFiles_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__ListFilesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval);
void FileSystemOperations__Move_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__MoveSync_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Fuse::FileSystem::Nothing** __retval);
void FileSystemOperations__New1_fn(FileSystemOperations** __retval);
void FileSystemOperations__ReadBufferFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__ReadBufferFromFileSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval);
void FileSystemOperations__ReadTextFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__ReadTextFromFileSync_fn(FileSystemOperations* __this, uString* path, uString** __retval);
void FileSystemOperations__RunTask_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__RunTask1_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__RunTask2_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, void* arg2, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__WriteBufferToFile_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__WriteBufferToFileSync_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Fuse::FileSystem::Nothing** __retval);
void FileSystemOperations__WriteTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval);
void FileSystemOperations__WriteTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval);

struct FileSystemOperations : uObject
{
    uStrong<uObject*> _dispatcher;

    void ctor_();
    void ctor_1(uObject* dispatcher);
    ::g::Uno::Threading::Future1* AppendTextToFile(uString* path, uString* text);
    ::g::Fuse::FileSystem::Nothing* AppendTextToFileSync(uString* path, uString* text);
    ::g::Uno::Threading::Future1* Copy(uString* source, uString* destination);
    void CopyDirectory(uString* source, uString* destination);
    ::g::Fuse::FileSystem::Nothing* CopySync(uString* source, uString* destination);
    ::g::Uno::Threading::Future1* CreateDirectory(uString* path);
    ::g::Fuse::FileSystem::Nothing* CreateDirectorySync(uString* path);
    ::g::Uno::Threading::Future1* Delete(uString* path, bool recursive);
    ::g::Fuse::FileSystem::Nothing* DeleteSync(uString* path, bool recursive);
    ::g::Uno::Threading::Future1* Exists(uString* path);
    bool ExistsSync(uString* path);
    ::g::Uno::Threading::Future1* GetDirectoryInfo(uString* path);
    ::g::Fuse::FileSystem::FileSystemInfo* GetDirectoryInfoSync(uString* path);
    ::g::Uno::Threading::Future1* GetFileInfo(uString* path);
    ::g::Fuse::FileSystem::FileSystemInfo* GetFileInfoSync(uString* path);
    ::g::Uno::Threading::Future1* ListDirectories(uString* path);
    uArray* ListDirectoriesSync(uString* path);
    ::g::Uno::Threading::Future1* ListEntries(uString* path);
    uArray* ListEntriesSync(uString* path);
    ::g::Uno::Threading::Future1* ListFiles(uString* path);
    uArray* ListFilesSync(uString* path);
    ::g::Uno::Threading::Future1* Move(uString* source, uString* destination);
    ::g::Fuse::FileSystem::Nothing* MoveSync(uString* source, uString* destination);
    ::g::Uno::Threading::Future1* ReadBufferFromFile(uString* path);
    uArray* ReadBufferFromFileSync(uString* path);
    ::g::Uno::Threading::Future1* ReadTextFromFile(uString* path);
    uString* ReadTextFromFileSync(uString* path);
    ::g::Uno::Threading::Future1* RunTask(uType* __type, uDelegate* del);
    template<class T1>
    ::g::Uno::Threading::Future1* RunTask1(uType* __type, uDelegate* del, T1 arg1) { ::g::Uno::Threading::Future1* __retval; return FileSystemOperations__RunTask1_fn(this, __type, del, uConstrain(__type->U(0), arg1), &__retval), __retval; }
    template<class T1, class T2>
    ::g::Uno::Threading::Future1* RunTask2(uType* __type, uDelegate* del, T1 arg1, T2 arg2) { ::g::Uno::Threading::Future1* __retval; return FileSystemOperations__RunTask2_fn(this, __type, del, uConstrain(__type->U(0), arg1), uConstrain(__type->U(1), arg2), &__retval), __retval; }
    ::g::Uno::Threading::Future1* WriteBufferToFile(uString* path, uArray* data);
    ::g::Fuse::FileSystem::Nothing* WriteBufferToFileSync(uString* path, uArray* data);
    ::g::Uno::Threading::Future1* WriteTextToFile(uString* path, uString* text);
    ::g::Fuse::FileSystem::Nothing* WriteTextToFileSync(uString* path, uString* text);
    static FileSystemOperations* New1();
};
// }

}}} // ::g::Fuse::FileSystem
