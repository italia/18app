// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Resources/FileImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct FileImageSourceImpl__BackgroundLoad;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Resources{

// private sealed class FileImageSourceImpl.BackgroundLoad :234
// {
uType* FileImageSourceImpl__BackgroundLoad_typeof();
void FileImageSourceImpl__BackgroundLoad__ctor__fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail);
void FileImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex);
void FileImageSourceImpl__BackgroundLoad__New1_fn(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail, FileImageSourceImpl__BackgroundLoad** __retval);
void FileImageSourceImpl__BackgroundLoad__Run_fn(FileImageSourceImpl__BackgroundLoad* __this);
void FileImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(FileImageSourceImpl__BackgroundLoad* __this);
void FileImageSourceImpl__BackgroundLoad__UIFailCallback_fn(FileImageSourceImpl__BackgroundLoad* __this);

struct FileImageSourceImpl__BackgroundLoad : uObject
{
    uStrong<uDelegate*> _done;
    uStrong< ::g::Uno::Exception*> _exception;
    uStrong<uDelegate*> _fail;
    uStrong< ::g::Uno::UX::FileSource*> _file;
    uStrong< ::g::Uno::Graphics::Texture2D*> _tex;

    void ctor_(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail);
    void GWDoneCallback(::g::Uno::Graphics::Texture2D* tex);
    void Run();
    void UIDoneCallback();
    void UIFailCallback();
    static FileImageSourceImpl__BackgroundLoad* New1(::g::Uno::UX::FileSource* file, uDelegate* done, uDelegate* fail);
};
// }

}}} // ::g::Fuse::Resources
