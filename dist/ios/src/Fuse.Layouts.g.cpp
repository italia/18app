// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.OptionalSimpleAlignment.h>
#include <Fuse.Elements.SimpleAlignment.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Layouts.CircleLayout.h>
#include <Fuse.Layouts.Column.h>
#include <Fuse.Layouts.ColumnLayout.h>
#include <Fuse.Layouts.ColumnLayoutSizing.h>
#include <Fuse.Layouts.DefaultLayout.h>
#include <Fuse.Layouts.DefinitionBase.CreationType.h>
#include <Fuse.Layouts.DefinitionBase.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.DockLayout.h>
#include <Fuse.Layouts.FlowDirection.h>
#include <Fuse.Layouts.GridChildOrder.h>
#include <Fuse.Layouts.GridLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Layouts.Layouts.h>
#include <Fuse.Layouts.Metric.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Layouts.Row.h>
#include <Fuse.Layouts.StackLayout.h>
#include <Fuse.Layouts.StackLayoutMode.h>
#include <Fuse.Layouts.WrapLayout.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[5];
static uType* TYPES[38];

namespace g{
namespace Fuse{
namespace Layouts{

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/CircleLayout.uno
// ---------------------------------------------------------------------------------

// public sealed class CircleLayout :32
// {
static void CircleLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _endAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _itemSpacing), 0,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _radius), 0,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _startAngle), 0);
}

::g::Fuse::Layouts::Layout_type* CircleLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(CircleLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.CircleLayout", options);
    type->fp_build_ = CircleLayout_build;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))CircleLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))CircleLayout__GetContentSize_fn;
    return type;
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :112
void CircleLayout__ArrangePaddingBox_fn(CircleLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RemoveSize1(padding_);
    int c = 0;

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(e, padding_, lp_))
            continue;

        c++;
    }

    float angleRange = __this->_endAngle - __this->_startAngle;
    float step = angleRange / (float)c;
    float arcSize = (step - __this->_itemSpacing) / 2.0f;
    float fitRadius = (__this->Radius() * ::g::Uno::Math::Sin1(arcSize)) / (::g::Uno::Math::Sin1(arcSize) + 1.0f);
    ::g::Uno::Float2 elementRadius = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division1(nlp.Size(), 2.0f), __this->Radius() - fitRadius);
    ::g::Uno::Float2 elementSize = ::g::Uno::Float2__op_Multiply1(nlp.Size(), fitRadius);
    float angle = __this->_startAngle;
    nlp.SetSize(elementSize, true, true);

    for (::g::Fuse::Visual* e1 = (::g::Fuse::Visual*)container->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e1 != NULL; e1 = (::g::Fuse::Visual*)uPtr(e1)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!__this->AffectsLayout(e1))
            continue;

        float x = (::g::Uno::Math::Cos1(angle) * elementRadius.X) + (lp_.Size().X / 2.0f);
        float y = (::g::Uno::Math::Sin1(angle) * elementRadius.Y) + (lp_.Size().Y / 2.0f);
        ::g::Uno::Float2 p = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(x, y)), ::g::Uno::Float2__op_Division1(elementSize, 2.0f));
        uPtr(e1)->ArrangeMarginBox(p, nlp);
        angle = angle + step;
    }
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :100
void CircleLayout__GetContentSize_fn(CircleLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float get_Radius() :39
void CircleLayout__get_Radius_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value) :40
void CircleLayout__set_Radius_fn(CircleLayout* __this, float* value)
{
    __this->Radius(*value);
}

// public float get_Radius() [instance] :39
float CircleLayout::Radius()
{
    return _radius;
}

// public void set_Radius(float value) [instance] :40
void CircleLayout::Radius(float value)
{
    _radius = value;
    InvalidateLayout();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public sealed class Column :213
// {
static void Column_build(uType* type)
{
    type->SetFields(8);
}

uType* Column_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::DefinitionBase_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Column);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Column", options);
    type->fp_build_ = Column_build;
    type->fp_ctor_ = (void*)Column__New2_fn;
    return type;
}

// public Column() :215
void Column__ctor_4_fn(Column* __this)
{
    __this->ctor_4();
}

// public Column New() :215
void Column__New2_fn(Column** __retval)
{
    *__retval = Column::New2();
}

// public Column() [instance] :215
void Column::ctor_4()
{
    ctor_1();
}

// public Column New() [static] :215
Column* Column::New2()
{
    Column* obj1 = (Column*)uNew(Column_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/ColumnLayout.uno
// ---------------------------------------------------------------------------------

// public sealed class ColumnLayout :28
// {
static void ColumnLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Float_typeof()->Array();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(ColumnLayout, _columnCount), 0,
        ::g::Uno::Float_typeof(), offsetof(ColumnLayout, _columnSize), 0,
        ::g::Uno::Float_typeof(), offsetof(ColumnLayout, _columnSpacing), 0,
        ::g::Uno::Bool_typeof(), offsetof(ColumnLayout, _hasColumnCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(ColumnLayout, _hasColumnSize), 0,
        ::g::Uno::Float_typeof(), offsetof(ColumnLayout, _itemSpacing), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(ColumnLayout, _orientation), 0,
        ::g::Fuse::Layouts::ColumnLayoutSizing_typeof(), offsetof(ColumnLayout, _sizing), 0);
}

::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(ColumnLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.ColumnLayout", options);
    type->fp_build_ = ColumnLayout_build;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))ColumnLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ColumnLayout__GetContentSize_fn;
    return type;
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, [bool doArrange], [float4 padding]) :231
void ColumnLayout__Arrange_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Arrange(container, *lp, *doArrange, *padding);
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :226
void ColumnLayout__ArrangePaddingBox_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    __this->Arrange(container, lp_, true, padding_);
}

// public int get_ColumnCount() :76
void ColumnLayout__get_ColumnCount_fn(ColumnLayout* __this, int* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value) :77
void ColumnLayout__set_ColumnCount_fn(ColumnLayout* __this, int* value)
{
    __this->ColumnCount(*value);
}

// public float get_ColumnSize() :112
void ColumnLayout__get_ColumnSize_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ColumnSize();
}

// public void set_ColumnSize(float value) :113
void ColumnLayout__set_ColumnSize_fn(ColumnLayout* __this, float* value)
{
    __this->ColumnSize(*value);
}

// public float get_ColumnSpacing() :131
void ColumnLayout__get_ColumnSpacing_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ColumnSpacing();
}

// public void set_ColumnSpacing(float value) :132
void ColumnLayout__set_ColumnSpacing_fn(ColumnLayout* __this, float* value)
{
    __this->ColumnSpacing(*value);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :221
void ColumnLayout__GetContentSize_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Arrange(container, lp_, false, ::g::Uno::Float4__New1(0.0f)), void();
}

// public float get_ItemSpacing() :149
void ColumnLayout__get_ItemSpacing_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value) :150
void ColumnLayout__set_ItemSpacing_fn(ColumnLayout* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// private int LeastAt(float[] c) :196
void ColumnLayout__LeastAt_fn(ColumnLayout* __this, uArray* c, int* __retval)
{
    *__retval = __this->LeastAt(c);
}

// private float Max(float[] c) :213
void ColumnLayout__Max_fn(ColumnLayout* __this, uArray* c, float* __retval)
{
    *__retval = __this->Max(c);
}

// public Fuse.Layouts.Orientation get_Orientation() :47
void ColumnLayout__get_Orientation_fn(ColumnLayout* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :48
void ColumnLayout__set_Orientation_fn(ColumnLayout* __this, int* value)
{
    __this->Orientation(*value);
}

// public Fuse.Layouts.ColumnLayoutSizing get_Sizing() :185
void ColumnLayout__get_Sizing_fn(ColumnLayout* __this, int* __retval)
{
    *__retval = __this->Sizing();
}

// public void set_Sizing(Fuse.Layouts.ColumnLayoutSizing value) :186
void ColumnLayout__set_Sizing_fn(ColumnLayout* __this, int* value)
{
    __this->Sizing(*value);
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, [bool doArrange], [float4 padding]) [instance] :231
::g::Uno::Float2 ColumnLayout::Arrange(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding)
{
    bool vert = Orientation() == 1;
    int columnCount = ::g::Uno::Math::Max8(1, ColumnCount());
    float columnSize = ColumnSize();
    float columnSpace = columnSize + ColumnSpacing();
    bool useColumnSize = _hasColumnSize;
    ::g::Uno::Float2 avail = lp.GetAvailableSize();
    avail = ::g::Uno::Float2__op_Subtraction2(avail, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding.X, padding.Y), ::g::Uno::Float2__New2(padding.Z, padding.W)));

    if (!useColumnSize && ((vert && !lp.HasX()) || (!vert && !lp.HasY())))
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (::g::Fuse::Visual* v = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (::g::Fuse::Visual*)uPtr(v)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        {
            if (!AffectsLayout(v))
                continue;

            ::g::Uno::Float2 c = uPtr(v)->GetMarginSize(::g::Fuse::LayoutParams__CreateEmpty());
            mx = ::g::Uno::Math::Max3(mx, c);
        }

        columnSize = vert ? mx.X : mx.Y;
        columnSpace = columnSize + ColumnSpacing();
        useColumnSize = true;
    }

    if (useColumnSize)
    {
        if (!_hasColumnCount)
        {
            if (vert)
                columnCount = (int)::g::Uno::Math::Floor1((avail.X + ColumnSpacing()) / columnSpace);
            else
                columnCount = (int)::g::Uno::Math::Floor1((avail.Y + ColumnSpacing()) / columnSpace);

            columnCount = ::g::Uno::Math::Max8(1, columnCount);
        }

        if (Sizing() == 1)
        {
            columnSpace = ((vert ? avail.X : avail.Y) + ColumnSpacing()) / (float)columnCount;
            columnSize = columnSpace - ColumnSpacing();
        }
    }
    else
    {
        columnSpace = ((vert ? avail.X : avail.Y) + ColumnSpacing()) / (float)columnCount;
        columnSize = columnSpace - ColumnSpacing();
    }

    uArray* at = uArray::New(::TYPES[2/*float[]*/], columnCount);

    for (::g::Fuse::Visual* v1 = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v1 != NULL; v1 = (::g::Fuse::Visual*)uPtr(v1)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        ::g::Uno::Float2 avs = ::g::Uno::Float2__New2(vert ? columnSize : 0.0f, vert ? 0.0f : columnSize);
        int col = LeastAt(at);
        ::g::Uno::Float2 nsz;

        if (uPtr(at)->Item<float>(col) > 0.0f)
            uPtr(at)->Item<float>(col) = uPtr(at)->Item<float>(col) + ItemSpacing();

        if (doArrange)
        {
            if (ArrangeMarginBoxSpecial(v1, padding, lp))
                continue;

            ::g::Uno::Float2 pos = vert ? ::g::Uno::Float2__New2(padding.X + ((float)col * columnSpace), padding.Y + uPtr(at)->Item<float>(col)) : ::g::Uno::Float2__New2(padding.X + uPtr(at)->Item<float>(col), padding.Y + ((float)col * columnSpace));
            nsz = uPtr(v1)->ArrangeMarginBox(pos, ::g::Fuse::LayoutParams__CreateXY(avs, vert, !vert));
        }
        else if (AffectsLayout(v1))
            nsz = uPtr(v1)->GetMarginSize(::g::Fuse::LayoutParams__CreateXY(avs, vert, !vert));
        else
            continue;

        uPtr(at)->Item<float>(col) = uPtr(at)->Item<float>(col) + (vert ? nsz.Y : nsz.X);
    }

    if (doArrange)
    {
        if (!_hasColumnSize)
            _columnSize = columnSize;

        if (!_hasColumnCount)
            _columnCount = columnCount;
    }

    float size = ((float)columnCount * columnSpace) - ColumnSpacing();
    ::g::Uno::Float2 q = vert ? ::g::Uno::Float2__New2(size, Max(at)) : ::g::Uno::Float2__New2(Max(at), size);
    return q;
}

// public int get_ColumnCount() [instance] :76
int ColumnLayout::ColumnCount()
{
    return _columnCount;
}

// public void set_ColumnCount(int value) [instance] :77
void ColumnLayout::ColumnCount(int value)
{
    if (!_hasColumnCount || (_columnCount != value))
    {
        _columnCount = value;
        _hasColumnCount = true;
        InvalidateLayout();
    }
}

// public float get_ColumnSize() [instance] :112
float ColumnLayout::ColumnSize()
{
    return _columnSize;
}

// public void set_ColumnSize(float value) [instance] :113
void ColumnLayout::ColumnSize(float value)
{
    if (!_hasColumnSize || (_columnSize != value))
    {
        _hasColumnSize = true;
        _columnSize = value;
        InvalidateLayout();
    }
}

