// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IShapeView :98
// {
uInterfaceType* IShapeView_typeof();

struct IShapeView
{
    void(*fp_Update)(uObject*, uArray*, uArray*, float*);
    static void Update(const uInterface& __this, uArray* fills, uArray* strokes, float pixelsPerPoint) { __this.VTable<IShapeView>()->fp_Update(__this, fills, strokes, &pixelsPerPoint); }
};
// }

}}}} // ::g::Fuse::Controls::Native
