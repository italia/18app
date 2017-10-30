// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Resources/FileImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Resources{struct FileImageSourceCache;}}}
namespace g{namespace Fuse{namespace Resources{struct FileImageSourceImpl;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct WeakReference;}}

namespace g{
namespace Fuse{
namespace Resources{

// internal static class FileImageSourceCache :11
// {
uClassType* FileImageSourceCache_typeof();
void FileImageSourceCache__GetFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Fuse::Resources::FileImageSourceImpl** __retval);

struct FileImageSourceCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _cache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _cache() { return _cache_; }

    static ::g::Fuse::Resources::FileImageSourceImpl* GetFileSource(::g::Uno::UX::FileSource* file);
};
// }

}}} // ::g::Fuse::Resources
