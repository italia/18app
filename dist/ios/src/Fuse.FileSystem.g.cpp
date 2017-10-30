// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.FileSystem.DirectoryInfo.h>
#include <Fuse.FileSystem.FileAttributes.h>
#include <Fuse.FileSystem.FileInfo.h>
#include <Fuse.FileSystem.FileStatus.h>
#include <Fuse.FileSystem.FileStatusHelpers.h>
#include <Fuse.FileSystem.FileSystemInfo.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.FileSystem.FileSystemOperations.Closure-2.h>
#include <Fuse.FileSystem.FileSystemOperations.Closure-3.h>
#include <Fuse.FileSystem.FileSystemOperations.h>
#include <Fuse.FileSystem.IosPaths.h>
#include <Fuse.FileSystem.Nothing.h>
#include <Fuse.FileSystem.PathTools.h>
#include <Fuse.FileSystem.UnifiedPaths.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Double.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.Constants.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.UX.Resource.h>
#include <Uno/Support.h>
static uString* STRINGS[47];
static uType* TYPES[34];

namespace g{
namespace Fuse{
namespace FileSystem{

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/FileSystemOperations.uno
// ----------------------------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, TResult> :262
// {
static void FileSystemOperations__Closure_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(FileSystemOperations__Closure, _del), 0);
}

uType* FileSystemOperations__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(FileSystemOperations__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`2", options);
    type->fp_build_ = FileSystemOperations__Closure_build;
    return type;
}

// public Closure(Uno.Func<T1, TResult> del, T1 arg1) :267
void FileSystemOperations__Closure__ctor__fn(FileSystemOperations__Closure* __this, uDelegate* del, void* arg1)
{
    __this->_del = del;
    __this->_arg1() = arg1;
}

// public TResult Invoke() :273
void FileSystemOperations__Closure__Invoke_fn(FileSystemOperations__Closure* __this, uTRef __retval)
{
    uT ret2(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 1, (void*)__this->_arg1()), ret2)), void();
}

// public Closure New(Uno.Func<T1, TResult> del, T1 arg1) :267
void FileSystemOperations__Closure__New1_fn(uType* __type, uDelegate* del, void* arg1, FileSystemOperations__Closure** __retval)
{
    FileSystemOperations__Closure* obj1 = (FileSystemOperations__Closure*)uNew(__type);
    FileSystemOperations__Closure__ctor__fn(obj1, del, arg1);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/FileSystemOperations.uno
// ----------------------------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, T2, TResult> :280
// {
static void FileSystemOperations__Closure1_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(1), type->T(2), NULL), offsetof(FileSystemOperations__Closure1, _del), 0);
}

uType* FileSystemOperations__Closure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(FileSystemOperations__Closure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`3", options);
    type->fp_build_ = FileSystemOperations__Closure1_build;
    return type;
}

// public Closure(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :286
void FileSystemOperations__Closure1__ctor__fn(FileSystemOperations__Closure1* __this, uDelegate* del, void* arg1, void* arg2)
{
    __this->_del = del;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public TResult Invoke() :293
void FileSystemOperations__Closure1__Invoke_fn(FileSystemOperations__Closure1* __this, uTRef __retval)
{
    uT ret2(__this->__type->T(2), U_ALLOCA(__this->__type->T(2)->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 2, (void*)__this->_arg1(), (void*)__this->_arg2()), ret2)), void();
}

// public Closure New(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :286
void FileSystemOperations__Closure1__New1_fn(uType* __type, uDelegate* del, void* arg1, void* arg2, FileSystemOperations__Closure1** __retval)
{
    FileSystemOperations__Closure1* obj1 = (FileSystemOperations__Closure1*)uNew(__type);
    FileSystemOperations__Closure1__ctor__fn(obj1, del, arg1, arg2);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Uno/IO/DirectoryInfo.uno
// ----------------------------------------------------------------------------

// public sealed class DirectoryInfo :5
// {
static void DirectoryInfo_build(uType* type)
{
    type->SetFields(3);
}

::g::Fuse::FileSystem::FileSystemInfo_type* DirectoryInfo_typeof()
{
    static uSStrong< ::g::Fuse::FileSystem::FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FileSystem::FileSystemInfo_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DirectoryInfo);
    options.TypeSize = sizeof(::g::Fuse::FileSystem::FileSystemInfo_type);
    type = (::g::Fuse::FileSystem::FileSystemInfo_type*)uClassType::New("Fuse.FileSystem.DirectoryInfo", options);
    type->fp_build_ = DirectoryInfo_build;
    type->fp_LoadStatus = (void(*)(::g::Fuse::FileSystem::FileSystemInfo*, ::g::Fuse::FileSystem::FileStatus**))DirectoryInfo__LoadStatus_fn;
    return type;
}

// public DirectoryInfo(string originalPath) :7
void DirectoryInfo__ctor_1_fn(DirectoryInfo* __this, uString* originalPath)
{
    __this->ctor_1(originalPath);
}

// internal override sealed extern Fuse.FileSystem.FileStatus LoadStatus() :18
void DirectoryInfo__LoadStatus_fn(DirectoryInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    ::g::Fuse::FileSystem::FileStatus* ret2;
    ::g::Fuse::FileSystem::FileStatus* status = (::g::Fuse::FileSystem::FileSystemInfo__LoadStatus_fn(__this, &ret2), ret2);

    if ((uPtr(status)->Attributes() & 16) == 0)
        return *__retval = ::g::Fuse::FileSystem::FileStatus::New1(), void();

    return *__retval = status, void();
}

// public DirectoryInfo New(string originalPath) :7
void DirectoryInfo__New1_fn(uString* originalPath, DirectoryInfo** __retval)
{
    *__retval = DirectoryInfo::New1(originalPath);
}

// public DirectoryInfo(string originalPath) [instance] :7
void DirectoryInfo::ctor_1(uString* originalPath)
{
    ctor_(originalPath);
}

// public DirectoryInfo New(string originalPath) [static] :7
DirectoryInfo* DirectoryInfo::New1(uString* originalPath)
{
    DirectoryInfo* obj1 = (DirectoryInfo*)uNew(DirectoryInfo_typeof());
    obj1->ctor_1(originalPath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Uno/IO/FileAttributes.uno
// -----------------------------------------------------------------------------

// public enum FileAttributes :3
uEnumType* FileAttributes_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.FileSystem.FileAttributes", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Directory", 16LL,
        "Device", 64LL,
        "ReparsePoint", 1024LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Uno/IO/FileInfo.uno
// -----------------------------------------------------------------------

// public sealed class FileInfo :5
// {
static void FileInfo_build(uType* type)
{
    type->SetFields(3);
}

::g::Fuse::FileSystem::FileSystemInfo_type* FileInfo_typeof()
{
    static uSStrong< ::g::Fuse::FileSystem::FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FileSystem::FileSystemInfo_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileInfo);
    options.TypeSize = sizeof(::g::Fuse::FileSystem::FileSystemInfo_type);
    type = (::g::Fuse::FileSystem::FileSystemInfo_type*)uClassType::New("Fuse.FileSystem.FileInfo", options);
    type->fp_build_ = FileInfo_build;
    type->fp_LoadStatus = (void(*)(::g::Fuse::FileSystem::FileSystemInfo*, ::g::Fuse::FileSystem::FileStatus**))FileInfo__LoadStatus_fn;
    return type;
}

// public FileInfo(string originalPath) :10
void FileInfo__ctor_1_fn(FileInfo* __this, uString* originalPath)
{
    __this->ctor_1(originalPath);
}

// public long get_Length() :34
void FileInfo__get_Length_fn(FileInfo* __this, int64_t* __retval)
{
    *__retval = __this->Length();
}

// internal override sealed extern Fuse.FileSystem.FileStatus LoadStatus() :21
void FileInfo__LoadStatus_fn(FileInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    ::g::Fuse::FileSystem::FileStatus* ret2;
    ::g::Fuse::FileSystem::FileStatus* status = (::g::Fuse::FileSystem::FileSystemInfo__LoadStatus_fn(__this, &ret2), ret2);

    if ((uPtr(status)->Attributes() & 16) != 0)
        return *__retval = ::g::Fuse::FileSystem::FileStatus::New1(), void();

    return *__retval = status, void();
}

// public FileInfo New(string originalPath) :10
void FileInfo__New1_fn(uString* originalPath, FileInfo** __retval)
{
    *__retval = FileInfo::New1(originalPath);
}

// public FileInfo(string originalPath) [instance] :10
void FileInfo::ctor_1(uString* originalPath)
{
    ctor_(originalPath);
}

// public long get_Length() [instance] :34
int64_t FileInfo::Length()
{
    return uPtr(Status())->Length();
}

// public FileInfo New(string originalPath) [static] :10
FileInfo* FileInfo::New1(uString* originalPath)
{
    FileInfo* obj1 = (FileInfo*)uNew(FileInfo_typeof());
    obj1->ctor_1(originalPath);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Uno/IO/FileStatus.uno
// -------------------------------------------------------------------------

// internal sealed class FileStatus :6
// {
// static generated FileStatus() :6
static void FileStatus__cctor__fn(uType* __type)
{
    ::g::Uno::Time::Instant_typeof()->Init();
    FileStatus::FileTimeEpoch_ = ::g::Uno::Time::Instant__FromUtc(1601, 1, 1, 0, 0);
}

static void FileStatus_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Time::DateTimeZone_typeof());
    type->SetFields(0,
        ::g::Fuse::FileSystem::FileAttributes_typeof(), offsetof(FileStatus, _attributes), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(FileStatus, _creationTimeUtc), 0,
        ::g::Uno::Bool_typeof(), offsetof(FileStatus, _exists), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(FileStatus, _lastAccessTimeUtc), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(FileStatus, _lastWriteTimeUtc), 0,
        ::g::Uno::Long_typeof(), offsetof(FileStatus, _length), 0,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&FileStatus::FileTimeEpoch_, uFieldFlagsStatic);
}

uType* FileStatus_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileStatus);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileStatus", options);
    type->fp_build_ = FileStatus_build;
    type->fp_ctor_ = (void*)FileStatus__New1_fn;
    type->fp_cctor_ = FileStatus__cctor__fn;
    return type;
}

