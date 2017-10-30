// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Font.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public class Font :27
// {
uType* Font_typeof();
void Font__ctor__fn(Font* __this, ::g::Uno::Collections::List* descriptors);
void Font__ctor_1_fn(Font* __this, ::g::Uno::UX::FileSource* file);
void Font__New1_fn(::g::Uno::Collections::List* descriptors, Font** __retval);
void Font__New2_fn(::g::Uno::UX::FileSource* file, Font** __retval);
void Font__get_PlatformDefault_fn(Font** __retval);
void Font__get_PlatformDefaultSize_fn(float* __retval);
void Font__get_PlatformDefaultTextColor_fn(::g::Uno::Float4* __retval);

struct Font : uObject
{
    static uSStrong<Font*> _fallback_;
    static uSStrong<Font*>& _fallback() { return _fallback_; }
    static uSStrong<Font*> Bold_;
    static uSStrong<Font*>& Bold() { return Bold_; }
    static uSStrong<Font*> BoldItalic_;
    static uSStrong<Font*>& BoldItalic() { return BoldItalic_; }
    uStrong< ::g::Uno::Collections::List*> Descriptors;
    static uSStrong<Font*> Italic_;
    static uSStrong<Font*>& Italic() { return Italic_; }
    static uSStrong<Font*> Light_;
    static uSStrong<Font*>& Light() { return Light_; }
    static uSStrong<Font*> LightItalic_;
    static uSStrong<Font*>& LightItalic() { return LightItalic_; }
    static uSStrong<Font*> Medium_;
    static uSStrong<Font*>& Medium() { return Medium_; }
    static uSStrong<Font*> MediumItalic_;
    static uSStrong<Font*>& MediumItalic() { return MediumItalic_; }
    static uSStrong<Font*> Regular_;
    static uSStrong<Font*>& Regular() { return Regular_; }
    static uSStrong<Font*> Thin_;
    static uSStrong<Font*>& Thin() { return Thin_; }
    static uSStrong<Font*> ThinItalic_;
    static uSStrong<Font*>& ThinItalic() { return ThinItalic_; }

    void ctor_(::g::Uno::Collections::List* descriptors);
    void ctor_1(::g::Uno::UX::FileSource* file);
    static Font* New1(::g::Uno::Collections::List* descriptors);
    static Font* New2(::g::Uno::UX::FileSource* file);
    static Font* PlatformDefault();
    static float PlatformDefaultSize();
    static ::g::Uno::Float4 PlatformDefaultTextColor();
};
// }

}} // ::g::Fuse
