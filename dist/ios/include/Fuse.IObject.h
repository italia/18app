// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/IObject.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IObject :17
// {
uInterfaceType* IObject_typeof();

struct IObject
{
    void(*fp_ContainsKey)(uObject*, uString*, bool*);
    void(*fp_get_Item)(uObject*, uString*, uObject**);
    void(*fp_get_Keys)(uObject*, uArray**);
    static bool ContainsKey(const uInterface& __this, uString* key) { bool __retval; return __this.VTable<IObject>()->fp_ContainsKey(__this, key, &__retval), __retval; }
    static uObject* Item(const uInterface& __this, uString* key) { uObject* __retval; return __this.VTable<IObject>()->fp_get_Item(__this, key, &__retval), __retval; }
    static uArray* Keys(const uInterface& __this) { uArray* __retval; return __this.VTable<IObject>()->fp_get_Keys(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
