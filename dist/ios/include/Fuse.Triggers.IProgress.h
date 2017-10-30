// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/ProgressAnimation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IProgress :8
// {
uInterfaceType* IProgress_typeof();

struct IProgress
{
    void(*fp_get_Progress)(uObject*, double*);
    void(*fp_add_ProgressChanged)(uObject*, uDelegate*);
    void(*fp_remove_ProgressChanged)(uObject*, uDelegate*);
    static double Progress(const uInterface& __this) { double __retval; return __this.VTable<IProgress>()->fp_get_Progress(__this, &__retval), __retval; }
    static void add_ProgressChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IProgress>()->fp_add_ProgressChanged(__this, value); }
    static void remove_ProgressChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IProgress>()->fp_remove_ProgressChanged(__this, value); }
};
// }

}}} // ::g::Fuse::Triggers
