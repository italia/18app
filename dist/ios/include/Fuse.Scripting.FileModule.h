// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/FileModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct FileModule;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public class FileModule :19
// {
::g::Fuse::Scripting::ScriptModule_type* FileModule_typeof();
void FileModule__ctor_2_fn(FileModule* __this, ::g::Uno::UX::FileSource* fs);
void FileModule__New2_fn(::g::Uno::UX::FileSource* fs, FileModule** __retval);

struct FileModule : ::g::Fuse::Scripting::ScriptModule
{
    void ctor_2(::g::Uno::UX::FileSource* fs);
    static FileModule* New2(::g::Uno::UX::FileSource* fs);
};
// }

}}} // ::g::Fuse::Scripting
