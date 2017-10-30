// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Math.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Math;}}

namespace g{
namespace Uno{

// public static class Math :8
// {
uClassType* Math_typeof();
void Math__Abs_fn(double* x, double* __retval);
void Math__Abs1_fn(float* x, float* __retval);
void Math__Abs2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* __retval);
void Math__Abs5_fn(int* x, int* __retval);
void Math__Acos1_fn(float* radians, float* __retval);
void Math__Asin_fn(double* radians, double* __retval);
void Math__Atan22_fn(float* y, float* x, float* __retval);
void Math__Ceil_fn(double* x, double* __retval);
void Math__Ceil1_fn(float* x, float* __retval);
void Math__Ceil2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval);
void Math__Clamp_fn(double* x, double* minimum, double* maximum, double* __retval);
void Math__Clamp1_fn(float* x, float* minimum, float* maximum, float* __retval);
void Math__Clamp2_fn(::g::Uno::Float2* x, float* minimum, float* maximum, ::g::Uno::Float2* __retval);
void Math__Clamp3_fn(::g::Uno::Float2* x, ::g::Uno::Float2* minimum, ::g::Uno::Float2* maximum, ::g::Uno::Float2* __retval);
void Math__Clamp4_fn(::g::Uno::Float3* x, float* minimum, float* maximum, ::g::Uno::Float3* __retval);
void Math__Clamp6_fn(::g::Uno::Float4* x, float* minimum, float* maximum, ::g::Uno::Float4* __retval);
void Math__Clamp8_fn(int* x, int* minimum, int* maximum, int* __retval);
void Math__Cos_fn(double* radians, double* __retval);
void Math__Cos1_fn(float* radians, float* __retval);
void Math__DegreesToRadians1_fn(float* degrees, float* __retval);
void Math__Exp1_fn(float* x, float* __retval);
void Math__Exp22_fn(float* x, float* __retval);
void Math__Floor_fn(double* x, double* __retval);
void Math__Floor1_fn(float* x, float* __retval);
void Math__Floor2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval);
void Math__IsPow2_fn(int* x, bool* __retval);
void Math__Lerp1_fn(float* a, float* b, float* t, float* __retval);
void Math__Lerp2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* t, ::g::Uno::Float2* __retval);
void Math__Lerp4_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, float* t, ::g::Uno::Float3* __retval);
void Math__Lerp6_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, float* t, ::g::Uno::Float4* __retval);
void Math__Log1_fn(float* x, float* __retval);
void Math__Log22_fn(float* x, float* __retval);
void Math__Max_fn(double* a, double* b, double* __retval);
void Math__Max1_fn(float* a, float* b, float* __retval);
void Math__Max2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval);
void Math__Max3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void Math__Max4_fn(::g::Uno::Float3* a, float* b, ::g::Uno::Float3* __retval);
void Math__Max5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);
void Math__Max6_fn(::g::Uno::Float4* a, float* b, ::g::Uno::Float4* __retval);
void Math__Max8_fn(int* a, int* b, int* __retval);
void Math__Min_fn(double* a, double* b, double* __retval);
void Math__Min1_fn(float* a, float* b, float* __retval);
void Math__Min2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval);
void Math__Min3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void Math__Min4_fn(::g::Uno::Float3* a, float* b, ::g::Uno::Float3* __retval);
void Math__Min5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);
void Math__Min6_fn(::g::Uno::Float4* a, float* b, ::g::Uno::Float4* __retval);
void Math__Min8_fn(int* a, int* b, int* __retval);
void Math__Mod_fn(double* x, double* y, double* __retval);
void Math__Mod1_fn(float* x, float* y, float* __retval);
void Math__Pow_fn(double* x, double* y, double* __retval);
void Math__Pow1_fn(float* x, float* y, float* __retval);
void Math__RadiansToDegrees1_fn(float* radians, float* __retval);
void Math__Round_fn(double* x, double* __retval);
void Math__Round1_fn(double* d, int* decimals, double* __retval);
void Math__Round4_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval);
void Math__Sign1_fn(float* x, float* __retval);
void Math__Sin_fn(double* radians, double* __retval);
void Math__Sin1_fn(float* radians, float* __retval);
void Math__Sqrt_fn(double* x, double* __retval);
void Math__Sqrt1_fn(float* x, float* __retval);
void Math__Sqrt2_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval);
void Math__Sqrt4_fn(::g::Uno::Float4* x, ::g::Uno::Float4* __retval);
void Math__Tan1_fn(float* radians, float* __retval);

