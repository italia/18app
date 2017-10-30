// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Transforms.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct TranslationModes;}}}

namespace g{
namespace Fuse{
namespace Elements{

// public static class TranslationModes :8
// {
uClassType* TranslationModes_typeof();

struct TranslationModes : uObject
{
    static uSStrong<uObject*> PositionOffset_;
    static uSStrong<uObject*>& PositionOffset() { return PositionOffset_; }
    static uSStrong<uObject*> Size_;
    static uSStrong<uObject*>& Size() { return Size_; }
    static uSStrong<uObject*> SizeFactor_;
    static uSStrong<uObject*>& SizeFactor() { return SizeFactor_; }
    static uSStrong<uObject*> TransformOriginOffset_;
    static uSStrong<uObject*>& TransformOriginOffset() { return TransformOriginOffset_; }
};
// }

}}} // ::g::Fuse::Elements