// public FileStatus() :18
void FileStatus__ctor__fn(FileStatus* __this)
{
    __this->ctor_();
}

// public FileStatus(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) :34
void FileStatus__ctor_1_fn(FileStatus* __this, int64_t* length, int* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    __this->ctor_1(*length, *attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
}

// public Fuse.FileSystem.FileAttributes get_Attributes() :55
void FileStatus__get_Attributes_fn(FileStatus* __this, int* __retval)
{
    *__retval = __this->Attributes();
}

// public bool get_Exists() :53
void FileStatus__get_Exists_fn(FileStatus* __this, bool* __retval)
{
    *__retval = __this->Exists();
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() :57
void FileStatus__get_LastAccessTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastAccessTimeUtc();
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() :59
void FileStatus__get_LastWriteTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastWriteTimeUtc();
}

// public long get_Length() :61
void FileStatus__get_Length_fn(FileStatus* __this, int64_t* __retval)
{
    *__retval = __this->Length();
}

// public FileStatus New() :18
void FileStatus__New1_fn(FileStatus** __retval)
{
    *__retval = FileStatus::New1();
}

// public FileStatus New(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) :34
void FileStatus__New2_fn(int64_t* length, int* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc, FileStatus** __retval)
{
    *__retval = FileStatus::New2(*length, *attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
}

::g::Uno::Time::Instant FileStatus::FileTimeEpoch_;

// public FileStatus() [instance] :18
void FileStatus::ctor_()
{
    ::g::Uno::Time::ZonedDateTime* defaultTime = ::g::Uno::Time::ZonedDateTime::New1(FileStatus::FileTimeEpoch_, ::g::Uno::Time::DateTimeZone::Utc());
    _creationTimeUtc = defaultTime;
    _lastWriteTimeUtc = defaultTime;
    _lastAccessTimeUtc = defaultTime;
    _exists = false;
    _attributes = -1;
}

// public FileStatus(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) [instance] :34
void FileStatus::ctor_1(int64_t length, int attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    _length = length;
    _attributes = attributes;
    _creationTimeUtc = creationTimeUtc;
    _lastWriteTimeUtc = lastWriteTimeUtc;
    _lastAccessTimeUtc = lastAccessTimeUtc;
    _exists = true;
}

// public Fuse.FileSystem.FileAttributes get_Attributes() [instance] :55
int FileStatus::Attributes()
{
    return _attributes;
}

// public bool get_Exists() [instance] :53
bool FileStatus::Exists()
{
    return _exists;
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() [instance] :57
::g::Uno::Time::ZonedDateTime* FileStatus::LastAccessTimeUtc()
{
    return _lastAccessTimeUtc;
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() [instance] :59
::g::Uno::Time::ZonedDateTime* FileStatus::LastWriteTimeUtc()
{
    return _lastWriteTimeUtc;
}

// public long get_Length() [instance] :61
int64_t FileStatus::Length()
{
    return _length;
}

// public FileStatus New() [static] :18
FileStatus* FileStatus::New1()
{
    FileStatus* obj1 = (FileStatus*)uNew(FileStatus_typeof());
    obj1->ctor_();
    return obj1;
}

// public FileStatus New(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) [static] :34
FileStatus* FileStatus::New2(int64_t length, int attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    FileStatus* obj2 = (FileStatus*)uNew(FileStatus_typeof());
    obj2->ctor_1(length, attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Uno/IO/FileStatusHelpers.Unix.uno
// -------------------------------------------------------------------------------------

// internal static extern class FileStatusHelpers :11
// {
static void FileStatusHelpers_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Time::DateTimeZone_typeof());
}

uClassType* FileStatusHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.FileStatusHelpers", options);
    type->fp_build_ = FileStatusHelpers_build;
    return type;
}

// public static extern Fuse.FileSystem.FileStatus GetFileStatus(string path) :19
void FileStatusHelpers__GetFileStatus_fn(uString* path, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    *__retval = FileStatusHelpers::GetFileStatus(path);
}

// private static extern Uno.Time.ZonedDateTime UnixTimeToZoned(long sec) :13
void FileStatusHelpers__UnixTimeToZoned_fn(int64_t* sec, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = FileStatusHelpers::UnixTimeToZoned(*sec);
}

// public static extern Fuse.FileSystem.FileStatus GetFileStatus(string path) [static] :19
::g::Fuse::FileSystem::FileStatus* FileStatusHelpers::GetFileStatus(uString* path)
{
    struct stat s;
    
    if (stat(uStringToXliString(path).Ptr(), &s) == -1)
        return ::g::Fuse::FileSystem::FileStatus::New1();
    
    int attributes = 0;
    
    // ReadOnly used to be mapped the following way in uno-base,
    // but until we're sure this is the correct way to do we just avoid
    // mapping the ReadOnly attribute at all.
    //
    // if (!(((s.st_mode & S_IWOTH) == S_IWOTH)
    //    || (s.st_gid == getgid() && ((s.st_mode & S_IWGRP) == S_IWGRP))
    //    || (s.st_uid == getuid() && ((s.st_mode & S_IWUSR) == S_IWUSR))))
    //    attributes |= AT{FileAttributes.ReadOnly};
    
    if (S_ISDIR(s.st_mode))
        attributes |= 16;
    
    if (S_ISCHR(s.st_mode) || S_ISBLK(s.st_mode))
        attributes |= 64;
    
    if (S_ISLNK(s.st_mode))
        attributes |= 1024;
    
    // Apparently posix stat standard doesn't define a way to get creation time,
    // so we'll just use lastWriteTime.
    // TODO: It seems like this might be possible on OS X though, in some non-posix way..
    ::g::Uno::Time::ZonedDateTime* lastWriteTime =
        FileStatusHelpers::UnixTimeToZoned(s.st_mtime);
    ::g::Uno::Time::ZonedDateTime* lastAccessTime =
        FileStatusHelpers::UnixTimeToZoned(s.st_atime);
    
    return ::g::Fuse::FileSystem::FileStatus::New2(s.st_size, attributes, lastWriteTime, lastAccessTime, lastWriteTime);
}

// private static extern Uno.Time.ZonedDateTime UnixTimeToZoned(long sec) [static] :13
::g::Uno::Time::ZonedDateTime* FileStatusHelpers::UnixTimeToZoned(int64_t sec)
{
    int64_t ticks = sec * 10000000LL;
    return ::g::Uno::Time::ZonedDateTime::New1(::g::Uno::Time::Instant__New1(ticks), ::g::Uno::Time::DateTimeZone::Utc());
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Uno/IO/FileSystemInfo.uno
// -----------------------------------------------------------------------------

// public abstract class FileSystemInfo :8
// {
static void FileSystemInfo_build(uType* type)
{
    ::STRINGS[0] = uString::Const("originalPath");
    ::TYPES[0] = ::g::Uno::Time::ZonedDateTime_typeof();
    type->SetDependencies(
        ::g::Fuse::FileSystem::FileStatusHelpers_typeof(),
        ::g::Uno::IO::Path_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(FileSystemInfo, _fullPath), 0,
        ::g::Uno::String_typeof(), offsetof(FileSystemInfo, _originalPath), 0,
        ::g::Fuse::FileSystem::FileStatus_typeof(), offsetof(FileSystemInfo, _status), 0);
}

FileSystemInfo_type* FileSystemInfo_typeof()
{
    static uSStrong<FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(FileSystemInfo);
    options.TypeSize = sizeof(FileSystemInfo_type);
    type = (FileSystemInfo_type*)uClassType::New("Fuse.FileSystem.FileSystemInfo", options);
    type->fp_build_ = FileSystemInfo_build;
    type->fp_LoadStatus = FileSystemInfo__LoadStatus_fn;
    return type;
}

// protected FileSystemInfo(string originalPath) :14
void FileSystemInfo__ctor__fn(FileSystemInfo* __this, uString* originalPath)
{
    __this->ctor_(originalPath);
}

// private static Uno.Time.ZonedDateTime ConvertTime(object time) :34
void FileSystemInfo__ConvertTime_fn(uObject* time, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = FileSystemInfo::ConvertTime(time);
}

// public bool get_Exists() :49
void FileSystemInfo__get_Exists_fn(FileSystemInfo* __this, bool* __retval)
{
    *__retval = __this->Exists();
}

// public string get_FullName() :51
void FileSystemInfo__get_FullName_fn(FileSystemInfo* __this, uString** __retval)
{
    *__retval = __this->FullName();
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() :53
void FileSystemInfo__get_LastAccessTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastAccessTimeUtc();
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() :55
void FileSystemInfo__get_LastWriteTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastWriteTimeUtc();
}

// internal virtual extern Fuse.FileSystem.FileStatus LoadStatus() :71
void FileSystemInfo__LoadStatus_fn(FileSystemInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    return *__retval = ::g::Fuse::FileSystem::FileStatusHelpers::GetFileStatus(__this->_fullPath), void();
}

// public void Refresh() :24
void FileSystemInfo__Refresh_fn(FileSystemInfo* __this)
{
    __this->Refresh();
}

// internal extern Fuse.FileSystem.FileStatus get_Status() :62
void FileSystemInfo__get_Status_fn(FileSystemInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    *__retval = __this->Status();
}

// protected FileSystemInfo(string originalPath) [instance] :14
void FileSystemInfo::ctor_(uString* originalPath)
{
    if (::g::Uno::String::op_Equality(originalPath, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"originalPath"*/]));

    _originalPath = originalPath;
    _fullPath = ::g::Uno::IO::Path::GetFullPath(_originalPath);
}

// public bool get_Exists() [instance] :49
bool FileSystemInfo::Exists()
{
    return uPtr(Status())->Exists();
}

// public string get_FullName() [instance] :51
uString* FileSystemInfo::FullName()
{
    return _fullPath;
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() [instance] :53
::g::Uno::Time::ZonedDateTime* FileSystemInfo::LastAccessTimeUtc()
{
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastAccessTimeUtc());
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() [instance] :55
::g::Uno::Time::ZonedDateTime* FileSystemInfo::LastWriteTimeUtc()
{
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastWriteTimeUtc());
}

// public void Refresh() [instance] :24
void FileSystemInfo::Refresh()
{
    _status = LoadStatus();
}

// internal extern Fuse.FileSystem.FileStatus get_Status() [instance] :62
::g::Fuse::FileSystem::FileStatus* FileSystemInfo::Status()
{
    if (_status == NULL)
        Refresh();

    return _status;
}

// private static Uno.Time.ZonedDateTime ConvertTime(object time) [static] :34
::g::Uno::Time::ZonedDateTime* FileSystemInfo::ConvertTime(uObject* time)
{
    return uCast< ::g::Uno::Time::ZonedDateTime*>(time, ::TYPES[0/*Uno.Time.ZonedDateTime*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/FileSystemModule.uno
// ------------------------------------------------------------------------

// public sealed class FileSystemModule :42
// {
static void FileSystemModule_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJS/FileSystem");
    ::STRINGS[2] = uString::Const("cacheDirectory");
    ::STRINGS[3] = uString::Const("dataDirectory");
    ::STRINGS[4] = uString::Const("iosPaths");
    ::STRINGS[5] = uString::Const("createDirectory");
    ::STRINGS[6] = uString::Const("createDirectorySync");
    ::STRINGS[7] = uString::Const("delete");
    ::STRINGS[8] = uString::Const("deleteSync");
    ::STRINGS[9] = uString::Const("exists");
    ::STRINGS[10] = uString::Const("existsSync");
    ::STRINGS[11] = uString::Const("getDirectoryInfo");
    ::STRINGS[12] = uString::Const("getDirectoryInfoSync");
    ::STRINGS[13] = uString::Const("getFileInfo");
    ::STRINGS[14] = uString::Const("getFileInfoSync");
    ::STRINGS[15] = uString::Const("listDirectories");
    ::STRINGS[16] = uString::Const("listDirectoriesSync");
    ::STRINGS[17] = uString::Const("listEntries");
    ::STRINGS[18] = uString::Const("listEntriesSync");
    ::STRINGS[19] = uString::Const("listFiles");
    ::STRINGS[20] = uString::Const("listFilesSync");
    ::STRINGS[21] = uString::Const("readBufferFromFile");
    ::STRINGS[22] = uString::Const("moveSync");
    ::STRINGS[23] = uString::Const("move");
    ::STRINGS[24] = uString::Const("copySync");
    ::STRINGS[25] = uString::Const("copy");
    ::STRINGS[26] = uString::Const("readBufferFromFileSync");
    ::STRINGS[27] = uString::Const("readTextFromFile");
    ::STRINGS[28] = uString::Const("readTextFromFileSync");
    ::STRINGS[29] = uString::Const("writeBufferToFile");
    ::STRINGS[30] = uString::Const("writeBufferToFileSync");
    ::STRINGS[31] = uString::Const("writeTextToFile");
    ::STRINGS[32] = uString::Const("writeTextToFileSync");
    ::STRINGS[33] = uString::Const("appendTextToFile");
    ::STRINGS[34] = uString::Const("appendTextToFileSync");
    ::STRINGS[35] = uString::Const("Second argument \"text\" is required to be a string");
    ::STRINGS[36] = uString::Const("First argument `source` has to be a valid path");
    ::STRINGS[37] = uString::Const("Second argument `destination` has to be a valid path");
    ::STRINGS[38] = uString::Const("args");
    ::STRINGS[39] = uString::Const("first argument path is required to be a string");
    ::STRINGS[40] = uString::Const("(Date Converter)");
    ::STRINGS[41] = uString::Const("new Date({0})");
    ::STRINGS[42] = uString::Const("length");
    ::STRINGS[43] = uString::Const("fullName");
    ::STRINGS[44] = uString::Const("lastWriteTime");
    ::STRINGS[45] = uString::Const("lastAccessTime");
    ::STRINGS[46] = uString::Const("Second argument \"data\" is required to be an ArrayBuffer");
    ::TYPES[1] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[6] = type->MakeMethod(2/*ToScriptingObject<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[15] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof()->Array(), NULL);
    ::TYPES[17] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof(), NULL);
    ::TYPES[18] = type->MakeMethod(1/*ToScriptingArray<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[20] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[21] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[22] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[23] = type->MakeMethod(0/*GetArg<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[25] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*ToArray<object>*/, uObject_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[28] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[29] = uObject_typeof()->Array();
    ::TYPES[30] = ::g::Fuse::FileSystem::FileInfo_typeof();
    ::TYPES[31] = ::g::Uno::Collections::Dictionary__Enumerator_typeof();
    ::TYPES[32] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[33] = type->MakeMethod(0/*GetArg<byte[]>*/, ::g::Uno::Byte_typeof()->Array(), NULL);
    type->SetDependencies(
        ::g::Fuse::FileSystem::PathTools_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(3/*OfType<T, object>*/, type->MethodTypes[1]->U(0), uObject_typeof(), NULL),
        ::TYPES[28/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[31/*Uno.Collections.Dictionary`2.Enumerator*/]->MakeType(::TYPES[25/*string*/], type->MethodTypes[2]->U(0), NULL),
        ::TYPES[32/*Uno.Collections.KeyValuePair`2*/]->MakeType(::TYPES[25/*string*/], type->MethodTypes[2]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::FileSystem::FileSystemOperations_typeof(), offsetof(FileSystemModule, _operations), 0,
        type, (uintptr_t)&FileSystemModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* FileSystemModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 3;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(FileSystemModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.FileSystem.FileSystemModule", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 2,0);
    type->MethodTypes[2] = type->NewMethodType(1, 2,0);
    type->fp_build_ = FileSystemModule_build;
    type->fp_ctor_ = (void*)FileSystemModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileSystemModule() :47
void FileSystemModule__ctor_2_fn(FileSystemModule* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(object[] args) :118
void FileSystemModule__AppendTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AppendTextToFile(args);
}

// private object AppendTextToFileSync(Fuse.Scripting.Context context, object[] args) :139
void FileSystemModule__AppendTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->AppendTextToFileSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Copy(object[] args) :678
void FileSystemModule__Copy_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Copy(args);
}

// private object CopySync(Fuse.Scripting.Context context, object[] args) :699
void FileSystemModule__CopySync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CopySync(context, args);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) :166
void FileSystemModule__CreateDirectory_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(args);
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) :184
void FileSystemModule__CreateDirectorySync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateDirectorySync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) :210
void FileSystemModule__Delete_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(args);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) :230
void FileSystemModule__DeleteSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DeleteSync(context, args);
}

// private Uno.Threading.Future<bool> Exists(object[] args) :256
void FileSystemModule__Exists_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(args);
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) :275
void FileSystemModule__ExistsSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ExistsSync(context, args);
}

// private static T GetArg<T>(object[] args, int index, string error) :901
void FileSystemModule__GetArg_fn(uType* __type, uArray* args, int* index, uString* error, uObject** __retval)
{
    *__retval = FileSystemModule::GetArg(__type, args, *index, error);
}

// private string GetCacheDirectory() :311
void FileSystemModule__GetCacheDirectory_fn(FileSystemModule* __this, uString** __retval)
{
    *__retval = __this->GetCacheDirectory();
}

// private string GetDataDirectory() :328
void FileSystemModule__GetDataDirectory_fn(FileSystemModule* __this, uString** __retval)
{
    *__retval = __this->GetDataDirectory();
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(object[] args) :360
void FileSystemModule__GetDirectoryInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetDirectoryInfo(args);
}

// private object GetDirectoryInfoSync(Fuse.Scripting.Context context, object[] args) :387
void FileSystemModule__GetDirectoryInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetDirectoryInfoSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(object[] args) :420
void FileSystemModule__GetFileInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetFileInfo(args);
}

// private object GetFileInfoSync(Fuse.Scripting.Context context, object[] args) :447
void FileSystemModule__GetFileInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetFileInfoSync(context, args);
}

