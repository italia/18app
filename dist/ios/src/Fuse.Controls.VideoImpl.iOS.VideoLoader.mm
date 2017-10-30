// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/iOS/VideoPlayer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.VideoImpl.iOS.VideoLoader.h>
#include <Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise.h>
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Fuse.Controls.VideoImpl.VideoDiskCache.h>
#include <Uno.Bool.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// internal sealed extern class VideoLoader :13
// {
static void VideoLoader_build(uType* type)
{
}

uType* VideoLoader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(VideoLoader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoLoader", options);
    type->fp_build_ = VideoLoader_build;
    return type;
}

// private static string GetBundleAbsolutePath(string bundlePath) :90
void VideoLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval)
{
    *__retval = VideoLoader::GetBundleAbsolutePath(bundlePath);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) :71
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// private static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.IO.BundleFile file) :84
void VideoLoader__Load1_fn(::g::Uno::IO::BundleFile* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource fileSource) :76
void VideoLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load2(fileSource);
}

// private static string GetBundleAbsolutePath(string bundlePath) [static] :90
uString* VideoLoader::GetBundleAbsolutePath(uString* bundlePath)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* bundlePath) -> ::NSString*
        {
            return [[[NSBundle bundleForClass:[StrongUnoObject class]] URLForResource:bundlePath withExtension:@""] absoluteString];
        } (::uObjC::NativeString(bundlePath)));
        
    }
    
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) [static] :71
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    return VideoLoader__VideoPromise::New5(url);
}

// private static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.IO.BundleFile file) [static] :84
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::IO::BundleFile* file)
{
    return VideoLoader::Load(VideoLoader::GetBundleAbsolutePath(::g::Uno::String::op_Addition2(uString::Const("data/"), uPtr(file)->BundlePath())));
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource fileSource) [static] :76
::g::Uno::Threading::Future1* VideoLoader::Load2(::g::Uno::UX::FileSource* fileSource)
{
    if (uIs(fileSource, ::g::Uno::UX::BundleFileSource_typeof()))
        return VideoLoader::Load1(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::g::Uno::UX::BundleFileSource_typeof()))->BundleFile);
    else
        return VideoLoader::Load(::g::Uno::String::op_Addition2(uString::Const("file://"), ::g::Fuse::Controls::VideoImpl::VideoDiskCache::GetFilePath(fileSource)));
}
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
