// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Internal/ImageContainer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Internal{

// internal abstract interface IImageContainerOwner :11
// {
uInterfaceType* IImageContainerOwner_typeof();

struct IImageContainerOwner
{
    void(*fp_OnParamChanged)(uObject*);
    void(*fp_OnSizingChanged)(uObject*);
    void(*fp_OnSourceChanged)(uObject*);
    static void OnParamChanged(const uInterface& __this) { __this.VTable<IImageContainerOwner>()->fp_OnParamChanged(__this); }
    static void OnSizingChanged(const uInterface& __this) { __this.VTable<IImageContainerOwner>()->fp_OnSizingChanged(__this); }
    static void OnSourceChanged(const uInterface& __this) { __this.VTable<IImageContainerOwner>()->fp_OnSourceChanged(__this); }
};
// }

}}} // ::g::Fuse::Internal
