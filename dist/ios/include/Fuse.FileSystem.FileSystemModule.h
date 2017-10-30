// This file was generated based on /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/FileSystemModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemInfo;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemModule;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemOperations;}}}
namespace g{namespace Fuse{namespace FileSystem{struct Nothing;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// public sealed class FileSystemModule :42
// {
::g::Fuse::Scripting::NativeModule_type* FileSystemModule_typeof();
void FileSystemModule__ctor_2_fn(FileSystemModule* __this);
void FileSystemModule__AppendTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__AppendTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__Copy_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__CopySync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__CreateDirectory_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__CreateDirectorySync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__Delete_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__DeleteSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__Exists_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__ExistsSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__GetArg_fn(uType* __type, uArray* args, int* index, uString* error, uObject** __retval);
void FileSystemModule__GetCacheDirectory_fn(FileSystemModule* __this, uString** __retval);
void FileSystemModule__GetDataDirectory_fn(FileSystemModule* __this, uString** __retval);
void FileSystemModule__GetDirectoryInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__GetDirectoryInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__GetFileInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__GetFileInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__GetIosPaths_fn(FileSystemModule* __this, ::g::Uno::Collections::Dictionary** __retval);
void FileSystemModule__GetPathFromArgs_fn(uArray* args, uString** __retval);
void FileSystemModule__ListDirectories_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__ListDirectoriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__ListEntries_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__ListEntriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__ListFiles_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__ListFilesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__Move_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__MoveSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__New2_fn(FileSystemModule** __retval);
void FileSystemModule__ReadBufferFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__ReadBufferFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__ReadTextFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__ReadTextFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__ToScriptingArray_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray, ::g::Fuse::Scripting::Array** __retval);
void FileSystemModule__ToScriptingDate_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time, uObject** __retval);
void FileSystemModule__ToScriptingObject_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::FileSystem::FileSystemInfo* info, ::g::Fuse::Scripting::Object** __retval);
void FileSystemModule__ToScriptingObject1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict, ::g::Fuse::Scripting::Object** __retval);
void FileSystemModule__WriteBufferToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__WriteBufferToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void FileSystemModule__WriteTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileSystemModule__WriteTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct FileSystemModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<FileSystemModule*> _instance_;
    static uSStrong<FileSystemModule*>& _instance() { return _instance_; }
    uStrong< ::g::Fuse::FileSystem::FileSystemOperations*> _operations;

    void ctor_2();
    ::g::Uno::Threading::Future1* AppendTextToFile(uArray* args);
    uObject* AppendTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* Copy(uArray* args);
    uObject* CopySync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* CreateDirectory(uArray* args);
    uObject* CreateDirectorySync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* Delete(uArray* args);
    uObject* DeleteSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* Exists(uArray* args);
    uObject* ExistsSync(::g::Fuse::Scripting::Context* context, uArray* args);
    uString* GetCacheDirectory();
    uString* GetDataDirectory();
    ::g::Uno::Threading::Future1* GetDirectoryInfo(uArray* args);
    uObject* GetDirectoryInfoSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* GetFileInfo(uArray* args);
    uObject* GetFileInfoSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Collections::Dictionary* GetIosPaths();
    ::g::Uno::Threading::Future1* ListDirectories(uArray* args);
    uObject* ListDirectoriesSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* ListEntries(uArray* args);
    uObject* ListEntriesSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* ListFiles(uArray* args);
    uObject* ListFilesSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* Move(uArray* args);
    uObject* MoveSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* ReadBufferFromFile(uArray* args);
    uObject* ReadBufferFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* ReadTextFromFile(uArray* args);
    uObject* ReadTextFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* WriteBufferToFile(uArray* args);
    uObject* WriteBufferToFileSync(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Uno::Threading::Future1* WriteTextToFile(uArray* args);
    uObject* WriteTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args);
    static uObject* GetArg(uType* __type, uArray* args, int index, uString* error);
    static uString* GetPathFromArgs(uArray* args);
    static FileSystemModule* New2();
    static ::g::Fuse::Scripting::Array* ToScriptingArray(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray);
    static uObject* ToScriptingDate(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time);
    static ::g::Fuse::Scripting::Object* ToScriptingObject(::g::Fuse::Scripting::Context* context, ::g::Fuse::FileSystem::FileSystemInfo* info);
    static ::g::Fuse::Scripting::Object* ToScriptingObject1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict);
};
// }

}}} // ::g::Fuse::FileSystem
