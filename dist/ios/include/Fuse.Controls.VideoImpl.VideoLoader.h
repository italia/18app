// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct VideoLoader;}}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal static class VideoLoader :12
// {
uClassType* VideoLoader_typeof();
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval);
void VideoLoader__Load1_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Threading::Future1** __retval);

struct VideoLoader : uObject
{
    static ::g::Uno::Threading::Future1* Load(uString* url);
    static ::g::Uno::Threading::Future1* Load1(::g::Uno::UX::FileSource* file);
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
