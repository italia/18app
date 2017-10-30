// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface ITextView :24
// {
uInterfaceType* ITextView_typeof();

struct ITextView
{
    void(*fp_set_Font)(uObject*, ::g::Fuse::Font*);
    void(*fp_set_FontSize)(uObject*, float*);
    void(*fp_set_LineSpacing)(uObject*, float*);
    void(*fp_set_MaxLength)(uObject*, int*);
    void(*fp_set_TextAlignment)(uObject*, int*);
    void(*fp_set_TextColor)(uObject*, ::g::Uno::Float4*);
    void(*fp_set_TextTruncation)(uObject*, int*);
    void(*fp_set_TextWrapping)(uObject*, int*);
    void(*fp_set_Value)(uObject*, uString*);
    static void Font(const uInterface& __this, ::g::Fuse::Font* value) { __this.VTable<ITextView>()->fp_set_Font(__this, value); }
    static void FontSize(const uInterface& __this, float value) { __this.VTable<ITextView>()->fp_set_FontSize(__this, &value); }
    static void LineSpacing(const uInterface& __this, float value) { __this.VTable<ITextView>()->fp_set_LineSpacing(__this, &value); }
    static void MaxLength(const uInterface& __this, int value) { __this.VTable<ITextView>()->fp_set_MaxLength(__this, &value); }
    static void TextAlignment(const uInterface& __this, int value) { __this.VTable<ITextView>()->fp_set_TextAlignment(__this, &value); }
    static void TextColor(const uInterface& __this, ::g::Uno::Float4 value);
    static void TextTruncation(const uInterface& __this, int value) { __this.VTable<ITextView>()->fp_set_TextTruncation(__this, &value); }
    static void TextWrapping(const uInterface& __this, int value) { __this.VTable<ITextView>()->fp_set_TextWrapping(__this, &value); }
    static void Value(const uInterface& __this, uString* value) { __this.VTable<ITextView>()->fp_set_Value(__this, value); }
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void ITextView::TextColor(const uInterface& __this, ::g::Uno::Float4 value) { __this.VTable<ITextView>()->fp_set_TextColor(__this, &value); }
// }

}}}} // ::g::Fuse::Controls::Native
