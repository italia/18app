// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/Path.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct Path;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class Path :6
// {
uClassType* Path_typeof();
void Path__Combine_fn(uString* a, uString* b, uString** __retval);
void Path__GetDirectoryName_fn(uString* filename, uString** __retval);
void Path__GetDirectorySeparatorChar_fn(uChar* __retval);
void Path__GetFullPath_fn(uString* filename, uString** __retval);
void Path__GetPathSeparator_fn(uChar* __retval);
void Path__IsPathRooted_fn(uString* filename, bool* __retval);

struct Path : uObject
{
    static uChar DirectorySeparatorChar_;
    static uChar& DirectorySeparatorChar() { return DirectorySeparatorChar_; }
    static uChar PathSeparator_;
    static uChar& PathSeparator() { return PathSeparator_; }

    static uString* Combine(uString* a, uString* b);
    static uString* GetDirectoryName(uString* filename);
    static uChar GetDirectorySeparatorChar();
    static uString* GetFullPath(uString* filename);
    static uChar GetPathSeparator();
    static bool IsPathRooted(uString* filename);
};
// }

}}} // ::g::Uno::IO
