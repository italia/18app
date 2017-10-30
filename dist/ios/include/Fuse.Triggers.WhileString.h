// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/WhileString.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileString;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileString :21
// {
::g::Fuse::Triggers::WhileValue_type* WhileString_typeof();
void WhileString__ctor_7_fn(WhileString* __this);
void WhileString__get_CaseSensitive_fn(WhileString* __this, bool* __retval);
void WhileString__set_CaseSensitive_fn(WhileString* __this, bool* value);
void WhileString__get_Compare_fn(WhileString* __this, uString** __retval);
void WhileString__set_Compare_fn(WhileString* __this, uString* value);
void WhileString__get_Equals_fn(WhileString* __this, uString** __retval);
void WhileString__set_Equals_fn(WhileString* __this, uString* value);
void WhileString__get_IsOn_fn(WhileString* __this, bool* __retval);
void WhileString__get_MaxLength_fn(WhileString* __this, int* __retval);
void WhileString__set_MaxLength_fn(WhileString* __this, int* value);
void WhileString__get_MinLength_fn(WhileString* __this, int* __retval);
void WhileString__set_MinLength_fn(WhileString* __this, int* value);
void WhileString__New2_fn(WhileString** __retval);
void WhileString__get_Test_fn(WhileString* __this, int* __retval);
void WhileString__set_Test_fn(WhileString* __this, int* value);

struct WhileString : ::g::Fuse::Triggers::WhileValue
{
    bool _caseSensitive;
    uStrong<uString*> _compare;
    bool _hasMaxLength;
    bool _hasMinLength;
    int _maxLength;
    int _minLength;
    int _test;

    void ctor_7();
    bool CaseSensitive();
    void CaseSensitive(bool value);
    uString* Compare();
    void Compare(uString* value);
    uString* Equals2();
    void Equals2(uString* value);
    int MaxLength();
    void MaxLength(int value);
    int MinLength();
    void MinLength(int value);
    int Test();
    void Test(int value);
    static WhileString* New2();
};
// }

}}} // ::g::Fuse::Triggers
