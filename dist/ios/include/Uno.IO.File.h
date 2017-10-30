// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/File.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct File;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}
namespace uBase { class Stream; }

namespace g{
namespace Uno{
namespace IO{

// public static class File :28
// {
uClassType* File_typeof();
void File__AppendAllText_fn(uString* filename, uString* contents);
void File__Copy_fn(uString* sourceFile, uString* destinationFile);
void File__Copy1_fn(uString* sourceFile, uString* destinationFile, bool* overwrite);
void File__CppXliOpen_fn(uString* filename, int* filemode, uBase::Stream** __retval);
void File__CppXliOpenRead_fn(uString* filename, uBase::Stream** __retval);
void File__Delete_fn(uString* filename);
void File__Exists_fn(uString* filename, bool* __retval);
void File__Move_fn(uString* oldName, uString* newName);
void File__Open_fn(uString* filename, int* filemode, ::g::Uno::IO::Stream** __retval);
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::Stream** __retval);
void File__ReadAllBytes_fn(uString* filename, uArray** __retval);
void File__ReadAllText_fn(uString* filename, uString** __retval);
void File__WriteAllBytes_fn(uString* filename, uArray* bytes);
void File__WriteAllText_fn(uString* filename, uString* text);

struct File : uObject
{
    static void AppendAllText(uString* filename, uString* contents);
    static void Copy(uString* sourceFile, uString* destinationFile);
    static void Copy1(uString* sourceFile, uString* destinationFile, bool overwrite);
    static uBase::Stream* CppXliOpen(uString* filename, int filemode);
    static uBase::Stream* CppXliOpenRead(uString* filename);
    static void Delete(uString* filename);
    static bool Exists(uString* filename);
    static void Move(uString* oldName, uString* newName);
    static ::g::Uno::IO::Stream* Open(uString* filename, int filemode);
    static ::g::Uno::IO::Stream* OpenRead(uString* filename);
    static uArray* ReadAllBytes(uString* filename);
    static uString* ReadAllText(uString* filename);
    static void WriteAllBytes(uString* filename, uArray* bytes);
    static void WriteAllText(uString* filename, uString* text);
};
// }

}}} // ::g::Uno::IO
