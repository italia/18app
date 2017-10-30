// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/SystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class FontFaceDescriptor :8
// {
uType* FontFaceDescriptor_typeof();
void FontFaceDescriptor__ctor__fn(FontFaceDescriptor* __this, ::g::Uno::UX::FileSource* fileSource, int* index);
void FontFaceDescriptor__ctor_1_fn(FontFaceDescriptor* __this, ::g::Uno::UX::FileSource* fileSource, uObject* styles);
void FontFaceDescriptor__Equals_fn(FontFaceDescriptor* __this, uObject* o, bool* __retval);
void FontFaceDescriptor__GetHashCode_fn(FontFaceDescriptor* __this, int* __retval);
void FontFaceDescriptor__Match_fn(FontFaceDescriptor* __this, uString* styleString, bool* __retval);
void FontFaceDescriptor__New1_fn(::g::Uno::UX::FileSource* fileSource, int* index, FontFaceDescriptor** __retval);
void FontFaceDescriptor__New2_fn(::g::Uno::UX::FileSource* fileSource, uObject* styles, FontFaceDescriptor** __retval);

struct FontFaceDescriptor : uObject
{
    uStrong< ::g::Uno::UX::FileSource*> FileSource;
    int Index;
    uStrong<uObject*> Styles;

    void ctor_(::g::Uno::UX::FileSource* fileSource, int index);
    void ctor_1(::g::Uno::UX::FileSource* fileSource, uObject* styles);
    bool Match(uString* styleString);
    static FontFaceDescriptor* New1(::g::Uno::UX::FileSource* fileSource, int index);
    static FontFaceDescriptor* New2(::g::Uno::UX::FileSource* fileSource, uObject* styles);
};
// }

}}} // ::g::Fuse::Internal