// private Uno.Collections.Dictionary<string, string> GetIosPaths() :463
void FileSystemModule__GetIosPaths_fn(FileSystemModule* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->GetIosPaths();
}

// private static string GetPathFromArgs(object[] args) :916
void FileSystemModule__GetPathFromArgs_fn(uArray* args, uString** __retval)
{
    *__retval = FileSystemModule::GetPathFromArgs(args);
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) :494
void FileSystemModule__ListDirectories_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(args);
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) :514
void FileSystemModule__ListDirectoriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListDirectoriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) :538
void FileSystemModule__ListEntries_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(args);
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) :558
void FileSystemModule__ListEntriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListEntriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) :582
void FileSystemModule__ListFiles_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(args);
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) :602
void FileSystemModule__ListFilesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListFilesSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(object[] args) :628
void FileSystemModule__Move_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Move(args);
}

// private object MoveSync(Fuse.Scripting.Context context, object[] args) :649
void FileSystemModule__MoveSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->MoveSync(context, args);
}

// public FileSystemModule New() :47
void FileSystemModule__New2_fn(FileSystemModule** __retval)
{
    *__retval = FileSystemModule::New2();
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) :726
void FileSystemModule__ReadBufferFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(args);
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) :745
void FileSystemModule__ReadBufferFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(context, args);
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) :769
void FileSystemModule__ReadTextFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(args);
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) :789
void FileSystemModule__ReadTextFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadTextFromFileSync(context, args);
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) :930
void FileSystemModule__ToScriptingArray_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = FileSystemModule::ToScriptingArray(__type, context, sourceArray);
}

