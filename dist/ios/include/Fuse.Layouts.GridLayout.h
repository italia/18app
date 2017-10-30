// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/GridLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Fuse{namespace Layouts{struct DefinitionBase;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}
namespace g{namespace Fuse{namespace Layouts{struct Row;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class GridLayout :269
// {
::g::Fuse::Layouts::Layout_type* GridLayout_typeof();
void GridLayout__ctor_2_fn(GridLayout* __this);
void GridLayout__AddListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval);
void GridLayout__ArrangePaddingBox_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void GridLayout__CalcActualPositions_fn(GridLayout* __this, ::g::Fuse::Visual* container);
void GridLayout__CalcAuto_fn(GridLayout* __this, ::g::Fuse::Visual* container, float* availableWidth, float* availableHeight, bool* secondPass, bool* hasFirstHorzSize, bool* hasFirstVertSize, bool* expandWidth, bool* expandHeight);
void GridLayout__CalcFill_fn(GridLayout* __this, uType* __type, uObject* list, float* available, float* proportion, bool* expand);
void GridLayout__CalcInitialExtents_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* used, bool* hasAuto);
void GridLayout__CalcTotalExtentAndOffset_fn(GridLayout* __this, uType* __type, uObject* list, float* effectiveCellSpacing, float* __retval);
void GridLayout__get_CellSpacing_fn(GridLayout* __this, float* __retval);
void GridLayout__set_CellSpacing_fn(GridLayout* __this, float* value);
void GridLayout__Changed_fn(GridLayout* __this);
void GridLayout__get_ChildOrder_fn(GridLayout* __this, int* __retval);
void GridLayout__set_ChildOrder_fn(GridLayout* __this, int* value);
void GridLayout__get_ColumnCount_fn(GridLayout* __this, int* __retval);
void GridLayout__set_ColumnCount_fn(GridLayout* __this, int* value);
void GridLayout__get_ColumnList_fn(GridLayout* __this, uObject** __retval);
void GridLayout__get_Columns_fn(GridLayout* __this, uString** __retval);
void GridLayout__set_Columns_fn(GridLayout* __this, uString* value);
void GridLayout__get_ContentAlignment_fn(GridLayout* __this, int* __retval);
void GridLayout__set_ContentAlignment_fn(GridLayout* __this, int* value);
void GridLayout__DefinitionAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r);
void GridLayout__DefinitionRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r);
void GridLayout__get_EffectiveCellSpacing_fn(GridLayout* __this, float* __retval);
void GridLayout__get_EffectiveContentAlignment_fn(GridLayout* __this, int* __retval);
void GridLayout__EffectiveMetric_fn(GridLayout* __this, int* src, bool* expand, int* __retval);
void GridLayout__GetActualColumn_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetActualRow_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetAutoSize_fn(GridLayout* __this, ::g::Fuse::Visual* child, int* x0, int* y0, bool* expandX, bool* expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY, ::g::Uno::Float2* __retval);
void GridLayout__GetColumn_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetColumnData_fn(GridLayout* __this, int* column, ::g::Fuse::Layouts::Column** __retval);
void GridLayout__GetColumnSpan_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetContentSize_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void GridLayout__GetRow_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetRowData_fn(GridLayout* __this, int* row, ::g::Fuse::Layouts::Row** __retval);
void GridLayout__GetRowSpan_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetTotalProportion_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* __retval);
void GridLayout__IsMarginBoxDependent_fn(GridLayout* __this, ::g::Fuse::Visual* child, int* __retval);
void GridLayout__Measure_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void GridLayout__ModifyCount_fn(GridLayout* __this, uType* __type, uObject* list, int* count, ::g::Fuse::Layouts::DefinitionBase* primordial);
void GridLayout__New2_fn(GridLayout** __retval);
void GridLayout__OnRooted_fn(GridLayout* __this);
void GridLayout__OnUnrooted_fn(GridLayout* __this);
void GridLayout__RemoveListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval);
void GridLayout__get_RowCount_fn(GridLayout* __this, int* __retval);
void GridLayout__set_RowCount_fn(GridLayout* __this, int* value);
void GridLayout__get_RowList_fn(GridLayout* __this, uObject** __retval);
void GridLayout__TrimPad_fn(GridLayout* __this, uType* __type, uObject* list, int* count, ::g::Fuse::Layouts::DefinitionBase* primordial);
void GridLayout__UserCount_fn(GridLayout* __this, uType* __type, uObject* list, int* __retval);

