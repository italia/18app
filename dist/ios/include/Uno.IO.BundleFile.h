// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/Bundle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct Bundle;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}
namespace uBase { class Stream; }

namespace g{
namespace Uno{
namespace IO{

// public sealed class BundleFile :29
// {
uType* BundleFile_typeof();
void BundleFile__ctor__fn(BundleFile* __this, ::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath);
void BundleFile__get_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle** __retval);
void BundleFile__set_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle* value);
void BundleFile__get_BundlePath_fn(BundleFile* __this, uString** __retval);
void BundleFile__set_BundlePath_fn(BundleFile* __this, uString* value);
void BundleFile__add_Changed_fn(BundleFile* __this, uDelegate* value);
void BundleFile__remove_Changed_fn(BundleFile* __this, uDelegate* value);
void BundleFile__CppXliOpenRead_fn(BundleFile* __this, uBase::Stream** __retval);
void BundleFile__get_IsFile_fn(BundleFile* __this, bool* __retval);
void BundleFile__set_IsFile_fn(BundleFile* __this, bool* value);
void BundleFile__New1_fn(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath, BundleFile** __retval);
void BundleFile__OpenRead_fn(BundleFile* __this, ::g::Uno::IO::Stream** __retval);
void BundleFile__ReadAllBytes_fn(BundleFile* __this, uArray** __retval);
void BundleFile__ReadAllText_fn(BundleFile* __this, uString** __retval);
void BundleFile__get_SourcePath_fn(BundleFile* __this, uString** __retval);
void BundleFile__set_SourcePath_fn(BundleFile* __this, uString* value);
void BundleFile__ToString_fn(BundleFile* __this, uString** __retval);

struct BundleFile : uObject
{
    uWeak< ::g::Uno::IO::Bundle*> _Bundle;
    uStrong<uString*> _BundlePath;
    bool _IsFile;
    uStrong<uString*> _SourcePath;
    uStrong<uDelegate*> Changed1;

    void ctor_(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath);
    ::g::Uno::IO::Bundle* Bundle();
    void Bundle(::g::Uno::IO::Bundle* value);
    uString* BundlePath();
    void BundlePath(uString* value);
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    uBase::Stream* CppXliOpenRead();
    bool IsFile();
    void IsFile(bool value);
    ::g::Uno::IO::Stream* OpenRead();
    uArray* ReadAllBytes();
    uString* ReadAllText();
    uString* SourcePath();
    void SourcePath(uString* value);
    static BundleFile* New1(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath);
};
// }

}}} // ::g::Uno::IO