// public float get_ColumnSpacing() [instance] :131
float ColumnLayout::ColumnSpacing()
{
    return _columnSpacing;
}

// public void set_ColumnSpacing(float value) [instance] :132
void ColumnLayout::ColumnSpacing(float value)
{
    if (_columnSpacing != value)
    {
        _columnSpacing = value;
        InvalidateLayout();
    }
}

// public float get_ItemSpacing() [instance] :149
float ColumnLayout::ItemSpacing()
{
    return _itemSpacing;
}

// public void set_ItemSpacing(float value) [instance] :150
void ColumnLayout::ItemSpacing(float value)
{
    if (_itemSpacing != value)
    {
        _itemSpacing = value;
        InvalidateLayout();
    }
}

// private int LeastAt(float[] c) [instance] :196
int ColumnLayout::LeastAt(uArray* c)
{
    float sz = uPtr(c)->Item<float>(0);
    int i = 0;

    for (int j = 1; j < c->Length(); j++)
        if (uPtr(c)->Item<float>(j) < sz)
        {
            sz = uPtr(c)->Item<float>(j);
            i = j;
        }

    return i;
}

// private float Max(float[] c) [instance] :213
float ColumnLayout::Max(uArray* c)
{
    float mx = uPtr(c)->Item<float>(0);

    for (int j = 1; j < c->Length(); j++)
        mx = ::g::Uno::Math::Max1(mx, uPtr(c)->Item<float>(j));

    return mx;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :47
int ColumnLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :48
void ColumnLayout::Orientation(int value)
{
    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.ColumnLayoutSizing get_Sizing() [instance] :185
int ColumnLayout::Sizing()
{
    return _sizing;
}

// public void set_Sizing(Fuse.Layouts.ColumnLayoutSizing value) [instance] :186
void ColumnLayout::Sizing(int value)
{
    if (_sizing != value)
    {
        _sizing = value;
        InvalidateLayout();
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/ColumnLayout.uno
// ---------------------------------------------------------------------------------

// public enum ColumnLayoutSizing :8
uEnumType* ColumnLayoutSizing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.ColumnLayoutSizing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Fixed", 0LL,
        "Fill", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// internal enum DefinitionBase.CreationType :57
uEnumType* DefinitionBase__CreationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.DefinitionBase.CreationType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Explicit", 0LL,
        "Parsed", 1LL,
        "Count", 2LL,
        "Implied", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/DefaultLayout.uno
// ----------------------------------------------------------------------------------

// public sealed class DefaultLayout :12
// {
static void DefaultLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetFields(2);
}

::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DefaultLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DefaultLayout", options);
    type->fp_build_ = DefaultLayout_build;
    type->fp_ctor_ = (void*)DefaultLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))DefaultLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))DefaultLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, int*))DefaultLayout__IsMarginBoxDependent_fn;
    return type;
}

// public generated DefaultLayout() :12
void DefaultLayout__ctor_2_fn(DefaultLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :52
void DefaultLayout__ArrangePaddingBox_fn(DefaultLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams av = lp_.CloneAndDerive();
    av.RemoveSize(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(padding_.Z, padding_.W)));

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        if (!__this->ArrangeMarginBoxSpecial(e, padding_, lp_))
            uPtr(e)->ArrangeMarginBox(::g::Uno::Float2__New2(padding_.X, padding_.Y), av);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :14
void DefaultLayout__GetContentSize_fn(DefaultLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 size = __this->GetElementsSize(container, lp_);
    return *__retval = size, void();
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) :40
void DefaultLayout__GetElementsSize_fn(DefaultLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(container, *lp);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :65
void DefaultLayout__IsMarginBoxDependent_fn(DefaultLayout* __this, ::g::Fuse::Visual* child, int* __retval)
{
    return *__retval = 2, void();
}

// public generated DefaultLayout New() :12
void DefaultLayout__New2_fn(DefaultLayout** __retval)
{
    *__retval = DefaultLayout::New2();
}

// public generated DefaultLayout() [instance] :12
void DefaultLayout::ctor_2()
{
    ctor_1();
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) [instance] :40
::g::Uno::Float2 DefaultLayout::GetElementsSize(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp)
{
    ::g::Uno::Float2 ds = ::g::Uno::Float2__New1(0.0f);

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(e))
            continue;

        ds = ::g::Uno::Math::Max3(ds, uPtr(e)->GetMarginSize(lp));
    }

    return ds;
}

// public generated DefaultLayout New() [static] :12
DefaultLayout* DefaultLayout::New2()
{
    DefaultLayout* obj1 = (DefaultLayout*)uNew(DefaultLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public abstract class DefinitionBase :21
// {
static void DefinitionBase_build(uType* type)
{
    type->MethodTypes[2]->SetPrecalc(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->MethodTypes[2]->U(0), NULL),
        type->MakeMethod(1/*Parse<T>*/, type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->MethodTypes[3]->U(0), NULL),
        ::g::Uno::Collections::IList_typeof()->MakeType(type->MethodTypes[3]->U(0), NULL));
    type->SetFields(1,
        ::g::Uno::Float_typeof(), offsetof(DefinitionBase, _actualOffset), 0,
        ::g::Uno::Float_typeof(), offsetof(DefinitionBase, _extent), 0,
        ::g::Fuse::Layouts::Metric_typeof(), offsetof(DefinitionBase, _metric), 0,
        ::g::Uno::Float_typeof(), offsetof(DefinitionBase, ActualExtent), 0,
        DefinitionBase__CreationType_typeof(), offsetof(DefinitionBase, Creation), 0,
        ::g::Uno::Bool_typeof(), offsetof(DefinitionBase, HasActualExtent), 0,
        ::g::Uno::Action_typeof(), offsetof(DefinitionBase, Changed1), 0);
}

uType* DefinitionBase_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 8;
    options.MethodTypeCount = 4;
    options.ObjectSize = sizeof(DefinitionBase);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.DefinitionBase", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 0,0);
    type->MethodTypes[2] = type->NewMethodType(1, 2,0);
    type->MethodTypes[3] = type->NewMethodType(1, 2,0);
    type->fp_build_ = DefinitionBase_build;
    return type;
}

// protected DefinitionBase() :26
void DefinitionBase__ctor_1_fn(DefinitionBase* __this)
{
    __this->ctor_1();
}

// public float get_ActualOffset() :50
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval)
{
    *__retval = __this->ActualOffset();
}

// internal void set_ActualOffset(float value) :51
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value)
{
    __this->ActualOffset(*value);
}

// internal generated void add_Changed(Uno.Action value) :23
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// internal generated void remove_Changed(Uno.Action value) :23
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// internal void Copy<T>(T copy, Fuse.Layouts.DefinitionBase.CreationType creation) :39
void DefinitionBase__Copy_fn(DefinitionBase* __this, uType* __type, DefinitionBase* copy, int* creation)
{
    __this->Copy(__type, copy, *creation);
}

// public float get_Extent() :97
void DefinitionBase__get_Extent_fn(DefinitionBase* __this, float* __retval)
{
    *__retval = __this->Extent();
}

// public void set_Extent(float value) :98
void DefinitionBase__set_Extent_fn(DefinitionBase* __this, float* value)
{
    __this->Extent(*value);
}

// internal bool get_IsImplied() :77
void DefinitionBase__get_IsImplied_fn(DefinitionBase* __this, bool* __retval)
{
    *__retval = __this->IsImplied();
}

// public Fuse.Layouts.Metric get_Metric() :83
void DefinitionBase__get_Metric_fn(DefinitionBase* __this, int* __retval)
{
    *__retval = __this->Metric();
}

// public void set_Metric(Fuse.Layouts.Metric value) :84
void DefinitionBase__set_Metric_fn(DefinitionBase* __this, int* value)
{
    __this->Metric(*value);
}

// protected internal void OnChanged() :24
void DefinitionBase__OnChanged_fn(DefinitionBase* __this)
{
    __this->OnChanged();
}

// protected internal static T Parse<T>(string data) :121
void DefinitionBase__Parse_fn(uType* __type, uString* data, DefinitionBase** __retval)
{
    *__retval = DefinitionBase::Parse(__type, data);
}

// protected internal static void Parse<T>(string data, Uno.Collections.IList<T> output) :111
void DefinitionBase__Parse1_fn(uType* __type, uString* data, uObject* output)
{
    DefinitionBase::Parse1(__type, data, output);
}

// internal string Serialize() :163
void DefinitionBase__Serialize_fn(DefinitionBase* __this, uString** __retval)
{
    *__retval = __this->Serialize();
}

// internal static string Serialize<T>(Uno.Collections.IList<T> columns) :174
void DefinitionBase__Serialize1_fn(uType* __type, uObject* columns, uString** __retval)
{
    *__retval = DefinitionBase::Serialize1(__type, columns);
}

// protected DefinitionBase() [instance] :26
void DefinitionBase::ctor_1()
{
    _metric = 1;
    _extent = 1.0f;
    ctor_();
}

// public float get_ActualOffset() [instance] :50
float DefinitionBase::ActualOffset()
{
    return _actualOffset;
}

// internal void set_ActualOffset(float value) [instance] :51
void DefinitionBase::ActualOffset(float value)
{
    _actualOffset = value;
}

// internal generated void add_Changed(Uno.Action value) [instance] :23
void DefinitionBase::add_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[8/*Uno.Action*/]);
}

// internal generated void remove_Changed(Uno.Action value) [instance] :23
void DefinitionBase::remove_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[8/*Uno.Action*/]);
}

// internal void Copy<T>(T copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance] :39
void DefinitionBase::Copy(uType* __type, DefinitionBase* copy, int creation)
{
    Metric(uPtr(copy)->Metric());
    Extent(copy->Extent());
    Creation = creation;
}

// public float get_Extent() [instance] :97
float DefinitionBase::Extent()
{
    return _extent;
}

// public void set_Extent(float value) [instance] :98
void DefinitionBase::Extent(float value)
{
    if (_extent != value)
    {
        _extent = ::g::Uno::Math::Max1(0.0f, value);
        OnChanged();
    }
}

// internal bool get_IsImplied() [instance] :77
bool DefinitionBase::IsImplied()
{
    return Creation == 3;
}

// public Fuse.Layouts.Metric get_Metric() [instance] :83
int DefinitionBase::Metric()
{
    return _metric;
}

// public void set_Metric(Fuse.Layouts.Metric value) [instance] :84
void DefinitionBase::Metric(int value)
{
    if (_metric != value)
    {
        _metric = value;
        OnChanged();
    }
}

// protected internal void OnChanged() [instance] :24
void DefinitionBase::OnChanged()
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid();
}

// internal string Serialize() [instance] :163
uString* DefinitionBase::Serialize()
{
    switch (Metric())
    {
        case 2:
            return uString::Const("auto");
        case 1:
            return ::g::Uno::String::op_Addition(uBox(::g::Uno::Float_typeof(), Extent()), uString::Const("*"));
        case 3:
            return uString::Const("default");
        default:
            return ::g::Uno::Float::ToString(Extent(), ::g::Uno::Float_typeof());
    }
}

// protected internal static T Parse<T>(string data) [static] :121
DefinitionBase* DefinitionBase::Parse(uType* __type, uString* data)
{
    try
    {
        uString* t = ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Trim(uPtr(data))));
        DefinitionBase* n = (DefinitionBase*)__type->U(0)->New();
        n->Creation = 1;

        if ((uPtr(t)->Length() > 0) && (uPtr(t)->Item(uPtr(t)->Length() - 1) == '*'))
        {
            uString* k = ::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring1(uPtr(t), 0, uPtr(t)->Length() - 1)));
            uPtr(n)->Extent(::g::Uno::Float::Parse(k));
            n->Metric(1);
        }
        else if (::g::Uno::String::op_Equality(t, uString::Const("auto")))
        {
            uPtr(n)->Extent(1.0f);
            n->Metric(2);
        }
        else if (::g::Uno::String::op_Equality(t, uString::Const("default")))
        {
            uPtr(n)->Extent(1.0f);
            n->Metric(3);
        }
        else
        {
            uPtr(n)->Extent(::g::Uno::Float::Parse(t));
            n->Metric(0);
        }

        return n;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        DefinitionBase* n1 = (DefinitionBase*)__type->U(0)->New();
        n1->Extent(0.0f);
        n1->Metric(0);
        n1->Creation = 1;
        return n1;
    }
}

// protected internal static void Parse<T>(string data, Uno.Collections.IList<T> output) [static] :111
void DefinitionBase::Parse1(uType* __type, uString* data, uObject* output)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Parse<T>*/),
    };
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(output), __types[0]));

    if (::g::Uno::String::op_Equality(data, NULL))
        return;

    uArray* s = ::g::Uno::String::Split(uPtr(data), uArray::Init<int>(::g::Uno::Char_typeof()->Array(), 1, ','));

    for (int i = 0; i < uPtr(s)->Length(); i++)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(output), __types[0]), (DefinitionBase*)DefinitionBase::Parse(__types[1], uPtr(s)->Strong<uString*>(i)));
}

