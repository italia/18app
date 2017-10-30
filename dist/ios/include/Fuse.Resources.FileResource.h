// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Resources/FileResource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
namespace g{namespace Fuse{namespace Resources{struct FileResource;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class FileResource :7
// {
::g::Uno::UX::FileSource_type* FileResource_typeof();
void FileResource__OpenRead_fn(FileResource* __this, ::g::Uno::IO::Stream** __retval);

struct FileResource : ::g::Uno::UX::FileSource
{
    uStrong< ::g::Uno::UX::FileSource*> _file;
};
// }

}}} // ::g::Fuse::Resources
