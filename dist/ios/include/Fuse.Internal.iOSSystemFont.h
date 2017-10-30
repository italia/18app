// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/iOSSystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{namespace Internal{struct iOSSystemFont;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static extern class iOSSystemFont :11
// {
uClassType* iOSSystemFont_typeof();
void iOSSystemFont__AddFamily_fn(uString* name);
void iOSSystemFont__AddFontPath_fn(uString* name, uString* path);
void iOSSystemFont__AddFontPaths_fn();
void iOSSystemFont__get_Default_fn(::g::Uno::Collections::List** __retval);
void iOSSystemFont__get_DefaultFontName_fn(uString** __retval);
void iOSSystemFont__EnsureFontPathsAdded_fn();
void iOSSystemFont__get_FontPaths_fn(::g::Uno::Collections::Dictionary** __retval);
void iOSSystemFont__Get_fn(uString* family, int* style, int* weight, ::g::Uno::Collections::List** __retval);
void iOSSystemFont__GetDefaultFontFamily_fn(uString** __retval);
void iOSSystemFont__GetDefaultUIFontDescriptor_fn(::g::ObjC::Object** __retval);
void iOSSystemFont__GetDescriptorFontName_fn(::g::ObjC::Object* descriptor, uString** __retval);
void iOSSystemFont__GetDescriptors_fn(uString* fileName, uArray** __retval);
void iOSSystemFont__GetDescriptorsFromFontNames_fn(uArray* fontNames, ::g::Uno::Collections::List** __retval);
void iOSSystemFont__GetFallback_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Collections::List** __retval);
void iOSSystemFont__GetFallbackUIFontDescriptors_fn(::g::ObjC::Object* rawDescriptor, uArray** __retval);
void iOSSystemFont__GetFontNamesFromUIFontDescriptors_fn(uArray* descriptors, uArray** __retval);
void iOSSystemFont__GetFontNameStyles_fn(uString* fontName, uObject** __retval);
void iOSSystemFont__GetMatchingFontDescriptor_fn(uString* family, bool* isItalic, uString* weight, ::g::ObjC::Object** __retval);
void iOSSystemFont__GetMatchingUIFontDescriptor_fn(uString* fileName, int* index, uDelegate* stylePredicate, ::g::ObjC::Object** __retval);
void iOSSystemFont__GetPostscriptName_fn(::g::ObjC::Object* descriptor, uString** __retval);
void iOSSystemFont__GetStyleName_fn(::g::ObjC::Object* descriptor, uString** __retval);

struct iOSSystemFont : uObject
{
    static uSStrong< ::g::Uno::Collections::HashSet*> _families_;
    static uSStrong< ::g::Uno::Collections::HashSet*>& _families() { return _families_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _fontPaths_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _fontPaths() { return _fontPaths_; }
    static uSStrong<uArray*> _weightNames_;
    static uSStrong<uArray*>& _weightNames() { return _weightNames_; }

    static void AddFamily(uString* name);
    static void AddFontPath(uString* name, uString* path);
    static void AddFontPaths();
    static void EnsureFontPathsAdded();
    static ::g::Uno::Collections::List* Get(uString* family, int style, int weight);
    static uString* GetDefaultFontFamily();
    static ::g::ObjC::Object* GetDefaultUIFontDescriptor();
    static uString* GetDescriptorFontName(::g::ObjC::Object* descriptor);
    static uArray* GetDescriptors(uString* fileName);
    static ::g::Uno::Collections::List* GetDescriptorsFromFontNames(uArray* fontNames);
    static ::g::Uno::Collections::List* GetFallback(::g::Uno::UX::FileSource* file);
    static uArray* GetFallbackUIFontDescriptors(::g::ObjC::Object* rawDescriptor);
    static uArray* GetFontNamesFromUIFontDescriptors(uArray* descriptors);
    static uObject* GetFontNameStyles(uString* fontName);
    static ::g::ObjC::Object* GetMatchingFontDescriptor(uString* family, bool isItalic, uString* weight);
    static ::g::ObjC::Object* GetMatchingUIFontDescriptor(uString* fileName, int index, uDelegate* stylePredicate);
    static uString* GetPostscriptName(::g::ObjC::Object* descriptor);
    static uString* GetStyleName(::g::ObjC::Object* descriptor);
    static ::g::Uno::Collections::List* Default();
    static uString* DefaultFontName();
    static ::g::Uno::Collections::Dictionary* FontPaths();
};
// }

}}} // ::g::Fuse::Internal
