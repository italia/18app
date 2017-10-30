// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/Bundle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace IO{struct Bundle;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class Bundle :232
// {
uType* Bundle_typeof();
void Bundle__ctor__fn(Bundle* __this, uString* packageName);
void Bundle__get_AllFiles_fn(uObject** __retval);
void Bundle__get_Files_fn(Bundle* __this, uObject** __retval);
void Bundle__Get_fn(uString* package, Bundle** __retval);
void Bundle__GetFile_fn(Bundle* __this, uString* filename, ::g::Uno::IO::BundleFile** __retval);
void Bundle__New1_fn(uString* packageName, Bundle** __retval);
void Bundle__ToString_fn(Bundle* __this, uString** __retval);

struct Bundle : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _allFiles_;
    static uSStrong< ::g::Uno::Collections::List*>& _allFiles() { return Bundle_typeof()->Init(), _allFiles_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _bundles_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _bundles() { return Bundle_typeof()->Init(), _bundles_; }
    uStrong< ::g::Uno::Collections::List*> _files;
    uStrong<uString*> _packageName;

    void ctor_(uString* packageName);
    uObject* Files();
    ::g::Uno::IO::BundleFile* GetFile(uString* filename);
    static Bundle* Get(uString* package);
    static Bundle* New1(uString* packageName);
    static uObject* AllFiles();
};
// }

}}} // ::g::Uno::IO