// private static object ToScriptingDate(Fuse.Scripting.Context context, Uno.Time.ZonedDateTime time) :953
void FileSystemModule__ToScriptingDate_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time, uObject** __retval)
{
    *__retval = FileSystemModule::ToScriptingDate(context, time);
}

// private static Fuse.Scripting.Object ToScriptingObject(Fuse.Scripting.Context context, Fuse.FileSystem.FileSystemInfo info) :937
void FileSystemModule__ToScriptingObject_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::FileSystem::FileSystemInfo* info, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = FileSystemModule::ToScriptingObject(context, info);
}

// private static Fuse.Scripting.Object ToScriptingObject<T>(Fuse.Scripting.Context context, Uno.Collections.Dictionary<string, T> dict) :961
void FileSystemModule__ToScriptingObject1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = FileSystemModule::ToScriptingObject1(__type, context, dict);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) :818
void FileSystemModule__WriteBufferToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(args);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) :843
void FileSystemModule__WriteBufferToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteBufferToFileSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) :871
void FileSystemModule__WriteTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(args);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) :892
void FileSystemModule__WriteTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteTextToFileSync(context, args);
}

uSStrong<FileSystemModule*> FileSystemModule::_instance_;

// public FileSystemModule() [instance] :47
void FileSystemModule::ctor_2()
{
    _operations = ::g::Fuse::FileSystem::FileSystemOperations::New1();
    ctor_1();

    if (FileSystemModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(FileSystemModule::_instance_ = this, ::STRINGS[1/*"FuseJS/File...*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[1/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[2/*"cacheDirect...*/], uDelegate::New(::TYPES[2/*Uno.Func<string>*/], (void*)FileSystemModule__GetCacheDirectory_fn, this), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[1/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[3/*"dataDirectory"*/], uDelegate::New(::TYPES[2/*Uno.Func<string>*/], (void*)FileSystemModule__GetDataDirectory_fn, this), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[3/*Fuse.Scripting.NativeProperty<Uno.Collections.Dictionary<string, string>, Fuse.Scripting.Object>*/], ::STRINGS[4/*"iosPaths"*/], uDelegate::New(::TYPES[4/*Uno.Func<Uno.Collections.Dictionary<string, string>>*/], (void*)FileSystemModule__GetIosPaths_fn, this), NULL, uDelegate::New(::TYPES[5/*Fuse.Scripting.ValueConverter<Uno.Collections.Dictionary<string, string>, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject1_fn, NULL, ::TYPES[6/*Fuse.FileSystem.FileSystemModule.ToScriptingObject<string>*/])));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[5/*"createDirec...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__CreateDirectory_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"createDirec...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__CreateDirectorySync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[7/*"delete"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Delete_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"deleteSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__DeleteSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[10/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[9/*"exists"*/], uDelegate::New(::TYPES[11/*Fuse.Scripting.FutureFactory<bool>*/], (void*)FileSystemModule__Exists_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[10/*"existsSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ExistsSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[12/*Fuse.Scripting.NativePromise<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], ::STRINGS[11/*"getDirector...*/], uDelegate::New(::TYPES[13/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemModule__GetDirectoryInfo_fn, this), uDelegate::New(::TYPES[14/*Fuse.Scripting.ResultConverter<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[12/*"getDirector...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__GetDirectoryInfoSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[12/*Fuse.Scripting.NativePromise<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], ::STRINGS[13/*"getFileInfo"*/], uDelegate::New(::TYPES[13/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemModule__GetFileInfo_fn, this), uDelegate::New(::TYPES[14/*Fuse.Scripting.ResultConverter<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[14/*"getFileInfo...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__GetFileInfoSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[15/*"listDirecto...*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListDirectories_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[16/*"listDirecto...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListDirectoriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[17/*"listEntries"*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListEntries_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[18/*"listEntries...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListEntriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[19/*"listFiles"*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListFiles_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[20/*"listFilesSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListFilesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[19/*Fuse.Scripting.NativePromise<byte[], Fuse.Scripting.Object>*/], ::STRINGS[21/*"readBufferF...*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.FutureFactory<byte[]>*/], (void*)FileSystemModule__ReadBufferFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[22/*"moveSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__MoveSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[23/*"move"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Move_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[24/*"copySync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__CopySync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[25/*"copy"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Copy_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[26/*"readBufferF...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadBufferFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[21/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[27/*"readTextFro...*/], uDelegate::New(::TYPES[22/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileSystemModule__ReadTextFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[28/*"readTextFro...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadTextFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[29/*"writeBuffer...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteBufferToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[30/*"writeBuffer...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteBufferToFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[31/*"writeTextTo...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteTextToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[32/*"writeTextTo...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteTextToFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[33/*"appendTextT...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__AppendTextToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[34/*"appendTextT...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__AppendTextToFileSync_fn, this)));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(object[] args) [instance] :118
::g::Uno::Threading::Future1* FileSystemModule::AppendTextToFile(uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[35/*"Second argu...*/]);
    return uPtr(_operations)->AppendTextToFile(path, text);
}

// private object AppendTextToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :139
uObject* FileSystemModule::AppendTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[35/*"Second argu...*/]);
    uPtr(_operations)->AppendTextToFileSync(path, text);
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Copy(object[] args) [instance] :678
::g::Uno::Threading::Future1* FileSystemModule::Copy(uArray* args)
{
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[36/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    return uPtr(_operations)->Copy(source, destination);
}

// private object CopySync(Fuse.Scripting.Context context, object[] args) [instance] :699
uObject* FileSystemModule::CopySync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[36/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    uPtr(_operations)->CopySync(source, destination);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) [instance] :166
::g::Uno::Threading::Future1* FileSystemModule::CreateDirectory(uArray* args)
{
    return uPtr(_operations)->CreateDirectory(FileSystemModule::GetPathFromArgs(args));
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) [instance] :184
uObject* FileSystemModule::CreateDirectorySync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uPtr(_operations)->CreateDirectorySync(FileSystemModule::GetPathFromArgs(args));
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) [instance] :210
::g::Uno::Threading::Future1* FileSystemModule::Delete(uArray* args)
{
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[24/*bool*/])) ? uUnbox<bool>(::TYPES[24/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    return uPtr(_operations)->Delete(FileSystemModule::GetPathFromArgs(args), recursive);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) [instance] :230
uObject* FileSystemModule::DeleteSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[24/*bool*/])) ? uUnbox<bool>(::TYPES[24/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    uPtr(_operations)->DeleteSync(FileSystemModule::GetPathFromArgs(args), recursive);
    return NULL;
}

// private Uno.Threading.Future<bool> Exists(object[] args) [instance] :256
::g::Uno::Threading::Future1* FileSystemModule::Exists(uArray* args)
{
    return uPtr(_operations)->Exists(FileSystemModule::GetPathFromArgs(args));
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) [instance] :275
uObject* FileSystemModule::ExistsSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return uBox(::TYPES[24/*bool*/], uPtr(_operations)->ExistsSync(FileSystemModule::GetPathFromArgs(args)));
}

// private string GetCacheDirectory() [instance] :311
uString* FileSystemModule::GetCacheDirectory()
{
    return ::g::Fuse::FileSystem::UnifiedPaths::GetCacheDirectory();
}

// private string GetDataDirectory() [instance] :328
uString* FileSystemModule::GetDataDirectory()
{
    return ::g::Fuse::FileSystem::UnifiedPaths::GetDataDirectory();
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(object[] args) [instance] :360
::g::Uno::Threading::Future1* FileSystemModule::GetDirectoryInfo(uArray* args)
{
    return uPtr(_operations)->GetDirectoryInfo(FileSystemModule::GetPathFromArgs(args));
}

// private object GetDirectoryInfoSync(Fuse.Scripting.Context context, object[] args) [instance] :387
uObject* FileSystemModule::GetDirectoryInfoSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingObject(context, uPtr(_operations)->GetDirectoryInfoSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(object[] args) [instance] :420
::g::Uno::Threading::Future1* FileSystemModule::GetFileInfo(uArray* args)
{
    return uPtr(_operations)->GetFileInfo(FileSystemModule::GetPathFromArgs(args));
}

// private object GetFileInfoSync(Fuse.Scripting.Context context, object[] args) [instance] :447
uObject* FileSystemModule::GetFileInfoSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingObject(context, uPtr(_operations)->GetFileInfoSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Collections.Dictionary<string, string> GetIosPaths() [instance] :463
::g::Uno::Collections::Dictionary* FileSystemModule::GetIosPaths()
{
    return ::g::Fuse::FileSystem::IosPaths::GetPathDictionary();
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) [instance] :494
::g::Uno::Threading::Future1* FileSystemModule::ListDirectories(uArray* args)
{
    return uPtr(_operations)->ListDirectories(FileSystemModule::GetPathFromArgs(args));
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) [instance] :514
uObject* FileSystemModule::ListDirectoriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingArray(::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListDirectoriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) [instance] :538
::g::Uno::Threading::Future1* FileSystemModule::ListEntries(uArray* args)
{
    return uPtr(_operations)->ListEntries(FileSystemModule::GetPathFromArgs(args));
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) [instance] :558
uObject* FileSystemModule::ListEntriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingArray(::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListEntriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) [instance] :582
::g::Uno::Threading::Future1* FileSystemModule::ListFiles(uArray* args)
{
    return uPtr(_operations)->ListFiles(FileSystemModule::GetPathFromArgs(args));
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) [instance] :602
uObject* FileSystemModule::ListFilesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingArray(::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListFilesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(object[] args) [instance] :628
::g::Uno::Threading::Future1* FileSystemModule::Move(uArray* args)
{
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[36/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    return uPtr(_operations)->Move(source, destination);
}

// private object MoveSync(Fuse.Scripting.Context context, object[] args) [instance] :649
uObject* FileSystemModule::MoveSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[36/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    uPtr(_operations)->MoveSync(source, destination);
    return NULL;
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) [instance] :726
::g::Uno::Threading::Future1* FileSystemModule::ReadBufferFromFile(uArray* args)
{
    return uPtr(_operations)->ReadBufferFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :745
uObject* FileSystemModule::ReadBufferFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return uPtr(_operations)->ReadBufferFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) [instance] :769
::g::Uno::Threading::Future1* FileSystemModule::ReadTextFromFile(uArray* args)
{
    return uPtr(_operations)->ReadTextFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :789
uObject* FileSystemModule::ReadTextFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return uPtr(_operations)->ReadTextFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) [instance] :818
::g::Uno::Threading::Future1* FileSystemModule::WriteBufferToFile(uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[33/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[46/*"Second argu...*/]);
    return uPtr(_operations)->WriteBufferToFile(path, data);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :843
uObject* FileSystemModule::WriteBufferToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[33/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[46/*"Second argu...*/]);
    uPtr(_operations)->WriteBufferToFileSync(path, data);
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) [instance] :871
::g::Uno::Threading::Future1* FileSystemModule::WriteTextToFile(uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[35/*"Second argu...*/]);
    return uPtr(_operations)->WriteTextToFile(path, text);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :892
uObject* FileSystemModule::WriteTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[35/*"Second argu...*/]);
    uPtr(_operations)->WriteTextToFileSync(path, text);
    return NULL;
}

// private static T GetArg<T>(object[] args, int index, string error) [static] :901
uObject* FileSystemModule::GetArg(uType* __type, uArray* args, int index, uString* error)
{
    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[38/*"args"*/]));

    uObject* val = (uPtr(args)->Length() > index) ? uAs<uObject*>(uPtr(args)->Strong<uObject*>(index), __type->U(0)) : NULL;

    if (val == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(error));

    return val;
}

// private static string GetPathFromArgs(object[] args) [static] :916
uString* FileSystemModule::GetPathFromArgs(uArray* args)
{
    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[38/*"args"*/]));

    uString* filename = (uPtr(args)->Length() > 0) ? uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[25/*string*/]) : NULL;

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[39/*"first argum...*/]));

    return filename;
}