struct Math : uObject
{
    static double Abs(double x);
    static float Abs1(float x);
    static ::g::Uno::Float2 Abs2(::g::Uno::Float2 a);
    static int Abs5(int x);
    static float Acos1(float radians);
    static double Asin(double radians);
    static float Atan22(float y, float x);
    static double Ceil(double x);
    static float Ceil1(float x);
    static ::g::Uno::Float2 Ceil2(::g::Uno::Float2 v);
    static double Clamp(double x, double minimum, double maximum);
    static float Clamp1(float x, float minimum, float maximum);
    static ::g::Uno::Float2 Clamp2(::g::Uno::Float2 x, float minimum, float maximum);
    static ::g::Uno::Float2 Clamp3(::g::Uno::Float2 x, ::g::Uno::Float2 minimum, ::g::Uno::Float2 maximum);
    static ::g::Uno::Float3 Clamp4(::g::Uno::Float3 x, float minimum, float maximum);
    static ::g::Uno::Float4 Clamp6(::g::Uno::Float4 x, float minimum, float maximum);
    static int Clamp8(int x, int minimum, int maximum);
    static double Cos(double radians);
    static float Cos1(float radians);
    static float DegreesToRadians1(float degrees);
    static float Exp1(float x);
    static float Exp22(float x);
    static double Floor(double x);
    static float Floor1(float x);
    static ::g::Uno::Float2 Floor2(::g::Uno::Float2 v);
    static bool IsPow2(int x);
    static float Lerp1(float a, float b, float t);
    static ::g::Uno::Float2 Lerp2(::g::Uno::Float2 a, ::g::Uno::Float2 b, float t);
    static ::g::Uno::Float3 Lerp4(::g::Uno::Float3 a, ::g::Uno::Float3 b, float t);
    static ::g::Uno::Float4 Lerp6(::g::Uno::Float4 a, ::g::Uno::Float4 b, float t);
    static float Log1(float x);
    static float Log22(float x);
    static double Max(double a, double b);
    static float Max1(float a, float b);
    static ::g::Uno::Float2 Max2(::g::Uno::Float2 a, float b);
    static ::g::Uno::Float2 Max3(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static ::g::Uno::Float3 Max4(::g::Uno::Float3 a, float b);
    static ::g::Uno::Float3 Max5(::g::Uno::Float3 a, ::g::Uno::Float3 b);
    static ::g::Uno::Float4 Max6(::g::Uno::Float4 a, float b);
    static int Max8(int a, int b);
    static double Min(double a, double b);
    static float Min1(float a, float b);
    static ::g::Uno::Float2 Min2(::g::Uno::Float2 a, float b);
    static ::g::Uno::Float2 Min3(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static ::g::Uno::Float3 Min4(::g::Uno::Float3 a, float b);
    static ::g::Uno::Float3 Min5(::g::Uno::Float3 a, ::g::Uno::Float3 b);
    static ::g::Uno::Float4 Min6(::g::Uno::Float4 a, float b);
    static int Min8(int a, int b);
    static double Mod(double x, double y);
    static float Mod1(float x, float y);
    static double Pow(double x, double y);
    static float Pow1(float x, float y);
    static float RadiansToDegrees1(float radians);
    static double Round(double x);
    static double Round1(double d, int decimals);
    static ::g::Uno::Float2 Round4(::g::Uno::Float2 x);
    static float Sign1(float x);
    static double Sin(double radians);
    static float Sin1(float radians);
    static double Sqrt(double x);
    static float Sqrt1(float x);
    static ::g::Uno::Float2 Sqrt2(::g::Uno::Float2 x);
    static ::g::Uno::Float4 Sqrt4(::g::Uno::Float4 x);
    static float Tan1(float radians);
};
// }

}} // ::g::Uno
