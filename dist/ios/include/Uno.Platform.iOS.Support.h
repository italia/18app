// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/iOS/Support.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <CoreGraphics/CoreGraphics.h>
#include <Uno.h>
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Platform{namespace iOS{struct Support;}}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class Support :37
// {
uClassType* Support_typeof();
void Support__CGPointToUnoFloat2_fn(CGPoint* point, float* scale, ::g::Uno::Float2* __retval);
void Support__CGRectToUnoRect_fn(CGRect* rect, float* scale, ::g::Uno::Rect* __retval);
void Support__CGSizeToUnoFloat2_fn(CGSize* size, float* scale, ::g::Uno::Float2* __retval);
void Support__Pre_iOS8_HandleDeviceOrientation_Rect_fn(CGRect* cgrect, ::g::ObjC::Object* view, CGRect* __retval);

struct Support : uObject
{
    static ::g::Uno::Float2 CGPointToUnoFloat2(CGPoint point, float scale);
    static ::g::Uno::Rect CGRectToUnoRect(CGRect rect, float scale);
    static ::g::Uno::Float2 CGSizeToUnoFloat2(CGSize size, float scale);
    static CGRect Pre_iOS8_HandleDeviceOrientation_Rect(CGRect cgrect, ::g::ObjC::Object* view);
};
// }

}}}} // ::g::Uno::Platform::iOS