// internal static string Serialize<T>(Uno.Collections.IList<T> columns) [static] :174
uString* DefinitionBase::Serialize1(uType* __type, uObject* columns)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    DefinitionBase* ret1;
    uString* s = uString::Const("");

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(columns), __types[0])); i++)
    {
        if (i > 0)
            s = ::g::Uno::String::op_Addition2(s, uString::Const(", "));

        s = ::g::Uno::String::op_Addition2(s, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(columns), __types[1]), uCRef<int>(i), &ret1), ret1))->Serialize());
    }

    return s;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/DockLayout.uno
// -------------------------------------------------------------------------------

// public enum Dock :12
uEnumType* Dock_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Dock", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "Fill", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/DockLayout.uno
// -------------------------------------------------------------------------------

// public sealed class DockLayout :17
// {
// static generated DockLayout() :17
static void DockLayout__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    DockLayout::_dockProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void DockLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&DockLayout::_dockProperty_, uFieldFlagsStatic);
}

::g::Fuse::Layouts::Layout_type* DockLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DockLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DockLayout", options);
    type->fp_build_ = DockLayout_build;
    type->fp_ctor_ = (void*)DockLayout__New2_fn;
    type->fp_cctor_ = DockLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))DockLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))DockLayout__GetContentSize_fn;
    return type;
}

// public generated DockLayout() :17
void DockLayout__ctor_2_fn(DockLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :109
void DockLayout__ArrangePaddingBox_fn(DockLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 availablePosition = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 availableSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp_.Size(), ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.SetRelativeSize(lp_.Size(), lp_.HasX(), lp_.HasY());

    for (::g::Fuse::Visual* c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != NULL; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(c, padding_, lp_))
            continue;

        int d = DockLayout::GetDock(c);
        bool horz = (d == 0) || (d == 1);
        nlp.SetSize(availableSize, !horz, horz);
        ::g::Uno::Float2 desiredSize = uPtr(c)->GetMarginSize(nlp);

        switch (d)
        {
            case 0:
            {
                desiredSize.Y = availableSize.Y;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(availablePosition, nlp);
                availablePosition.X = (availablePosition.X + desiredSize.X);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 1:
            {
                desiredSize.Y = availableSize.Y;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2((availablePosition.X + availableSize.X) - desiredSize.X, availablePosition.Y), nlp);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 2:
            {
                desiredSize.X = availableSize.X;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(availablePosition, nlp);
                availablePosition.Y = (availablePosition.Y + desiredSize.Y);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 3:
            {
                desiredSize.X = availableSize.X;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2(availablePosition.X, (availablePosition.Y + availableSize.Y) - desiredSize.Y), nlp);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 4:
                break;
        }

        availableSize = ::g::Uno::Math::Max3(availableSize, ::g::Uno::Float2__New1(0.0f));
    }

    nlp.SetSize(availableSize, true, true);

    for (::g::Fuse::Visual* c1 = (::g::Fuse::Visual*)container->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c1 != NULL; c1 = (::g::Fuse::Visual*)uPtr(c1)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!__this->AffectsLayout(c1))
            continue;

        if (DockLayout::GetDock(c1) != 4)
            continue;

        uPtr(c1)->ArrangeMarginBox(availablePosition, nlp);
    }
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :44
void DockLayout__GetContentSize_fn(DockLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.SetRelativeSize(lp_.Size(), lp_.HasX(), lp_.HasY());
    return *__retval = __this->MeasureSubtree(container, (::g::Fuse::Node*)uPtr(container)->FirstChild(::TYPES[3/*Fuse.Visual.FirstChild<Fuse.Node>*/]), nlp), void();
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Visual elm) :28
void DockLayout__GetDock_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = DockLayout::GetDock(elm);
}

// private float2 MeasureSubtree(Fuse.Visual container, Fuse.Node child, Fuse.LayoutParams lp) :52
void DockLayout__MeasureSubtree_fn(DockLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::Node* child, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureSubtree(container, child, *lp);
}

// public generated DockLayout New() :17
void DockLayout__New2_fn(DockLayout** __retval)
{
    *__retval = DockLayout::New2();
}

// public static void SetDock(Fuse.Visual elm, Fuse.Layouts.Dock dock) :22
void DockLayout__SetDock_fn(::g::Fuse::Visual* elm, int* dock)
{
    DockLayout::SetDock(elm, *dock);
}

uSStrong< ::g::Fuse::PropertyHandle*> DockLayout::_dockProperty_;

// public generated DockLayout() [instance] :17
void DockLayout::ctor_2()
{
    ctor_1();
}

// private float2 MeasureSubtree(Fuse.Visual container, Fuse.Node child, Fuse.LayoutParams lp) [instance] :52
::g::Uno::Float2 DockLayout::MeasureSubtree(::g::Fuse::Visual* container, ::g::Fuse::Node* child, ::g::Fuse::LayoutParams lp)
{
    ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>(child, ::TYPES[4/*Fuse.Visual*/]);

    if (child == NULL)
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != NULL; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        {
            if (!AffectsLayout(c))
                continue;

            if (DockLayout::GetDock(c) == 4)
            {
                ::g::Uno::Float2 sz = uPtr(c)->GetMarginSize(lp);
                mx = ::g::Uno::Math::Max3(sz, mx);
            }
        }

        return mx;
    }

    if (c == NULL)
        return MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);

    switch (DockLayout::GetDock(c))
    {
        case 0:
        case 1:
        {
            ::g::Fuse::LayoutParams nlp = lp.Clone();
            nlp.RetainXY(false, nlp.HasY());
            ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(nlp);
            lp.RemoveSize(::g::Uno::Float2__New2(cds.X, 0.0f));
            ::g::Uno::Float2 subtree = MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);
            return ::g::Uno::Float2__New2(cds.X + subtree.X, ::g::Uno::Math::Max1(cds.Y, subtree.Y));
        }
        case 2:
        case 3:
        {
            ::g::Fuse::LayoutParams nlp1 = lp.Clone();
            nlp1.RetainXY(nlp1.HasX(), false);
            ::g::Uno::Float2 cds1 = uPtr(c)->GetMarginSize(nlp1);
            lp.RemoveSize(::g::Uno::Float2__New2(0.0f, cds1.Y));
            ::g::Uno::Float2 subtree1 = MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);
            return ::g::Uno::Float2__New2(::g::Uno::Math::Max1(cds1.X, subtree1.X), cds1.Y + subtree1.Y);
        }
        case 4:
            return MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);
    }

    return ::g::Uno::Float2__New1(0.0f);
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Visual elm) [static] :28
int DockLayout::GetDock(::g::Fuse::Visual* elm)
{
    uObject* val;

    if (uPtr(uPtr(elm)->Properties())->TryGet(DockLayout::_dockProperty_, &val))
        return uUnbox<int>(::g::Fuse::Layouts::Dock_typeof(), val);

    return 4;
}

// public generated DockLayout New() [static] :17
DockLayout* DockLayout::New2()
{
    DockLayout* obj1 = (DockLayout*)uNew(DockLayout_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static void SetDock(Fuse.Visual elm, Fuse.Layouts.Dock dock) [static] :22
void DockLayout::SetDock(::g::Fuse::Visual* elm, int dock)
{
    uPtr(uPtr(elm)->Properties())->Set(DockLayout::_dockProperty_, uBox<int>(::g::Fuse::Layouts::Dock_typeof(), dock));
    elm->InvalidateLayout(2);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/WrapLayout.uno
// -------------------------------------------------------------------------------

// public enum FlowDirection :12
uEnumType* FlowDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.FlowDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "LeftToRight", 0LL,
        "RightToLeft", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public enum GridChildOrder :263
uEnumType* GridChildOrder_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.GridChildOrder", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "RowMajor", 0LL,
        "ColumnMajor", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public sealed class GridLayout :269
// {
// static generated GridLayout() :269
static void GridLayout__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    ::g::Fuse::Layouts::Row* collection2;
    ::g::Fuse::Layouts::Column* collection1;
    GridLayout::_staticDefaultRow_ = (collection2 = ::g::Fuse::Layouts::Row::New2(), uPtr(collection2)->Metric(3), 3, uPtr(collection2)->Extent(1.0f), 1.0f, collection2);
    GridLayout::_staticDefaultColumn_ = (collection1 = ::g::Fuse::Layouts::Column::New2(), uPtr(collection1)->Metric(3), 3, uPtr(collection1)->Extent(1.0f), 1.0f, collection1);
    GridLayout::_rowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualRowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_rowSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualColumnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void GridLayout_build(uType* type)
{
    ::STRINGS[0] = uString::Const("RowCount and ColumnCount must be >= 1");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno");
    ::STRINGS[2] = uString::Const("ModifyCount");
    ::TYPES[6] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[9] = type->MakeMethod(6/*UserCount<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[10] = type->MakeMethod(6/*UserCount<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[12] = type->MakeMethod(5/*TrimPad<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[13] = type->MakeMethod(5/*TrimPad<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[16] = type->MakeMethod(1/*CalcInitialExtents<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[17] = type->MakeMethod(1/*CalcInitialExtents<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[18] = type->MakeMethod(3/*GetTotalProportion<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[19] = type->MakeMethod(3/*GetTotalProportion<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[20] = type->MakeMethod(0/*CalcFill<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[21] = type->MakeMethod(0/*CalcFill<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[22] = type->MakeMethod(2/*CalcTotalExtentAndOffset<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[23] = type->MakeMethod(2/*CalcTotalExtentAndOffset<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[24] = ::g::Fuse::Layouts::DefinitionBase_typeof();
    ::TYPES[25] = ::g::Uno::Collections::IListExtensions_typeof();
    ::TYPES[26] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[28] = ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[29] = type->MakeMethod(4/*ModifyCount<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[30] = ::TYPES[24/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(3/*Serialize<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[31] = ::TYPES[24/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(2/*Parse<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[32] = ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[33] = type->MakeMethod(4/*ModifyCount<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL));
    type->MethodTypes[4]->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->MethodTypes[4]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL),
        ::TYPES[24/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[4]->U(0), NULL),
        ::TYPES[25/*Uno.Collections.IListExtensions*/]->MakeMethod(0/*RemoveLast<T>*/, type->MethodTypes[4]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL),
        ::TYPES[24/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[5]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL));
    type->MethodTypes[6]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[6]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[6]->U(0), NULL));
    type->SetFields(2,
        ::g::Uno::Float_typeof(), offsetof(GridLayout, _cellSpacing), 0,
        ::g::Fuse::Layouts::GridChildOrder_typeof(), offsetof(GridLayout, _childOrder), 0,
        ::TYPES[7/*Uno.Collections.RootableList<Fuse.Layouts.Column>*/], offsetof(GridLayout, _columns), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(GridLayout, _contentAlignment), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(GridLayout, _defaultColumn), 0,
        ::g::Fuse::Layouts::Row_typeof(), offsetof(GridLayout, _defaultRow), 0,
        ::TYPES[6/*Uno.Collections.RootableList<Fuse.Layouts.Row>*/], offsetof(GridLayout, _rows), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_actualColumnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_actualRowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_columnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_columnSpanProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_rowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_rowSpanProperty_, uFieldFlagsStatic,
        ::g::Fuse::Layouts::Column_typeof(), (uintptr_t)&GridLayout::_staticDefaultColumn_, uFieldFlagsStatic,
        ::g::Fuse::Layouts::Row_typeof(), (uintptr_t)&GridLayout::_staticDefaultRow_, uFieldFlagsStatic);
}

::g::Fuse::Layouts::Layout_type* GridLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 17;
    options.MethodTypeCount = 7;
    options.ObjectSize = sizeof(GridLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.GridLayout", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2,0);
    type->MethodTypes[1] = type->NewMethodType(1, 2,0);
    type->MethodTypes[2] = type->NewMethodType(1, 2,0);
    type->MethodTypes[3] = type->NewMethodType(1, 2,0);
    type->MethodTypes[4] = type->NewMethodType(1, 4,1);
    type->MethodTypes[5] = type->NewMethodType(1, 3,0);
    type->MethodTypes[6] = type->NewMethodType(1, 2,0);
    type->fp_build_ = GridLayout_build;
    type->fp_ctor_ = (void*)GridLayout__New2_fn;
    type->fp_cctor_ = GridLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))GridLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))GridLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, int*))GridLayout__IsMarginBoxDependent_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Layouts::Layout*))GridLayout__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Layouts::Layout*))GridLayout__OnUnrooted_fn;
    return type;
}

// public generated GridLayout() :269
void GridLayout__ctor_2_fn(GridLayout* __this)
{
    __this->ctor_2();
}