struct GridLayout : ::g::Fuse::Layouts::Layout
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _actualColumnProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _actualColumnProperty() { return _actualColumnProperty_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _actualRowProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _actualRowProperty() { return _actualRowProperty_; }
    float _cellSpacing;
    int _childOrder;
    static uSStrong< ::g::Fuse::PropertyHandle*> _columnProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _columnProperty() { return _columnProperty_; }
    uStrong< ::g::Uno::Collections::RootableList*> _columns;
    static uSStrong< ::g::Fuse::PropertyHandle*> _columnSpanProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _columnSpanProperty() { return _columnSpanProperty_; }
    int _contentAlignment;
    uStrong< ::g::Fuse::Layouts::Column*> _defaultColumn;
    uStrong< ::g::Fuse::Layouts::Row*> _defaultRow;
    static uSStrong< ::g::Fuse::PropertyHandle*> _rowProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _rowProperty() { return _rowProperty_; }
    uStrong< ::g::Uno::Collections::RootableList*> _rows;
    static uSStrong< ::g::Fuse::PropertyHandle*> _rowSpanProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _rowSpanProperty() { return _rowSpanProperty_; }
    static uSStrong< ::g::Fuse::Layouts::Column*> _staticDefaultColumn_;
    static uSStrong< ::g::Fuse::Layouts::Column*>& _staticDefaultColumn() { return _staticDefaultColumn_; }
    static uSStrong< ::g::Fuse::Layouts::Row*> _staticDefaultRow_;
    static uSStrong< ::g::Fuse::Layouts::Row*>& _staticDefaultRow() { return _staticDefaultRow_; }

    void ctor_2();
    bool AddListener(::g::Fuse::Layouts::DefinitionBase* item);
    void CalcActualPositions(::g::Fuse::Visual* container);
    void CalcAuto(::g::Fuse::Visual* container, float* availableWidth, float* availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight);
    void CalcFill(uType* __type, uObject* list, float available, float proportion, bool expand);
    void CalcInitialExtents(uType* __type, uObject* list, bool expand, float* used, bool* hasAuto);
    float CalcTotalExtentAndOffset(uType* __type, uObject* list, float effectiveCellSpacing);
    float CellSpacing();
    void CellSpacing(float value);
    void Changed();
    int ChildOrder();
    void ChildOrder(int value);
    int ColumnCount();
    void ColumnCount(int value);
    uObject* ColumnList();
    uString* Columns();
    void Columns(uString* value);
    int ContentAlignment();
    void ContentAlignment(int value);
    void DefinitionAdded(::g::Fuse::Layouts::DefinitionBase* r);
    void DefinitionRemoved(::g::Fuse::Layouts::DefinitionBase* r);
    float EffectiveCellSpacing();
    int EffectiveContentAlignment();
    int EffectiveMetric(int src, bool expand);
    int GetActualColumn(::g::Fuse::Visual* elm);
    int GetActualRow(::g::Fuse::Visual* elm);
    ::g::Uno::Float2 GetAutoSize(::g::Fuse::Visual* child, int x0, int y0, bool expandX, bool expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY);
    ::g::Fuse::Layouts::Column* GetColumnData(int column);
    ::g::Fuse::Layouts::Row* GetRowData(int row);
    float GetTotalProportion(uType* __type, uObject* list, bool expand);
    ::g::Uno::Float2 Measure(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp);
    void ModifyCount(uType* __type, uObject* list, int count, ::g::Fuse::Layouts::DefinitionBase* primordial);
    bool RemoveListener(::g::Fuse::Layouts::DefinitionBase* item);
    int RowCount();
    void RowCount(int value);
    uObject* RowList();
    void TrimPad(uType* __type, uObject* list, int count, ::g::Fuse::Layouts::DefinitionBase* primordial);
    int UserCount(uType* __type, uObject* list);
    static int GetColumn(::g::Fuse::Visual* elm);
    static int GetColumnSpan(::g::Fuse::Visual* elm);
    static int GetRow(::g::Fuse::Visual* elm);
    static int GetRowSpan(::g::Fuse::Visual* elm);
    static GridLayout* New2();
};
// }

}}} // ::g::Fuse::Layouts
