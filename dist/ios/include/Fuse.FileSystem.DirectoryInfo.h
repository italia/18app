// This file was generated based on /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Uno/IO/DirectoryInfo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.FileSystem.FileSystemInfo.h>
namespace g{namespace Fuse{namespace FileSystem{struct DirectoryInfo;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileStatus;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// public sealed class DirectoryInfo :5
// {
::g::Fuse::FileSystem::FileSystemInfo_type* DirectoryInfo_typeof();
void DirectoryInfo__ctor_1_fn(DirectoryInfo* __this, uString* originalPath);
void DirectoryInfo__LoadStatus_fn(DirectoryInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval);
void DirectoryInfo__New1_fn(uString* originalPath, DirectoryInfo** __retval);

struct DirectoryInfo : ::g::Fuse::FileSystem::FileSystemInfo
{
    void ctor_1(uString* originalPath);
    static DirectoryInfo* New1(uString* originalPath);
};
// }

}}} // ::g::Fuse::FileSystem
