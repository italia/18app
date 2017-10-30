// This file was generated based on /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Uno/IO/FileStatus.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace FileSystem{struct FileStatus;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// internal sealed class FileStatus :6
// {
uType* FileStatus_typeof();
void FileStatus__ctor__fn(FileStatus* __this);
void FileStatus__ctor_1_fn(FileStatus* __this, int64_t* length, int* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc);
void FileStatus__get_Attributes_fn(FileStatus* __this, int* __retval);
void FileStatus__get_Exists_fn(FileStatus* __this, bool* __retval);
void FileStatus__get_LastAccessTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void FileStatus__get_LastWriteTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void FileStatus__get_Length_fn(FileStatus* __this, int64_t* __retval);
void FileStatus__New1_fn(FileStatus** __retval);
void FileStatus__New2_fn(int64_t* length, int* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc, FileStatus** __retval);

struct FileStatus : uObject
{
    int _attributes;
    uStrong< ::g::Uno::Time::ZonedDateTime*> _creationTimeUtc;
    bool _exists;
    uStrong< ::g::Uno::Time::ZonedDateTime*> _lastAccessTimeUtc;
    uStrong< ::g::Uno::Time::ZonedDateTime*> _lastWriteTimeUtc;
    int64_t _length;
    static ::g::Uno::Time::Instant FileTimeEpoch_;
    static ::g::Uno::Time::Instant& FileTimeEpoch() { return FileTimeEpoch_; }

    void ctor_();
    void ctor_1(int64_t length, int attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc);
    int Attributes();
    bool Exists();
    ::g::Uno::Time::ZonedDateTime* LastAccessTimeUtc();
    ::g::Uno::Time::ZonedDateTime* LastWriteTimeUtc();
    int64_t Length();
    static FileStatus* New1();
    static FileStatus* New2(int64_t length, int attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc);
};
// }

}}} // ::g::Fuse::FileSystem
