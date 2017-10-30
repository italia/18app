// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface ILabelView :19
// {
uInterfaceType* ILabelView_typeof();

struct ILabelView
{
    void(*fp_set_Text)(uObject*, uString*);
    static void Text(const uInterface& __this, uString* value) { __this.VTable<ILabelView>()->fp_set_Text(__this, value); }
};
// }

}}}} // ::g::Fuse::Controls::Native