// private bool AddListener(Fuse.Layouts.DefinitionBase item) :697
void GridLayout__AddListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval)
{
    *__retval = __this->AddListener(item);
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :1013
void GridLayout__ArrangePaddingBox_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::Layouts::Column* ret4;
    ::g::Fuse::Layouts::Column* ret5;
    ::g::Fuse::Layouts::Row* ret6;
    ::g::Fuse::Layouts::Row* ret7;
    ::g::Uno::Float2 remainSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp_.Size(), ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Uno::Float2 measured = __this->Measure(container, ::g::Fuse::LayoutParams__Create(remainSize));
    ::g::Uno::Float2 off = ::g::Uno::Float2__New1(0.0f);
    int eca = __this->EffectiveContentAlignment();

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(eca))
    {
        case 0:
        {
            off.X = padding_.X;
            break;
        }
        case 1:
        {
            off.X = (((remainSize.X / 2.0f) - (measured.X / 2.0f)) + padding_.X);
            break;
        }
        case 2:
        {
            off.X = ((lp_.X() - measured.X) - padding_.Z);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(eca))
    {
        case 0:
        {
            off.Y = padding_.Y;
            break;
        }
        case 1:
        {
            off.Y = (((remainSize.Y / 2.0f) - (measured.Y / 2.0f)) + padding_.Y);
            break;
        }
        case 2:
        {
            off.Y = ((lp_.Y() - measured.Y) - padding_.W);
            break;
        }
    }

    float effectiveCellSpacing = __this->EffectiveCellSpacing();
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();

    for (::g::Fuse::Visual* child = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); child != NULL; child = (::g::Fuse::Visual*)uPtr(child)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(child, padding_, lp_))
            continue;

        int column = __this->GetActualColumn(child);
        int row = __this->GetActualRow(child);
        int rowSpan = GridLayout::GetRowSpan(child);
        int columnSpan = GridLayout::GetColumnSpan(child);
        float x = 0.0f;
        float y = 0.0f;
        float w = remainSize.X;
        float h = remainSize.Y;

        if ((column >= 0) && (column < uPtr(__this->_columns)->Count()))
        {
            ::g::Fuse::Layouts::Column* c = (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_columns), uCRef<int>(column), &ret4), ret4);
            x = uPtr(c)->ActualOffset();
            w = c->ActualExtent;

            for (int s = column + 1; s < ::g::Uno::Math::Min8(uPtr(__this->_columns)->Count(), column + columnSpan); ++s)
                w = w + (uPtr((::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_columns), uCRef<int>(s), &ret5), ret5))->ActualExtent + effectiveCellSpacing);
        }

        if ((row >= 0) && (row < uPtr(__this->_rows)->Count()))
        {
            ::g::Fuse::Layouts::Row* r = (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_rows), uCRef<int>(row), &ret6), ret6);
            y = uPtr(r)->ActualOffset();
            h = r->ActualExtent;

            for (int s1 = row + 1; s1 < ::g::Uno::Math::Min8(uPtr(__this->_rows)->Count(), row + rowSpan); ++s1)
                h = h + (uPtr((::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_rows), uCRef<int>(s1), &ret7), ret7))->ActualExtent + effectiveCellSpacing);
        }

        nlp.SetSize(::g::Uno::Float2__New2(w, h), true, true);
        uPtr(child)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(off, ::g::Uno::Float2__New2(x, y)), nlp);
    }
}

// private void CalcActualPositions(Fuse.Visual container) :513
void GridLayout__CalcActualPositions_fn(GridLayout* __this, ::g::Fuse::Visual* container)
{
    __this->CalcActualPositions(container);
}

// private void CalcAuto(Fuse.Visual container, float& availableWidth, float& availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight) :871
void GridLayout__CalcAuto_fn(GridLayout* __this, ::g::Fuse::Visual* container, float* availableWidth, float* availableHeight, bool* secondPass, bool* hasFirstHorzSize, bool* hasFirstVertSize, bool* expandWidth, bool* expandHeight)
{
    __this->CalcAuto(container, availableWidth, availableHeight, *secondPass, *hasFirstHorzSize, *hasFirstVertSize, *expandWidth, *expandHeight);
}

// private void CalcFill<T>(Uno.Collections.IList<T> list, float available, float proportion, bool expand) :762
void GridLayout__CalcFill_fn(GridLayout* __this, uType* __type, uObject* list, float* available, float* proportion, bool* expand)
{
    __this->CalcFill(__type, list, *available, *proportion, *expand);
}

// private void CalcInitialExtents<T>(Uno.Collections.IList<T> list, bool expand, float& used, bool& hasAuto) :782
void GridLayout__CalcInitialExtents_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* used, bool* hasAuto)
{
    __this->CalcInitialExtents(__type, list, *expand, used, hasAuto);
}

// private float CalcTotalExtentAndOffset<T>(Uno.Collections.IList<T> list, float effectiveCellSpacing) :805
void GridLayout__CalcTotalExtentAndOffset_fn(GridLayout* __this, uType* __type, uObject* list, float* effectiveCellSpacing, float* __retval)
{
    *__retval = __this->CalcTotalExtentAndOffset(__type, list, *effectiveCellSpacing);
}

// public float get_CellSpacing() :421
void GridLayout__get_CellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->CellSpacing();
}

// public void set_CellSpacing(float value) :422
void GridLayout__set_CellSpacing_fn(GridLayout* __this, float* value)
{
    __this->CellSpacing(*value);
}

// private void Changed() :680
void GridLayout__Changed_fn(GridLayout* __this)
{
    __this->Changed();
}

// public Fuse.Layouts.GridChildOrder get_ChildOrder() :287
void GridLayout__get_ChildOrder_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->ChildOrder();
}

// public void set_ChildOrder(Fuse.Layouts.GridChildOrder value) :288
void GridLayout__set_ChildOrder_fn(GridLayout* __this, int* value)
{
    __this->ChildOrder(*value);
}

// public int get_ColumnCount() :400
void GridLayout__get_ColumnCount_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value) :401
void GridLayout__set_ColumnCount_fn(GridLayout* __this, int* value)
{
    __this->ColumnCount(*value);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() :374
void GridLayout__get_ColumnList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->ColumnList();
}

// public string get_Columns() :378
void GridLayout__get_Columns_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->Columns();
}

// public void set_Columns(string value) :379
void GridLayout__set_Columns_fn(GridLayout* __this, uString* value)
{
    __this->Columns(value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() :435
void GridLayout__get_ContentAlignment_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :436
void GridLayout__set_ContentAlignment_fn(GridLayout* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// private void DefinitionAdded(Fuse.Layouts.DefinitionBase r) :685
void GridLayout__DefinitionAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r)
{
    __this->DefinitionAdded(r);
}

// private void DefinitionRemoved(Fuse.Layouts.DefinitionBase r) :691
void GridLayout__DefinitionRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r)
{
    __this->DefinitionRemoved(r);
}

// private float get_EffectiveCellSpacing() :736
void GridLayout__get_EffectiveCellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveCellSpacing();
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment() :999
void GridLayout__get_EffectiveContentAlignment_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private Fuse.Layouts.Metric EffectiveMetric(Fuse.Layouts.Metric src, bool expand) :743
void GridLayout__EffectiveMetric_fn(GridLayout* __this, int* src, bool* expand, int* __retval)
{
    *__retval = __this->EffectiveMetric(*src, *expand);
}

// private int GetActualColumn(Fuse.Visual elm) :640
void GridLayout__GetActualColumn_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = __this->GetActualColumn(elm);
}

// private int GetActualRow(Fuse.Visual elm) :466
void GridLayout__GetActualRow_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = __this->GetActualRow(elm);
}

// private float2 GetAutoSize(Fuse.Visual child, int x0, int y0, bool expandX, bool expandY, bool& knowX, bool& knowY, bool& autoX, bool& autoY) :821
void GridLayout__GetAutoSize_fn(GridLayout* __this, ::g::Fuse::Visual* child, int* x0, int* y0, bool* expandX, bool* expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAutoSize(child, *x0, *y0, *expandX, *expandY, knowX, knowY, autoX, autoY);
}

// public static int GetColumn(Fuse.Visual elm) :506
void GridLayout__GetColumn_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = GridLayout::GetColumn(elm);
}

// private Fuse.Layouts.Column GetColumnData(int column) :404
void GridLayout__GetColumnData_fn(GridLayout* __this, int* column, ::g::Fuse::Layouts::Column** __retval)
{
    *__retval = __this->GetColumnData(*column);
}

// public static int GetColumnSpan(Fuse.Visual elm) :661
void GridLayout__GetColumnSpan_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = GridLayout::GetColumnSpan(elm);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :729
void GridLayout__GetContentSize_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Measure(container, lp_), void();
}

// public static int GetRow(Fuse.Visual elm) :459
void GridLayout__GetRow_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = GridLayout::GetRow(elm);
}

// private Fuse.Layouts.Row GetRowData(int row) :411
void GridLayout__GetRowData_fn(GridLayout* __this, int* row, ::g::Fuse::Layouts::Row** __retval)
{
    *__retval = __this->GetRowData(*row);
}

// public static int GetRowSpan(Fuse.Visual elm) :487
void GridLayout__GetRowSpan_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = GridLayout::GetRowSpan(elm);
}

// private float GetTotalProportion<T>(Uno.Collections.IList<T> list, bool expand) :750
void GridLayout__GetTotalProportion_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* __retval)
{
    *__retval = __this->GetTotalProportion(__type, list, *expand);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :1092
void GridLayout__IsMarginBoxDependent_fn(GridLayout* __this, ::g::Fuse::Visual* child, int* __retval)
{
    ::g::Fuse::Layouts::Column* c = __this->GetColumnData(__this->GetActualColumn(child));
    ::g::Fuse::Layouts::Row* r = __this->GetRowData(__this->GetActualRow(child));

    if ((c == NULL) || (r == NULL))
        return *__retval = 0, void();

    return *__retval = ((__this->EffectiveMetric(uPtr(c)->Metric(), false) != 2) && (__this->EffectiveMetric(uPtr(r)->Metric(), false) != 2)) ? 0 : 4, void();
}

// private float2 Measure(Fuse.Visual container, Fuse.LayoutParams lp) :928
void GridLayout__Measure_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(container, *lp);
}

// private void ModifyCount<T>(Uno.Collections.IList<T> list, int count, T primordial) :340
void GridLayout__ModifyCount_fn(GridLayout* __this, uType* __type, uObject* list, int* count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    __this->ModifyCount(__type, list, *count, primordial);
}

// public generated GridLayout New() :269
void GridLayout__New2_fn(GridLayout** __retval)
{
    *__retval = GridLayout::New2();
}

// protected override sealed void OnRooted() :715
void GridLayout__OnRooted_fn(GridLayout* __this)
{
    ::g::Fuse::Layouts::Layout__OnRooted_fn(__this);
    uPtr(__this->_rows)->RootSubscribe(uDelegate::New(::TYPES[26/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__DefinitionAdded_fn, __this), uDelegate::New(::TYPES[26/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__DefinitionRemoved_fn, __this));
    uPtr(__this->_columns)->RootSubscribe(uDelegate::New(::TYPES[27/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__DefinitionAdded_fn, __this), uDelegate::New(::TYPES[27/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__DefinitionRemoved_fn, __this));
}

// protected override sealed void OnUnrooted() :722
void GridLayout__OnUnrooted_fn(GridLayout* __this)
{
    ::g::Fuse::Layouts::Layout__OnUnrooted_fn(__this);
    uPtr(__this->_columns)->RootUnsubscribe();
    uPtr(__this->_rows)->RootUnsubscribe();
}

// private bool RemoveListener(Fuse.Layouts.DefinitionBase item) :705
void GridLayout__RemoveListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval)
{
    *__retval = __this->RemoveListener(item);
}

// public int get_RowCount() :326
void GridLayout__get_RowCount_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->RowCount();
}

// public void set_RowCount(int value) :327
void GridLayout__set_RowCount_fn(GridLayout* __this, int* value)
{
    __this->RowCount(*value);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() :272
void GridLayout__get_RowList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->RowList();
}

// private void TrimPad<T>(Uno.Collections.IList<T> list, int count, T primordial) :622
void GridLayout__TrimPad_fn(GridLayout* __this, uType* __type, uObject* list, int* count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    __this->TrimPad(__type, list, *count, primordial);
}

// private int UserCount<T>(Uno.Collections.IList<T> list) :331
void GridLayout__UserCount_fn(GridLayout* __this, uType* __type, uObject* list, int* __retval)
{
    *__retval = __this->UserCount(__type, list);
}

uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualColumnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualRowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnSpanProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowSpanProperty_;
uSStrong< ::g::Fuse::Layouts::Column*> GridLayout::_staticDefaultColumn_;
uSStrong< ::g::Fuse::Layouts::Row*> GridLayout::_staticDefaultRow_;

// public generated GridLayout() [instance] :269
void GridLayout::ctor_2()
{
    _defaultRow = GridLayout::_staticDefaultRow_;
    _defaultColumn = GridLayout::_staticDefaultColumn_;
    _cellSpacing = 0.0f;
    _rows = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[6/*Uno.Collections.RootableList<Fuse.Layouts.Row>*/]));
    _columns = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[7/*Uno.Collections.RootableList<Fuse.Layouts.Column>*/]));
    ctor_1();
}

