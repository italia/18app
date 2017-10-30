// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Resources/FileImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct FileImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Fuse{namespace Resources{struct ProxyImageSource;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class FileImageSource :67
// {
::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof();
void FileImageSource__ctor_2_fn(FileImageSource* __this);
void FileImageSource__ctor_3_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* file);
void FileImageSource__set_DefaultPolicy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value);
void FileImageSource__get_Density_fn(FileImageSource* __this, float* __retval);
void FileImageSource__set_Density_fn(FileImageSource* __this, float* value);
void FileImageSource__get_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource** __retval);
void FileImageSource__set_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* value);
void FileImageSource__GetTexture_fn(FileImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void FileImageSource__New2_fn(FileImageSource** __retval);
void FileImageSource__New3_fn(::g::Uno::UX::FileSource* file, FileImageSource** __retval);
void FileImageSource__OnPinChanged_fn(FileImageSource* __this);
void FileImageSource__get_PixelSize_fn(FileImageSource* __this, ::g::Uno::Int2* __retval);
void FileImageSource__Reload_fn(FileImageSource* __this);
void FileImageSource__get_Size_fn(FileImageSource* __this, ::g::Uno::Float2* __retval);
void FileImageSource__get_SizeDensity_fn(FileImageSource* __this, float* __retval);
void FileImageSource__get_State_fn(FileImageSource* __this, int* __retval);

struct FileImageSource : ::g::Fuse::Resources::ImageSource
{
    uStrong< ::g::Fuse::Resources::ProxyImageSource*> _proxy;

    void ctor_2();
    void ctor_3(::g::Uno::UX::FileSource* file);
    void DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value);
    float Density();
    void Density(float value);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    static FileImageSource* New2();
    static FileImageSource* New3(::g::Uno::UX::FileSource* file);
};
// }

}}} // ::g::Fuse::Resources
