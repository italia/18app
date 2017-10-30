// This file was generated based on /usr/local/share/uno/Packages/Experimental.Http/1.3.1/ICache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Experimental{
namespace Cache{

// public abstract interface ICache :26
// {
uInterfaceType* ICache_typeof();

struct ICache
{
    void(*fp_CreateRecord)(uObject*, uString*, uObject**);
    void(*fp_DeleteRecord)(uObject*, uString*);
    void(*fp_LoadRecord)(uObject*, uString*, uDelegate*, bool*);
    static uObject* CreateRecord(const uInterface& __this, uString* id) { uObject* __retval; return __this.VTable<ICache>()->fp_CreateRecord(__this, id, &__retval), __retval; }
    static void DeleteRecord(const uInterface& __this, uString* id) { __this.VTable<ICache>()->fp_DeleteRecord(__this, id); }
    static bool LoadRecord(const uInterface& __this, uString* id, uDelegate* onLoaded) { bool __retval; return __this.VTable<ICache>()->fp_LoadRecord(__this, id, onLoaded, &__retval), __retval; }
};
// }

}}} // ::g::Experimental::Cache
