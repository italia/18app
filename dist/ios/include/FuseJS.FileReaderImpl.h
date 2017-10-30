// This file was generated based on /usr/local/share/uno/Packages/FuseJS/1.3.1/FileReader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace FuseJS{struct FileReaderImpl;}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace FuseJS{

// public sealed class FileReaderImpl :12
// {
::g::Fuse::Scripting::NativeModule_type* FileReaderImpl_typeof();
void FileReaderImpl__ctor_2_fn(FileReaderImpl* __this);
void FileReaderImpl__New2_fn(FileReaderImpl** __retval);
void FileReaderImpl__readAsDataURL_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void FileReaderImpl__readAsText_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);

struct FileReaderImpl : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<FileReaderImpl*> _instance_;
    static uSStrong<FileReaderImpl*>& _instance() { return _instance_; }

    void ctor_2();
    static FileReaderImpl* New2();
    static ::g::Uno::Threading::Future1* readAsDataURL(uArray* args);
    static ::g::Uno::Threading::Future1* readAsText(uArray* args);
};
// }

}} // ::g::FuseJS
