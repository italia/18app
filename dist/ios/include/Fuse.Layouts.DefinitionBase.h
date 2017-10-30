// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Layouts{struct DefinitionBase;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public abstract class DefinitionBase :21
// {
uType* DefinitionBase_typeof();
void DefinitionBase__ctor_1_fn(DefinitionBase* __this);
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval);
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value);
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__Copy_fn(DefinitionBase* __this, uType* __type, DefinitionBase* copy, int* creation);
void DefinitionBase__get_Extent_fn(DefinitionBase* __this, float* __retval);
void DefinitionBase__set_Extent_fn(DefinitionBase* __this, float* value);
void DefinitionBase__get_IsImplied_fn(DefinitionBase* __this, bool* __retval);
void DefinitionBase__get_Metric_fn(DefinitionBase* __this, int* __retval);
void DefinitionBase__set_Metric_fn(DefinitionBase* __this, int* value);
void DefinitionBase__OnChanged_fn(DefinitionBase* __this);
void DefinitionBase__Parse_fn(uType* __type, uString* data, DefinitionBase** __retval);
void DefinitionBase__Parse1_fn(uType* __type, uString* data, uObject* output);
void DefinitionBase__Serialize_fn(DefinitionBase* __this, uString** __retval);
void DefinitionBase__Serialize1_fn(uType* __type, uObject* columns, uString** __retval);

struct DefinitionBase : ::g::Uno::UX::PropertyObject
{
    float _actualOffset;
    float _extent;
    int _metric;
    float ActualExtent;
    int Creation;
    bool HasActualExtent;
    uStrong<uDelegate*> Changed1;

    void ctor_1();
    float ActualOffset();
    void ActualOffset(float value);
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    void Copy(uType* __type, DefinitionBase* copy, int creation);
    float Extent();
    void Extent(float value);
    bool IsImplied();
    int Metric();
    void Metric(int value);
    void OnChanged();
    uString* Serialize();
    static DefinitionBase* Parse(uType* __type, uString* data);
    static void Parse1(uType* __type, uString* data, uObject* output);
    static uString* Serialize1(uType* __type, uObject* columns);
};
// }

}}} // ::g::Fuse::Layouts
