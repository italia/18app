// This file was generated based on /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Uno/IO/FileSystemInfo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace FileSystem{struct FileStatus;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemInfo;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// public abstract class FileSystemInfo :8
// {
struct FileSystemInfo_type : uType
{
    void(*fp_LoadStatus)(::g::Fuse::FileSystem::FileSystemInfo*, ::g::Fuse::FileSystem::FileStatus**);
};

FileSystemInfo_type* FileSystemInfo_typeof();
void FileSystemInfo__ctor__fn(FileSystemInfo* __this, uString* originalPath);
void FileSystemInfo__ConvertTime_fn(uObject* time, ::g::Uno::Time::ZonedDateTime** __retval);
void FileSystemInfo__get_Exists_fn(FileSystemInfo* __this, bool* __retval);
void FileSystemInfo__get_FullName_fn(FileSystemInfo* __this, uString** __retval);
void FileSystemInfo__get_LastAccessTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void FileSystemInfo__get_LastWriteTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void FileSystemInfo__LoadStatus_fn(FileSystemInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval);
void FileSystemInfo__Refresh_fn(FileSystemInfo* __this);
void FileSystemInfo__get_Status_fn(FileSystemInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval);

struct FileSystemInfo : uObject
{
    uStrong<uString*> _fullPath;
    uStrong<uString*> _originalPath;
    uStrong< ::g::Fuse::FileSystem::FileStatus*> _status;

    void ctor_(uString* originalPath);
    bool Exists();
    uString* FullName();
    ::g::Uno::Time::ZonedDateTime* LastAccessTimeUtc();
    ::g::Uno::Time::ZonedDateTime* LastWriteTimeUtc();
    ::g::Fuse::FileSystem::FileStatus* LoadStatus() { ::g::Fuse::FileSystem::FileStatus* __retval; return (((FileSystemInfo_type*)__type)->fp_LoadStatus)(this, &__retval), __retval; }
    void Refresh();
    ::g::Fuse::FileSystem::FileStatus* Status();
    static ::g::Uno::Time::ZonedDateTime* ConvertTime(uObject* time);
    static ::g::Fuse::FileSystem::FileStatus* LoadStatus(FileSystemInfo* __this) { ::g::Fuse::FileSystem::FileStatus* __retval; return FileSystemInfo__LoadStatus_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::FileSystem