// public FileSystemModule New() [static] :47
FileSystemModule* FileSystemModule::New2()
{
    FileSystemModule* obj1 = (FileSystemModule*)uNew(FileSystemModule_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) [static] :930
::g::Fuse::Scripting::Array* FileSystemModule::ToScriptingArray(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.OfType<T, object>*/),
        __type->Precalced(1/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uArray* convertedArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[26/*Uno.Collections.EnumerableExtensions.ToArray<object>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OfType(__types[0], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[1], sourceArray))));
    return uPtr(context)->NewArray(convertedArray);
}

// private static object ToScriptingDate(Fuse.Scripting.Context context, Uno.Time.ZonedDateTime time) [static] :953
uObject* FileSystemModule::ToScriptingDate(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time)
{
    int64_t msSinceUnixEpoch = ::g::Uno::Time::Instant__op_Subtraction1(uPtr(time)->ToInstant(), ::g::Uno::Time::Constants::UnixEpoch()).Ticks() / 10000LL;
    return uPtr(context)->Evaluate(::STRINGS[40/*"(Date Conve...*/], ::g::Uno::String::Format(::STRINGS[41/*"new Date({0})"*/], uArray::Init<uObject*>(::TYPES[29/*object[]*/], 1, uBox<int64_t>(::g::Uno::Long_typeof(), msSinceUnixEpoch))));
}

