// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer-1.h>
#include <Uno.Double.h>
namespace g{namespace Fuse{struct NumberComputer;}}

namespace g{
namespace Fuse{

// internal sealed class NumberComputer :63
// {
::g::Fuse::Computer1_type* NumberComputer_typeof();
void NumberComputer__ctor_2_fn(NumberComputer* __this);
void NumberComputer__Add1_fn(NumberComputer* __this, double* a, double* b, double* __retval);
void NumberComputer__Convert_fn(NumberComputer* __this, uObject* obj, double* __retval);
void NumberComputer__Divide1_fn(NumberComputer* __this, double* a, double* b, double* __retval);
void NumberComputer__EqualTo1_fn(NumberComputer* __this, double* a, double* b, bool* __retval);
void NumberComputer__GreaterThan1_fn(NumberComputer* __this, double* a, double* b, bool* __retval);
void NumberComputer__LessThan1_fn(NumberComputer* __this, double* a, double* b, bool* __retval);
void NumberComputer__Multiply1_fn(NumberComputer* __this, double* a, double* b, double* __retval);
void NumberComputer__New1_fn(NumberComputer** __retval);
void NumberComputer__Subtract1_fn(NumberComputer* __this, double* a, double* b, double* __retval);

struct NumberComputer : ::g::Fuse::Computer1
{
    void ctor_2();
    static NumberComputer* New1();
};
// }

}} // ::g::Fuse