// private bool AddListener(Fuse.Layouts.DefinitionBase item) [instance] :697
bool GridLayout::AddListener(::g::Fuse::Layouts::DefinitionBase* item)
{
    if (uPtr(item)->Creation != 0)
        return false;

    uPtr(item)->add_Changed(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    return true;
}

// private void CalcActualPositions(Fuse.Visual container) [instance] :513
void GridLayout::CalcActualPositions(::g::Fuse::Visual* container)
{
    int ret8;
    int ret9;
    bool rowMajor = ChildOrder() == 0;
    int minorCount = ::g::Uno::Math::Max8(1, rowMajor ? UserCount(::TYPES[9/*Fuse.Layouts.GridLayout.UserCount<Fuse.Layouts.Column>*/], ColumnList()) : UserCount(::TYPES[10/*Fuse.Layouts.GridLayout.UserCount<Fuse.Layouts.Row>*/], RowList()));

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(e))
            continue;

        if (rowMajor)
            minorCount = ::g::Uno::Math::Max8(minorCount, GridLayout::GetColumn(e) + GridLayout::GetColumnSpan(e));
        else
            minorCount = ::g::Uno::Math::Max8(minorCount, GridLayout::GetRow(e) + GridLayout::GetRowSpan(e));
    }

    ::g::Uno::Collections::List* majorAvail = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[11/*Uno.Collections.List<int>*/], minorCount);

    for (int c = 0; c < minorCount; c++)
        ::g::Uno::Collections::List__Add_fn(uPtr(majorAvail), uCRef<int>(0));

    int rowAt = 0;
    int colAt = 0;
    int maxRow = 0;
    int maxCol = 0;

    for (::g::Fuse::Visual* elm = (::g::Fuse::Visual*)container->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); elm != NULL; elm = (::g::Fuse::Visual*)uPtr(elm)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(elm))
            continue;

        uObject* v;
        bool haveCol = false, haveRow = false;

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty_, &v))
        {
            colAt = uUnbox<int>(::g::Uno::Int_typeof(), v);
            haveCol = true;
        }

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty_, &v))
        {
            rowAt = uUnbox<int>(::g::Uno::Int_typeof(), v);
            haveRow = true;
        }

        if (haveRow && !haveCol)
            colAt = 0;

        if (haveCol && !haveRow)
            rowAt = 0;

        if (!haveRow && !haveCol)
        {
            if (rowMajor)

                while (rowAt < (::g::Uno::Collections::List__get_Item_fn(uPtr(majorAvail), uCRef<int>(colAt), &ret8), ret8))
                {
                    colAt++;

                    if (colAt >= minorCount)
                    {
                        rowAt++;
                        colAt = 0;
                    }
                }
            else

                while (colAt < (::g::Uno::Collections::List__get_Item_fn(uPtr(majorAvail), uCRef<int>(rowAt), &ret9), ret9))
                {
                    rowAt++;

                    if (rowAt >= minorCount)
                    {
                        colAt++;
                        rowAt = 0;
                    }
                }
        }

        uPtr(uPtr(elm)->Properties())->Set(GridLayout::_actualRowProperty_, uBox<int>(::g::Uno::Int_typeof(), rowAt));
        uPtr(elm->Properties())->Set(GridLayout::_actualColumnProperty_, uBox<int>(::g::Uno::Int_typeof(), colAt));
        int xs = GridLayout::GetColumnSpan(elm);
        int ys = GridLayout::GetRowSpan(elm);
        maxRow = ::g::Uno::Math::Max8(maxRow, rowAt + ys);
        maxCol = ::g::Uno::Math::Max8(maxCol, colAt + xs);

        if (rowMajor)

            for (int c1 = colAt; c1 < ::g::Uno::Math::Min8(minorCount, colAt + xs); c1++)
                ::g::Uno::Collections::List__set_Item_fn(uPtr(majorAvail), uCRef<int>(c1), uCRef<int>(rowAt + ys));
        else

            for (int c2 = rowAt; c2 < ::g::Uno::Math::Min8(minorCount, rowAt + ys); c2++)
                ::g::Uno::Collections::List__set_Item_fn(uPtr(majorAvail), uCRef<int>(c2), uCRef<int>(colAt + xs));
    }

    TrimPad(::TYPES[12/*Fuse.Layouts.GridLayout.TrimPad<Fuse.Layouts.Row>*/], (uObject*)_rows, maxRow, _defaultRow);
    TrimPad(::TYPES[13/*Fuse.Layouts.GridLayout.TrimPad<Fuse.Layouts.Column>*/], (uObject*)_columns, maxCol, _defaultColumn);
}

// private void CalcAuto(Fuse.Visual container, float& availableWidth, float& availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight) [instance] :871
void GridLayout::CalcAuto(::g::Fuse::Visual* container, float* availableWidth, float* availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight)
{
    for (::g::Fuse::Visual* child = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); child != NULL; child = (::g::Fuse::Visual*)uPtr(child)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(child))
            continue;

        int x = GetActualColumn(child);
        int y = GetActualRow(child);
        ::g::Fuse::Layouts::Column* colData = GetColumnData(x);

        if (colData == NULL)
            continue;

        ::g::Fuse::Layouts::Row* rowData = GetRowData(y);

        if (rowData == NULL)
            continue;

        bool sizeMatch = ((EffectiveMetric(uPtr(rowData)->Metric(), expandWidth) == 1) && !hasFirstVertSize) || ((EffectiveMetric(uPtr(colData)->Metric(), expandHeight) == 1) && !hasFirstHorzSize);

        if (sizeMatch != secondPass)
            continue;

        bool knowX = false;
        bool knowY = false;
        bool autoX = false;
        bool autoY = false;
        ::g::Uno::Float2 knowSize = GetAutoSize(child, x, y, expandWidth, expandHeight, &knowX, &knowY, &autoX, &autoY);

        if (!autoX && !autoY)
            continue;

        ::g::Fuse::LayoutParams clp = ::g::Fuse::LayoutParams__CreateXY(knowSize, knowX && !autoX, knowY && !autoY);
        ::g::Uno::Float2 cds = uPtr(child)->GetMarginSize(clp);

        if (autoX)
        {
            float w = ::g::Uno::Math::Max1(uPtr(colData)->ActualExtent, cds.X);
            *availableWidth = *availableWidth - (w - colData->ActualExtent);
            colData->ActualExtent = w;
            colData->HasActualExtent = true;
        }

        if (autoY)
        {
            float h = ::g::Uno::Math::Max1(uPtr(rowData)->ActualExtent, cds.Y);
            *availableHeight = *availableHeight - (h - rowData->ActualExtent);
            rowData->ActualExtent = h;
            rowData->HasActualExtent = true;
        }
    }

    *availableWidth = ::g::Uno::Math::Max1(*availableWidth, 0.0f);
    *availableHeight = ::g::Uno::Math::Max1(*availableHeight, 0.0f);
}

// private void CalcFill<T>(Uno.Collections.IList<T> list, float available, float proportion, bool expand) [instance] :762
void GridLayout::CalcFill(uType* __type, uObject* list, float available, float proportion, bool expand)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret10;
    float extraWidth = 0.0f;
    float colWidth = available / proportion;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret10), ret10);

        if (EffectiveMetric(uPtr(c)->Metric(), expand) != 1)
            continue;

        float w = Snap((uPtr(c)->Extent() * colWidth) + extraWidth);
        extraWidth = extraWidth + ((c->Extent() * colWidth) - w);
        c->ActualExtent = w;
        c->HasActualExtent = true;
    }
}

// private void CalcInitialExtents<T>(Uno.Collections.IList<T> list, bool expand, float& used, bool& hasAuto) [instance] :782
void GridLayout::CalcInitialExtents(uType* __type, uObject* list, bool expand, float* used, bool* hasAuto)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret11;
    *hasAuto = false;
    *used = 0.0f;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret11), ret11);
        uPtr(c)->ActualExtent = 0.0f;
        c->HasActualExtent = false;

        if ((c != NULL) && (EffectiveMetric(c->Metric(), expand) == 0))
        {
            uPtr(c)->ActualExtent = uPtr(c)->Extent();
            c->HasActualExtent = true;
            *used = *used + c->Extent();
        }

        if (EffectiveMetric(c->Metric(), expand) == 2)
            *hasAuto = true;
    }
}

// private float CalcTotalExtentAndOffset<T>(Uno.Collections.IList<T> list, float effectiveCellSpacing) [instance] :805
float GridLayout::CalcTotalExtentAndOffset(uType* __type, uObject* list, float effectiveCellSpacing)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret12;
    float total = 0.0f;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        if (i > 0)
            total = total + effectiveCellSpacing;

        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret12), ret12);
        uPtr(c)->ActualOffset(total);
        total = total + c->ActualExtent;
    }

    return total;
}

// public float get_CellSpacing() [instance] :421
float GridLayout::CellSpacing()
{
    return _cellSpacing;
}

// public void set_CellSpacing(float value) [instance] :422
void GridLayout::CellSpacing(float value)
{
    if (_cellSpacing != value)
    {
        _cellSpacing = value;
        Changed();
    }
}

// private void Changed() [instance] :680
void GridLayout::Changed()
{
    InvalidateLayout();
}

// public Fuse.Layouts.GridChildOrder get_ChildOrder() [instance] :287
int GridLayout::ChildOrder()
{
    return _childOrder;
}

// public void set_ChildOrder(Fuse.Layouts.GridChildOrder value) [instance] :288
void GridLayout::ChildOrder(int value)
{
    if (_childOrder != value)
    {
        _childOrder = value;
        Changed();
    }
}

// public int get_ColumnCount() [instance] :400
int GridLayout::ColumnCount()
{
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(ColumnList()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]));
}

// public void set_ColumnCount(int value) [instance] :401
void GridLayout::ColumnCount(int value)
{
    ModifyCount(::TYPES[29/*Fuse.Layouts.GridLayout.ModifyCount<Fuse.Layouts.Column>*/], (uObject*)_columns, value, _defaultColumn);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() [instance] :374
uObject* GridLayout::ColumnList()
{
    return (uObject*)_columns;
}

// public string get_Columns() [instance] :378
uString* GridLayout::Columns()
{
    return ::g::Fuse::Layouts::DefinitionBase::Serialize1(::TYPES[30/*Fuse.Layouts.DefinitionBase.Serialize<Fuse.Layouts.Column>*/], ColumnList());
}

// public void set_Columns(string value) [instance] :379
void GridLayout::Columns(uString* value)
{
    ::g::Fuse::Layouts::DefinitionBase::Parse1(::TYPES[31/*Fuse.Layouts.DefinitionBase.Parse<Fuse.Layouts.Column>*/], value, ColumnList());
    Changed();
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :435
int GridLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :436
void GridLayout::ContentAlignment(int value)
{
    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        Changed();
    }
}

// private void DefinitionAdded(Fuse.Layouts.DefinitionBase r) [instance] :685
void GridLayout::DefinitionAdded(::g::Fuse::Layouts::DefinitionBase* r)
{
    if (AddListener(r))
        Changed();
}

// private void DefinitionRemoved(Fuse.Layouts.DefinitionBase r) [instance] :691
void GridLayout::DefinitionRemoved(::g::Fuse::Layouts::DefinitionBase* r)
{
    if (RemoveListener(r))
        Changed();
}

// private float get_EffectiveCellSpacing() [instance] :736
float GridLayout::EffectiveCellSpacing()
{
    return SnapUp(CellSpacing());
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment() [instance] :999
int GridLayout::EffectiveContentAlignment()
{
    int ca = ContentAlignment();

    if (ca == 0)
    {
        if (Container != NULL)
            ca = uPtr(Container)->Alignment();
        else
            ca = 5;
    }

    return ca;
}

// private Fuse.Layouts.Metric EffectiveMetric(Fuse.Layouts.Metric src, bool expand) [instance] :743
int GridLayout::EffectiveMetric(int src, bool expand)
{
    if (src == 3)
        return expand ? 1 : 2;

    return src;
}

// private int GetActualColumn(Fuse.Visual elm) [instance] :640
int GridLayout::GetActualColumn(::g::Fuse::Visual* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualColumnProperty_, &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);

    return -1;
}

// private int GetActualRow(Fuse.Visual elm) [instance] :466
int GridLayout::GetActualRow(::g::Fuse::Visual* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualRowProperty_, &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);

    return -1;
}