// private static Fuse.Scripting.Object ToScriptingObject(Fuse.Scripting.Context context, Fuse.FileSystem.FileSystemInfo info) [static] :937
::g::Fuse::Scripting::Object* FileSystemModule::ToScriptingObject(::g::Fuse::Scripting::Context* context, ::g::Fuse::FileSystem::FileSystemInfo* info)
{
    ::g::Fuse::Scripting::Object* jsobj = uPtr(context)->NewObject();
    ::g::Fuse::FileSystem::FileInfo* fileInfo = uAs< ::g::Fuse::FileSystem::FileInfo*>(info, ::TYPES[30/*Fuse.FileSystem.FileInfo*/]);

    if (fileInfo != NULL)
        uPtr(jsobj)->Item(::STRINGS[42/*"length"*/], uBox(::g::Uno::Double_typeof(), (double)uPtr(fileInfo)->Length()));

    uPtr(jsobj)->Item(::STRINGS[9/*"exists"*/], uBox(::TYPES[24/*bool*/], uPtr(info)->Exists()));
    jsobj->Item(::STRINGS[43/*"fullName"*/], ::g::Fuse::FileSystem::PathTools::NormalizePath(info->FullName()));
    jsobj->Item(::STRINGS[44/*"lastWriteTime"*/], FileSystemModule::ToScriptingDate(context, info->LastWriteTimeUtc()));
    jsobj->Item(::STRINGS[45/*"lastAccessT...*/], FileSystemModule::ToScriptingDate(context, info->LastAccessTimeUtc()));
    return jsobj;
}

// private static Fuse.Scripting.Object ToScriptingObject<T>(Fuse.Scripting.Context context, Uno.Collections.Dictionary<string, T> dict) [static] :961
::g::Fuse::Scripting::Object* FileSystemModule::ToScriptingObject1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<string, T>.Enumerator*/),
        __type->Precalced(1/*Uno.Collections.KeyValuePair<string, T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret6(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT enum1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT kvp(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret3;
    uString* ret5;
    ::g::Fuse::Scripting::Object* jsobj = uPtr(context)->NewObject();
    enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(dict), &ret2), ret2);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Collections::Dictionary__Enumerator__Dispose_fn(&enum1, __types[0]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while ((::g::Uno::Collections::Dictionary__Enumerator__MoveNext_fn(&enum1, __types[0], &ret3), ret3))
        {
            kvp = (::g::Uno::Collections::Dictionary__Enumerator__get_Current_fn(&enum1, __types[0], &ret4), ret4);
            uPtr(jsobj)->Item((::g::Uno::Collections::KeyValuePair__get_Key_fn(&kvp, __types[1], &ret5), ret5), uBoxPtr(__type->U(0), (::g::Uno::Collections::KeyValuePair__get_Value_fn(&kvp, __types[1], &ret6), ret6)));
        }
    }

    return jsobj;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/FileSystemOperations.uno
// ----------------------------------------------------------------------------

// internal sealed class FileSystemOperations :8
// {
static void FileSystemOperations_build(uType* type)
{
    type->MethodTypes[0]->SetPrecalc(
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*RunTask<TResult>*/, type->MethodTypes[1]->U(1), NULL),
        ::g::Uno::Func_typeof()->MakeType(type->MethodTypes[1]->U(1), NULL),
        FileSystemOperations__Closure_typeof()->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        type->MakeMethod(0/*RunTask<TResult>*/, type->MethodTypes[2]->U(2), NULL),
        ::g::Uno::Func_typeof()->MakeType(type->MethodTypes[2]->U(2), NULL),
        FileSystemOperations__Closure1_typeof()->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), type->MethodTypes[2]->U(2), NULL));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(FileSystemOperations, _dispatcher), 0);
}

uType* FileSystemOperations_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 3;
    options.ObjectSize = sizeof(FileSystemOperations);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(2, 3,0);
    type->MethodTypes[2] = type->NewMethodType(3, 3,0);
    type->fp_build_ = FileSystemOperations_build;
    type->fp_ctor_ = (void*)FileSystemOperations__New1_fn;
    return type;
}

// public FileSystemOperations() :13
void FileSystemOperations__ctor__fn(FileSystemOperations* __this)
{
    __this->ctor_();
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) :16
void FileSystemOperations__ctor_1_fn(FileSystemOperations* __this, uObject* dispatcher)
{
    __this->ctor_1(dispatcher);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(string path, string text) :22
void FileSystemOperations__AppendTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AppendTextToFile(path, text);
}

// public Fuse.FileSystem.Nothing AppendTextToFileSync(string path, string text) :28
void FileSystemOperations__AppendTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->AppendTextToFileSync(path, text);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Copy(string source, string destination) :155
void FileSystemOperations__Copy_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Copy(source, destination);
}

// private void CopyDirectory(string source, string destination) :170
void FileSystemOperations__CopyDirectory_fn(FileSystemOperations* __this, uString* source, uString* destination)
{
    __this->CopyDirectory(source, destination);
}

// public Fuse.FileSystem.Nothing CopySync(string source, string destination) :161
void FileSystemOperations__CopySync_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->CopySync(source, destination);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) :35
void FileSystemOperations__CreateDirectory_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(path);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) :41
void FileSystemOperations__CreateDirectorySync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->CreateDirectorySync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) :48
void FileSystemOperations__Delete_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(path, *recursive);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) :54
void FileSystemOperations__DeleteSync_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->DeleteSync(path, *recursive);
}

