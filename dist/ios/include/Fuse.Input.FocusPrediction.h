// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/Focus.Prediction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct FocusPrediction;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// internal static class FocusPrediction :24
// {
uClassType* FocusPrediction_typeof();
void FocusPrediction__FirstVisualChild_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval);
void FocusPrediction__LastVisualChild_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval);
void FocusPrediction__NextSibling_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval);
void FocusPrediction__NextSibling1_fn(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child, ::g::Fuse::Visual** __retval);
void FocusPrediction__Predict_fn(::g::Fuse::Visual* visual, uDelegate* filter, uDelegate* getChild, uDelegate* getSibling, ::g::Fuse::Visual** __retval);
void FocusPrediction__PredictNextVisual_fn(::g::Fuse::Visual* visual, uDelegate* filter, ::g::Fuse::Visual** __retval);
void FocusPrediction__PredictPreviousVisual_fn(::g::Fuse::Visual* visual, uDelegate* filter, ::g::Fuse::Visual** __retval);
void FocusPrediction__PreviousSibling_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval);
void FocusPrediction__PreviousSibling1_fn(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child, ::g::Fuse::Visual** __retval);

struct FocusPrediction : uObject
{
    static ::g::Fuse::Visual* FirstVisualChild(::g::Fuse::Visual* visual);
    static ::g::Fuse::Visual* LastVisualChild(::g::Fuse::Visual* visual);
    static ::g::Fuse::Visual* NextSibling(::g::Fuse::Visual* visual);
    static ::g::Fuse::Visual* NextSibling1(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child);
    static ::g::Fuse::Visual* Predict(::g::Fuse::Visual* visual, uDelegate* filter, uDelegate* getChild, uDelegate* getSibling);
    static ::g::Fuse::Visual* PredictNextVisual(::g::Fuse::Visual* visual, uDelegate* filter);
    static ::g::Fuse::Visual* PredictPreviousVisual(::g::Fuse::Visual* visual, uDelegate* filter);
    static ::g::Fuse::Visual* PreviousSibling(::g::Fuse::Visual* visual);
    static ::g::Fuse::Visual* PreviousSibling1(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child);
};
// }

}}} // ::g::Fuse::Input