// private float2 GetAutoSize(Fuse.Visual child, int x0, int y0, bool expandX, bool expandY, bool& knowX, bool& knowY, bool& autoX, bool& autoY) [instance] :821
::g::Uno::Float2 GridLayout::GetAutoSize(::g::Fuse::Visual* child, int x0, int y0, bool expandX, bool expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY)
{
    int xs = GridLayout::GetColumnSpan(child);
    int ys = GridLayout::GetRowSpan(child);
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);
    *knowX = true;
    *knowY = true;
    *autoX = xs == 1;
    *autoY = ys == 1;

    for (int x = x0; x < (x0 + xs); x++)
    {
        ::g::Fuse::Layouts::Column* colData = GetColumnData(x);

        if ((colData == NULL) || (EffectiveMetric(uPtr(colData)->Metric(), expandX) == 2))
            *knowX = false;
        else
        {
            *autoX = false;

            if (!uPtr(colData)->HasActualExtent)
                *knowX = false;
            else
                sz.X = (sz.X + uPtr(colData)->ActualExtent);
        }

        for (int y = y0; y < (y0 + ys); y++)
        {
            ::g::Fuse::Layouts::Row* rowData = GetRowData(y);

            if ((rowData == NULL) || (EffectiveMetric(uPtr(rowData)->Metric(), expandY) == 2))
                *knowY = false;
            else
            {
                *autoY = false;

                if (!uPtr(rowData)->HasActualExtent)
                    *knowY = false;
                else
                    sz.Y = (sz.Y + uPtr(rowData)->ActualExtent);
            }
        }
    }

    return sz;
}

// private Fuse.Layouts.Column GetColumnData(int column) [instance] :404
::g::Fuse::Layouts::Column* GridLayout::GetColumnData(int column)
{
    ::g::Fuse::Layouts::Column* ret13;

    if ((column >= 0) && (column < uPtr(_columns)->Count()))
        return (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_columns), uCRef<int>(column), &ret13), ret13);

    return NULL;
}

// private Fuse.Layouts.Row GetRowData(int row) [instance] :411
::g::Fuse::Layouts::Row* GridLayout::GetRowData(int row)
{
    ::g::Fuse::Layouts::Row* ret14;

    if ((row >= 0) && (row < uPtr(_rows)->Count()))
        return (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_rows), uCRef<int>(row), &ret14), ret14);

    return NULL;
}

// private float GetTotalProportion<T>(Uno.Collections.IList<T> list, bool expand) [instance] :750
float GridLayout::GetTotalProportion(uType* __type, uObject* list, bool expand)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret15;
    float total = 0.0f;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret15), ret15);

        if (EffectiveMetric(uPtr(c)->Metric(), expand) == 1)
            total = total + uPtr(c)->Extent();
    }

    return total;
}

// private float2 Measure(Fuse.Visual container, Fuse.LayoutParams lp) [instance] :928
::g::Uno::Float2 GridLayout::Measure(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp)
{
    float effectiveCellSpacing = EffectiveCellSpacing();
    CalcActualPositions(container);
    bool fillHorizontal = lp.HasX();
    bool fillVertical = lp.HasY();
    float availableWidth = lp.X() - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_columns)->Count() - 1));
    float availableHeight = lp.Y() - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_rows)->Count() - 1));
    bool expandWidth = fillHorizontal;
    bool expandHeight = fillVertical;
    bool hasAutoCol;
    float usedWidth;
    CalcInitialExtents(::TYPES[16/*Fuse.Layouts.GridLayout.CalcInitialExtents<Fuse.Layouts.Column>*/], (uObject*)_columns, expandWidth, &usedWidth, &hasAutoCol);
    bool hasAutoRow;
    float usedHeight;
    CalcInitialExtents(::TYPES[17/*Fuse.Layouts.GridLayout.CalcInitialExtents<Fuse.Layouts.Row>*/], (uObject*)_rows, expandHeight, &usedHeight, &hasAutoRow);
    availableWidth = ::g::Uno::Math::Max1(availableWidth - usedWidth, 0.0f);
    availableHeight = ::g::Uno::Math::Max1(availableHeight - usedHeight, 0.0f);
    float widthProportion = GetTotalProportion(::TYPES[18/*Fuse.Layouts.GridLayout.GetTotalProportion<Fuse.Layouts.Column>*/], (uObject*)_columns, expandWidth);
    float heightProportion = GetTotalProportion(::TYPES[19/*Fuse.Layouts.GridLayout.GetTotalProportion<Fuse.Layouts.Row>*/], (uObject*)_rows, expandHeight);
    bool hasFirstHorzSize = false;

    if (!hasAutoCol && fillHorizontal)
    {
        CalcFill(::TYPES[20/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Column>*/], (uObject*)_columns, availableWidth, widthProportion, expandWidth);
        hasFirstHorzSize = true;
    }

    bool hasFirstVertSize = false;

    if (!hasAutoRow && fillVertical)
    {
        CalcFill(::TYPES[21/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Row>*/], (uObject*)_rows, availableHeight, heightProportion, expandHeight);
        hasFirstVertSize = true;
    }

    CalcAuto(container, &availableWidth, &availableHeight, false, hasFirstHorzSize, hasFirstVertSize, expandWidth, expandHeight);

    if (fillHorizontal && !hasFirstHorzSize)
        CalcFill(::TYPES[20/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Column>*/], (uObject*)_columns, availableWidth, widthProportion, expandWidth);

    if (fillVertical && !hasFirstVertSize)
        CalcFill(::TYPES[21/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Row>*/], (uObject*)_rows, availableHeight, heightProportion, expandHeight);

    CalcAuto(container, &availableWidth, &availableHeight, true, hasFirstHorzSize, hasFirstVertSize, expandWidth, expandHeight);
    float totalWidth = CalcTotalExtentAndOffset(::TYPES[22/*Fuse.Layouts.GridLayout.CalcTotalExtentAndOffset<Fuse.Layouts.Column>*/], (uObject*)_columns, effectiveCellSpacing);
    float totalHeight = CalcTotalExtentAndOffset(::TYPES[23/*Fuse.Layouts.GridLayout.CalcTotalExtentAndOffset<Fuse.Layouts.Row>*/], (uObject*)_rows, effectiveCellSpacing);
    return ::g::Uno::Float2__New2(totalWidth, totalHeight);
}

// private void ModifyCount<T>(Uno.Collections.IList<T> list, int count, T primordial) [instance] :340
void GridLayout::ModifyCount(uType* __type, uObject* list, int count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Copy<T>*/),
        __type->Precalced(2/*Uno.Collections.IListExtensions.RemoveLast<T>*/),
        __type->Precalced(3/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret16;
    ::g::Fuse::Layouts::DefinitionBase* ret17;
    ::g::Fuse::Layouts::DefinitionBase* ret18;

    if (count == ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])))
        return;

    if (count < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"RowCount an...*/], this, ::STRINGS[1/*"/usr/local/...*/], 350, ::STRINGS[2/*"ModifyCount"*/], NULL);
        return;
    }

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) < count)
    {
        ::g::Fuse::Layouts::DefinitionBase* n = (::g::Fuse::Layouts::DefinitionBase*)__type->U(0)->New();
        n->Copy(__types[1], primordial, 2);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(list), __types[0]), n);
    }

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) > count)
        ::g::Uno::Collections::IListExtensions__RemoveLast_fn(__types[2], list, &ret16);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[3]), uCRef<int>(i), &ret17), ret17))->IsImplied())
            uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[3]), uCRef<int>(i), &ret18), ret18))->Creation = 2;

    Changed();
}

// private bool RemoveListener(Fuse.Layouts.DefinitionBase item) [instance] :705
bool GridLayout::RemoveListener(::g::Fuse::Layouts::DefinitionBase* item)
{
    if (uPtr(item)->Creation != 0)
        return false;

    uPtr(item)->remove_Changed(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    return true;
}

// public int get_RowCount() [instance] :326
int GridLayout::RowCount()
{
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(RowList()), ::TYPES[32/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/]));
}

// public void set_RowCount(int value) [instance] :327
void GridLayout::RowCount(int value)
{
    ModifyCount(::TYPES[33/*Fuse.Layouts.GridLayout.ModifyCount<Fuse.Layouts.Row>*/], (uObject*)_rows, value, _defaultRow);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() [instance] :272
uObject* GridLayout::RowList()
{
    return (uObject*)_rows;
}

// private void TrimPad<T>(Uno.Collections.IList<T> list, int count, T primordial) [instance] :622
void GridLayout::TrimPad(uType* __type, uObject* list, int count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Copy<T>*/),
        __type->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret21;

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) < count)
    {
        ::g::Fuse::Layouts::DefinitionBase* n = (::g::Fuse::Layouts::DefinitionBase*)__type->U(0)->New();
        n->Copy(__types[1], primordial, 3);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(list), __types[0]), n);
    }

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) - 1; i >= count; --i)
    {
        if (!uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[2]), uCRef<int>(i), &ret21), ret21))->IsImplied())
            break;

        ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(list), __types[2]), i);
    }
}

// private int UserCount<T>(Uno.Collections.IList<T> list) [instance] :331
int GridLayout::UserCount(uType* __type, uObject* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret22;
    int c = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0]));

    while ((c > 0) && uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(list, __types[1]), uCRef<int>(c - 1), &ret22), ret22))->IsImplied())
        c--;

    return c;
}

// public static int GetColumn(Fuse.Visual elm) [static] :506
int GridLayout::GetColumn(::g::Fuse::Visual* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty_, &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);
    else
        return 0;
}

// public static int GetColumnSpan(Fuse.Visual elm) [static] :661
int GridLayout::GetColumnSpan(::g::Fuse::Visual* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnSpanProperty_, &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);

    return 1;
}

// public static int GetRow(Fuse.Visual elm) [static] :459
int GridLayout::GetRow(::g::Fuse::Visual* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty_, &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);
    else
        return 0;
}

// public static int GetRowSpan(Fuse.Visual elm) [static] :487
int GridLayout::GetRowSpan(::g::Fuse::Visual* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowSpanProperty_, &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);
    else
        return 1;
}

// public generated GridLayout New() [static] :269
GridLayout* GridLayout::New2()
{
    GridLayout* obj3 = (GridLayout*)uNew(GridLayout_typeof());
    obj3->ctor_2();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/Layout.uno
// ---------------------------------------------------------------------------

// public abstract class Layout :11
// {
// static generated Layout() :11
static void Layout__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Layout::_fillPaddingProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Layout_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Only a single container is supported for Layout");
    ::STRINGS[4] = uString::Const("Removing an invalid container from Layout");
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[34] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::LayoutControl_typeof(), offsetof(Layout, Container), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Layout::_fillPaddingProperty_, uFieldFlagsStatic);
}

Layout_type* Layout_typeof()
{
    static uSStrong<Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Layout);
    options.TypeSize = sizeof(Layout_type);
    type = (Layout_type*)uClassType::New("Fuse.Layouts.Layout", options);
    type->fp_build_ = Layout_build;
    type->fp_cctor_ = Layout__cctor__fn;
    type->fp_IsMarginBoxDependent = Layout__IsMarginBoxDependent_fn;
    type->fp_OnRooted = Layout__OnRooted_fn;
    type->fp_OnUnrooted = Layout__OnUnrooted_fn;
    return type;
}

// internal Layout() :16
void Layout__ctor_1_fn(Layout* __this)
{
    __this->ctor_1();
}

// internal static void AdjustAlignBox(Fuse.Visual node, float2 sz, float4 box, Fuse.Elements.Alignment align) :202
void Layout__AdjustAlignBox_fn(::g::Fuse::Visual* node, ::g::Uno::Float2* sz, ::g::Uno::Float4* box, int* align)
{
    Layout::AdjustAlignBox(node, *sz, *box, *align);
}

// protected bool AffectsLayout(Fuse.Node n) :77
void Layout__AffectsLayout_fn(Layout* __this, ::g::Fuse::Node* n, bool* __retval)
{
    *__retval = __this->AffectsLayout(n);
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node n, float4 padding, Fuse.LayoutParams lp) :90
void Layout__ArrangeMarginBoxSpecial_fn(Layout* __this, ::g::Fuse::Node* n, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp, bool* __retval)
{
    *__retval = __this->ArrangeMarginBoxSpecial(n, *padding, *lp);
}

// public static bool GetFillPadding(Fuse.Visual n) :28
void Layout__GetFillPadding_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Layout::GetFillPadding(n);
}

// protected void InvalidateLayout() :137
void Layout__InvalidateLayout_fn(Layout* __this)
{
    __this->InvalidateLayout();
}

// internal virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :131
void Layout__IsMarginBoxDependent_fn(Layout* __this, ::g::Fuse::Visual* child, int* __retval)
{
    return *__retval = 4, void();
}