// public Uno.Threading.Future<bool> Exists(string path) :65
void FileSystemOperations__Exists_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(path);
}

// public bool ExistsSync(string path) :71
void FileSystemOperations__ExistsSync_fn(FileSystemOperations* __this, uString* path, bool* __retval)
{
    *__retval = __this->ExistsSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(string path) :79
void FileSystemOperations__GetDirectoryInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetDirectoryInfo(path);
}

// public Fuse.FileSystem.FileSystemInfo GetDirectoryInfoSync(string path) :85
void FileSystemOperations__GetDirectoryInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::FileSystemInfo** __retval)
{
    *__retval = __this->GetDirectoryInfoSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(string path) :91
void FileSystemOperations__GetFileInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetFileInfo(path);
}

// public Fuse.FileSystem.FileSystemInfo GetFileInfoSync(string path) :97
void FileSystemOperations__GetFileInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::FileSystemInfo** __retval)
{
    *__retval = __this->GetFileInfoSync(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) :103
void FileSystemOperations__ListDirectories_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(path);
}

// public string[] ListDirectoriesSync(string path) :109
void FileSystemOperations__ListDirectoriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListDirectoriesSync(path);
}

// public Uno.Threading.Future<string[]> ListEntries(string path) :115
void FileSystemOperations__ListEntries_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(path);
}

// public string[] ListEntriesSync(string path) :121
void FileSystemOperations__ListEntriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListEntriesSync(path);
}

// public Uno.Threading.Future<string[]> ListFiles(string path) :127
void FileSystemOperations__ListFiles_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(path);
}

// public string[] ListFilesSync(string path) :133
void FileSystemOperations__ListFilesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListFilesSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(string source, string destination) :139
void FileSystemOperations__Move_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Move(source, destination);
}

// public Fuse.FileSystem.Nothing MoveSync(string source, string destination) :145
void FileSystemOperations__MoveSync_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->MoveSync(source, destination);
}

// public FileSystemOperations New() :13
void FileSystemOperations__New1_fn(FileSystemOperations** __retval)
{
    *__retval = FileSystemOperations::New1();
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) :190
void FileSystemOperations__ReadBufferFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(path);
}

// public byte[] ReadBufferFromFileSync(string path) :196
void FileSystemOperations__ReadBufferFromFileSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) :203
void FileSystemOperations__ReadTextFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(path);
}

// public string ReadTextFromFileSync(string path) :209
void FileSystemOperations__ReadTextFromFileSync_fn(FileSystemOperations* __this, uString* path, uString** __retval)
{
    *__retval = __this->ReadTextFromFileSync(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) :242
void FileSystemOperations__RunTask_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->RunTask(__type, del);
}

// private Uno.Threading.Future<TResult> RunTask<T1, TResult>(Uno.Func<T1, TResult> del, T1 arg1) :250
void FileSystemOperations__RunTask1_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FileSystem.FileSystemOperations.RunTask<TResult>*/),
        __type->Precalced(1/*Uno.Func<TResult>*/),
        __type->Precalced(2/*Fuse.FileSystem.FileSystemOperations.Closure<T1, TResult>*/),
    };
    FileSystemOperations__Closure* ret19;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[0], uDelegate::New(__types[1], (void*)FileSystemOperations__Closure__Invoke_fn, (FileSystemOperations__Closure__New1_fn(__types[2], del, arg1, &ret19), ret19))), void();
}

// private Uno.Threading.Future<TResult> RunTask<T1, T2, TResult>(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :256
void FileSystemOperations__RunTask2_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, void* arg2, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FileSystem.FileSystemOperations.RunTask<TResult>*/),
        __type->Precalced(1/*Uno.Func<TResult>*/),
        __type->Precalced(2/*Fuse.FileSystem.FileSystemOperations.Closure<T1, T2, TResult>*/),
    };
    FileSystemOperations__Closure1* ret20;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[0], uDelegate::New(__types[1], (void*)FileSystemOperations__Closure1__Invoke_fn, (FileSystemOperations__Closure1__New1_fn(__types[2], del, arg1, arg2, &ret20), ret20))), void();
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) :216
void FileSystemOperations__WriteBufferToFile_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(path, data);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) :222
void FileSystemOperations__WriteBufferToFileSync_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteBufferToFileSync(path, data);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) :229
void FileSystemOperations__WriteTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(path, text);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) :235
void FileSystemOperations__WriteTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteTextToFileSync(path, text);
}

// public FileSystemOperations() [instance] :13
void FileSystemOperations::ctor_()
{
    ctor_1(NULL);
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) [instance] :16
void FileSystemOperations::ctor_1(uObject* dispatcher)
{
    _dispatcher = dispatcher;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(string path, string text) [instance] :22
::g::Uno::Threading::Future1* FileSystemOperations::AppendTextToFile(uString* path, uString* text)
{
    ::g::Uno::Threading::Future1* ret6;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__AppendTextToFileSync_fn, this), path, text, &ret6), ret6);
}

// public Fuse.FileSystem.Nothing AppendTextToFileSync(string path, string text) [instance] :28
::g::Fuse::FileSystem::Nothing* FileSystemOperations::AppendTextToFileSync(uString* path, uString* text)
{
    ::g::Uno::IO::File::AppendAllText(path, text);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Copy(string source, string destination) [instance] :155
::g::Uno::Threading::Future1* FileSystemOperations::Copy(uString* source, uString* destination)
{
    ::g::Uno::Threading::Future1* ret7;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__CopySync_fn, this), source, destination, &ret7), ret7);
}

// private void CopyDirectory(string source, string destination) [instance] :170
void FileSystemOperations::CopyDirectory(uString* source, uString* destination)
{
    if (!::g::Uno::IO::Directory::Exists(destination))
        ::g::Uno::IO::Directory::CreateDirectory(destination);

    uArray* files = ListEntriesSync(source);

    for (int index2 = 0, length3 = uPtr(files)->Length(); index2 < length3; ++index2)
    {
        uString* file = uPtr(files)->Strong<uString*>(index2);

        if (::g::Uno::IO::Directory::Exists(file))
        {
            CopyDirectory(file, destination);
            continue;
        }

        uString* temppath = ::g::Uno::String::Replace1(uPtr(file), source, destination);
        ::g::Uno::IO::File::Copy(file, temppath);
    }
}

// public Fuse.FileSystem.Nothing CopySync(string source, string destination) [instance] :161
::g::Fuse::FileSystem::Nothing* FileSystemOperations::CopySync(uString* source, uString* destination)
{
    if (::g::Uno::IO::Directory::Exists(source))
        CopyDirectory(source, destination);
    else
        ::g::Uno::IO::File::Copy(source, destination);

    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) [instance] :35
::g::Uno::Threading::Future1* FileSystemOperations::CreateDirectory(uString* path)
{
    ::g::Uno::Threading::Future1* ret8;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__CreateDirectorySync_fn, this), path, &ret8), ret8);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) [instance] :41
::g::Fuse::FileSystem::Nothing* FileSystemOperations::CreateDirectorySync(uString* path)
{
    ::g::Uno::IO::Directory::CreateDirectory(path);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) [instance] :48
::g::Uno::Threading::Future1* FileSystemOperations::Delete(uString* path, bool recursive)
{
    ::g::Uno::Threading::Future1* ret9;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, bool, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[24/*bool*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[24/*bool*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__DeleteSync_fn, this), path, uCRef(recursive), &ret9), ret9);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) [instance] :54
::g::Fuse::FileSystem::Nothing* FileSystemOperations::DeleteSync(uString* path, bool recursive)
{
    if (::g::Uno::IO::Directory::Exists(path))
        ::g::Uno::IO::Directory::Delete(path, recursive);
    else
        ::g::Uno::IO::File::Delete(path);

    return NULL;
}

// public Uno.Threading.Future<bool> Exists(string path) [instance] :65
::g::Uno::Threading::Future1* FileSystemOperations::Exists(uString* path)
{
    ::g::Uno::Threading::Future1* ret10;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, bool>*/, ::TYPES[25/*string*/], ::TYPES[24/*bool*/], NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[24/*bool*/], NULL), (void*)FileSystemOperations__ExistsSync_fn, this), path, &ret10), ret10);
}

