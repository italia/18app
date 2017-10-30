// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoDiskCache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct VideoDiskCache;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal static class VideoDiskCache :11
// {
uClassType* VideoDiskCache_typeof();
void VideoDiskCache__GetFileExtension_fn(uString* fileName, uString** __retval);
void VideoDiskCache__GetFilePath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval);
void VideoDiskCache__OnTerminating_fn(int* newState);

struct VideoDiskCache : uObject
{
    static int _fileCount_;
    static int& _fileCount() { return VideoDiskCache_typeof()->Init(), _fileCount_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _files_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _files() { return VideoDiskCache_typeof()->Init(), _files_; }

    static uString* GetFileExtension(uString* fileName);
    static uString* GetFilePath(::g::Uno::UX::FileSource* fileSource);
    static void OnTerminating(int newState);
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
