// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/UX/FileSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class FileSource :6
// {
struct FileSource_type : uType
{
    void(*fp_OpenRead)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**);
    void(*fp_ReadAllBytes)(::g::Uno::UX::FileSource*, uArray**);
    void(*fp_ReadAllText)(::g::Uno::UX::FileSource*, uString**);
};

FileSource_type* FileSource_typeof();
void FileSource__ctor__fn(FileSource* __this, uString* name);
void FileSource__add_DataChanged_fn(FileSource* __this, uDelegate* value);
void FileSource__remove_DataChanged_fn(FileSource* __this, uDelegate* value);
void FileSource__OnDataChanged_fn(FileSource* __this);
void FileSource__op_Implicit_fn(::g::Uno::IO::BundleFile* bundleFile, FileSource** __retval);
void FileSource__ReadAllBytes_fn(FileSource* __this, uArray** __retval);
void FileSource__ReadAllText_fn(FileSource* __this, uString** __retval);

struct FileSource : uObject
{
    uStrong<uString*> Name;
    uStrong<uDelegate*> DataChanged1;

    void ctor_(uString* name);
    void add_DataChanged(uDelegate* value);
    void remove_DataChanged(uDelegate* value);
    void OnDataChanged();
    ::g::Uno::IO::Stream* OpenRead() { ::g::Uno::IO::Stream* __retval; return (((FileSource_type*)__type)->fp_OpenRead)(this, &__retval), __retval; }
    uArray* ReadAllBytes() { uArray* __retval; return (((FileSource_type*)__type)->fp_ReadAllBytes)(this, &__retval), __retval; }
    uString* ReadAllText() { uString* __retval; return (((FileSource_type*)__type)->fp_ReadAllText)(this, &__retval), __retval; }
    static FileSource* op_Implicit(::g::Uno::IO::BundleFile* bundleFile);
    static uArray* ReadAllBytes(FileSource* __this) { uArray* __retval; return FileSource__ReadAllBytes_fn(__this, &__retval), __retval; }
    static uString* ReadAllText(FileSource* __this) { uString* __retval; return FileSource__ReadAllText_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