// public bool ExistsSync(string path) [instance] :71
bool FileSystemOperations::ExistsSync(uString* path)
{
    return ::g::Uno::IO::File::Exists(path) || ::g::Uno::IO::Directory::Exists(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(string path) [instance] :79
::g::Uno::Threading::Future1* FileSystemOperations::GetDirectoryInfo(uString* path)
{
    ::g::Uno::Threading::Future1* ret11;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, Fuse.FileSystem.FileSystemInfo>*/, ::TYPES[25/*string*/], ::g::Fuse::FileSystem::FileSystemInfo_typeof(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::g::Fuse::FileSystem::FileSystemInfo_typeof(), NULL), (void*)FileSystemOperations__GetDirectoryInfoSync_fn, this), path, &ret11), ret11);
}

// public Fuse.FileSystem.FileSystemInfo GetDirectoryInfoSync(string path) [instance] :85
::g::Fuse::FileSystem::FileSystemInfo* FileSystemOperations::GetDirectoryInfoSync(uString* path)
{
    return ::g::Fuse::FileSystem::DirectoryInfo::New1(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(string path) [instance] :91
::g::Uno::Threading::Future1* FileSystemOperations::GetFileInfo(uString* path)
{
    ::g::Uno::Threading::Future1* ret12;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, Fuse.FileSystem.FileSystemInfo>*/, ::TYPES[25/*string*/], ::g::Fuse::FileSystem::FileSystemInfo_typeof(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::g::Fuse::FileSystem::FileSystemInfo_typeof(), NULL), (void*)FileSystemOperations__GetFileInfoSync_fn, this), path, &ret12), ret12);
}

// public Fuse.FileSystem.FileSystemInfo GetFileInfoSync(string path) [instance] :97
::g::Fuse::FileSystem::FileSystemInfo* FileSystemOperations::GetFileInfoSync(uString* path)
{
    return ::g::Fuse::FileSystem::FileInfo::New1(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) [instance] :103
::g::Uno::Threading::Future1* FileSystemOperations::ListDirectories(uString* path)
{
    ::g::Uno::Threading::Future1* ret13;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, string[]>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), (void*)FileSystemOperations__ListDirectoriesSync_fn, this), path, &ret13), ret13);
}

// public string[] ListDirectoriesSync(string path) [instance] :109
uArray* FileSystemOperations::ListDirectoriesSync(uString* path)
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(7/*ToArray<string>*/, ::TYPES[25/*string*/], NULL), (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(5/*Select<string, string>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), ::g::Uno::IO::Directory::EnumerateDirectories(path), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListEntries(string path) [instance] :115
::g::Uno::Threading::Future1* FileSystemOperations::ListEntries(uString* path)
{
    ::g::Uno::Threading::Future1* ret14;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, string[]>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), (void*)FileSystemOperations__ListEntriesSync_fn, this), path, &ret14), ret14);
}

// public string[] ListEntriesSync(string path) [instance] :121
uArray* FileSystemOperations::ListEntriesSync(uString* path)
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(7/*ToArray<string>*/, ::TYPES[25/*string*/], NULL), (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(5/*Select<string, string>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), ::g::Uno::IO::Directory::EnumerateFileSystemEntries(path), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListFiles(string path) [instance] :127
::g::Uno::Threading::Future1* FileSystemOperations::ListFiles(uString* path)
{
    ::g::Uno::Threading::Future1* ret15;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, string[]>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), (void*)FileSystemOperations__ListFilesSync_fn, this), path, &ret15), ret15);
}

// public string[] ListFilesSync(string path) [instance] :133
uArray* FileSystemOperations::ListFilesSync(uString* path)
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(7/*ToArray<string>*/, ::TYPES[25/*string*/], NULL), (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(5/*Select<string, string>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), ::g::Uno::IO::Directory::EnumerateFiles(path), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(string source, string destination) [instance] :139
::g::Uno::Threading::Future1* FileSystemOperations::Move(uString* source, uString* destination)
{
    ::g::Uno::Threading::Future1* ret16;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__MoveSync_fn, this), source, destination, &ret16), ret16);
}

// public Fuse.FileSystem.Nothing MoveSync(string source, string destination) [instance] :145
::g::Fuse::FileSystem::Nothing* FileSystemOperations::MoveSync(uString* source, uString* destination)
{
    if (::g::Uno::IO::Directory::Exists(source))
        ::g::Uno::IO::Directory::Move(source, destination);
    else
        ::g::Uno::IO::File::Move(source, destination);

    return NULL;
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) [instance] :190
::g::Uno::Threading::Future1* FileSystemOperations::ReadBufferFromFile(uString* path)
{
    ::g::Uno::Threading::Future1* ret17;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, byte[]>*/, ::TYPES[25/*string*/], ::g::Uno::Byte_typeof()->Array(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::g::Uno::Byte_typeof()->Array(), NULL), (void*)FileSystemOperations__ReadBufferFromFileSync_fn, this), path, &ret17), ret17);
}

// public byte[] ReadBufferFromFileSync(string path) [instance] :196
uArray* FileSystemOperations::ReadBufferFromFileSync(uString* path)
{
    return ::g::Uno::IO::File::ReadAllBytes(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) [instance] :203
::g::Uno::Threading::Future1* FileSystemOperations::ReadTextFromFile(uString* path)
{
    ::g::Uno::Threading::Future1* ret18;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, string>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), (void*)FileSystemOperations__ReadTextFromFileSync_fn, this), path, &ret18), ret18);
}

// public string ReadTextFromFileSync(string path) [instance] :209
uString* FileSystemOperations::ReadTextFromFileSync(uString* path)
{
    return ::g::Uno::IO::File::ReadAllText(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) [instance] :242
::g::Uno::Threading::Future1* FileSystemOperations::RunTask(uType* __type, uDelegate* del)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Promise<T>*/),
    };

    if (_dispatcher == NULL)
        return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(__types[0], del);

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(__types[0], _dispatcher, del);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) [instance] :216
::g::Uno::Threading::Future1* FileSystemOperations::WriteBufferToFile(uString* path, uArray* data)
{
    ::g::Uno::Threading::Future1* ret21;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, byte[], Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__WriteBufferToFileSync_fn, this), path, data, &ret21), ret21);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) [instance] :222
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteBufferToFileSync(uString* path, uArray* data)
{
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) [instance] :229
::g::Uno::Threading::Future1* FileSystemOperations::WriteTextToFile(uString* path, uString* text)
{
    ::g::Uno::Threading::Future1* ret22;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__WriteTextToFileSync_fn, this), path, text, &ret22), ret22);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) [instance] :235
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteTextToFileSync(uString* path, uString* text)
{
    ::g::Uno::IO::File::WriteAllText(path, text);
    return NULL;
}

// public FileSystemOperations New() [static] :13
FileSystemOperations* FileSystemOperations::New1()
{
    FileSystemOperations* obj4 = (FileSystemOperations*)uNew(FileSystemOperations_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/Nothing.uno
// ---------------------------------------------------------------

// internal sealed class Nothing :4
// {
static void Nothing_build(uType* type)
{
}

uType* Nothing_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.Nothing", options);
    type->fp_build_ = Nothing_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.FileSystem/1.3.1/PathTools.uno
// -----------------------------------------------------------------

// internal static class PathTools :6
// {
static void PathTools_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
}

uClassType* PathTools_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.PathTools", options);
    type->fp_build_ = PathTools_build;
    return type;
}

// public static string NormalizePath(string path) :8
void PathTools__NormalizePath_fn(uString* path, uString** __retval)
{
    *__retval = PathTools::NormalizePath(path);
}

// public static string NormalizePath(string path) [static] :8
uString* PathTools::NormalizePath(uString* path)
{
    if (::g::Uno::IO::Path::DirectorySeparatorChar_ == '\\')
        return ::g::Uno::String::Replace(uPtr(path), '\\', '/');

    return path;
}
// }

}}} // ::g::Fuse::FileSystem
