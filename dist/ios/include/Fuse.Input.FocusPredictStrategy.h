// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/Focus.Prediction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct FocusPredictStrategy;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// internal static class FocusPredictStrategy :7
// {
uClassType* FocusPredictStrategy_typeof();
void FocusPredictStrategy__Predict_fn(::g::Fuse::Visual* n, int* direction, ::g::Fuse::Visual** __retval);

struct FocusPredictStrategy : uObject
{
    static ::g::Fuse::Visual* Predict(::g::Fuse::Visual* n, int direction);
};
// }

}}} // ::g::Fuse::Input
