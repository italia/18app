// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Computer;}}

namespace g{
namespace Fuse{

// internal abstract class Computer :14
// {
struct Computer_type : uType
{
    void(*fp_Add)(::g::Fuse::Computer*, uObject*, uObject*, uObject**);
    void(*fp_Divide)(::g::Fuse::Computer*, uObject*, uObject*, uObject**);
    void(*fp_EqualTo)(::g::Fuse::Computer*, uObject*, uObject*, bool*);
    void(*fp_GreaterThan)(::g::Fuse::Computer*, uObject*, uObject*, bool*);
    void(*fp_LessThan)(::g::Fuse::Computer*, uObject*, uObject*, bool*);
    void(*fp_Multiply)(::g::Fuse::Computer*, uObject*, uObject*, uObject**);
    void(*fp_Subtract)(::g::Fuse::Computer*, uObject*, uObject*, uObject**);
};

Computer_type* Computer_typeof();
void Computer__ctor__fn(Computer* __this);

struct Computer : uObject
{
    void ctor_();
    uObject* Add(uObject* a, uObject* b) { uObject* __retval; return (((Computer_type*)__type)->fp_Add)(this, a, b, &__retval), __retval; }
    uObject* Divide(uObject* a, uObject* b) { uObject* __retval; return (((Computer_type*)__type)->fp_Divide)(this, a, b, &__retval), __retval; }
    bool EqualTo(uObject* a, uObject* b) { bool __retval; return (((Computer_type*)__type)->fp_EqualTo)(this, a, b, &__retval), __retval; }
    bool GreaterThan(uObject* a, uObject* b) { bool __retval; return (((Computer_type*)__type)->fp_GreaterThan)(this, a, b, &__retval), __retval; }
    bool LessThan(uObject* a, uObject* b) { bool __retval; return (((Computer_type*)__type)->fp_LessThan)(this, a, b, &__retval), __retval; }
    uObject* Multiply(uObject* a, uObject* b) { uObject* __retval; return (((Computer_type*)__type)->fp_Multiply)(this, a, b, &__retval), __retval; }
    uObject* Subtract(uObject* a, uObject* b) { uObject* __retval; return (((Computer_type*)__type)->fp_Subtract)(this, a, b, &__retval), __retval; }
};
// }

}} // ::g::Fuse