// protected virtual void OnRooted() :55
void Layout__OnRooted_fn(Layout* __this)
{
}

// protected virtual void OnUnrooted() :67
void Layout__OnUnrooted_fn(Layout* __this)
{
}

// internal void Rooted(Fuse.Controls.LayoutControl element) :47
void Layout__Rooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element)
{
    __this->Rooted(element);
}

// private static float SimpleOff(float sz, float2 range, Fuse.Elements.SimpleAlignment align) :215
void Layout__SimpleOff_fn(float* sz, ::g::Uno::Float2* range, int* align, float* __retval)
{
    *__retval = Layout::SimpleOff(*sz, *range, *align);
}

// protected float Snap(float p) :170
void Layout__Snap_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->Snap(*p);
}

// protected float2 Snap(float2 p) :163
void Layout__Snap1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap1(*p);
}

// protected bool get_SnapToPixels() :145
void Layout__get_SnapToPixels_fn(Layout* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// protected float SnapUp(float p) :158
void Layout__SnapUp_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// protected float2 SnapUp(float2 p) :151
void Layout__SnapUp1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp1(*p);
}

// internal void Unrooted(Fuse.Controls.LayoutControl element) :59
void Layout__Unrooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element)
{
    __this->Unrooted(element);
}

uSStrong< ::g::Fuse::PropertyHandle*> Layout::_fillPaddingProperty_;

// internal Layout() [instance] :16
void Layout::ctor_1()
{
    ctor_();
}

// protected bool AffectsLayout(Fuse.Node n) [instance] :77
bool Layout::AffectsLayout(::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);
    return (v != NULL) && ((uPtr(v)->LayoutRole() == 0) || (uPtr(v)->LayoutRole() == 1));
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node n, float4 padding, Fuse.LayoutParams lp) [instance] :90
bool Layout::ArrangeMarginBoxSpecial(::g::Fuse::Node* n, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp)
{
    ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

    if (e == NULL)
        return false;

    int lr = uPtr(e)->LayoutRole();

    if (lr == 3)
    {
        ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(e, ::TYPES[34/*Fuse.Elements.Element*/]);

        if (e != NULL)
            uPtr(elm)->RequestLayout();

        return true;
    }

    if (lr == 2)
    {
        bool b = Layout::GetFillPadding(e);
        ::g::Uno::Float2 p = b ? ::g::Uno::Float2__New1(0.0f) : ::g::Uno::Float2__New2(padding.X, padding.Y);
        ::g::Uno::Float2 s = b ? lp.Size() : ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp.Size(), ::g::Uno::Float2__New2(padding.X, padding.Y)), ::g::Uno::Float2__New2(padding.Z, padding.W));
        ::g::Fuse::LayoutParams nlp = lp.CloneAndDerive();
        nlp.SetSize(s, true, true);
        uPtr(e)->ArrangeMarginBox(p, nlp);
        return true;
    }

    return false;
}

// protected void InvalidateLayout() [instance] :137
void Layout::InvalidateLayout()
{
    if (Container != NULL)
        uPtr(Container)->InvalidateLayout(2);
}

// internal void Rooted(Fuse.Controls.LayoutControl element) [instance] :47
void Layout::Rooted(::g::Fuse::Controls::LayoutControl* element)
{
    if (Container != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Only a sing...*/]));

    Container = element;
    OnRooted();
}

// protected float Snap(float p) [instance] :170
float Layout::Snap(float p)
{
    return Snap1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 Snap(float2 p) [instance] :163
::g::Uno::Float2 Layout::Snap1(::g::Uno::Float2 p)
{
    if (SnapToPixels())
        return uPtr(Container)->InternSnap(p);

    return p;
}

// protected bool get_SnapToPixels() [instance] :145
bool Layout::SnapToPixels()
{
    return (Container != NULL) && uPtr(Container)->SnapToPixels();
}

// protected float SnapUp(float p) [instance] :158
float Layout::SnapUp(float p)
{
    return SnapUp1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 SnapUp(float2 p) [instance] :151
::g::Uno::Float2 Layout::SnapUp1(::g::Uno::Float2 p)
{
    if (SnapToPixels())
        return uPtr(Container)->InternSnapUp(p);

    return p;
}

// internal void Unrooted(Fuse.Controls.LayoutControl element) [instance] :59
void Layout::Unrooted(::g::Fuse::Controls::LayoutControl* element)
{
    if (element != Container)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Removing an...*/]));

    OnUnrooted();
    Container = NULL;
}

// internal static void AdjustAlignBox(Fuse.Visual node, float2 sz, float4 box, Fuse.Elements.Alignment align) [static] :202
void Layout::AdjustAlignBox(::g::Fuse::Visual* node, ::g::Uno::Float2 sz, ::g::Uno::Float4 box, int align)
{
    ::g::Uno::Float2 pos = uPtr(node)->MarginBoxPosition();
    int ha = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(align);

    if (ha != 0)
        pos.X = Layout::SimpleOff(sz.X, ::g::Uno::Float2__New2(box.X, box.Z), ha);

    int va = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(align);

    if (va != 0)
        pos.Y = Layout::SimpleOff(sz.Y, ::g::Uno::Float2__New2(box.Y, box.W), va);

    node->AdjustMarginBoxPosition(pos);
}

// public static bool GetFillPadding(Fuse.Visual n) [static] :28
bool Layout::GetFillPadding(::g::Fuse::Visual* n)
{
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Layout::_fillPaddingProperty_, &v))
        return uUnbox<bool>(::g::Uno::Bool_typeof(), v);

    return (uPtr(n)->Layer() == 1) || (uPtr(n)->Layer() == 0);
}

// private static float SimpleOff(float sz, float2 range, Fuse.Elements.SimpleAlignment align) [static] :215
float Layout::SimpleOff(float sz, ::g::Uno::Float2 range, int align)
{
    if (align == 1)
        return ((range.Item(1) + range.Item(0)) / 2.0f) - (sz / 2.0f);
    else if (align == 2)
        return range.Item(1) - sz;
    else
        return range.Item(0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/Layout.uno
// ---------------------------------------------------------------------------

// public static class Layouts :226
// {
// static generated Layouts() :226
static void Layouts__cctor__fn(uType* __type)
{
    Layouts::Default_ = ::g::Fuse::Layouts::DefaultLayout::New2();
}

static void Layouts_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Layouts::Layout_typeof(), (uintptr_t)&Layouts::Default_, uFieldFlagsStatic);
}

uClassType* Layouts_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Layouts.Layouts", options);
    type->fp_build_ = Layouts_build;
    type->fp_cctor_ = Layouts__cctor__fn;
    return type;
}

uSStrong< ::g::Fuse::Layouts::Layout*> Layouts::Default_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public enum Metric :189
uEnumType* Metric_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Metric", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Absolute", 0LL,
        "Proportion", 1LL,
        "Auto", 2LL,
        "Default", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/StackLayout.uno
// --------------------------------------------------------------------------------

// public enum Orientation :12
uEnumType* Orientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Orientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Horizontal", 0LL,
        "Vertical", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public sealed class Row :238
// {
static void Row_build(uType* type)
{
    type->SetFields(8);
}

uType* Row_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::DefinitionBase_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Row);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Row", options);
    type->fp_build_ = Row_build;
    type->fp_ctor_ = (void*)Row__New2_fn;
    return type;
}

// public Row() :240
void Row__ctor_4_fn(Row* __this)
{
    __this->ctor_4();
}

// public Row New() :240
void Row__New2_fn(Row** __retval)
{
    *__retval = Row::New2();
}

// public Row() [instance] :240
void Row::ctor_4()
{
    ctor_1();
}

// public Row New() [static] :240
Row* Row::New2()
{
    Row* obj1 = (Row*)uNew(Row_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/StackLayout.uno
// --------------------------------------------------------------------------------

// public sealed class StackLayout :24
// {
static void StackLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetFields(2,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(StackLayout, _contentAlignment), 0,
        ::g::Uno::Float_typeof(), offsetof(StackLayout, _itemSpacing), 0,
        ::g::Fuse::Layouts::StackLayoutMode_typeof(), offsetof(StackLayout, _mode), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(StackLayout, _orientation), 0);
}

::g::Fuse::Layouts::Layout_type* StackLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(StackLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.StackLayout", options);
    type->fp_build_ = StackLayout_build;
    type->fp_ctor_ = (void*)StackLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))StackLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StackLayout__GetContentSize_fn;
    return type;
}

// public generated StackLayout() :24
void StackLayout__ctor_2_fn(StackLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :185
void StackLayout__ArrangePaddingBox_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams lp_ = *lp;
    float d = 0.0f;
    int orientation = __this->Orientation();
    ::g::Uno::Float2 paddingOffset = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 pad = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RemoveSize(pad);
    ::g::Uno::Float2 axis;

    if (orientation == 1)
    {
        nlp.RetainXY(true, false);
        axis = ::g::Uno::Float2__New2(0.0f, 1.0f);
    }
    else
    {
        nlp.RetainXY(false, true);
        axis = ::g::Uno::Float2__New2(1.0f, 0.0f);
    }

    float effectiveSpacing = __this->EffectiveItemSpacing();
    bool hasItem = false;

    for (::g::Fuse::Visual* c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != NULL; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(c, padding_, lp_))
            continue;

        if (hasItem)
            d = d + effectiveSpacing;

        ::g::Uno::Float2 cds = uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(axis, d), paddingOffset), nlp);
        d = d + ::g::Uno::Vector::Dot(cds, axis);
        hasItem = true;
    }

    int sa = __this->EffectiveContentAlignment();

    if (sa != 0)
    {
        float off;

        if (sa == 2)
            off = ::g::Uno::Vector::Dot(::g::Uno::Float2__op_Subtraction2(lp_.Size(), pad), axis) - d;
        else
            off = (::g::Uno::Vector::Dot(::g::Uno::Float2__op_Subtraction2(lp_.Size(), pad), axis) / 2.0f) - (d / 2.0f);

        for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
            if (__this->AffectsLayout(e))
            {
                ::g::Uno::Float2 old = uPtr(e)->MarginBoxPosition();
                e->AdjustMarginBoxPosition(::g::Uno::Float2__op_Addition2(old, ::g::Uno::Float2__op_Multiply1(axis, off)));
            }
    }
}

// public Fuse.Elements.Alignment get_ContentAlignment() :64
void StackLayout__get_ContentAlignment_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :65
void StackLayout__set_ContentAlignment_fn(StackLayout* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment() :172
void StackLayout__get_EffectiveContentAlignment_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private float get_EffectiveItemSpacing() :129
void StackLayout__get_EffectiveItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveItemSpacing();
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :90
void StackLayout__GetContentSize_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    int orientation = __this->Orientation();
    bool vert = orientation == 1;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RetainXY(vert, !vert);
    ::g::Uno::Float2 size = __this->GetElementsSize(container, nlp);

    if (__this->Mode() == 1)
    {
        bool recalc = false;

        if (orientation == 1)
        {
            if (!nlp.HasX())
            {
                nlp.SetX(size.X);
                recalc = true;
            }
        }
        else
        {
            if (!nlp.HasY())
            {
                nlp.SetY(size.Y);
                recalc = true;
            }
        }

        if (recalc)
            size = __this->GetElementsSize(container, nlp);
    }

    return *__retval = size, void();
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) :136
void StackLayout__GetElementsSize_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(container, *lp);
}

// public float get_ItemSpacing() :50
void StackLayout__get_ItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value) :51
void StackLayout__set_ItemSpacing_fn(StackLayout* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// public Fuse.Layouts.StackLayoutMode get_Mode() :78
void StackLayout__get_Mode_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value) :79
void StackLayout__set_Mode_fn(StackLayout* __this, int* value)
{
    __this->Mode(*value);
}

// public generated StackLayout New() :24
void StackLayout__New2_fn(StackLayout** __retval)
{
    *__retval = StackLayout::New2();
}

// public Fuse.Layouts.Orientation get_Orientation() :30
void StackLayout__get_Orientation_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :31
void StackLayout__set_Orientation_fn(StackLayout* __this, int* value)
{
    __this->Orientation(*value);
}

