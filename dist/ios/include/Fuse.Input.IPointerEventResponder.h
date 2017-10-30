// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/Pointer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract interface IPointerEventResponder :104
// {
uInterfaceType* IPointerEventResponder_typeof();

struct IPointerEventResponder
{
    void(*fp_OnPointerMoved)(uObject*, ::g::Fuse::Input::PointerMovedArgs*);
    void(*fp_OnPointerPressed)(uObject*, ::g::Fuse::Input::PointerPressedArgs*);
    void(*fp_OnPointerReleased)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*);
    static void OnPointerMoved(const uInterface& __this, ::g::Fuse::Input::PointerMovedArgs* args) { __this.VTable<IPointerEventResponder>()->fp_OnPointerMoved(__this, args); }
    static void OnPointerPressed(const uInterface& __this, ::g::Fuse::Input::PointerPressedArgs* args) { __this.VTable<IPointerEventResponder>()->fp_OnPointerPressed(__this, args); }
    static void OnPointerReleased(const uInterface& __this, ::g::Fuse::Input::PointerReleasedArgs* args) { __this.VTable<IPointerEventResponder>()->fp_OnPointerReleased(__this, args); }
};
// }

}}} // ::g::Fuse::Input
