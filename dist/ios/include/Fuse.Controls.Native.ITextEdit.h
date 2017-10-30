// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface ITextEdit :65
// {
uInterfaceType* ITextEdit_typeof();

struct ITextEdit
{
    void(*fp_set_ActionStyle)(uObject*, int*);
    void(*fp_set_AutoCapitalizationHint)(uObject*, int*);
    void(*fp_set_AutoCorrectHint)(uObject*, int*);
    void(*fp_set_CaretColor)(uObject*, ::g::Uno::Float4*);
    void(*fp_FocusGained)(uObject*);
    void(*fp_FocusLost)(uObject*);
    void(*fp_set_InputHint)(uObject*, int*);
    void(*fp_set_IsPassword)(uObject*, bool*);
    void(*fp_set_IsReadOnly)(uObject*, bool*);
    void(*fp_set_PlaceholderColor)(uObject*, ::g::Uno::Float4*);
    void(*fp_set_PlaceholderText)(uObject*, uString*);
    void(*fp_set_SelectionColor)(uObject*, ::g::Uno::Float4*);
    static void ActionStyle(const uInterface& __this, int value) { __this.VTable<ITextEdit>()->fp_set_ActionStyle(__this, &value); }
    static void AutoCapitalizationHint(const uInterface& __this, int value) { __this.VTable<ITextEdit>()->fp_set_AutoCapitalizationHint(__this, &value); }
    static void AutoCorrectHint(const uInterface& __this, int value) { __this.VTable<ITextEdit>()->fp_set_AutoCorrectHint(__this, &value); }
    static void CaretColor(const uInterface& __this, ::g::Uno::Float4 value);
    static void FocusGained(const uInterface& __this) { __this.VTable<ITextEdit>()->fp_FocusGained(__this); }
    static void FocusLost(const uInterface& __this) { __this.VTable<ITextEdit>()->fp_FocusLost(__this); }
    static void InputHint(const uInterface& __this, int value) { __this.VTable<ITextEdit>()->fp_set_InputHint(__this, &value); }
    static void IsPassword(const uInterface& __this, bool value) { __this.VTable<ITextEdit>()->fp_set_IsPassword(__this, &value); }
    static void IsReadOnly(const uInterface& __this, bool value) { __this.VTable<ITextEdit>()->fp_set_IsReadOnly(__this, &value); }
    static void PlaceholderColor(const uInterface& __this, ::g::Uno::Float4 value);
    static void PlaceholderText(const uInterface& __this, uString* value) { __this.VTable<ITextEdit>()->fp_set_PlaceholderText(__this, value); }
    static void SelectionColor(const uInterface& __this, ::g::Uno::Float4 value);
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void ITextEdit::CaretColor(const uInterface& __this, ::g::Uno::Float4 value) { __this.VTable<ITextEdit>()->fp_set_CaretColor(__this, &value); }
inline void ITextEdit::PlaceholderColor(const uInterface& __this, ::g::Uno::Float4 value) { __this.VTable<ITextEdit>()->fp_set_PlaceholderColor(__this, &value); }
inline void ITextEdit::SelectionColor(const uInterface& __this, ::g::Uno::Float4 value) { __this.VTable<ITextEdit>()->fp_set_SelectionColor(__this, &value); }
// }

}}}} // ::g::Fuse::Controls::Native