// public generated StackLayout() [instance] :24
void StackLayout::ctor_2()
{
    _orientation = 1;
    _itemSpacing = 0.0f;
    ctor_1();
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :64
int StackLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :65
void StackLayout::ContentAlignment(int value)
{
    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        InvalidateLayout();
    }
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment() [instance] :172
int StackLayout::EffectiveContentAlignment()
{
    int ca = ContentAlignment();

    if ((ca == 0) && (Container != NULL))
        ca = uPtr(Container)->Alignment();

    if (Orientation() == 1)
        return ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(ca);
    else
        return ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(ca);
}

// private float get_EffectiveItemSpacing() [instance] :129
float StackLayout::EffectiveItemSpacing()
{
    return SnapUp(ItemSpacing());
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) [instance] :136
::g::Uno::Float2 StackLayout::GetElementsSize(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp)
{
    int orientation = Orientation();
    ::g::Uno::Float2 desiredSize = ::g::Uno::Float2__New1(0.0f);
    float effectiveSpacing = EffectiveItemSpacing();
    bool firstItem = true;

    for (::g::Fuse::Visual* c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != NULL; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(c))
            continue;

        float spacing = effectiveSpacing;

        if (firstItem)
        {
            spacing = 0.0f;
            firstItem = false;
        }

        ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(lp);

        if (orientation == 0)
        {
            desiredSize.X = (desiredSize.X + (cds.X + spacing));
            desiredSize.Y = ::g::Uno::Math::Max1(desiredSize.Y, cds.Y);
        }
        else
        {
            desiredSize.X = ::g::Uno::Math::Max1(desiredSize.X, cds.X);
            desiredSize.Y = (desiredSize.Y + (cds.Y + spacing));
        }
    }

    return desiredSize;
}

// public float get_ItemSpacing() [instance] :50
float StackLayout::ItemSpacing()
{
    return _itemSpacing;
}

// public void set_ItemSpacing(float value) [instance] :51
void StackLayout::ItemSpacing(float value)
{
    if (_itemSpacing != value)
    {
        _itemSpacing = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.StackLayoutMode get_Mode() [instance] :78
int StackLayout::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value) [instance] :79
void StackLayout::Mode(int value)
{
    if (_mode != value)
    {
        _mode = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :30
int StackLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :31
void StackLayout::Orientation(int value)
{
    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public generated StackLayout New() [static] :24
StackLayout* StackLayout::New2()
{
    StackLayout* obj1 = (StackLayout*)uNew(StackLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/StackLayout.uno
// --------------------------------------------------------------------------------

// public enum StackLayoutMode :18
uEnumType* StackLayoutMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.StackLayoutMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Standard", 0LL,
        "TwoPass", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/WrapLayout.uno
// -------------------------------------------------------------------------------

// public sealed class WrapLayout :17
// {
static void WrapLayout_build(uType* type)
{
    ::TYPES[35] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[36] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[37] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[3] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    type->SetFields(2,
        ::g::Fuse::Layouts::FlowDirection_typeof(), offsetof(WrapLayout, _flowDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(WrapLayout, _hasItemHeight), 0,
        ::g::Uno::Bool_typeof(), offsetof(WrapLayout, _hasItemWidth), 0,
        ::g::Uno::Float_typeof(), offsetof(WrapLayout, _itemHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(WrapLayout, _itemWidth), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(WrapLayout, _orientation), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(WrapLayout, _rowAlignment), 0);
}

::g::Fuse::Layouts::Layout_type* WrapLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(WrapLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.WrapLayout", options);
    type->fp_build_ = WrapLayout_build;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))WrapLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))WrapLayout__GetContentSize_fn;
    return type;
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, bool doArrange, [float4 padding]) :99
void WrapLayout__Arrange_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Arrange(container, *lp, *doArrange, *padding);
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :91
void WrapLayout__ArrangePaddingBox_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    __this->Arrange(container, lp_, true, padding_);
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() :61
void WrapLayout__get_FlowDirection_fn(WrapLayout* __this, int* __retval)
{
    *__retval = __this->FlowDirection();
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) :62
void WrapLayout__set_FlowDirection_fn(WrapLayout* __this, int* value)
{
    __this->FlowDirection(*value);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :84
void WrapLayout__GetContentSize_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Arrange(container, lp_, false, ::g::Uno::Float4__New1(0.0f)), void();
}

// private bool get_IsVert() :55
void WrapLayout__get_IsVert_fn(WrapLayout* __this, bool* __retval)
{
    *__retval = __this->IsVert();
}

// public float get_ItemHeight() :23
void WrapLayout__get_ItemHeight_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemHeight();
}

// public void set_ItemHeight(float value) :24
void WrapLayout__set_ItemHeight_fn(WrapLayout* __this, float* value)
{
    __this->ItemHeight(*value);
}

// public float get_ItemWidth() :35
void WrapLayout__get_ItemWidth_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemWidth();
}

// public void set_ItemWidth(float value) :36
void WrapLayout__set_ItemWidth_fn(WrapLayout* __this, float* value)
{
    __this->ItemWidth(*value);
}

// public Fuse.Layouts.Orientation get_Orientation() :46
void WrapLayout__get_Orientation_fn(WrapLayout* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :47
void WrapLayout__set_Orientation_fn(WrapLayout* __this, int* value)
{
    __this->Orientation(*value);
}

// public Fuse.Elements.Alignment get_RowAlignment() :71
void WrapLayout__get_RowAlignment_fn(WrapLayout* __this, int* __retval)
{
    *__retval = __this->RowAlignment();
}

// public void set_RowAlignment(Fuse.Elements.Alignment value) :72
void WrapLayout__set_RowAlignment_fn(WrapLayout* __this, int* value)
{
    __this->RowAlignment(*value);
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, bool doArrange, [float4 padding]) [instance] :99
::g::Uno::Float2 WrapLayout::Arrange(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding)
{
    ::g::Fuse::LayoutParams nlp = lp.CloneAndDerive();
    nlp.RemoveSize1(padding);
    bool hasX, hasY;
    ::g::Uno::Float2 lpav = nlp.GetAvailableSize1(&hasX, &hasY);
    float majorAvail = IsVert() ? hasY ? lpav.Y : FLT_INF : hasX ? lpav.X : FLT_INF;
    float minorMaxSize = 0.0f;
    float minorUsed = 0.0f;
    float majorUsed = 0.0f;
    float majorMaxUsed = 0.0f;
    ::g::Fuse::LayoutParams clp = nlp.Clone();
    clp.RetainXY(false, false);
    clp.ConstrainMax(lpav, hasX, hasY);

    if (_hasItemWidth)
        clp.SetX(ItemWidth());

    if (_hasItemHeight)
        clp.SetY(ItemHeight());

    uArray* placements = uArray::New(::TYPES[35/*float4[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(container)->Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* minorSizes = uArray::New(::TYPES[2/*float[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* elementOnRow = uArray::New(::TYPES[37/*int[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* majorRest = uArray::New(::TYPES[2/*float[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/])));
    int majorStart = 0;
    int currentRow = 0;
    int i = 0;

    for (::g::Fuse::Node* n = (::g::Fuse::Node*)container->FirstChild(::TYPES[3/*Fuse.Visual.FirstChild<Fuse.Node>*/]); n != NULL; n = (::g::Fuse::Node*)uPtr(n)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), i++)
    {
        ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

        if (!AffectsLayout(e))
            continue;

        ::g::Uno::Float2 eSize = uPtr(e)->GetMarginSize(clp);
        eSize = ::g::Uno::Float2__New2(_hasItemWidth ? ItemWidth() : eSize.X, _hasItemHeight ? ItemHeight() : eSize.Y);
        float cmajorSize = IsVert() ? eSize.Y : eSize.X;
        float cminorSize = IsVert() ? eSize.X : eSize.Y;
        uPtr(placements)->Item< ::g::Uno::Float4>(i).Z = cmajorSize;
        placements->Item< ::g::Uno::Float4>(i).W = cminorSize;

        if (((majorUsed + cmajorSize) > majorAvail) && (majorUsed > 0.0f))
        {
            for (int j = majorStart; j < i; ++j)
                uPtr(minorSizes)->Item<float>(j) = minorMaxSize;

            majorMaxUsed = ::g::Uno::Math::Max1(majorMaxUsed, majorUsed);
            minorUsed = minorUsed + minorMaxSize;
            minorMaxSize = 0.0f;
            majorUsed = 0.0f;
            majorStart = i;
            currentRow++;
        }

        placements->Item< ::g::Uno::Float4>(i).X = majorUsed;
        placements->Item< ::g::Uno::Float4>(i).Y = minorUsed;
        minorMaxSize = ::g::Uno::Math::Max1(minorMaxSize, cminorSize);
        majorUsed = majorUsed + cmajorSize;
        uPtr(elementOnRow)->Item<int>(i) = currentRow;
        uPtr(majorRest)->Item<float>(currentRow) = majorAvail - majorUsed;
    }

    for (int j1 = majorStart; j1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/])); ++j1)
        uPtr(minorSizes)->Item<float>(j1) = minorMaxSize;

    majorMaxUsed = ::g::Uno::Math::Max1(majorMaxUsed, majorUsed);
    minorUsed = minorUsed + minorMaxSize;

    if (doArrange)
    {
        int saMin = IsVert() ? ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlignOptional(RowAlignment()) : ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlignOptional(RowAlignment());
        int saMaj = IsVert() ? ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlignOptional(RowAlignment()) : ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlignOptional(RowAlignment());
        ::g::Fuse::LayoutParams elp = lp.CloneAndDerive();
        i = 0;

        for (::g::Fuse::Node* n1 = (::g::Fuse::Node*)uPtr(container)->FirstChild(::TYPES[3/*Fuse.Visual.FirstChild<Fuse.Node>*/]); n1 != NULL; n1 = (::g::Fuse::Node*)uPtr(n1)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), i++)
        {
            ::g::Fuse::Visual* element = uAs< ::g::Fuse::Visual*>(n1, ::TYPES[4/*Fuse.Visual*/]);

            if (element == NULL)
                continue;

            if (ArrangeMarginBoxSpecial(element, padding, lp))
                continue;

            ::g::Uno::Float4 placement = uPtr(placements)->Item< ::g::Uno::Float4>(i);

            switch (saMin)
            {
                case 1:
                    break;
                case 3:
                {
                    placement.Y = (placement.Y + (uPtr(minorSizes)->Item<float>(i) - placement.W));
                    break;
                }
                case 2:
                {
                    placement.Y = (placement.Y + ((uPtr(minorSizes)->Item<float>(i) - placement.W) / 2.0f));
                    break;
                }
                case 0:
                {
                    placement.W = uPtr(minorSizes)->Item<float>(i);
                    break;
                }
            }

            switch (saMaj)
            {
                case 1:
                    break;
                case 3:
                {
                    placement.X = (placement.X + uPtr(majorRest)->Item<float>(uPtr(elementOnRow)->Item<int>(i)));
                    break;
                }
                case 2:
                {
                    placement.X = (placement.X + (uPtr(majorRest)->Item<float>(uPtr(elementOnRow)->Item<int>(i)) / 2.0f));
                    break;
                }
                case 0:
                    break;
            }

            if (IsVert())
                placement = ::g::Uno::Float4__New2(placement.Y, placement.X, placement.W, placement.Z);

            if (FlowDirection() == 1)
                placement = ::g::Uno::Float4__New5((nlp.X() - placement.X) - placement.Z, ::g::Uno::Float3__New2(placement.Y, placement.Z, placement.W));

            elp.SetSize(::g::Uno::Float2__New2(placement.Z, placement.W), true, true);
            uPtr(element)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding.X, padding.Y), ::g::Uno::Float2__New2(placement.X, placement.Y)), elp);
        }
    }

    ::g::Uno::Float2 sz = IsVert() ? ::g::Uno::Float2__New2(minorUsed, majorMaxUsed) : ::g::Uno::Float2__New2(majorMaxUsed, minorUsed);
    return sz;
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() [instance] :61
int WrapLayout::FlowDirection()
{
    return _flowDirection;
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) [instance] :62
void WrapLayout::FlowDirection(int value)
{
    _flowDirection = value;
}

// private bool get_IsVert() [instance] :55
bool WrapLayout::IsVert()
{
    return Orientation() == 1;
}

// public float get_ItemHeight() [instance] :23
float WrapLayout::ItemHeight()
{
    return _itemHeight;
}

// public void set_ItemHeight(float value) [instance] :24
void WrapLayout::ItemHeight(float value)
{
    _itemHeight = value;
    _hasItemHeight = true;
}

// public float get_ItemWidth() [instance] :35
float WrapLayout::ItemWidth()
{
    return _itemWidth;
}

// public void set_ItemWidth(float value) [instance] :36
void WrapLayout::ItemWidth(float value)
{
    _itemWidth = value;
    _hasItemWidth = true;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :46
int WrapLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :47
void WrapLayout::Orientation(int value)
{
    _orientation = value;
}

// public Fuse.Elements.Alignment get_RowAlignment() [instance] :71
int WrapLayout::RowAlignment()
{
    return _rowAlignment;
}

// public void set_RowAlignment(Fuse.Elements.Alignment value) [instance] :72
void WrapLayout::RowAlignment(int value)
{
    if (_rowAlignment != value)
    {
        _rowAlignment = value;
        InvalidateLayout();
    }
}
// }

}}} // ::g::Fuse::Layouts
